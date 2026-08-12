/* Generated code for Python module 'pyautogui$_pyautogui_win'
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



/* The "module_pyautogui$_pyautogui_win" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyautogui$_pyautogui_win;
PyDictObject *moduledict_pyautogui$_pyautogui_win;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_keyboardMapping;
PyObject *const_str_plain_pyautogui;
PyObject *const_str_plain_isShiftCharacter;
PyObject *const_int_pos_256;
PyObject *const_int_pos_4;
PyObject *const_int_pos_18;
PyObject *const_int_pos_2;
PyObject *const_int_pos_17;
PyObject *const_int_pos_16;
PyObject *const_str_plain_windll;
PyObject *const_str_plain_user32;
PyObject *const_str_plain_keybd_event;
PyObject *const_str_plain_KEYEVENTF_KEYDOWN;
PyObject *const_str_plain_KEYEVENTF_KEYUP;
PyObject *const_str_digest_e5428430de2b82708ebcd9abc6650186;
PyObject *const_str_digest_ad6def8bb586985bb76cbcdeebe8c4e9;
PyObject *const_str_plain_POINT;
PyObject *const_str_plain_GetCursorPos;
PyObject *const_str_plain_byref;
PyObject *const_str_plain_x;
PyObject *const_str_plain_y;
PyObject *const_str_digest_cb5342b4d635afe5eb38c242c55784b1;
PyObject *const_str_plain_GetSystemMetrics;
PyObject *const_tuple_int_0_tuple;
PyObject *const_tuple_int_pos_1_tuple;
PyObject *const_str_digest_647ff2d34ac837eb32fa798e5dfec2ce;
PyObject *const_str_plain_SetCursorPos;
PyObject *const_str_digest_ddf5bbcba2370e85e7a5a55157445e6c;
PyObject *const_str_plain_LEFT;
PyObject *const_str_plain_MIDDLE;
PyObject *const_str_plain_RIGHT;
PyObject *const_str_digest_bcaaff7fb94df1974f7c38ba75730478;
PyObject *const_str_plain_MOUSEEVENTF_LEFTDOWN;
PyObject *const_str_plain_MOUSEEVENTF_MIDDLEDOWN;
PyObject *const_str_plain_MOUSEEVENTF_RIGHTDOWN;
PyObject *const_str_plain__sendMouseEvent;
PyObject *const_str_plain_EV;
PyObject *const_tuple_type_PermissionError_type_OSError_tuple;
PyObject *const_str_digest_22bc2b9984c5026d6b94ef38f995437e;
PyObject *const_str_plain_MOUSEEVENTF_LEFTUP;
PyObject *const_str_plain_MOUSEEVENTF_MIDDLEUP;
PyObject *const_str_plain_MOUSEEVENTF_RIGHTUP;
PyObject *const_str_digest_a1725db8638a6d88a53b388d4bf4db29;
PyObject *const_str_plain_MOUSEEVENTF_LEFTCLICK;
PyObject *const_str_plain_MOUSEEVENTF_MIDDLECLICK;
PyObject *const_str_plain_MOUSEEVENTF_RIGHTCLICK;
PyObject *const_str_digest_ed8575c212299373cbce70f410739ca0;
PyObject *const_tuple_int_pos_23_tuple;
PyObject *const_str_digest_a58fc1e34a08e935a715ad6ef16f27f1;
PyObject *const_str_plain__size;
PyObject *const_int_pos_65536;
PyObject *const_str_plain_mouse_event;
PyObject *const_str_plain_c_long;
PyObject *const_str_digest_6f5ba235cc10d1c9c6cae9a436523269;
PyObject *const_str_plain__position;
PyObject *const_str_plain_MOUSEEVENTF_WHEEL;
PyObject *const_tuple_str_plain_dwData_tuple;
PyObject *const_str_digest_b0a03059de90af4751a7cd1279c7faad;
PyObject *const_str_plain__scroll;
PyObject *const_str_digest_a31abb96473408834e46744632bbd2fa;
PyObject *const_str_digest_bc459a963683e0631af20dd60810b4dd;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_ctypes;
PyObject *const_tuple_str_plain_LEFT_str_plain_MIDDLE_str_plain_RIGHT_tuple;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_SetProcessDPIAware;
PyObject *const_str_plain_MOUSEEVENTF_MOVE;
PyObject *const_int_pos_8;
PyObject *const_int_pos_32;
PyObject *const_int_pos_64;
PyObject *const_int_pos_32768;
PyObject *const_str_plain_MOUSEEVENTF_ABSOLUTE;
PyObject *const_int_pos_2048;
PyObject *const_int_pos_4096;
PyObject *const_str_plain_MOUSEEVENTF_HWHEEL;
PyObject *const_str_plain_INPUT_MOUSE;
PyObject *const_str_plain_INPUT_KEYBOARD;
PyObject *const_str_plain_Structure;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_MOUSEINPUT;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_e64a4354945d8630712c79dfd53962a2;
PyObject *const_int_pos_62;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_dx;
PyObject *const_str_plain_LONG;
PyObject *const_str_plain_dy;
PyObject *const_str_plain_mouseData;
PyObject *const_str_plain_DWORD;
PyObject *const_str_plain_dwFlags;
PyObject *const_str_plain_time;
PyObject *const_str_plain_dwExtraInfo;
PyObject *const_str_plain_POINTER;
PyObject *const_str_plain_ULONG;
PyObject *const_str_plain__fields_;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_KEYBDINPUT;
PyObject *const_int_pos_72;
PyObject *const_str_plain_wVk;
PyObject *const_str_plain_WORD;
PyObject *const_str_plain_wScan;
PyObject *const_str_plain_HARDWAREINPUT;
PyObject *const_int_pos_81;
PyObject *const_str_plain_uMsg;
PyObject *const_str_plain_wParamL;
PyObject *const_str_plain_wParamH;
PyObject *const_str_plain_INPUT;
PyObject *const_int_pos_88;
PyObject *const_str_plain_Union;
PyObject *const_str_plain__I;
PyObject *const_str_digest_381e31f8cb4bdd6603ed147ffefe3f43;
PyObject *const_int_pos_89;
PyObject *const_str_plain_mi;
PyObject *const_str_plain_ki;
PyObject *const_str_plain_hi;
PyObject *const_tuple_str_plain_i_tuple;
PyObject *const_str_plain__anonymous_;
PyObject *const_str_plain_i;
PyObject *const_str_plain_KEY_NAMES;
PyObject *const_dict_dd2eea6e3c2e65ca25944cf57fcde142;
PyObject *const_xrange_32_128;
PyObject *const_str_plain_c;
PyObject *const_str_plain_VkKeyScanA;
PyObject *const_str_plain_WCHAR;
PyObject *const_str_plain__keyDown;
PyObject *const_str_plain__keyUp;
PyObject *const_str_plain__moveTo;
PyObject *const_str_plain__mouseDown;
PyObject *const_str_plain__mouseUp;
PyObject *const_str_plain__click;
PyObject *const_str_plain__mouse_is_swapped;
PyObject *const_tuple_none_none_tuple;
PyObject *const_str_plain__hscroll;
PyObject *const_str_plain__vscroll;
PyObject *const_str_digest_941ee7fc2cbd82f7c7b28a228f3ba137;
PyObject *const_str_digest_3caaf99c133805d4eaaa1baebd72c725;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_x_str_plain_y_str_plain_button_str_plain_EV_tuple;
PyObject *const_tuple_str_plain_clicks_str_plain_x_str_plain_y_tuple;
PyObject *const_tuple_9e95b4163e444608e450197504bf2b46_tuple;
PyObject *const_tuple_str_plain_x_str_plain_y_tuple;
PyObject *const_tuple_str_plain_cursor_tuple;
PyObject *const_tuple_35df2a849d3e9afa30e5a142176a4ff1_tuple;
PyObject *const_tuple_a853b184913764f2def879fa43c67ed1_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[148];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("pyautogui._pyautogui_win"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 148) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 148 values, got %d\n",
                    UN_TRANSLATE("pyautogui._pyautogui_win"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_keyboardMapping", mod_consts.const_str_plain_keyboardMapping);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_keyboardMapping);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pyautogui", mod_consts.const_str_plain_pyautogui);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_pyautogui);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_isShiftCharacter", mod_consts.const_str_plain_isShiftCharacter);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_isShiftCharacter);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_256", mod_consts.const_int_pos_256);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_int_pos_256);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4", mod_consts.const_int_pos_4);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_int_pos_4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_18", mod_consts.const_int_pos_18);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_int_pos_18);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_17", mod_consts.const_int_pos_17);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_int_pos_17);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16", mod_consts.const_int_pos_16);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_int_pos_16);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_windll", mod_consts.const_str_plain_windll);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_windll);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_user32", mod_consts.const_str_plain_user32);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_user32);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_keybd_event", mod_consts.const_str_plain_keybd_event);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_keybd_event);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KEYEVENTF_KEYDOWN", mod_consts.const_str_plain_KEYEVENTF_KEYDOWN);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_KEYEVENTF_KEYDOWN);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KEYEVENTF_KEYUP", mod_consts.const_str_plain_KEYEVENTF_KEYUP);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_KEYEVENTF_KEYUP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e5428430de2b82708ebcd9abc6650186", mod_consts.const_str_digest_e5428430de2b82708ebcd9abc6650186);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_e5428430de2b82708ebcd9abc6650186);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ad6def8bb586985bb76cbcdeebe8c4e9", mod_consts.const_str_digest_ad6def8bb586985bb76cbcdeebe8c4e9);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_ad6def8bb586985bb76cbcdeebe8c4e9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_POINT", mod_consts.const_str_plain_POINT);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_POINT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GetCursorPos", mod_consts.const_str_plain_GetCursorPos);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_GetCursorPos);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_byref", mod_consts.const_str_plain_byref);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_byref);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_x", mod_consts.const_str_plain_x);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_x);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_y", mod_consts.const_str_plain_y);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_y);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cb5342b4d635afe5eb38c242c55784b1", mod_consts.const_str_digest_cb5342b4d635afe5eb38c242c55784b1);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_cb5342b4d635afe5eb38c242c55784b1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GetSystemMetrics", mod_consts.const_str_plain_GetSystemMetrics);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_GetSystemMetrics);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_tuple", mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_1_tuple", mod_consts.const_tuple_int_pos_1_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_647ff2d34ac837eb32fa798e5dfec2ce", mod_consts.const_str_digest_647ff2d34ac837eb32fa798e5dfec2ce);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_647ff2d34ac837eb32fa798e5dfec2ce);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SetCursorPos", mod_consts.const_str_plain_SetCursorPos);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_SetCursorPos);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ddf5bbcba2370e85e7a5a55157445e6c", mod_consts.const_str_digest_ddf5bbcba2370e85e7a5a55157445e6c);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_ddf5bbcba2370e85e7a5a55157445e6c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LEFT", mod_consts.const_str_plain_LEFT);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_LEFT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MIDDLE", mod_consts.const_str_plain_MIDDLE);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_MIDDLE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RIGHT", mod_consts.const_str_plain_RIGHT);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_RIGHT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bcaaff7fb94df1974f7c38ba75730478", mod_consts.const_str_digest_bcaaff7fb94df1974f7c38ba75730478);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_bcaaff7fb94df1974f7c38ba75730478);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MOUSEEVENTF_LEFTDOWN", mod_consts.const_str_plain_MOUSEEVENTF_LEFTDOWN);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_MOUSEEVENTF_LEFTDOWN);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MOUSEEVENTF_MIDDLEDOWN", mod_consts.const_str_plain_MOUSEEVENTF_MIDDLEDOWN);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_MOUSEEVENTF_MIDDLEDOWN);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MOUSEEVENTF_RIGHTDOWN", mod_consts.const_str_plain_MOUSEEVENTF_RIGHTDOWN);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_MOUSEEVENTF_RIGHTDOWN);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__sendMouseEvent", mod_consts.const_str_plain__sendMouseEvent);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain__sendMouseEvent);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EV", mod_consts.const_str_plain_EV);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_EV);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_PermissionError_type_OSError_tuple", mod_consts.const_tuple_type_PermissionError_type_OSError_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_tuple_type_PermissionError_type_OSError_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_22bc2b9984c5026d6b94ef38f995437e", mod_consts.const_str_digest_22bc2b9984c5026d6b94ef38f995437e);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_22bc2b9984c5026d6b94ef38f995437e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MOUSEEVENTF_LEFTUP", mod_consts.const_str_plain_MOUSEEVENTF_LEFTUP);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_MOUSEEVENTF_LEFTUP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MOUSEEVENTF_MIDDLEUP", mod_consts.const_str_plain_MOUSEEVENTF_MIDDLEUP);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_MOUSEEVENTF_MIDDLEUP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MOUSEEVENTF_RIGHTUP", mod_consts.const_str_plain_MOUSEEVENTF_RIGHTUP);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_MOUSEEVENTF_RIGHTUP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a1725db8638a6d88a53b388d4bf4db29", mod_consts.const_str_digest_a1725db8638a6d88a53b388d4bf4db29);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_a1725db8638a6d88a53b388d4bf4db29);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MOUSEEVENTF_LEFTCLICK", mod_consts.const_str_plain_MOUSEEVENTF_LEFTCLICK);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_MOUSEEVENTF_LEFTCLICK);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MOUSEEVENTF_MIDDLECLICK", mod_consts.const_str_plain_MOUSEEVENTF_MIDDLECLICK);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_MOUSEEVENTF_MIDDLECLICK);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MOUSEEVENTF_RIGHTCLICK", mod_consts.const_str_plain_MOUSEEVENTF_RIGHTCLICK);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_MOUSEEVENTF_RIGHTCLICK);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ed8575c212299373cbce70f410739ca0", mod_consts.const_str_digest_ed8575c212299373cbce70f410739ca0);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_ed8575c212299373cbce70f410739ca0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_23_tuple", mod_consts.const_tuple_int_pos_23_tuple);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_23_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a58fc1e34a08e935a715ad6ef16f27f1", mod_consts.const_str_digest_a58fc1e34a08e935a715ad6ef16f27f1);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_a58fc1e34a08e935a715ad6ef16f27f1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__size", mod_consts.const_str_plain__size);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain__size);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_65536", mod_consts.const_int_pos_65536);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_int_pos_65536);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mouse_event", mod_consts.const_str_plain_mouse_event);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_mouse_event);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_c_long", mod_consts.const_str_plain_c_long);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_c_long);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6f5ba235cc10d1c9c6cae9a436523269", mod_consts.const_str_digest_6f5ba235cc10d1c9c6cae9a436523269);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_6f5ba235cc10d1c9c6cae9a436523269);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__position", mod_consts.const_str_plain__position);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain__position);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MOUSEEVENTF_WHEEL", mod_consts.const_str_plain_MOUSEEVENTF_WHEEL);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_MOUSEEVENTF_WHEEL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_dwData_tuple", mod_consts.const_tuple_str_plain_dwData_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dwData_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b0a03059de90af4751a7cd1279c7faad", mod_consts.const_str_digest_b0a03059de90af4751a7cd1279c7faad);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_b0a03059de90af4751a7cd1279c7faad);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__scroll", mod_consts.const_str_plain__scroll);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain__scroll);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a31abb96473408834e46744632bbd2fa", mod_consts.const_str_digest_a31abb96473408834e46744632bbd2fa);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_a31abb96473408834e46744632bbd2fa);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bc459a963683e0631af20dd60810b4dd", mod_consts.const_str_digest_bc459a963683e0631af20dd60810b4dd);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_bc459a963683e0631af20dd60810b4dd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ctypes", mod_consts.const_str_plain_ctypes);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_ctypes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_LEFT_str_plain_MIDDLE_str_plain_RIGHT_tuple", mod_consts.const_tuple_str_plain_LEFT_str_plain_MIDDLE_str_plain_RIGHT_tuple);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_LEFT_str_plain_MIDDLE_str_plain_RIGHT_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sys", mod_consts.const_str_plain_sys);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SetProcessDPIAware", mod_consts.const_str_plain_SetProcessDPIAware);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_SetProcessDPIAware);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MOUSEEVENTF_MOVE", mod_consts.const_str_plain_MOUSEEVENTF_MOVE);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_MOUSEEVENTF_MOVE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_8", mod_consts.const_int_pos_8);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_int_pos_8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_32", mod_consts.const_int_pos_32);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_int_pos_32);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_64", mod_consts.const_int_pos_64);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_int_pos_64);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_32768", mod_consts.const_int_pos_32768);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_int_pos_32768);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MOUSEEVENTF_ABSOLUTE", mod_consts.const_str_plain_MOUSEEVENTF_ABSOLUTE);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_MOUSEEVENTF_ABSOLUTE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2048", mod_consts.const_int_pos_2048);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_int_pos_2048);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4096", mod_consts.const_int_pos_4096);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_int_pos_4096);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MOUSEEVENTF_HWHEEL", mod_consts.const_str_plain_MOUSEEVENTF_HWHEEL);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_MOUSEEVENTF_HWHEEL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_INPUT_MOUSE", mod_consts.const_str_plain_INPUT_MOUSE);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_INPUT_MOUSE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_INPUT_KEYBOARD", mod_consts.const_str_plain_INPUT_KEYBOARD);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_INPUT_KEYBOARD);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Structure", mod_consts.const_str_plain_Structure);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_Structure);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MOUSEINPUT", mod_consts.const_str_plain_MOUSEINPUT);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_MOUSEINPUT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e64a4354945d8630712c79dfd53962a2", mod_consts.const_str_digest_e64a4354945d8630712c79dfd53962a2);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_e64a4354945d8630712c79dfd53962a2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_62", mod_consts.const_int_pos_62);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_int_pos_62);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dx", mod_consts.const_str_plain_dx);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_dx);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LONG", mod_consts.const_str_plain_LONG);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_LONG);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dy", mod_consts.const_str_plain_dy);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_dy);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mouseData", mod_consts.const_str_plain_mouseData);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_mouseData);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DWORD", mod_consts.const_str_plain_DWORD);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_DWORD);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dwFlags", mod_consts.const_str_plain_dwFlags);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_dwFlags);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_time", mod_consts.const_str_plain_time);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_time);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dwExtraInfo", mod_consts.const_str_plain_dwExtraInfo);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_dwExtraInfo);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_POINTER", mod_consts.const_str_plain_POINTER);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_POINTER);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ULONG", mod_consts.const_str_plain_ULONG);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_ULONG);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__fields_", mod_consts.const_str_plain__fields_);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain__fields_);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KEYBDINPUT", mod_consts.const_str_plain_KEYBDINPUT);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_KEYBDINPUT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_72", mod_consts.const_int_pos_72);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_int_pos_72);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wVk", mod_consts.const_str_plain_wVk);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_wVk);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WORD", mod_consts.const_str_plain_WORD);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_WORD);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wScan", mod_consts.const_str_plain_wScan);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_wScan);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HARDWAREINPUT", mod_consts.const_str_plain_HARDWAREINPUT);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_HARDWAREINPUT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_81", mod_consts.const_int_pos_81);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_int_pos_81);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_uMsg", mod_consts.const_str_plain_uMsg);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_uMsg);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wParamL", mod_consts.const_str_plain_wParamL);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_wParamL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wParamH", mod_consts.const_str_plain_wParamH);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_wParamH);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_INPUT", mod_consts.const_str_plain_INPUT);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_INPUT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_88", mod_consts.const_int_pos_88);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_int_pos_88);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Union", mod_consts.const_str_plain_Union);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__I", mod_consts.const_str_plain__I);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain__I);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_381e31f8cb4bdd6603ed147ffefe3f43", mod_consts.const_str_digest_381e31f8cb4bdd6603ed147ffefe3f43);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_381e31f8cb4bdd6603ed147ffefe3f43);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_89", mod_consts.const_int_pos_89);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_int_pos_89);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mi", mod_consts.const_str_plain_mi);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_mi);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ki", mod_consts.const_str_plain_ki);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_ki);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hi", mod_consts.const_str_plain_hi);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_hi);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_i_tuple", mod_consts.const_tuple_str_plain_i_tuple);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_i_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__anonymous_", mod_consts.const_str_plain__anonymous_);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain__anonymous_);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_i", mod_consts.const_str_plain_i);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_i);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KEY_NAMES", mod_consts.const_str_plain_KEY_NAMES);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_KEY_NAMES);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_dd2eea6e3c2e65ca25944cf57fcde142", mod_consts.const_dict_dd2eea6e3c2e65ca25944cf57fcde142);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_dict_dd2eea6e3c2e65ca25944cf57fcde142);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_xrange_32_128", mod_consts.const_xrange_32_128);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_xrange_32_128);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_c", mod_consts.const_str_plain_c);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_VkKeyScanA", mod_consts.const_str_plain_VkKeyScanA);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_VkKeyScanA);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WCHAR", mod_consts.const_str_plain_WCHAR);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_WCHAR);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__keyDown", mod_consts.const_str_plain__keyDown);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain__keyDown);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__keyUp", mod_consts.const_str_plain__keyUp);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain__keyUp);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__moveTo", mod_consts.const_str_plain__moveTo);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain__moveTo);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__mouseDown", mod_consts.const_str_plain__mouseDown);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain__mouseDown);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__mouseUp", mod_consts.const_str_plain__mouseUp);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain__mouseUp);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__click", mod_consts.const_str_plain__click);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain__click);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__mouse_is_swapped", mod_consts.const_str_plain__mouse_is_swapped);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain__mouse_is_swapped);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_tuple", mod_consts.const_tuple_none_none_tuple);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__hscroll", mod_consts.const_str_plain__hscroll);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain__hscroll);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__vscroll", mod_consts.const_str_plain__vscroll);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain__vscroll);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_941ee7fc2cbd82f7c7b28a228f3ba137", mod_consts.const_str_digest_941ee7fc2cbd82f7c7b28a228f3ba137);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_digest_941ee7fc2cbd82f7c7b28a228f3ba137);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3caaf99c133805d4eaaa1baebd72c725", mod_consts.const_str_digest_3caaf99c133805d4eaaa1baebd72c725);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_digest_3caaf99c133805d4eaaa1baebd72c725);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_button_str_plain_EV_tuple", mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_button_str_plain_EV_tuple);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_button_str_plain_EV_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_clicks_str_plain_x_str_plain_y_tuple", mod_consts.const_tuple_str_plain_clicks_str_plain_x_str_plain_y_tuple);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_clicks_str_plain_x_str_plain_y_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_9e95b4163e444608e450197504bf2b46_tuple", mod_consts.const_tuple_9e95b4163e444608e450197504bf2b46_tuple);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_tuple_9e95b4163e444608e450197504bf2b46_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_x_str_plain_y_tuple", mod_consts.const_tuple_str_plain_x_str_plain_y_tuple);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_cursor_tuple", mod_consts.const_tuple_str_plain_cursor_tuple);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cursor_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_35df2a849d3e9afa30e5a142176a4ff1_tuple", mod_consts.const_tuple_35df2a849d3e9afa30e5a142176a4ff1_tuple);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_tuple_35df2a849d3e9afa30e5a142176a4ff1_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a853b184913764f2def879fa43c67ed1_tuple", mod_consts.const_tuple_a853b184913764f2def879fa43c67ed1_tuple);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_tuple_a853b184913764f2def879fa43c67ed1_tuple);
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
void checkModuleConstants_pyautogui$_pyautogui_win(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_keyboardMapping", mod_consts.const_str_plain_keyboardMapping);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_keyboardMapping) && "mod_consts.const_str_plain_keyboardMapping");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pyautogui", mod_consts.const_str_plain_pyautogui);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_pyautogui) && "mod_consts.const_str_plain_pyautogui");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_isShiftCharacter", mod_consts.const_str_plain_isShiftCharacter);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_isShiftCharacter) && "mod_consts.const_str_plain_isShiftCharacter");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_256", mod_consts.const_int_pos_256);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_int_pos_256) && "mod_consts.const_int_pos_256");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4", mod_consts.const_int_pos_4);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_int_pos_4) && "mod_consts.const_int_pos_4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_18", mod_consts.const_int_pos_18);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_int_pos_18) && "mod_consts.const_int_pos_18");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_int_pos_2) && "mod_consts.const_int_pos_2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_17", mod_consts.const_int_pos_17);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_int_pos_17) && "mod_consts.const_int_pos_17");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16", mod_consts.const_int_pos_16);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_int_pos_16) && "mod_consts.const_int_pos_16");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_windll", mod_consts.const_str_plain_windll);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_windll) && "mod_consts.const_str_plain_windll");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_user32", mod_consts.const_str_plain_user32);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_user32) && "mod_consts.const_str_plain_user32");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_keybd_event", mod_consts.const_str_plain_keybd_event);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_keybd_event) && "mod_consts.const_str_plain_keybd_event");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KEYEVENTF_KEYDOWN", mod_consts.const_str_plain_KEYEVENTF_KEYDOWN);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_KEYEVENTF_KEYDOWN) && "mod_consts.const_str_plain_KEYEVENTF_KEYDOWN");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KEYEVENTF_KEYUP", mod_consts.const_str_plain_KEYEVENTF_KEYUP);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_KEYEVENTF_KEYUP) && "mod_consts.const_str_plain_KEYEVENTF_KEYUP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e5428430de2b82708ebcd9abc6650186", mod_consts.const_str_digest_e5428430de2b82708ebcd9abc6650186);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_e5428430de2b82708ebcd9abc6650186) && "mod_consts.const_str_digest_e5428430de2b82708ebcd9abc6650186");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ad6def8bb586985bb76cbcdeebe8c4e9", mod_consts.const_str_digest_ad6def8bb586985bb76cbcdeebe8c4e9);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_ad6def8bb586985bb76cbcdeebe8c4e9) && "mod_consts.const_str_digest_ad6def8bb586985bb76cbcdeebe8c4e9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_POINT", mod_consts.const_str_plain_POINT);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_POINT) && "mod_consts.const_str_plain_POINT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GetCursorPos", mod_consts.const_str_plain_GetCursorPos);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_GetCursorPos) && "mod_consts.const_str_plain_GetCursorPos");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_byref", mod_consts.const_str_plain_byref);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_byref) && "mod_consts.const_str_plain_byref");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_x", mod_consts.const_str_plain_x);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_x) && "mod_consts.const_str_plain_x");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_y", mod_consts.const_str_plain_y);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_y) && "mod_consts.const_str_plain_y");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cb5342b4d635afe5eb38c242c55784b1", mod_consts.const_str_digest_cb5342b4d635afe5eb38c242c55784b1);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_cb5342b4d635afe5eb38c242c55784b1) && "mod_consts.const_str_digest_cb5342b4d635afe5eb38c242c55784b1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GetSystemMetrics", mod_consts.const_str_plain_GetSystemMetrics);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_GetSystemMetrics) && "mod_consts.const_str_plain_GetSystemMetrics");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_tuple", mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple) && "mod_consts.const_tuple_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_1_tuple", mod_consts.const_tuple_int_pos_1_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple) && "mod_consts.const_tuple_int_pos_1_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_647ff2d34ac837eb32fa798e5dfec2ce", mod_consts.const_str_digest_647ff2d34ac837eb32fa798e5dfec2ce);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_647ff2d34ac837eb32fa798e5dfec2ce) && "mod_consts.const_str_digest_647ff2d34ac837eb32fa798e5dfec2ce");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SetCursorPos", mod_consts.const_str_plain_SetCursorPos);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_SetCursorPos) && "mod_consts.const_str_plain_SetCursorPos");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ddf5bbcba2370e85e7a5a55157445e6c", mod_consts.const_str_digest_ddf5bbcba2370e85e7a5a55157445e6c);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_ddf5bbcba2370e85e7a5a55157445e6c) && "mod_consts.const_str_digest_ddf5bbcba2370e85e7a5a55157445e6c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LEFT", mod_consts.const_str_plain_LEFT);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_LEFT) && "mod_consts.const_str_plain_LEFT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MIDDLE", mod_consts.const_str_plain_MIDDLE);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_MIDDLE) && "mod_consts.const_str_plain_MIDDLE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RIGHT", mod_consts.const_str_plain_RIGHT);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_RIGHT) && "mod_consts.const_str_plain_RIGHT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bcaaff7fb94df1974f7c38ba75730478", mod_consts.const_str_digest_bcaaff7fb94df1974f7c38ba75730478);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_bcaaff7fb94df1974f7c38ba75730478) && "mod_consts.const_str_digest_bcaaff7fb94df1974f7c38ba75730478");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MOUSEEVENTF_LEFTDOWN", mod_consts.const_str_plain_MOUSEEVENTF_LEFTDOWN);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_MOUSEEVENTF_LEFTDOWN) && "mod_consts.const_str_plain_MOUSEEVENTF_LEFTDOWN");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MOUSEEVENTF_MIDDLEDOWN", mod_consts.const_str_plain_MOUSEEVENTF_MIDDLEDOWN);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_MOUSEEVENTF_MIDDLEDOWN) && "mod_consts.const_str_plain_MOUSEEVENTF_MIDDLEDOWN");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MOUSEEVENTF_RIGHTDOWN", mod_consts.const_str_plain_MOUSEEVENTF_RIGHTDOWN);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_MOUSEEVENTF_RIGHTDOWN) && "mod_consts.const_str_plain_MOUSEEVENTF_RIGHTDOWN");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__sendMouseEvent", mod_consts.const_str_plain__sendMouseEvent);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain__sendMouseEvent) && "mod_consts.const_str_plain__sendMouseEvent");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EV", mod_consts.const_str_plain_EV);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_EV) && "mod_consts.const_str_plain_EV");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_PermissionError_type_OSError_tuple", mod_consts.const_tuple_type_PermissionError_type_OSError_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_tuple_type_PermissionError_type_OSError_tuple) && "mod_consts.const_tuple_type_PermissionError_type_OSError_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_22bc2b9984c5026d6b94ef38f995437e", mod_consts.const_str_digest_22bc2b9984c5026d6b94ef38f995437e);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_22bc2b9984c5026d6b94ef38f995437e) && "mod_consts.const_str_digest_22bc2b9984c5026d6b94ef38f995437e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MOUSEEVENTF_LEFTUP", mod_consts.const_str_plain_MOUSEEVENTF_LEFTUP);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_MOUSEEVENTF_LEFTUP) && "mod_consts.const_str_plain_MOUSEEVENTF_LEFTUP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MOUSEEVENTF_MIDDLEUP", mod_consts.const_str_plain_MOUSEEVENTF_MIDDLEUP);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_MOUSEEVENTF_MIDDLEUP) && "mod_consts.const_str_plain_MOUSEEVENTF_MIDDLEUP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MOUSEEVENTF_RIGHTUP", mod_consts.const_str_plain_MOUSEEVENTF_RIGHTUP);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_MOUSEEVENTF_RIGHTUP) && "mod_consts.const_str_plain_MOUSEEVENTF_RIGHTUP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a1725db8638a6d88a53b388d4bf4db29", mod_consts.const_str_digest_a1725db8638a6d88a53b388d4bf4db29);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_a1725db8638a6d88a53b388d4bf4db29) && "mod_consts.const_str_digest_a1725db8638a6d88a53b388d4bf4db29");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MOUSEEVENTF_LEFTCLICK", mod_consts.const_str_plain_MOUSEEVENTF_LEFTCLICK);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_MOUSEEVENTF_LEFTCLICK) && "mod_consts.const_str_plain_MOUSEEVENTF_LEFTCLICK");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MOUSEEVENTF_MIDDLECLICK", mod_consts.const_str_plain_MOUSEEVENTF_MIDDLECLICK);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_MOUSEEVENTF_MIDDLECLICK) && "mod_consts.const_str_plain_MOUSEEVENTF_MIDDLECLICK");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MOUSEEVENTF_RIGHTCLICK", mod_consts.const_str_plain_MOUSEEVENTF_RIGHTCLICK);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_MOUSEEVENTF_RIGHTCLICK) && "mod_consts.const_str_plain_MOUSEEVENTF_RIGHTCLICK");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ed8575c212299373cbce70f410739ca0", mod_consts.const_str_digest_ed8575c212299373cbce70f410739ca0);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_ed8575c212299373cbce70f410739ca0) && "mod_consts.const_str_digest_ed8575c212299373cbce70f410739ca0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_23_tuple", mod_consts.const_tuple_int_pos_23_tuple);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_23_tuple) && "mod_consts.const_tuple_int_pos_23_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a58fc1e34a08e935a715ad6ef16f27f1", mod_consts.const_str_digest_a58fc1e34a08e935a715ad6ef16f27f1);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_a58fc1e34a08e935a715ad6ef16f27f1) && "mod_consts.const_str_digest_a58fc1e34a08e935a715ad6ef16f27f1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__size", mod_consts.const_str_plain__size);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain__size) && "mod_consts.const_str_plain__size");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_65536", mod_consts.const_int_pos_65536);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_int_pos_65536) && "mod_consts.const_int_pos_65536");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mouse_event", mod_consts.const_str_plain_mouse_event);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_mouse_event) && "mod_consts.const_str_plain_mouse_event");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_c_long", mod_consts.const_str_plain_c_long);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_c_long) && "mod_consts.const_str_plain_c_long");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6f5ba235cc10d1c9c6cae9a436523269", mod_consts.const_str_digest_6f5ba235cc10d1c9c6cae9a436523269);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_6f5ba235cc10d1c9c6cae9a436523269) && "mod_consts.const_str_digest_6f5ba235cc10d1c9c6cae9a436523269");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__position", mod_consts.const_str_plain__position);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain__position) && "mod_consts.const_str_plain__position");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MOUSEEVENTF_WHEEL", mod_consts.const_str_plain_MOUSEEVENTF_WHEEL);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_MOUSEEVENTF_WHEEL) && "mod_consts.const_str_plain_MOUSEEVENTF_WHEEL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_dwData_tuple", mod_consts.const_tuple_str_plain_dwData_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dwData_tuple) && "mod_consts.const_tuple_str_plain_dwData_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b0a03059de90af4751a7cd1279c7faad", mod_consts.const_str_digest_b0a03059de90af4751a7cd1279c7faad);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_b0a03059de90af4751a7cd1279c7faad) && "mod_consts.const_str_digest_b0a03059de90af4751a7cd1279c7faad");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__scroll", mod_consts.const_str_plain__scroll);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain__scroll) && "mod_consts.const_str_plain__scroll");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a31abb96473408834e46744632bbd2fa", mod_consts.const_str_digest_a31abb96473408834e46744632bbd2fa);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_a31abb96473408834e46744632bbd2fa) && "mod_consts.const_str_digest_a31abb96473408834e46744632bbd2fa");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bc459a963683e0631af20dd60810b4dd", mod_consts.const_str_digest_bc459a963683e0631af20dd60810b4dd);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_bc459a963683e0631af20dd60810b4dd) && "mod_consts.const_str_digest_bc459a963683e0631af20dd60810b4dd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ctypes", mod_consts.const_str_plain_ctypes);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_ctypes) && "mod_consts.const_str_plain_ctypes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_LEFT_str_plain_MIDDLE_str_plain_RIGHT_tuple", mod_consts.const_tuple_str_plain_LEFT_str_plain_MIDDLE_str_plain_RIGHT_tuple);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_LEFT_str_plain_MIDDLE_str_plain_RIGHT_tuple) && "mod_consts.const_tuple_str_plain_LEFT_str_plain_MIDDLE_str_plain_RIGHT_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sys", mod_consts.const_str_plain_sys);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys) && "mod_consts.const_str_plain_sys");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SetProcessDPIAware", mod_consts.const_str_plain_SetProcessDPIAware);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_SetProcessDPIAware) && "mod_consts.const_str_plain_SetProcessDPIAware");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MOUSEEVENTF_MOVE", mod_consts.const_str_plain_MOUSEEVENTF_MOVE);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_MOUSEEVENTF_MOVE) && "mod_consts.const_str_plain_MOUSEEVENTF_MOVE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_8", mod_consts.const_int_pos_8);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_int_pos_8) && "mod_consts.const_int_pos_8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_32", mod_consts.const_int_pos_32);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_int_pos_32) && "mod_consts.const_int_pos_32");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_64", mod_consts.const_int_pos_64);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_int_pos_64) && "mod_consts.const_int_pos_64");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_32768", mod_consts.const_int_pos_32768);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_int_pos_32768) && "mod_consts.const_int_pos_32768");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MOUSEEVENTF_ABSOLUTE", mod_consts.const_str_plain_MOUSEEVENTF_ABSOLUTE);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_MOUSEEVENTF_ABSOLUTE) && "mod_consts.const_str_plain_MOUSEEVENTF_ABSOLUTE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2048", mod_consts.const_int_pos_2048);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_int_pos_2048) && "mod_consts.const_int_pos_2048");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4096", mod_consts.const_int_pos_4096);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_int_pos_4096) && "mod_consts.const_int_pos_4096");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MOUSEEVENTF_HWHEEL", mod_consts.const_str_plain_MOUSEEVENTF_HWHEEL);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_MOUSEEVENTF_HWHEEL) && "mod_consts.const_str_plain_MOUSEEVENTF_HWHEEL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_INPUT_MOUSE", mod_consts.const_str_plain_INPUT_MOUSE);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_INPUT_MOUSE) && "mod_consts.const_str_plain_INPUT_MOUSE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_INPUT_KEYBOARD", mod_consts.const_str_plain_INPUT_KEYBOARD);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_INPUT_KEYBOARD) && "mod_consts.const_str_plain_INPUT_KEYBOARD");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Structure", mod_consts.const_str_plain_Structure);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_Structure) && "mod_consts.const_str_plain_Structure");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__) && "mod_consts.const_str_plain___prepare__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MOUSEINPUT", mod_consts.const_str_plain_MOUSEINPUT);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_MOUSEINPUT) && "mod_consts.const_str_plain_MOUSEINPUT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__) && "mod_consts.const_str_plain___getitem__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295) && "mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass) && "mod_consts.const_str_angle_metaclass");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e64a4354945d8630712c79dfd53962a2", mod_consts.const_str_digest_e64a4354945d8630712c79dfd53962a2);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_e64a4354945d8630712c79dfd53962a2) && "mod_consts.const_str_digest_e64a4354945d8630712c79dfd53962a2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_62", mod_consts.const_int_pos_62);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_int_pos_62) && "mod_consts.const_int_pos_62");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dx", mod_consts.const_str_plain_dx);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_dx) && "mod_consts.const_str_plain_dx");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LONG", mod_consts.const_str_plain_LONG);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_LONG) && "mod_consts.const_str_plain_LONG");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dy", mod_consts.const_str_plain_dy);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_dy) && "mod_consts.const_str_plain_dy");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mouseData", mod_consts.const_str_plain_mouseData);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_mouseData) && "mod_consts.const_str_plain_mouseData");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DWORD", mod_consts.const_str_plain_DWORD);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_DWORD) && "mod_consts.const_str_plain_DWORD");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dwFlags", mod_consts.const_str_plain_dwFlags);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_dwFlags) && "mod_consts.const_str_plain_dwFlags");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_time", mod_consts.const_str_plain_time);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_time) && "mod_consts.const_str_plain_time");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dwExtraInfo", mod_consts.const_str_plain_dwExtraInfo);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_dwExtraInfo) && "mod_consts.const_str_plain_dwExtraInfo");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_POINTER", mod_consts.const_str_plain_POINTER);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_POINTER) && "mod_consts.const_str_plain_POINTER");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ULONG", mod_consts.const_str_plain_ULONG);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_ULONG) && "mod_consts.const_str_plain_ULONG");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__fields_", mod_consts.const_str_plain__fields_);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain__fields_) && "mod_consts.const_str_plain__fields_");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__) && "mod_consts.const_str_plain___orig_bases__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KEYBDINPUT", mod_consts.const_str_plain_KEYBDINPUT);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_KEYBDINPUT) && "mod_consts.const_str_plain_KEYBDINPUT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_72", mod_consts.const_int_pos_72);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_int_pos_72) && "mod_consts.const_int_pos_72");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wVk", mod_consts.const_str_plain_wVk);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_wVk) && "mod_consts.const_str_plain_wVk");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WORD", mod_consts.const_str_plain_WORD);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_WORD) && "mod_consts.const_str_plain_WORD");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wScan", mod_consts.const_str_plain_wScan);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_wScan) && "mod_consts.const_str_plain_wScan");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HARDWAREINPUT", mod_consts.const_str_plain_HARDWAREINPUT);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_HARDWAREINPUT) && "mod_consts.const_str_plain_HARDWAREINPUT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_81", mod_consts.const_int_pos_81);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_int_pos_81) && "mod_consts.const_int_pos_81");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_uMsg", mod_consts.const_str_plain_uMsg);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_uMsg) && "mod_consts.const_str_plain_uMsg");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wParamL", mod_consts.const_str_plain_wParamL);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_wParamL) && "mod_consts.const_str_plain_wParamL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wParamH", mod_consts.const_str_plain_wParamH);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_wParamH) && "mod_consts.const_str_plain_wParamH");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_INPUT", mod_consts.const_str_plain_INPUT);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_INPUT) && "mod_consts.const_str_plain_INPUT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_88", mod_consts.const_int_pos_88);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_int_pos_88) && "mod_consts.const_int_pos_88");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Union", mod_consts.const_str_plain_Union);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union) && "mod_consts.const_str_plain_Union");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__I", mod_consts.const_str_plain__I);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain__I) && "mod_consts.const_str_plain__I");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_381e31f8cb4bdd6603ed147ffefe3f43", mod_consts.const_str_digest_381e31f8cb4bdd6603ed147ffefe3f43);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_381e31f8cb4bdd6603ed147ffefe3f43) && "mod_consts.const_str_digest_381e31f8cb4bdd6603ed147ffefe3f43");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_89", mod_consts.const_int_pos_89);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_int_pos_89) && "mod_consts.const_int_pos_89");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mi", mod_consts.const_str_plain_mi);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_mi) && "mod_consts.const_str_plain_mi");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ki", mod_consts.const_str_plain_ki);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_ki) && "mod_consts.const_str_plain_ki");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hi", mod_consts.const_str_plain_hi);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_hi) && "mod_consts.const_str_plain_hi");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_i_tuple", mod_consts.const_tuple_str_plain_i_tuple);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_i_tuple) && "mod_consts.const_tuple_str_plain_i_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__anonymous_", mod_consts.const_str_plain__anonymous_);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain__anonymous_) && "mod_consts.const_str_plain__anonymous_");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_i", mod_consts.const_str_plain_i);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_i) && "mod_consts.const_str_plain_i");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KEY_NAMES", mod_consts.const_str_plain_KEY_NAMES);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_KEY_NAMES) && "mod_consts.const_str_plain_KEY_NAMES");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_dd2eea6e3c2e65ca25944cf57fcde142", mod_consts.const_dict_dd2eea6e3c2e65ca25944cf57fcde142);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_dict_dd2eea6e3c2e65ca25944cf57fcde142) && "mod_consts.const_dict_dd2eea6e3c2e65ca25944cf57fcde142");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_xrange_32_128", mod_consts.const_xrange_32_128);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_xrange_32_128) && "mod_consts.const_xrange_32_128");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_c", mod_consts.const_str_plain_c);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_c) && "mod_consts.const_str_plain_c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_VkKeyScanA", mod_consts.const_str_plain_VkKeyScanA);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_VkKeyScanA) && "mod_consts.const_str_plain_VkKeyScanA");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WCHAR", mod_consts.const_str_plain_WCHAR);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_WCHAR) && "mod_consts.const_str_plain_WCHAR");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__keyDown", mod_consts.const_str_plain__keyDown);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain__keyDown) && "mod_consts.const_str_plain__keyDown");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__keyUp", mod_consts.const_str_plain__keyUp);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain__keyUp) && "mod_consts.const_str_plain__keyUp");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__moveTo", mod_consts.const_str_plain__moveTo);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain__moveTo) && "mod_consts.const_str_plain__moveTo");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__mouseDown", mod_consts.const_str_plain__mouseDown);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain__mouseDown) && "mod_consts.const_str_plain__mouseDown");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__mouseUp", mod_consts.const_str_plain__mouseUp);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain__mouseUp) && "mod_consts.const_str_plain__mouseUp");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__click", mod_consts.const_str_plain__click);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain__click) && "mod_consts.const_str_plain__click");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__mouse_is_swapped", mod_consts.const_str_plain__mouse_is_swapped);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain__mouse_is_swapped) && "mod_consts.const_str_plain__mouse_is_swapped");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_tuple", mod_consts.const_tuple_none_none_tuple);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple) && "mod_consts.const_tuple_none_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__hscroll", mod_consts.const_str_plain__hscroll);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain__hscroll) && "mod_consts.const_str_plain__hscroll");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__vscroll", mod_consts.const_str_plain__vscroll);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain__vscroll) && "mod_consts.const_str_plain__vscroll");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_941ee7fc2cbd82f7c7b28a228f3ba137", mod_consts.const_str_digest_941ee7fc2cbd82f7c7b28a228f3ba137);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_digest_941ee7fc2cbd82f7c7b28a228f3ba137) && "mod_consts.const_str_digest_941ee7fc2cbd82f7c7b28a228f3ba137");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3caaf99c133805d4eaaa1baebd72c725", mod_consts.const_str_digest_3caaf99c133805d4eaaa1baebd72c725);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_digest_3caaf99c133805d4eaaa1baebd72c725) && "mod_consts.const_str_digest_3caaf99c133805d4eaaa1baebd72c725");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple) && "mod_consts.const_tuple_str_plain___class___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_button_str_plain_EV_tuple", mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_button_str_plain_EV_tuple);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_button_str_plain_EV_tuple) && "mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_button_str_plain_EV_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_clicks_str_plain_x_str_plain_y_tuple", mod_consts.const_tuple_str_plain_clicks_str_plain_x_str_plain_y_tuple);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_clicks_str_plain_x_str_plain_y_tuple) && "mod_consts.const_tuple_str_plain_clicks_str_plain_x_str_plain_y_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_9e95b4163e444608e450197504bf2b46_tuple", mod_consts.const_tuple_9e95b4163e444608e450197504bf2b46_tuple);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_tuple_9e95b4163e444608e450197504bf2b46_tuple) && "mod_consts.const_tuple_9e95b4163e444608e450197504bf2b46_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_x_str_plain_y_tuple", mod_consts.const_tuple_str_plain_x_str_plain_y_tuple);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_tuple) && "mod_consts.const_tuple_str_plain_x_str_plain_y_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_cursor_tuple", mod_consts.const_tuple_str_plain_cursor_tuple);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cursor_tuple) && "mod_consts.const_tuple_str_plain_cursor_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_35df2a849d3e9afa30e5a142176a4ff1_tuple", mod_consts.const_tuple_35df2a849d3e9afa30e5a142176a4ff1_tuple);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_tuple_35df2a849d3e9afa30e5a142176a4ff1_tuple) && "mod_consts.const_tuple_35df2a849d3e9afa30e5a142176a4ff1_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a853b184913764f2def879fa43c67ed1_tuple", mod_consts.const_tuple_a853b184913764f2def879fa43c67ed1_tuple);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_tuple_a853b184913764f2def879fa43c67ed1_tuple) && "mod_consts.const_tuple_a853b184913764f2def879fa43c67ed1_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 26
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
static PyObject *module_var_accessor_pyautogui$_pyautogui_win$HARDWAREINPUT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyautogui$_pyautogui_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyautogui$_pyautogui_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_HARDWAREINPUT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyautogui$_pyautogui_win->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_HARDWAREINPUT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_HARDWAREINPUT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HARDWAREINPUT);
    }

    return result;
}

static PyObject *module_var_accessor_pyautogui$_pyautogui_win$KEYBDINPUT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyautogui$_pyautogui_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyautogui$_pyautogui_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_KEYBDINPUT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyautogui$_pyautogui_win->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_KEYBDINPUT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_KEYBDINPUT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_KEYBDINPUT);
    }

    return result;
}

static PyObject *module_var_accessor_pyautogui$_pyautogui_win$KEYEVENTF_KEYDOWN(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyautogui$_pyautogui_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyautogui$_pyautogui_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_KEYEVENTF_KEYDOWN);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyautogui$_pyautogui_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_KEYEVENTF_KEYDOWN);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_KEYEVENTF_KEYDOWN, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_KEYEVENTF_KEYDOWN);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_KEYEVENTF_KEYDOWN, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_KEYEVENTF_KEYDOWN);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_KEYEVENTF_KEYDOWN);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_KEYEVENTF_KEYDOWN);
    }

    return result;
}

static PyObject *module_var_accessor_pyautogui$_pyautogui_win$KEYEVENTF_KEYUP(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyautogui$_pyautogui_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyautogui$_pyautogui_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_KEYEVENTF_KEYUP);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyautogui$_pyautogui_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_KEYEVENTF_KEYUP);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_KEYEVENTF_KEYUP, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_KEYEVENTF_KEYUP);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_KEYEVENTF_KEYUP, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_KEYEVENTF_KEYUP);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_KEYEVENTF_KEYUP);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_KEYEVENTF_KEYUP);
    }

    return result;
}

static PyObject *module_var_accessor_pyautogui$_pyautogui_win$LEFT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyautogui$_pyautogui_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyautogui$_pyautogui_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_LEFT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyautogui$_pyautogui_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LEFT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LEFT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LEFT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LEFT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_LEFT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_LEFT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_LEFT);
    }

    return result;
}

static PyObject *module_var_accessor_pyautogui$_pyautogui_win$MIDDLE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyautogui$_pyautogui_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyautogui$_pyautogui_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MIDDLE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyautogui$_pyautogui_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MIDDLE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MIDDLE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MIDDLE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MIDDLE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MIDDLE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MIDDLE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MIDDLE);
    }

    return result;
}

static PyObject *module_var_accessor_pyautogui$_pyautogui_win$MOUSEEVENTF_LEFTCLICK(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyautogui$_pyautogui_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyautogui$_pyautogui_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_LEFTCLICK);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyautogui$_pyautogui_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MOUSEEVENTF_LEFTCLICK);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MOUSEEVENTF_LEFTCLICK, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MOUSEEVENTF_LEFTCLICK);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MOUSEEVENTF_LEFTCLICK, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_LEFTCLICK);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_LEFTCLICK);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_LEFTCLICK);
    }

    return result;
}

static PyObject *module_var_accessor_pyautogui$_pyautogui_win$MOUSEEVENTF_LEFTDOWN(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyautogui$_pyautogui_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyautogui$_pyautogui_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_LEFTDOWN);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyautogui$_pyautogui_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MOUSEEVENTF_LEFTDOWN);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MOUSEEVENTF_LEFTDOWN, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MOUSEEVENTF_LEFTDOWN);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MOUSEEVENTF_LEFTDOWN, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_LEFTDOWN);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_LEFTDOWN);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_LEFTDOWN);
    }

    return result;
}

static PyObject *module_var_accessor_pyautogui$_pyautogui_win$MOUSEEVENTF_LEFTUP(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyautogui$_pyautogui_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyautogui$_pyautogui_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_LEFTUP);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyautogui$_pyautogui_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MOUSEEVENTF_LEFTUP);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MOUSEEVENTF_LEFTUP, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MOUSEEVENTF_LEFTUP);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MOUSEEVENTF_LEFTUP, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_LEFTUP);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_LEFTUP);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_LEFTUP);
    }

    return result;
}

static PyObject *module_var_accessor_pyautogui$_pyautogui_win$MOUSEEVENTF_MIDDLECLICK(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyautogui$_pyautogui_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyautogui$_pyautogui_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_MIDDLECLICK);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyautogui$_pyautogui_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MOUSEEVENTF_MIDDLECLICK);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MOUSEEVENTF_MIDDLECLICK, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MOUSEEVENTF_MIDDLECLICK);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MOUSEEVENTF_MIDDLECLICK, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_MIDDLECLICK);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_MIDDLECLICK);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_MIDDLECLICK);
    }

    return result;
}

static PyObject *module_var_accessor_pyautogui$_pyautogui_win$MOUSEEVENTF_MIDDLEDOWN(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyautogui$_pyautogui_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyautogui$_pyautogui_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_MIDDLEDOWN);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyautogui$_pyautogui_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MOUSEEVENTF_MIDDLEDOWN);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MOUSEEVENTF_MIDDLEDOWN, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MOUSEEVENTF_MIDDLEDOWN);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MOUSEEVENTF_MIDDLEDOWN, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_MIDDLEDOWN);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_MIDDLEDOWN);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_MIDDLEDOWN);
    }

    return result;
}

static PyObject *module_var_accessor_pyautogui$_pyautogui_win$MOUSEEVENTF_MIDDLEUP(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyautogui$_pyautogui_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyautogui$_pyautogui_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_MIDDLEUP);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyautogui$_pyautogui_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MOUSEEVENTF_MIDDLEUP);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MOUSEEVENTF_MIDDLEUP, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MOUSEEVENTF_MIDDLEUP);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MOUSEEVENTF_MIDDLEUP, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_MIDDLEUP);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_MIDDLEUP);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_MIDDLEUP);
    }

    return result;
}

static PyObject *module_var_accessor_pyautogui$_pyautogui_win$MOUSEEVENTF_RIGHTCLICK(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyautogui$_pyautogui_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyautogui$_pyautogui_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_RIGHTCLICK);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyautogui$_pyautogui_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MOUSEEVENTF_RIGHTCLICK);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MOUSEEVENTF_RIGHTCLICK, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MOUSEEVENTF_RIGHTCLICK);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MOUSEEVENTF_RIGHTCLICK, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_RIGHTCLICK);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_RIGHTCLICK);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_RIGHTCLICK);
    }

    return result;
}

static PyObject *module_var_accessor_pyautogui$_pyautogui_win$MOUSEEVENTF_RIGHTDOWN(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyautogui$_pyautogui_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyautogui$_pyautogui_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_RIGHTDOWN);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyautogui$_pyautogui_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MOUSEEVENTF_RIGHTDOWN);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MOUSEEVENTF_RIGHTDOWN, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MOUSEEVENTF_RIGHTDOWN);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MOUSEEVENTF_RIGHTDOWN, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_RIGHTDOWN);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_RIGHTDOWN);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_RIGHTDOWN);
    }

    return result;
}

static PyObject *module_var_accessor_pyautogui$_pyautogui_win$MOUSEEVENTF_RIGHTUP(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyautogui$_pyautogui_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyautogui$_pyautogui_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_RIGHTUP);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyautogui$_pyautogui_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MOUSEEVENTF_RIGHTUP);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MOUSEEVENTF_RIGHTUP, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MOUSEEVENTF_RIGHTUP);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MOUSEEVENTF_RIGHTUP, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_RIGHTUP);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_RIGHTUP);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_RIGHTUP);
    }

    return result;
}

static PyObject *module_var_accessor_pyautogui$_pyautogui_win$MOUSEEVENTF_WHEEL(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyautogui$_pyautogui_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyautogui$_pyautogui_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_WHEEL);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyautogui$_pyautogui_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MOUSEEVENTF_WHEEL);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MOUSEEVENTF_WHEEL, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MOUSEEVENTF_WHEEL);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MOUSEEVENTF_WHEEL, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_WHEEL);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_WHEEL);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_WHEEL);
    }

    return result;
}

static PyObject *module_var_accessor_pyautogui$_pyautogui_win$MOUSEINPUT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyautogui$_pyautogui_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyautogui$_pyautogui_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEINPUT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyautogui$_pyautogui_win->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEINPUT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEINPUT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEINPUT);
    }

    return result;
}

static PyObject *module_var_accessor_pyautogui$_pyautogui_win$RIGHT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyautogui$_pyautogui_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyautogui$_pyautogui_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_RIGHT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyautogui$_pyautogui_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RIGHT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RIGHT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RIGHT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RIGHT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_RIGHT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_RIGHT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RIGHT);
    }

    return result;
}

static PyObject *module_var_accessor_pyautogui$_pyautogui_win$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyautogui$_pyautogui_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyautogui$_pyautogui_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyautogui$_pyautogui_win->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_pyautogui$_pyautogui_win$_position(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyautogui$_pyautogui_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyautogui$_pyautogui_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain__position);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyautogui$_pyautogui_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__position);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__position, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__position);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__position, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain__position);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain__position);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__position);
    }

    return result;
}

static PyObject *module_var_accessor_pyautogui$_pyautogui_win$_scroll(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyautogui$_pyautogui_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyautogui$_pyautogui_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain__scroll);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyautogui$_pyautogui_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__scroll);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__scroll, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__scroll);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__scroll, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain__scroll);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain__scroll);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__scroll);
    }

    return result;
}

static PyObject *module_var_accessor_pyautogui$_pyautogui_win$_sendMouseEvent(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyautogui$_pyautogui_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyautogui$_pyautogui_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain__sendMouseEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyautogui$_pyautogui_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__sendMouseEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__sendMouseEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__sendMouseEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__sendMouseEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain__sendMouseEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain__sendMouseEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__sendMouseEvent);
    }

    return result;
}

static PyObject *module_var_accessor_pyautogui$_pyautogui_win$_size(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyautogui$_pyautogui_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyautogui$_pyautogui_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain__size);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyautogui$_pyautogui_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__size);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__size, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__size);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__size, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain__size);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain__size);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__size);
    }

    return result;
}

static PyObject *module_var_accessor_pyautogui$_pyautogui_win$c(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyautogui$_pyautogui_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyautogui$_pyautogui_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_c);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyautogui$_pyautogui_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_c);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_c, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_c);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_c, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_c);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_c);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_c);
    }

    return result;
}

static PyObject *module_var_accessor_pyautogui$_pyautogui_win$keyboardMapping(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyautogui$_pyautogui_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyautogui$_pyautogui_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_keyboardMapping);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyautogui$_pyautogui_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_keyboardMapping);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_keyboardMapping, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_keyboardMapping);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_keyboardMapping, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_keyboardMapping);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_keyboardMapping);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_keyboardMapping);
    }

    return result;
}

static PyObject *module_var_accessor_pyautogui$_pyautogui_win$pyautogui(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyautogui$_pyautogui_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyautogui$_pyautogui_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_pyautogui);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyautogui$_pyautogui_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_pyautogui);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_pyautogui, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_pyautogui);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_pyautogui, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_pyautogui);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_pyautogui);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_pyautogui);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_e82bd0ede9f9f06e9f5af4d03df05408;
static PyCodeObject *code_objects_313d5dce690fb1af72d03a48363d4caf;
static PyCodeObject *code_objects_b587ae5702c3ee5dfcf68701d0f4230d;
static PyCodeObject *code_objects_ed7d1431ae03a48a8300697df15c88d9;
static PyCodeObject *code_objects_76c3103d8b859f6b06ba97e1a02d3dfc;
static PyCodeObject *code_objects_228846f674c7b14ace66f3a8ae925f0c;
static PyCodeObject *code_objects_620e5c0cef9d029c9ed1d22615ed893f;
static PyCodeObject *code_objects_86632260e6551991f8e8ba36336d11de;
static PyCodeObject *code_objects_56891a14998100a29921f53ef8e46223;
static PyCodeObject *code_objects_88069d726c466e7f6884cb3f749281df;
static PyCodeObject *code_objects_d3385933638c9bf71d45d3e27cfa90a5;
static PyCodeObject *code_objects_8388452b3192b143ec9620022d4f9aec;
static PyCodeObject *code_objects_cd935cb9a98fee09cf9333d1878ca30e;
static PyCodeObject *code_objects_10aca6dd76b5ba856164b1ef9c0b6f91;
static PyCodeObject *code_objects_9ee1ec09e920cf836aef88673517b5b6;
static PyCodeObject *code_objects_fc0df964ef3732bb53e7e3c3dbe6a9c3;
static PyCodeObject *code_objects_3a66777896150b7ab5e703dc76c25719;
static PyCodeObject *code_objects_fa0864e8b93d2b102bc24bd9b394a672;
static PyCodeObject *code_objects_82072cca1d1f9037703632eefb77464f;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_941ee7fc2cbd82f7c7b28a228f3ba137); CHECK_OBJECT(module_filename_obj);
code_objects_e82bd0ede9f9f06e9f5af4d03df05408 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_3caaf99c133805d4eaaa1baebd72c725, mod_consts.const_str_digest_3caaf99c133805d4eaaa1baebd72c725, NULL, NULL, 0, 0, 0);
code_objects_313d5dce690fb1af72d03a48363d4caf = MAKE_CODE_OBJECT(module_filename_obj, 81, 0, mod_consts.const_str_plain_HARDWAREINPUT, mod_consts.const_str_plain_HARDWAREINPUT, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_b587ae5702c3ee5dfcf68701d0f4230d = MAKE_CODE_OBJECT(module_filename_obj, 88, 0, mod_consts.const_str_plain_INPUT, mod_consts.const_str_plain_INPUT, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_ed7d1431ae03a48a8300697df15c88d9 = MAKE_CODE_OBJECT(module_filename_obj, 72, 0, mod_consts.const_str_plain_KEYBDINPUT, mod_consts.const_str_plain_KEYBDINPUT, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_76c3103d8b859f6b06ba97e1a02d3dfc = MAKE_CODE_OBJECT(module_filename_obj, 62, 0, mod_consts.const_str_plain_MOUSEINPUT, mod_consts.const_str_plain_MOUSEINPUT, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_228846f674c7b14ace66f3a8ae925f0c = MAKE_CODE_OBJECT(module_filename_obj, 89, 0, mod_consts.const_str_plain__I, mod_consts.const_str_digest_381e31f8cb4bdd6603ed147ffefe3f43, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_620e5c0cef9d029c9ed1d22615ed893f = MAKE_CODE_OBJECT(module_filename_obj, 432, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__click, mod_consts.const_str_plain__click, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_button_str_plain_EV_tuple, NULL, 3, 0, 0);
code_objects_86632260e6551991f8e8ba36336d11de = MAKE_CODE_OBJECT(module_filename_obj, 544, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__hscroll, mod_consts.const_str_plain__hscroll, mod_consts.const_tuple_str_plain_clicks_str_plain_x_str_plain_y_tuple, NULL, 3, 0, 0);
code_objects_56891a14998100a29921f53ef8e46223 = MAKE_CODE_OBJECT(module_filename_obj, 250, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__keyDown, mod_consts.const_str_plain__keyDown, mod_consts.const_tuple_9e95b4163e444608e450197504bf2b46_tuple, NULL, 1, 0, 0);
code_objects_88069d726c466e7f6884cb3f749281df = MAKE_CODE_OBJECT(module_filename_obj, 295, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__keyUp, mod_consts.const_str_plain__keyUp, mod_consts.const_tuple_9e95b4163e444608e450197504bf2b46_tuple, NULL, 1, 0, 0);
code_objects_d3385933638c9bf71d45d3e27cfa90a5 = MAKE_CODE_OBJECT(module_filename_obj, 375, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__mouseDown, mod_consts.const_str_plain__mouseDown, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_button_str_plain_EV_tuple, NULL, 3, 0, 0);
code_objects_8388452b3192b143ec9620022d4f9aec = MAKE_CODE_OBJECT(module_filename_obj, 404, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__mouseUp, mod_consts.const_str_plain__mouseUp, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_button_str_plain_EV_tuple, NULL, 3, 0, 0);
code_objects_cd935cb9a98fee09cf9333d1878ca30e = MAKE_CODE_OBJECT(module_filename_obj, 461, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__mouse_is_swapped, mod_consts.const_str_plain__mouse_is_swapped, NULL, NULL, 0, 0, 0);
code_objects_10aca6dd76b5ba856164b1ef9c0b6f91 = MAKE_CODE_OBJECT(module_filename_obj, 357, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__moveTo, mod_consts.const_str_plain__moveTo, mod_consts.const_tuple_str_plain_x_str_plain_y_tuple, NULL, 2, 0, 0);
code_objects_9ee1ec09e920cf836aef88673517b5b6 = MAKE_CODE_OBJECT(module_filename_obj, 335, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__position, mod_consts.const_str_plain__position, mod_consts.const_tuple_str_plain_cursor_tuple, NULL, 0, 0, 0);
code_objects_fc0df964ef3732bb53e7e3c3dbe6a9c3 = MAKE_CODE_OBJECT(module_filename_obj, 507, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__scroll, mod_consts.const_str_plain__scroll, mod_consts.const_tuple_35df2a849d3e9afa30e5a142176a4ff1_tuple, NULL, 3, 0, 0);
code_objects_3a66777896150b7ab5e703dc76c25719 = MAKE_CODE_OBJECT(module_filename_obj, 466, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__sendMouseEvent, mod_consts.const_str_plain__sendMouseEvent, mod_consts.const_tuple_a853b184913764f2def879fa43c67ed1_tuple, NULL, 4, 0, 0);
code_objects_fa0864e8b93d2b102bc24bd9b394a672 = MAKE_CODE_OBJECT(module_filename_obj, 348, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__size, mod_consts.const_str_plain__size, NULL, NULL, 0, 0, 0);
code_objects_82072cca1d1f9037703632eefb77464f = MAKE_CODE_OBJECT(module_filename_obj, 560, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__vscroll, mod_consts.const_str_plain__vscroll, mod_consts.const_tuple_str_plain_clicks_str_plain_x_str_plain_y_tuple, NULL, 3, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__10__sendMouseEvent(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__11__scroll(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__12__hscroll(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__13__vscroll(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__1__keyDown(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__2__keyUp(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__3__position(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__4__size(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__5__moveTo(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__6__mouseDown(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__7__mouseUp(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__8__click(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__9__mouse_is_swapped(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_pyautogui$_pyautogui_win$$$function__1__keyDown(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_key = python_pars[0];
PyObject *var_needsShift = NULL;
PyObject *var_mods = NULL;
PyObject *var_vkCode = NULL;
PyObject *var_apply_mod = NULL;
PyObject *var_vk_mod = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
PyObject *tmp_tuple_unpack_3__element_1 = NULL;
PyObject *tmp_tuple_unpack_3__element_2 = NULL;
PyObject *tmp_tuple_unpack_3__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_pyautogui$_pyautogui_win$$$function__1__keyDown;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
static struct Nuitka_FrameObject *cache_frame_frame_pyautogui$_pyautogui_win$$$function__1__keyDown = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pyautogui$_pyautogui_win$$$function__1__keyDown)) {
    Py_XDECREF(cache_frame_frame_pyautogui$_pyautogui_win$$$function__1__keyDown);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyautogui$_pyautogui_win$$$function__1__keyDown == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyautogui$_pyautogui_win$$$function__1__keyDown = MAKE_FUNCTION_FRAME(tstate, code_objects_56891a14998100a29921f53ef8e46223, module_pyautogui$_pyautogui_win, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyautogui$_pyautogui_win$$$function__1__keyDown->m_type_description == NULL);
frame_frame_pyautogui$_pyautogui_win$$$function__1__keyDown = cache_frame_frame_pyautogui$_pyautogui_win$$$function__1__keyDown;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyautogui$_pyautogui_win$$$function__1__keyDown);
assert(Py_REFCNT(frame_frame_pyautogui$_pyautogui_win$$$function__1__keyDown) == 2);

// Framed code:
{
bool tmp_condition_result_1;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_key);
tmp_cmp_expr_left_1 = par_key;
tmp_cmp_expr_right_1 = module_var_accessor_pyautogui$_pyautogui_win$keyboardMapping(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_keyboardMapping);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 264;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = (tmp_res == 0) ? true : false;
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_expression_value_1 = module_var_accessor_pyautogui$_pyautogui_win$keyboardMapping(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_keyboardMapping);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 264;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_key);
tmp_subscript_value_1 = par_key;
tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_or_right_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
tmp_condition_result_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_1 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_1 != false) {
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
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_pyautogui$_pyautogui_win$pyautogui(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pyautogui);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 267;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_key);
tmp_args_element_value_1 = par_key;
frame_frame_pyautogui$_pyautogui_win$$$function__1__keyDown->m_frame.f_lineno = 267;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_isShiftCharacter, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_needsShift;
    var_needsShift = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_divmod_expr_left_1;
PyObject *tmp_divmod_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
tmp_expression_value_2 = module_var_accessor_pyautogui$_pyautogui_win$keyboardMapping(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_keyboardMapping);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 282;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_key);
tmp_subscript_value_2 = par_key;
tmp_divmod_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
if (tmp_divmod_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_divmod_expr_right_1 = mod_consts.const_int_pos_256;
tmp_iter_arg_1 = BINARY_OPERATION_DIVMOD_OBJECT_OBJECT_LONG(tmp_divmod_expr_left_1, tmp_divmod_expr_right_1);
CHECK_OBJECT(tmp_divmod_expr_left_1);
Py_DECREF(tmp_divmod_expr_left_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 282;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 282;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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



exception_lineno = 282;
type_description_1 = "oooooo";
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
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_mods;
    var_mods = tmp_assign_source_5;
    Py_INCREF(var_mods);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_vkCode;
    var_vkCode = tmp_assign_source_6;
    Py_INCREF(var_vkCode);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_2;
PyObject *tmp_tuple_element_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
CHECK_OBJECT(var_mods);
tmp_bitand_expr_left_1 = var_mods;
tmp_bitand_expr_right_1 = mod_consts.const_int_pos_4;
tmp_tuple_element_2 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_tuple_element_1, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_int_pos_18;
PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_2);
tmp_iter_arg_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_tuple_element_3;
PyObject *tmp_bitand_expr_left_2;
PyObject *tmp_bitand_expr_right_2;
PyObject *tmp_tuple_element_4;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_bitand_expr_left_3;
PyObject *tmp_bitand_expr_right_3;
PyTuple_SET_ITEM(tmp_iter_arg_2, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_mods);
tmp_bitand_expr_left_2 = var_mods;
tmp_bitand_expr_right_2 = mod_consts.const_int_pos_2;
tmp_tuple_element_3 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_2, tmp_bitand_expr_right_2);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_tuple_element_1, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_int_pos_17;
PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_3);
PyTuple_SET_ITEM(tmp_iter_arg_2, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_mods);
tmp_bitand_expr_left_3 = var_mods;
tmp_bitand_expr_right_3 = const_int_pos_1;
tmp_or_left_value_2 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_3, tmp_bitand_expr_right_3);
if (tmp_or_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_2);

exception_lineno = 285;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(tmp_or_left_value_2);
Py_DECREF(tmp_or_left_value_2);
CHECK_OBJECT(var_needsShift);
tmp_or_right_value_2 = var_needsShift;
Py_INCREF(tmp_or_right_value_2);
tmp_tuple_element_4 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_tuple_element_4 = tmp_or_left_value_2;
or_end_2:;
tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_tuple_element_1, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_int_pos_16;
PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_4);
PyTuple_SET_ITEM(tmp_iter_arg_2, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_iter_arg_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_7 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
assert(!(tmp_assign_source_7 == NULL));
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_8 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_8 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooo";
exception_lineno = 284;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_3 = tmp_for_loop_1__iter_value;
tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_2__source_iter;
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_10 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 284;
type_description_1 = "oooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_1;
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_11 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 284;
type_description_1 = "oooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_2;
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_11;
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



exception_lineno = 284;
type_description_1 = "oooooo";
    goto try_except_handler_6;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
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

goto try_except_handler_5;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
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

goto try_except_handler_4;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_12 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = var_apply_mod;
    var_apply_mod = tmp_assign_source_12;
    Py_INCREF(var_apply_mod);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_13 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var_vk_mod;
    var_vk_mod = tmp_assign_source_13;
    Py_INCREF(var_vk_mod);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(var_apply_mod);
tmp_truth_name_1 = CHECK_IF_TRUE(var_apply_mod);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_expression_value_5 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_5 == NULL));
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_windll);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_keybd_event);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_vk_mod);
tmp_args_element_value_2 = var_vk_mod;
tmp_args_element_value_3 = const_int_0;
tmp_args_element_value_4 = module_var_accessor_pyautogui$_pyautogui_win$KEYEVENTF_KEYDOWN(tstate);
if (unlikely(tmp_args_element_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KEYEVENTF_KEYDOWN);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 287;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
tmp_args_element_value_5 = const_int_0;
frame_frame_pyautogui$_pyautogui_win$$$function__1__keyDown->m_frame.f_lineno = 287;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
goto loop_start_1;
loop_end_1:;
goto try_end_5;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_expression_value_8 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_8 == NULL));
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_windll);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_keybd_event);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_vkCode);
tmp_args_element_value_6 = var_vkCode;
tmp_args_element_value_7 = const_int_0;
tmp_args_element_value_8 = module_var_accessor_pyautogui$_pyautogui_win$KEYEVENTF_KEYDOWN(tstate);
if (unlikely(tmp_args_element_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KEYEVENTF_KEYDOWN);
}

if (tmp_args_element_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 288;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = const_int_0;
frame_frame_pyautogui$_pyautogui_win$$$function__1__keyDown->m_frame.f_lineno = 288;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_iter_arg_4;
PyObject *tmp_tuple_element_5;
PyObject *tmp_tuple_element_6;
int tmp_or_left_truth_3;
PyObject *tmp_or_left_value_3;
PyObject *tmp_or_right_value_3;
PyObject *tmp_bitand_expr_left_4;
PyObject *tmp_bitand_expr_right_4;
CHECK_OBJECT(var_mods);
tmp_bitand_expr_left_4 = var_mods;
tmp_bitand_expr_right_4 = const_int_pos_1;
tmp_or_left_value_3 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_4, tmp_bitand_expr_right_4);
if (tmp_or_left_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_3);

exception_lineno = 289;
type_description_1 = "oooooo";
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
CHECK_OBJECT(var_needsShift);
tmp_or_right_value_3 = var_needsShift;
Py_INCREF(tmp_or_right_value_3);
tmp_tuple_element_6 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_tuple_element_6 = tmp_or_left_value_3;
or_end_3:;
tmp_tuple_element_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_tuple_element_5, 0, tmp_tuple_element_6);
tmp_tuple_element_6 = mod_consts.const_int_pos_16;
PyTuple_SET_ITEM0(tmp_tuple_element_5, 1, tmp_tuple_element_6);
tmp_iter_arg_4 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_tuple_element_7;
PyObject *tmp_bitand_expr_left_5;
PyObject *tmp_bitand_expr_right_5;
PyObject *tmp_tuple_element_8;
PyObject *tmp_bitand_expr_left_6;
PyObject *tmp_bitand_expr_right_6;
PyTuple_SET_ITEM(tmp_iter_arg_4, 0, tmp_tuple_element_5);
CHECK_OBJECT(var_mods);
tmp_bitand_expr_left_5 = var_mods;
tmp_bitand_expr_right_5 = mod_consts.const_int_pos_2;
tmp_tuple_element_7 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_5, tmp_bitand_expr_right_5);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "oooooo";
    goto tuple_build_exception_2;
}
tmp_tuple_element_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_tuple_element_5, 0, tmp_tuple_element_7);
tmp_tuple_element_7 = mod_consts.const_int_pos_17;
PyTuple_SET_ITEM0(tmp_tuple_element_5, 1, tmp_tuple_element_7);
PyTuple_SET_ITEM(tmp_iter_arg_4, 1, tmp_tuple_element_5);
CHECK_OBJECT(var_mods);
tmp_bitand_expr_left_6 = var_mods;
tmp_bitand_expr_right_6 = mod_consts.const_int_pos_4;
tmp_tuple_element_8 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_6, tmp_bitand_expr_right_6);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "oooooo";
    goto tuple_build_exception_2;
}
tmp_tuple_element_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_tuple_element_5, 0, tmp_tuple_element_8);
tmp_tuple_element_8 = mod_consts.const_int_pos_18;
PyTuple_SET_ITEM0(tmp_tuple_element_5, 1, tmp_tuple_element_8);
PyTuple_SET_ITEM(tmp_iter_arg_4, 2, tmp_tuple_element_5);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_iter_arg_4);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_assign_source_14 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_4);
CHECK_OBJECT(tmp_iter_arg_4);
Py_DECREF(tmp_iter_arg_4);
assert(!(tmp_assign_source_14 == NULL));
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_15 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
if (tmp_assign_source_15 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooo";
exception_lineno = 289;
        goto try_except_handler_7;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_iter_arg_5;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_iter_arg_5 = tmp_for_loop_2__iter_value;
tmp_assign_source_16 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "oooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_tuple_unpack_3__source_iter;
    tmp_tuple_unpack_3__source_iter = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_17 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 0, 2);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 289;
type_description_1 = "oooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_1;
    tmp_tuple_unpack_3__element_1 = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_18 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 1, 2);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 289;
type_description_1 = "oooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_2;
    tmp_tuple_unpack_3__element_2 = tmp_assign_source_18;
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



exception_lineno = 289;
type_description_1 = "oooooo";
    goto try_except_handler_9;
}
}
goto try_end_6;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_8;
// End of try:
try_end_6:;
goto try_end_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_7;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
{
PyObject *tmp_assign_source_19;
CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
tmp_assign_source_19 = tmp_tuple_unpack_3__element_1;
{
    PyObject *old = var_apply_mod;
    var_apply_mod = tmp_assign_source_19;
    Py_INCREF(var_apply_mod);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;

{
PyObject *tmp_assign_source_20;
CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
tmp_assign_source_20 = tmp_tuple_unpack_3__element_2;
{
    PyObject *old = var_vk_mod;
    var_vk_mod = tmp_assign_source_20;
    Py_INCREF(var_vk_mod);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;

{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_2;
CHECK_OBJECT(var_apply_mod);
tmp_truth_name_2 = CHECK_IF_TRUE(var_apply_mod);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "oooooo";
    goto try_except_handler_7;
}
tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
tmp_expression_value_11 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_11 == NULL));
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_windll);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "oooooo";
    goto try_except_handler_7;
}
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "oooooo";
    goto try_except_handler_7;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_keybd_event);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "oooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(var_vk_mod);
tmp_args_element_value_10 = var_vk_mod;
tmp_args_element_value_11 = const_int_0;
tmp_args_element_value_12 = module_var_accessor_pyautogui$_pyautogui_win$KEYEVENTF_KEYUP(tstate);
if (unlikely(tmp_args_element_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KEYEVENTF_KEYUP);
}

if (tmp_args_element_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 292;
type_description_1 = "oooooo";
    goto try_except_handler_7;
}
tmp_args_element_value_13 = const_int_0;
frame_frame_pyautogui$_pyautogui_win$$$function__1__keyDown->m_frame.f_lineno = 292;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "oooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "oooooo";
    goto try_except_handler_7;
}
goto loop_start_2;
loop_end_2:;
goto try_end_8;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_8:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyautogui$_pyautogui_win$$$function__1__keyDown, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyautogui$_pyautogui_win$$$function__1__keyDown->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyautogui$_pyautogui_win$$$function__1__keyDown, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyautogui$_pyautogui_win$$$function__1__keyDown,
    type_description_1,
    par_key,
    var_needsShift,
    var_mods,
    var_vkCode,
    var_apply_mod,
    var_vk_mod
);


// Release cached frame if used for exception.
if (frame_frame_pyautogui$_pyautogui_win$$$function__1__keyDown == cache_frame_frame_pyautogui$_pyautogui_win$$$function__1__keyDown) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyautogui$_pyautogui_win$$$function__1__keyDown);
    cache_frame_frame_pyautogui$_pyautogui_win$$$function__1__keyDown = NULL;
}

assertFrameObject(frame_frame_pyautogui$_pyautogui_win$$$function__1__keyDown);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_needsShift);
var_needsShift = NULL;
Py_XDECREF(var_mods);
var_mods = NULL;
Py_XDECREF(var_vkCode);
var_vkCode = NULL;
Py_XDECREF(var_apply_mod);
var_apply_mod = NULL;
Py_XDECREF(var_vk_mod);
var_vk_mod = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_needsShift);
var_needsShift = NULL;
Py_XDECREF(var_mods);
var_mods = NULL;
Py_XDECREF(var_vkCode);
var_vkCode = NULL;
Py_XDECREF(var_apply_mod);
var_apply_mod = NULL;
Py_XDECREF(var_vk_mod);
var_vk_mod = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_key);
Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyautogui$_pyautogui_win$$$function__2__keyUp(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_key = python_pars[0];
PyObject *var_needsShift = NULL;
PyObject *var_mods = NULL;
PyObject *var_vkCode = NULL;
PyObject *var_apply_mod = NULL;
PyObject *var_vk_mod = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
PyObject *tmp_tuple_unpack_3__element_1 = NULL;
PyObject *tmp_tuple_unpack_3__element_2 = NULL;
PyObject *tmp_tuple_unpack_3__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_pyautogui$_pyautogui_win$$$function__2__keyUp;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
static struct Nuitka_FrameObject *cache_frame_frame_pyautogui$_pyautogui_win$$$function__2__keyUp = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pyautogui$_pyautogui_win$$$function__2__keyUp)) {
    Py_XDECREF(cache_frame_frame_pyautogui$_pyautogui_win$$$function__2__keyUp);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyautogui$_pyautogui_win$$$function__2__keyUp == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyautogui$_pyautogui_win$$$function__2__keyUp = MAKE_FUNCTION_FRAME(tstate, code_objects_88069d726c466e7f6884cb3f749281df, module_pyautogui$_pyautogui_win, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyautogui$_pyautogui_win$$$function__2__keyUp->m_type_description == NULL);
frame_frame_pyautogui$_pyautogui_win$$$function__2__keyUp = cache_frame_frame_pyautogui$_pyautogui_win$$$function__2__keyUp;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyautogui$_pyautogui_win$$$function__2__keyUp);
assert(Py_REFCNT(frame_frame_pyautogui$_pyautogui_win$$$function__2__keyUp) == 2);

// Framed code:
{
bool tmp_condition_result_1;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_key);
tmp_cmp_expr_left_1 = par_key;
tmp_cmp_expr_right_1 = module_var_accessor_pyautogui$_pyautogui_win$keyboardMapping(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_keyboardMapping);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 305;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = (tmp_res == 0) ? true : false;
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_expression_value_1 = module_var_accessor_pyautogui$_pyautogui_win$keyboardMapping(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_keyboardMapping);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 305;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_key);
tmp_subscript_value_1 = par_key;
tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_or_right_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
tmp_condition_result_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_1 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_1 != false) {
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
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_pyautogui$_pyautogui_win$pyautogui(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pyautogui);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 308;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_key);
tmp_args_element_value_1 = par_key;
frame_frame_pyautogui$_pyautogui_win$$$function__2__keyUp->m_frame.f_lineno = 308;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_isShiftCharacter, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_needsShift;
    var_needsShift = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_divmod_expr_left_1;
PyObject *tmp_divmod_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
tmp_expression_value_2 = module_var_accessor_pyautogui$_pyautogui_win$keyboardMapping(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_keyboardMapping);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 322;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_key);
tmp_subscript_value_2 = par_key;
tmp_divmod_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
if (tmp_divmod_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_divmod_expr_right_1 = mod_consts.const_int_pos_256;
tmp_iter_arg_1 = BINARY_OPERATION_DIVMOD_OBJECT_OBJECT_LONG(tmp_divmod_expr_left_1, tmp_divmod_expr_right_1);
CHECK_OBJECT(tmp_divmod_expr_left_1);
Py_DECREF(tmp_divmod_expr_left_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 322;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 322;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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



exception_lineno = 322;
type_description_1 = "oooooo";
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
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_mods;
    var_mods = tmp_assign_source_5;
    Py_INCREF(var_mods);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_vkCode;
    var_vkCode = tmp_assign_source_6;
    Py_INCREF(var_vkCode);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_2;
PyObject *tmp_tuple_element_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
CHECK_OBJECT(var_mods);
tmp_bitand_expr_left_1 = var_mods;
tmp_bitand_expr_right_1 = mod_consts.const_int_pos_4;
tmp_tuple_element_2 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_tuple_element_1, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_int_pos_18;
PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_2);
tmp_iter_arg_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_tuple_element_3;
PyObject *tmp_bitand_expr_left_2;
PyObject *tmp_bitand_expr_right_2;
PyObject *tmp_tuple_element_4;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_bitand_expr_left_3;
PyObject *tmp_bitand_expr_right_3;
PyTuple_SET_ITEM(tmp_iter_arg_2, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_mods);
tmp_bitand_expr_left_2 = var_mods;
tmp_bitand_expr_right_2 = mod_consts.const_int_pos_2;
tmp_tuple_element_3 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_2, tmp_bitand_expr_right_2);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_tuple_element_1, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_int_pos_17;
PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_3);
PyTuple_SET_ITEM(tmp_iter_arg_2, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_mods);
tmp_bitand_expr_left_3 = var_mods;
tmp_bitand_expr_right_3 = const_int_pos_1;
tmp_or_left_value_2 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_3, tmp_bitand_expr_right_3);
if (tmp_or_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_2);

exception_lineno = 325;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(tmp_or_left_value_2);
Py_DECREF(tmp_or_left_value_2);
CHECK_OBJECT(var_needsShift);
tmp_or_right_value_2 = var_needsShift;
Py_INCREF(tmp_or_right_value_2);
tmp_tuple_element_4 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_tuple_element_4 = tmp_or_left_value_2;
or_end_2:;
tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_tuple_element_1, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_int_pos_16;
PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_4);
PyTuple_SET_ITEM(tmp_iter_arg_2, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_iter_arg_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_7 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
assert(!(tmp_assign_source_7 == NULL));
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_8 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_8 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooo";
exception_lineno = 324;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_3 = tmp_for_loop_1__iter_value;
tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_2__source_iter;
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_10 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 324;
type_description_1 = "oooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_1;
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_11 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 324;
type_description_1 = "oooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_2;
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_11;
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



exception_lineno = 324;
type_description_1 = "oooooo";
    goto try_except_handler_6;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
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

goto try_except_handler_5;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
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

goto try_except_handler_4;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_12 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = var_apply_mod;
    var_apply_mod = tmp_assign_source_12;
    Py_INCREF(var_apply_mod);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_13 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var_vk_mod;
    var_vk_mod = tmp_assign_source_13;
    Py_INCREF(var_vk_mod);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(var_apply_mod);
tmp_truth_name_1 = CHECK_IF_TRUE(var_apply_mod);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_expression_value_4 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_4 == NULL));
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_windll);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_vk_mod);
tmp_args_element_value_2 = var_vk_mod;
tmp_args_element_value_3 = const_int_0;
tmp_args_element_value_4 = const_int_0;
tmp_args_element_value_5 = const_int_0;
frame_frame_pyautogui$_pyautogui_win$$$function__2__keyUp->m_frame.f_lineno = 327;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS4(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_keybd_event,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
goto loop_start_1;
loop_end_1:;
goto try_end_5;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_expression_value_7 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_7 == NULL));
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_windll);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_keybd_event);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_vkCode);
tmp_args_element_value_6 = var_vkCode;
tmp_args_element_value_7 = const_int_0;
tmp_args_element_value_8 = module_var_accessor_pyautogui$_pyautogui_win$KEYEVENTF_KEYUP(tstate);
if (unlikely(tmp_args_element_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KEYEVENTF_KEYUP);
}

if (tmp_args_element_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 328;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = const_int_0;
frame_frame_pyautogui$_pyautogui_win$$$function__2__keyUp->m_frame.f_lineno = 328;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_iter_arg_4;
PyObject *tmp_tuple_element_5;
PyObject *tmp_tuple_element_6;
int tmp_or_left_truth_3;
PyObject *tmp_or_left_value_3;
PyObject *tmp_or_right_value_3;
PyObject *tmp_bitand_expr_left_4;
PyObject *tmp_bitand_expr_right_4;
CHECK_OBJECT(var_mods);
tmp_bitand_expr_left_4 = var_mods;
tmp_bitand_expr_right_4 = const_int_pos_1;
tmp_or_left_value_3 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_4, tmp_bitand_expr_right_4);
if (tmp_or_left_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_3);

exception_lineno = 329;
type_description_1 = "oooooo";
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
CHECK_OBJECT(var_needsShift);
tmp_or_right_value_3 = var_needsShift;
Py_INCREF(tmp_or_right_value_3);
tmp_tuple_element_6 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_tuple_element_6 = tmp_or_left_value_3;
or_end_3:;
tmp_tuple_element_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_tuple_element_5, 0, tmp_tuple_element_6);
tmp_tuple_element_6 = mod_consts.const_int_pos_16;
PyTuple_SET_ITEM0(tmp_tuple_element_5, 1, tmp_tuple_element_6);
tmp_iter_arg_4 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_tuple_element_7;
PyObject *tmp_bitand_expr_left_5;
PyObject *tmp_bitand_expr_right_5;
PyObject *tmp_tuple_element_8;
PyObject *tmp_bitand_expr_left_6;
PyObject *tmp_bitand_expr_right_6;
PyTuple_SET_ITEM(tmp_iter_arg_4, 0, tmp_tuple_element_5);
CHECK_OBJECT(var_mods);
tmp_bitand_expr_left_5 = var_mods;
tmp_bitand_expr_right_5 = mod_consts.const_int_pos_2;
tmp_tuple_element_7 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_5, tmp_bitand_expr_right_5);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "oooooo";
    goto tuple_build_exception_2;
}
tmp_tuple_element_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_tuple_element_5, 0, tmp_tuple_element_7);
tmp_tuple_element_7 = mod_consts.const_int_pos_17;
PyTuple_SET_ITEM0(tmp_tuple_element_5, 1, tmp_tuple_element_7);
PyTuple_SET_ITEM(tmp_iter_arg_4, 1, tmp_tuple_element_5);
CHECK_OBJECT(var_mods);
tmp_bitand_expr_left_6 = var_mods;
tmp_bitand_expr_right_6 = mod_consts.const_int_pos_4;
tmp_tuple_element_8 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_6, tmp_bitand_expr_right_6);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "oooooo";
    goto tuple_build_exception_2;
}
tmp_tuple_element_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_tuple_element_5, 0, tmp_tuple_element_8);
tmp_tuple_element_8 = mod_consts.const_int_pos_18;
PyTuple_SET_ITEM0(tmp_tuple_element_5, 1, tmp_tuple_element_8);
PyTuple_SET_ITEM(tmp_iter_arg_4, 2, tmp_tuple_element_5);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_iter_arg_4);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_assign_source_14 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_4);
CHECK_OBJECT(tmp_iter_arg_4);
Py_DECREF(tmp_iter_arg_4);
assert(!(tmp_assign_source_14 == NULL));
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_15 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
if (tmp_assign_source_15 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooo";
exception_lineno = 329;
        goto try_except_handler_7;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_iter_arg_5;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_iter_arg_5 = tmp_for_loop_2__iter_value;
tmp_assign_source_16 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "oooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_tuple_unpack_3__source_iter;
    tmp_tuple_unpack_3__source_iter = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_17 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 0, 2);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 329;
type_description_1 = "oooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_1;
    tmp_tuple_unpack_3__element_1 = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_18 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 1, 2);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 329;
type_description_1 = "oooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_2;
    tmp_tuple_unpack_3__element_2 = tmp_assign_source_18;
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



exception_lineno = 329;
type_description_1 = "oooooo";
    goto try_except_handler_9;
}
}
goto try_end_6;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_8;
// End of try:
try_end_6:;
goto try_end_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_7;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
{
PyObject *tmp_assign_source_19;
CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
tmp_assign_source_19 = tmp_tuple_unpack_3__element_1;
{
    PyObject *old = var_apply_mod;
    var_apply_mod = tmp_assign_source_19;
    Py_INCREF(var_apply_mod);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;

{
PyObject *tmp_assign_source_20;
CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
tmp_assign_source_20 = tmp_tuple_unpack_3__element_2;
{
    PyObject *old = var_vk_mod;
    var_vk_mod = tmp_assign_source_20;
    Py_INCREF(var_vk_mod);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;

{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_2;
CHECK_OBJECT(var_apply_mod);
tmp_truth_name_2 = CHECK_IF_TRUE(var_apply_mod);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "oooooo";
    goto try_except_handler_7;
}
tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
tmp_expression_value_10 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_10 == NULL));
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_windll);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "oooooo";
    goto try_except_handler_7;
}
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "oooooo";
    goto try_except_handler_7;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_keybd_event);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "oooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(var_vk_mod);
tmp_args_element_value_10 = var_vk_mod;
tmp_args_element_value_11 = const_int_0;
tmp_args_element_value_12 = module_var_accessor_pyautogui$_pyautogui_win$KEYEVENTF_KEYUP(tstate);
if (unlikely(tmp_args_element_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KEYEVENTF_KEYUP);
}

if (tmp_args_element_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 332;
type_description_1 = "oooooo";
    goto try_except_handler_7;
}
tmp_args_element_value_13 = const_int_0;
frame_frame_pyautogui$_pyautogui_win$$$function__2__keyUp->m_frame.f_lineno = 332;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "oooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "oooooo";
    goto try_except_handler_7;
}
goto loop_start_2;
loop_end_2:;
goto try_end_8;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_8:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyautogui$_pyautogui_win$$$function__2__keyUp, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyautogui$_pyautogui_win$$$function__2__keyUp->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyautogui$_pyautogui_win$$$function__2__keyUp, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyautogui$_pyautogui_win$$$function__2__keyUp,
    type_description_1,
    par_key,
    var_needsShift,
    var_mods,
    var_vkCode,
    var_apply_mod,
    var_vk_mod
);


// Release cached frame if used for exception.
if (frame_frame_pyautogui$_pyautogui_win$$$function__2__keyUp == cache_frame_frame_pyautogui$_pyautogui_win$$$function__2__keyUp) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyautogui$_pyautogui_win$$$function__2__keyUp);
    cache_frame_frame_pyautogui$_pyautogui_win$$$function__2__keyUp = NULL;
}

assertFrameObject(frame_frame_pyautogui$_pyautogui_win$$$function__2__keyUp);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_needsShift);
var_needsShift = NULL;
Py_XDECREF(var_mods);
var_mods = NULL;
Py_XDECREF(var_vkCode);
var_vkCode = NULL;
Py_XDECREF(var_apply_mod);
var_apply_mod = NULL;
Py_XDECREF(var_vk_mod);
var_vk_mod = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_needsShift);
var_needsShift = NULL;
Py_XDECREF(var_mods);
var_mods = NULL;
Py_XDECREF(var_vkCode);
var_vkCode = NULL;
Py_XDECREF(var_apply_mod);
var_apply_mod = NULL;
Py_XDECREF(var_vk_mod);
var_vk_mod = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_key);
Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyautogui$_pyautogui_win$$$function__3__position(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_cursor = NULL;
struct Nuitka_FrameObject *frame_frame_pyautogui$_pyautogui_win$$$function__3__position;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pyautogui$_pyautogui_win$$$function__3__position = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pyautogui$_pyautogui_win$$$function__3__position)) {
    Py_XDECREF(cache_frame_frame_pyautogui$_pyautogui_win$$$function__3__position);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyautogui$_pyautogui_win$$$function__3__position == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyautogui$_pyautogui_win$$$function__3__position = MAKE_FUNCTION_FRAME(tstate, code_objects_9ee1ec09e920cf836aef88673517b5b6, module_pyautogui$_pyautogui_win, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyautogui$_pyautogui_win$$$function__3__position->m_type_description == NULL);
frame_frame_pyautogui$_pyautogui_win$$$function__3__position = cache_frame_frame_pyautogui$_pyautogui_win$$$function__3__position;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyautogui$_pyautogui_win$$$function__3__position);
assert(Py_REFCNT(frame_frame_pyautogui$_pyautogui_win$$$function__3__position) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_called_instance_1 == NULL));
frame_frame_pyautogui$_pyautogui_win$$$function__3__position->m_frame.f_lineno = 343;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_POINT);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_cursor;
    var_cursor = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
tmp_expression_value_3 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_3 == NULL));
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_windll);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_GetCursorPos);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_called_instance_2 == NULL));
CHECK_OBJECT(var_cursor);
tmp_args_element_value_2 = var_cursor;
frame_frame_pyautogui$_pyautogui_win$$$function__3__position->m_frame.f_lineno = 344;
tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_byref, tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 344;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pyautogui$_pyautogui_win$$$function__3__position->m_frame.f_lineno = 344;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_cursor);
tmp_expression_value_4 = var_cursor;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_x);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_5;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_cursor);
tmp_expression_value_5 = var_cursor;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_y);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyautogui$_pyautogui_win$$$function__3__position, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyautogui$_pyautogui_win$$$function__3__position->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyautogui$_pyautogui_win$$$function__3__position, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyautogui$_pyautogui_win$$$function__3__position,
    type_description_1,
    var_cursor
);


// Release cached frame if used for exception.
if (frame_frame_pyautogui$_pyautogui_win$$$function__3__position == cache_frame_frame_pyautogui$_pyautogui_win$$$function__3__position) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyautogui$_pyautogui_win$$$function__3__position);
    cache_frame_frame_pyautogui$_pyautogui_win$$$function__3__position = NULL;
}

assertFrameObject(frame_frame_pyautogui$_pyautogui_win$$$function__3__position);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_cursor);
CHECK_OBJECT(var_cursor);
Py_DECREF(var_cursor);
var_cursor = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_cursor);
var_cursor = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyautogui$_pyautogui_win$$$function__4__size(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_pyautogui$_pyautogui_win$$$function__4__size;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyautogui$_pyautogui_win$$$function__4__size = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyautogui$_pyautogui_win$$$function__4__size)) {
    Py_XDECREF(cache_frame_frame_pyautogui$_pyautogui_win$$$function__4__size);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyautogui$_pyautogui_win$$$function__4__size == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyautogui$_pyautogui_win$$$function__4__size = MAKE_FUNCTION_FRAME(tstate, code_objects_fa0864e8b93d2b102bc24bd9b394a672, module_pyautogui$_pyautogui_win, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyautogui$_pyautogui_win$$$function__4__size->m_type_description == NULL);
frame_frame_pyautogui$_pyautogui_win$$$function__4__size = cache_frame_frame_pyautogui$_pyautogui_win$$$function__4__size;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyautogui$_pyautogui_win$$$function__4__size);
assert(Py_REFCNT(frame_frame_pyautogui$_pyautogui_win$$$function__4__size) == 2);

// Framed code:
{
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_2 == NULL));
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_windll);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;

    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;

    goto frame_exception_exit_1;
}
frame_frame_pyautogui$_pyautogui_win$$$function__4__size->m_frame.f_lineno = 354;
tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_GetSystemMetrics,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;

    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
tmp_expression_value_4 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_4 == NULL));
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_windll);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;

    goto tuple_build_exception_1;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;

    goto tuple_build_exception_1;
}
frame_frame_pyautogui$_pyautogui_win$$$function__4__size->m_frame.f_lineno = 354;
tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_GetSystemMetrics,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_1_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyautogui$_pyautogui_win$$$function__4__size, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyautogui$_pyautogui_win$$$function__4__size->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyautogui$_pyautogui_win$$$function__4__size, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyautogui$_pyautogui_win$$$function__4__size,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_pyautogui$_pyautogui_win$$$function__4__size == cache_frame_frame_pyautogui$_pyautogui_win$$$function__4__size) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyautogui$_pyautogui_win$$$function__4__size);
    cache_frame_frame_pyautogui$_pyautogui_win$$$function__4__size = NULL;
}

assertFrameObject(frame_frame_pyautogui$_pyautogui_win$$$function__4__size);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyautogui$_pyautogui_win$$$function__5__moveTo(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_y = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pyautogui$_pyautogui_win$$$function__5__moveTo;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyautogui$_pyautogui_win$$$function__5__moveTo = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyautogui$_pyautogui_win$$$function__5__moveTo)) {
    Py_XDECREF(cache_frame_frame_pyautogui$_pyautogui_win$$$function__5__moveTo);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyautogui$_pyautogui_win$$$function__5__moveTo == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyautogui$_pyautogui_win$$$function__5__moveTo = MAKE_FUNCTION_FRAME(tstate, code_objects_10aca6dd76b5ba856164b1ef9c0b6f91, module_pyautogui$_pyautogui_win, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyautogui$_pyautogui_win$$$function__5__moveTo->m_type_description == NULL);
frame_frame_pyautogui$_pyautogui_win$$$function__5__moveTo = cache_frame_frame_pyautogui$_pyautogui_win$$$function__5__moveTo;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyautogui$_pyautogui_win$$$function__5__moveTo);
assert(Py_REFCNT(frame_frame_pyautogui$_pyautogui_win$$$function__5__moveTo) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_2 == NULL));
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_windll);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_args_element_value_1 = par_x;
CHECK_OBJECT(par_y);
tmp_args_element_value_2 = par_y;
frame_frame_pyautogui$_pyautogui_win$$$function__5__moveTo->m_frame.f_lineno = 369;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_SetCursorPos,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyautogui$_pyautogui_win$$$function__5__moveTo, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyautogui$_pyautogui_win$$$function__5__moveTo->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyautogui$_pyautogui_win$$$function__5__moveTo, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyautogui$_pyautogui_win$$$function__5__moveTo,
    type_description_1,
    par_x,
    par_y
);


// Release cached frame if used for exception.
if (frame_frame_pyautogui$_pyautogui_win$$$function__5__moveTo == cache_frame_frame_pyautogui$_pyautogui_win$$$function__5__moveTo) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyautogui$_pyautogui_win$$$function__5__moveTo);
    cache_frame_frame_pyautogui$_pyautogui_win$$$function__5__moveTo = NULL;
}

assertFrameObject(frame_frame_pyautogui$_pyautogui_win$$$function__5__moveTo);

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
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyautogui$_pyautogui_win$$$function__6__mouseDown(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_y = python_pars[1];
PyObject *par_button = python_pars[2];
PyObject *var_EV = NULL;
struct Nuitka_FrameObject *frame_frame_pyautogui$_pyautogui_win$$$function__6__mouseDown;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_pyautogui$_pyautogui_win$$$function__6__mouseDown = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pyautogui$_pyautogui_win$$$function__6__mouseDown)) {
    Py_XDECREF(cache_frame_frame_pyautogui$_pyautogui_win$$$function__6__mouseDown);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyautogui$_pyautogui_win$$$function__6__mouseDown == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyautogui$_pyautogui_win$$$function__6__mouseDown = MAKE_FUNCTION_FRAME(tstate, code_objects_d3385933638c9bf71d45d3e27cfa90a5, module_pyautogui$_pyautogui_win, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyautogui$_pyautogui_win$$$function__6__mouseDown->m_type_description == NULL);
frame_frame_pyautogui$_pyautogui_win$$$function__6__mouseDown = cache_frame_frame_pyautogui$_pyautogui_win$$$function__6__mouseDown;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyautogui$_pyautogui_win$$$function__6__mouseDown);
assert(Py_REFCNT(frame_frame_pyautogui$_pyautogui_win$$$function__6__mouseDown) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_button);
tmp_cmp_expr_left_1 = par_button;
tmp_tuple_element_1 = module_var_accessor_pyautogui$_pyautogui_win$LEFT(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LEFT);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 387;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_pyautogui$_pyautogui_win$MIDDLE(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MIDDLE);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 387;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_pyautogui$_pyautogui_win$RIGHT(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RIGHT);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 387;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 2, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_cmp_expr_right_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;
type_description_1 = "oooo";
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
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_bcaaff7fb94df1974f7c38ba75730478;
CHECK_OBJECT(par_button);
tmp_mod_expr_right_1 = par_button;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_pyautogui$_pyautogui_win$$$function__6__mouseDown->m_frame.f_lineno = 388;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 388;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_button);
tmp_cmp_expr_left_2 = par_button;
tmp_cmp_expr_right_2 = module_var_accessor_pyautogui$_pyautogui_win$LEFT(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LEFT);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 390;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
type_description_1 = "oooo";
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
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = module_var_accessor_pyautogui$_pyautogui_win$MOUSEEVENTF_LEFTDOWN(tstate);
if (unlikely(tmp_assign_source_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MOUSEEVENTF_LEFTDOWN);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 391;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_EV;
    var_EV = tmp_assign_source_1;
    Py_INCREF(var_EV);
    Py_XDECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_button);
tmp_cmp_expr_left_3 = par_button;
tmp_cmp_expr_right_3 = module_var_accessor_pyautogui$_pyautogui_win$MIDDLE(tstate);
if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MIDDLE);
}

if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 392;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "oooo";
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
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_var_accessor_pyautogui$_pyautogui_win$MOUSEEVENTF_MIDDLEDOWN(tstate);
if (unlikely(tmp_assign_source_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MOUSEEVENTF_MIDDLEDOWN);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 393;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_EV;
    var_EV = tmp_assign_source_2;
    Py_INCREF(var_EV);
    Py_XDECREF(old);
}

}
goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(par_button);
tmp_cmp_expr_left_4 = par_button;
tmp_cmp_expr_right_4 = module_var_accessor_pyautogui$_pyautogui_win$RIGHT(tstate);
if (unlikely(tmp_cmp_expr_right_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RIGHT);
}

if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 394;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 394;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = module_var_accessor_pyautogui$_pyautogui_win$MOUSEEVENTF_RIGHTDOWN(tstate);
if (unlikely(tmp_assign_source_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MOUSEEVENTF_RIGHTDOWN);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 395;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_EV;
    var_EV = tmp_assign_source_3;
    Py_INCREF(var_EV);
    Py_XDECREF(old);
}

}
branch_no_4:;
branch_end_3:;
branch_end_2:;
// Tried code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_1 = module_var_accessor_pyautogui$_pyautogui_win$_sendMouseEvent(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__sendMouseEvent);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 398;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
if (var_EV == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EV);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 398;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_args_element_value_1 = var_EV;
CHECK_OBJECT(par_x);
tmp_args_element_value_2 = par_x;
CHECK_OBJECT(par_y);
tmp_args_element_value_3 = par_y;
frame_frame_pyautogui$_pyautogui_win$$$function__6__mouseDown->m_frame.f_lineno = 398;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 398;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyautogui$_pyautogui_win$$$function__6__mouseDown, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyautogui$_pyautogui_win$$$function__6__mouseDown, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = EXC_TYPE(tstate);
tmp_cmp_expr_right_5 = mod_consts.const_tuple_type_PermissionError_type_OSError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 399;
type_description_1 = "oooo";
    goto try_except_handler_3;
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
    exception_lineno = 397;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pyautogui$_pyautogui_win$$$function__6__mouseDown->m_frame)) {
        frame_frame_pyautogui$_pyautogui_win$$$function__6__mouseDown->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_3;
branch_no_5:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pyautogui$_pyautogui_win$$$function__6__mouseDown, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyautogui$_pyautogui_win$$$function__6__mouseDown->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyautogui$_pyautogui_win$$$function__6__mouseDown, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyautogui$_pyautogui_win$$$function__6__mouseDown,
    type_description_1,
    par_x,
    par_y,
    par_button,
    var_EV
);


// Release cached frame if used for exception.
if (frame_frame_pyautogui$_pyautogui_win$$$function__6__mouseDown == cache_frame_frame_pyautogui$_pyautogui_win$$$function__6__mouseDown) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyautogui$_pyautogui_win$$$function__6__mouseDown);
    cache_frame_frame_pyautogui$_pyautogui_win$$$function__6__mouseDown = NULL;
}

assertFrameObject(frame_frame_pyautogui$_pyautogui_win$$$function__6__mouseDown);

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
Py_XDECREF(var_EV);
var_EV = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_EV);
var_EV = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
CHECK_OBJECT(par_button);
Py_DECREF(par_button);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
CHECK_OBJECT(par_button);
Py_DECREF(par_button);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyautogui$_pyautogui_win$$$function__7__mouseUp(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_y = python_pars[1];
PyObject *par_button = python_pars[2];
PyObject *var_EV = NULL;
struct Nuitka_FrameObject *frame_frame_pyautogui$_pyautogui_win$$$function__7__mouseUp;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_pyautogui$_pyautogui_win$$$function__7__mouseUp = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pyautogui$_pyautogui_win$$$function__7__mouseUp)) {
    Py_XDECREF(cache_frame_frame_pyautogui$_pyautogui_win$$$function__7__mouseUp);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyautogui$_pyautogui_win$$$function__7__mouseUp == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyautogui$_pyautogui_win$$$function__7__mouseUp = MAKE_FUNCTION_FRAME(tstate, code_objects_8388452b3192b143ec9620022d4f9aec, module_pyautogui$_pyautogui_win, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyautogui$_pyautogui_win$$$function__7__mouseUp->m_type_description == NULL);
frame_frame_pyautogui$_pyautogui_win$$$function__7__mouseUp = cache_frame_frame_pyautogui$_pyautogui_win$$$function__7__mouseUp;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyautogui$_pyautogui_win$$$function__7__mouseUp);
assert(Py_REFCNT(frame_frame_pyautogui$_pyautogui_win$$$function__7__mouseUp) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_button);
tmp_cmp_expr_left_1 = par_button;
tmp_tuple_element_1 = module_var_accessor_pyautogui$_pyautogui_win$LEFT(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LEFT);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 416;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_pyautogui$_pyautogui_win$MIDDLE(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MIDDLE);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 416;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_pyautogui$_pyautogui_win$RIGHT(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RIGHT);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 416;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 2, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_cmp_expr_right_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oooo";
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
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_bcaaff7fb94df1974f7c38ba75730478;
CHECK_OBJECT(par_button);
tmp_mod_expr_right_1 = par_button;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_pyautogui$_pyautogui_win$$$function__7__mouseUp->m_frame.f_lineno = 417;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 417;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_button);
tmp_cmp_expr_left_2 = par_button;
tmp_cmp_expr_right_2 = module_var_accessor_pyautogui$_pyautogui_win$LEFT(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LEFT);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 419;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;
type_description_1 = "oooo";
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
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = module_var_accessor_pyautogui$_pyautogui_win$MOUSEEVENTF_LEFTUP(tstate);
if (unlikely(tmp_assign_source_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MOUSEEVENTF_LEFTUP);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 420;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_EV;
    var_EV = tmp_assign_source_1;
    Py_INCREF(var_EV);
    Py_XDECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_button);
tmp_cmp_expr_left_3 = par_button;
tmp_cmp_expr_right_3 = module_var_accessor_pyautogui$_pyautogui_win$MIDDLE(tstate);
if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MIDDLE);
}

if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 421;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_1 = "oooo";
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
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_var_accessor_pyautogui$_pyautogui_win$MOUSEEVENTF_MIDDLEUP(tstate);
if (unlikely(tmp_assign_source_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MOUSEEVENTF_MIDDLEUP);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 422;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_EV;
    var_EV = tmp_assign_source_2;
    Py_INCREF(var_EV);
    Py_XDECREF(old);
}

}
goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(par_button);
tmp_cmp_expr_left_4 = par_button;
tmp_cmp_expr_right_4 = module_var_accessor_pyautogui$_pyautogui_win$RIGHT(tstate);
if (unlikely(tmp_cmp_expr_right_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RIGHT);
}

if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 423;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = module_var_accessor_pyautogui$_pyautogui_win$MOUSEEVENTF_RIGHTUP(tstate);
if (unlikely(tmp_assign_source_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MOUSEEVENTF_RIGHTUP);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 424;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_EV;
    var_EV = tmp_assign_source_3;
    Py_INCREF(var_EV);
    Py_XDECREF(old);
}

}
branch_no_4:;
branch_end_3:;
branch_end_2:;
// Tried code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_1 = module_var_accessor_pyautogui$_pyautogui_win$_sendMouseEvent(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__sendMouseEvent);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 427;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
if (var_EV == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EV);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 427;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_args_element_value_1 = var_EV;
CHECK_OBJECT(par_x);
tmp_args_element_value_2 = par_x;
CHECK_OBJECT(par_y);
tmp_args_element_value_3 = par_y;
frame_frame_pyautogui$_pyautogui_win$$$function__7__mouseUp->m_frame.f_lineno = 427;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 427;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyautogui$_pyautogui_win$$$function__7__mouseUp, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyautogui$_pyautogui_win$$$function__7__mouseUp, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = EXC_TYPE(tstate);
tmp_cmp_expr_right_5 = mod_consts.const_tuple_type_PermissionError_type_OSError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 428;
type_description_1 = "oooo";
    goto try_except_handler_3;
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
    exception_lineno = 426;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pyautogui$_pyautogui_win$$$function__7__mouseUp->m_frame)) {
        frame_frame_pyautogui$_pyautogui_win$$$function__7__mouseUp->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_3;
branch_no_5:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pyautogui$_pyautogui_win$$$function__7__mouseUp, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyautogui$_pyautogui_win$$$function__7__mouseUp->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyautogui$_pyautogui_win$$$function__7__mouseUp, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyautogui$_pyautogui_win$$$function__7__mouseUp,
    type_description_1,
    par_x,
    par_y,
    par_button,
    var_EV
);


// Release cached frame if used for exception.
if (frame_frame_pyautogui$_pyautogui_win$$$function__7__mouseUp == cache_frame_frame_pyautogui$_pyautogui_win$$$function__7__mouseUp) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyautogui$_pyautogui_win$$$function__7__mouseUp);
    cache_frame_frame_pyautogui$_pyautogui_win$$$function__7__mouseUp = NULL;
}

assertFrameObject(frame_frame_pyautogui$_pyautogui_win$$$function__7__mouseUp);

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
Py_XDECREF(var_EV);
var_EV = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_EV);
var_EV = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
CHECK_OBJECT(par_button);
Py_DECREF(par_button);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
CHECK_OBJECT(par_button);
Py_DECREF(par_button);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyautogui$_pyautogui_win$$$function__8__click(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_y = python_pars[1];
PyObject *par_button = python_pars[2];
PyObject *var_EV = NULL;
struct Nuitka_FrameObject *frame_frame_pyautogui$_pyautogui_win$$$function__8__click;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_pyautogui$_pyautogui_win$$$function__8__click = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pyautogui$_pyautogui_win$$$function__8__click)) {
    Py_XDECREF(cache_frame_frame_pyautogui$_pyautogui_win$$$function__8__click);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyautogui$_pyautogui_win$$$function__8__click == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyautogui$_pyautogui_win$$$function__8__click = MAKE_FUNCTION_FRAME(tstate, code_objects_620e5c0cef9d029c9ed1d22615ed893f, module_pyautogui$_pyautogui_win, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyautogui$_pyautogui_win$$$function__8__click->m_type_description == NULL);
frame_frame_pyautogui$_pyautogui_win$$$function__8__click = cache_frame_frame_pyautogui$_pyautogui_win$$$function__8__click;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyautogui$_pyautogui_win$$$function__8__click);
assert(Py_REFCNT(frame_frame_pyautogui$_pyautogui_win$$$function__8__click) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_button);
tmp_cmp_expr_left_1 = par_button;
tmp_tuple_element_1 = module_var_accessor_pyautogui$_pyautogui_win$LEFT(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LEFT);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 444;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_pyautogui$_pyautogui_win$MIDDLE(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MIDDLE);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 444;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_pyautogui$_pyautogui_win$RIGHT(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RIGHT);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 444;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 2, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_cmp_expr_right_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_1 = "oooo";
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
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_bcaaff7fb94df1974f7c38ba75730478;
CHECK_OBJECT(par_button);
tmp_mod_expr_right_1 = par_button;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_pyautogui$_pyautogui_win$$$function__8__click->m_frame.f_lineno = 445;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 445;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_button);
tmp_cmp_expr_left_2 = par_button;
tmp_cmp_expr_right_2 = module_var_accessor_pyautogui$_pyautogui_win$LEFT(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LEFT);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 447;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 447;
type_description_1 = "oooo";
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
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = module_var_accessor_pyautogui$_pyautogui_win$MOUSEEVENTF_LEFTCLICK(tstate);
if (unlikely(tmp_assign_source_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MOUSEEVENTF_LEFTCLICK);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 448;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_EV;
    var_EV = tmp_assign_source_1;
    Py_INCREF(var_EV);
    Py_XDECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_button);
tmp_cmp_expr_left_3 = par_button;
tmp_cmp_expr_right_3 = module_var_accessor_pyautogui$_pyautogui_win$MIDDLE(tstate);
if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MIDDLE);
}

if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 449;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 449;
type_description_1 = "oooo";
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
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_var_accessor_pyautogui$_pyautogui_win$MOUSEEVENTF_MIDDLECLICK(tstate);
if (unlikely(tmp_assign_source_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MOUSEEVENTF_MIDDLECLICK);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 450;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_EV;
    var_EV = tmp_assign_source_2;
    Py_INCREF(var_EV);
    Py_XDECREF(old);
}

}
goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(par_button);
tmp_cmp_expr_left_4 = par_button;
tmp_cmp_expr_right_4 = module_var_accessor_pyautogui$_pyautogui_win$RIGHT(tstate);
if (unlikely(tmp_cmp_expr_right_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RIGHT);
}

if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 451;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = module_var_accessor_pyautogui$_pyautogui_win$MOUSEEVENTF_RIGHTCLICK(tstate);
if (unlikely(tmp_assign_source_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MOUSEEVENTF_RIGHTCLICK);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 452;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_EV;
    var_EV = tmp_assign_source_3;
    Py_INCREF(var_EV);
    Py_XDECREF(old);
}

}
branch_no_4:;
branch_end_3:;
branch_end_2:;
// Tried code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_1 = module_var_accessor_pyautogui$_pyautogui_win$_sendMouseEvent(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__sendMouseEvent);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 455;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
if (var_EV == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EV);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 455;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_args_element_value_1 = var_EV;
CHECK_OBJECT(par_x);
tmp_args_element_value_2 = par_x;
CHECK_OBJECT(par_y);
tmp_args_element_value_3 = par_y;
frame_frame_pyautogui$_pyautogui_win$$$function__8__click->m_frame.f_lineno = 455;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyautogui$_pyautogui_win$$$function__8__click, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyautogui$_pyautogui_win$$$function__8__click, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = EXC_TYPE(tstate);
tmp_cmp_expr_right_5 = mod_consts.const_tuple_type_PermissionError_type_OSError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 456;
type_description_1 = "oooo";
    goto try_except_handler_3;
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
    exception_lineno = 454;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pyautogui$_pyautogui_win$$$function__8__click->m_frame)) {
        frame_frame_pyautogui$_pyautogui_win$$$function__8__click->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_3;
branch_no_5:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pyautogui$_pyautogui_win$$$function__8__click, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyautogui$_pyautogui_win$$$function__8__click->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyautogui$_pyautogui_win$$$function__8__click, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyautogui$_pyautogui_win$$$function__8__click,
    type_description_1,
    par_x,
    par_y,
    par_button,
    var_EV
);


// Release cached frame if used for exception.
if (frame_frame_pyautogui$_pyautogui_win$$$function__8__click == cache_frame_frame_pyautogui$_pyautogui_win$$$function__8__click) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyautogui$_pyautogui_win$$$function__8__click);
    cache_frame_frame_pyautogui$_pyautogui_win$$$function__8__click = NULL;
}

assertFrameObject(frame_frame_pyautogui$_pyautogui_win$$$function__8__click);

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
Py_XDECREF(var_EV);
var_EV = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_EV);
var_EV = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
CHECK_OBJECT(par_button);
Py_DECREF(par_button);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
CHECK_OBJECT(par_button);
Py_DECREF(par_button);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyautogui$_pyautogui_win$$$function__9__mouse_is_swapped(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_pyautogui$_pyautogui_win$$$function__9__mouse_is_swapped;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyautogui$_pyautogui_win$$$function__9__mouse_is_swapped = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyautogui$_pyautogui_win$$$function__9__mouse_is_swapped)) {
    Py_XDECREF(cache_frame_frame_pyautogui$_pyautogui_win$$$function__9__mouse_is_swapped);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyautogui$_pyautogui_win$$$function__9__mouse_is_swapped == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyautogui$_pyautogui_win$$$function__9__mouse_is_swapped = MAKE_FUNCTION_FRAME(tstate, code_objects_cd935cb9a98fee09cf9333d1878ca30e, module_pyautogui$_pyautogui_win, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyautogui$_pyautogui_win$$$function__9__mouse_is_swapped->m_type_description == NULL);
frame_frame_pyautogui$_pyautogui_win$$$function__9__mouse_is_swapped = cache_frame_frame_pyautogui$_pyautogui_win$$$function__9__mouse_is_swapped;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyautogui$_pyautogui_win$$$function__9__mouse_is_swapped);
assert(Py_REFCNT(frame_frame_pyautogui$_pyautogui_win$$$function__9__mouse_is_swapped) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_2 == NULL));
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_windll);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 464;

    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 464;

    goto frame_exception_exit_1;
}
frame_frame_pyautogui$_pyautogui_win$$$function__9__mouse_is_swapped->m_frame.f_lineno = 464;
tmp_cmp_expr_left_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_GetSystemMetrics,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_23_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 464;

    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = const_int_0;
tmp_return_value = RICH_COMPARE_NE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 464;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyautogui$_pyautogui_win$$$function__9__mouse_is_swapped, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyautogui$_pyautogui_win$$$function__9__mouse_is_swapped->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyautogui$_pyautogui_win$$$function__9__mouse_is_swapped, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyautogui$_pyautogui_win$$$function__9__mouse_is_swapped,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_pyautogui$_pyautogui_win$$$function__9__mouse_is_swapped == cache_frame_frame_pyautogui$_pyautogui_win$$$function__9__mouse_is_swapped) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyautogui$_pyautogui_win$$$function__9__mouse_is_swapped);
    cache_frame_frame_pyautogui$_pyautogui_win$$$function__9__mouse_is_swapped = NULL;
}

assertFrameObject(frame_frame_pyautogui$_pyautogui_win$$$function__9__mouse_is_swapped);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyautogui$_pyautogui_win$$$function__10__sendMouseEvent(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_ev = python_pars[0];
PyObject *par_x = python_pars[1];
PyObject *par_y = python_pars[2];
PyObject *par_dwData = python_pars[3];
PyObject *var_width = NULL;
PyObject *var_height = NULL;
PyObject *var_convertedX = NULL;
PyObject *var_convertedY = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_pyautogui$_pyautogui_win$$$function__10__sendMouseEvent;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_pyautogui$_pyautogui_win$$$function__10__sendMouseEvent = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pyautogui$_pyautogui_win$$$function__10__sendMouseEvent)) {
    Py_XDECREF(cache_frame_frame_pyautogui$_pyautogui_win$$$function__10__sendMouseEvent);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyautogui$_pyautogui_win$$$function__10__sendMouseEvent == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyautogui$_pyautogui_win$$$function__10__sendMouseEvent = MAKE_FUNCTION_FRAME(tstate, code_objects_3a66777896150b7ab5e703dc76c25719, module_pyautogui$_pyautogui_win, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyautogui$_pyautogui_win$$$function__10__sendMouseEvent->m_type_description == NULL);
frame_frame_pyautogui$_pyautogui_win$$$function__10__sendMouseEvent = cache_frame_frame_pyautogui$_pyautogui_win$$$function__10__sendMouseEvent;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyautogui$_pyautogui_win$$$function__10__sendMouseEvent);
assert(Py_REFCNT(frame_frame_pyautogui$_pyautogui_win$$$function__10__sendMouseEvent) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_x);
tmp_cmp_expr_left_1 = par_x;
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_and_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 481;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_1);

exception_lineno = 481;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(tmp_and_left_value_1);
Py_DECREF(tmp_and_left_value_1);
CHECK_OBJECT(par_y);
tmp_cmp_expr_left_2 = par_y;
tmp_cmp_expr_right_2 = Py_None;
tmp_and_right_value_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_and_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 481;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_operand_value_1 = tmp_and_left_value_1;
and_end_1:;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 481;
type_description_1 = "oooooooo";
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
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_a58fc1e34a08e935a715ad6ef16f27f1;
frame_frame_pyautogui$_pyautogui_win$$$function__10__sendMouseEvent->m_frame.f_lineno = 481;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AssertionError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 481;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_pyautogui$_pyautogui_win$_size(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__size);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 497;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
frame_frame_pyautogui$_pyautogui_win$$$function__10__sendMouseEvent->m_frame.f_lineno = 497;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 497;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 497;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
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



exception_lineno = 497;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
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



exception_lineno = 497;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
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



exception_lineno = 497;
type_description_1 = "oooooooo";
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
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_width;
    var_width = tmp_assign_source_4;
    Py_INCREF(var_width);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_height;
    var_height = tmp_assign_source_5;
    Py_INCREF(var_height);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_6;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_floordiv_expr_left_1;
PyObject *tmp_floordiv_expr_right_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
tmp_mult_expr_left_1 = mod_consts.const_int_pos_65536;
CHECK_OBJECT(par_x);
tmp_mult_expr_right_1 = par_x;
tmp_floordiv_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
if (tmp_floordiv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_width);
tmp_floordiv_expr_right_1 = var_width;
tmp_add_expr_left_1 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
CHECK_OBJECT(tmp_floordiv_expr_left_1);
Py_DECREF(tmp_floordiv_expr_left_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = const_int_pos_1;
tmp_assign_source_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_convertedX;
    var_convertedX = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_floordiv_expr_left_2;
PyObject *tmp_floordiv_expr_right_2;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
tmp_mult_expr_left_2 = mod_consts.const_int_pos_65536;
CHECK_OBJECT(par_y);
tmp_mult_expr_right_2 = par_y;
tmp_floordiv_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
if (tmp_floordiv_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 499;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_height);
tmp_floordiv_expr_right_2 = var_height;
tmp_add_expr_left_2 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_floordiv_expr_left_2, tmp_floordiv_expr_right_2);
CHECK_OBJECT(tmp_floordiv_expr_left_2);
Py_DECREF(tmp_floordiv_expr_left_2);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 499;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_2 = const_int_pos_1;
tmp_assign_source_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 499;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_convertedY;
    var_convertedY = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_expression_value_3 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_3 == NULL));
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_windll);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 500;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 500;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_mouse_event);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 500;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ev);
tmp_args_element_value_1 = par_ev;
tmp_called_instance_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_called_instance_1 == NULL));
CHECK_OBJECT(var_convertedX);
tmp_args_element_value_3 = var_convertedX;
frame_frame_pyautogui$_pyautogui_win$$$function__10__sendMouseEvent->m_frame.f_lineno = 500;
tmp_args_element_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_c_long, tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 500;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_called_instance_2 == NULL));
CHECK_OBJECT(var_convertedY);
tmp_args_element_value_5 = var_convertedY;
frame_frame_pyautogui$_pyautogui_win$$$function__10__sendMouseEvent->m_frame.f_lineno = 500;
tmp_args_element_value_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_c_long, tmp_args_element_value_5);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 500;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_dwData);
tmp_args_element_value_6 = par_dwData;
tmp_args_element_value_7 = const_int_0;
frame_frame_pyautogui$_pyautogui_win$$$function__10__sendMouseEvent->m_frame.f_lineno = 500;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_4, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 500;
type_description_1 = "oooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyautogui$_pyautogui_win$$$function__10__sendMouseEvent, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyautogui$_pyautogui_win$$$function__10__sendMouseEvent->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyautogui$_pyautogui_win$$$function__10__sendMouseEvent, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyautogui$_pyautogui_win$$$function__10__sendMouseEvent,
    type_description_1,
    par_ev,
    par_x,
    par_y,
    par_dwData,
    var_width,
    var_height,
    var_convertedX,
    var_convertedY
);


// Release cached frame if used for exception.
if (frame_frame_pyautogui$_pyautogui_win$$$function__10__sendMouseEvent == cache_frame_frame_pyautogui$_pyautogui_win$$$function__10__sendMouseEvent) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyautogui$_pyautogui_win$$$function__10__sendMouseEvent);
    cache_frame_frame_pyautogui$_pyautogui_win$$$function__10__sendMouseEvent = NULL;
}

assertFrameObject(frame_frame_pyautogui$_pyautogui_win$$$function__10__sendMouseEvent);

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
CHECK_OBJECT(var_width);
CHECK_OBJECT(var_width);
Py_DECREF(var_width);
var_width = NULL;
CHECK_OBJECT(var_height);
CHECK_OBJECT(var_height);
Py_DECREF(var_height);
var_height = NULL;
CHECK_OBJECT(var_convertedX);
CHECK_OBJECT(var_convertedX);
Py_DECREF(var_convertedX);
var_convertedX = NULL;
CHECK_OBJECT(var_convertedY);
CHECK_OBJECT(var_convertedY);
Py_DECREF(var_convertedY);
var_convertedY = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_width);
var_width = NULL;
Py_XDECREF(var_height);
var_height = NULL;
Py_XDECREF(var_convertedX);
var_convertedX = NULL;
Py_XDECREF(var_convertedY);
var_convertedY = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_ev);
Py_DECREF(par_ev);
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
CHECK_OBJECT(par_dwData);
Py_DECREF(par_dwData);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_ev);
Py_DECREF(par_ev);
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
CHECK_OBJECT(par_dwData);
Py_DECREF(par_dwData);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyautogui$_pyautogui_win$$$function__11__scroll(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_clicks = python_pars[0];
PyObject *par_x = python_pars[1];
PyObject *par_y = python_pars[2];
PyObject *var_startx = NULL;
PyObject *var_starty = NULL;
PyObject *var_width = NULL;
PyObject *var_height = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_pyautogui$_pyautogui_win$$$function__11__scroll;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
static struct Nuitka_FrameObject *cache_frame_frame_pyautogui$_pyautogui_win$$$function__11__scroll = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pyautogui$_pyautogui_win$$$function__11__scroll)) {
    Py_XDECREF(cache_frame_frame_pyautogui$_pyautogui_win$$$function__11__scroll);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyautogui$_pyautogui_win$$$function__11__scroll == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyautogui$_pyautogui_win$$$function__11__scroll = MAKE_FUNCTION_FRAME(tstate, code_objects_fc0df964ef3732bb53e7e3c3dbe6a9c3, module_pyautogui$_pyautogui_win, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyautogui$_pyautogui_win$$$function__11__scroll->m_type_description == NULL);
frame_frame_pyautogui$_pyautogui_win$$$function__11__scroll = cache_frame_frame_pyautogui$_pyautogui_win$$$function__11__scroll;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyautogui$_pyautogui_win$$$function__11__scroll);
assert(Py_REFCNT(frame_frame_pyautogui$_pyautogui_win$$$function__11__scroll) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_pyautogui$_pyautogui_win$_position(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__position);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 520;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
frame_frame_pyautogui$_pyautogui_win$$$function__11__scroll->m_frame.f_lineno = 520;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 520;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 520;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
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



exception_lineno = 520;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
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



exception_lineno = 520;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
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



exception_lineno = 520;
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
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_startx;
    var_startx = tmp_assign_source_4;
    Py_INCREF(var_startx);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_starty;
    var_starty = tmp_assign_source_5;
    Py_INCREF(var_starty);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_pyautogui$_pyautogui_win$_size(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__size);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 521;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
frame_frame_pyautogui$_pyautogui_win$$$function__11__scroll->m_frame.f_lineno = 521;
tmp_iter_arg_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 521;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 521;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_2__source_iter;
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 521;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_1;
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 521;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_2;
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_8;
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



exception_lineno = 521;
type_description_1 = "ooooooo";
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
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_9 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = var_width;
    var_width = tmp_assign_source_9;
    Py_INCREF(var_width);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_10 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var_height;
    var_height = tmp_assign_source_10;
    Py_INCREF(var_height);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_x);
tmp_cmp_expr_left_1 = par_x;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(var_startx);
tmp_assign_source_11 = var_startx;
{
    PyObject *old = par_x;
    assert(old != NULL);
    par_x = tmp_assign_source_11;
    Py_INCREF(par_x);
    Py_DECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_x);
tmp_cmp_expr_left_2 = par_x;
tmp_cmp_expr_right_2 = const_int_0;
tmp_condition_result_2 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 526;
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
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = const_int_0;
{
    PyObject *old = par_x;
    assert(old != NULL);
    par_x = tmp_assign_source_12;
    Py_INCREF(par_x);
    Py_DECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_x);
tmp_cmp_expr_left_3 = par_x;
CHECK_OBJECT(var_width);
tmp_cmp_expr_right_3 = var_width;
tmp_condition_result_3 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 528;
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
PyObject *tmp_assign_source_13;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
CHECK_OBJECT(var_width);
tmp_sub_expr_left_1 = var_width;
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_assign_source_13 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 529;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_x;
    assert(old != NULL);
    par_x = tmp_assign_source_13;
    Py_DECREF(old);
}

}
branch_no_3:;
branch_end_2:;
branch_end_1:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(par_y);
tmp_cmp_expr_left_4 = par_y;
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(var_starty);
tmp_assign_source_14 = var_starty;
{
    PyObject *old = par_y;
    assert(old != NULL);
    par_y = tmp_assign_source_14;
    Py_INCREF(par_y);
    Py_DECREF(old);
}

}
goto branch_end_4;
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(par_y);
tmp_cmp_expr_left_5 = par_y;
tmp_cmp_expr_right_5 = const_int_0;
tmp_condition_result_5 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 533;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = const_int_0;
{
    PyObject *old = par_y;
    assert(old != NULL);
    par_y = tmp_assign_source_15;
    Py_INCREF(par_y);
    Py_DECREF(old);
}

}
goto branch_end_5;
branch_no_5:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(par_y);
tmp_cmp_expr_left_6 = par_y;
CHECK_OBJECT(var_height);
tmp_cmp_expr_right_6 = var_height;
tmp_condition_result_6 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 535;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
CHECK_OBJECT(var_height);
tmp_sub_expr_left_2 = var_height;
tmp_sub_expr_right_2 = const_int_pos_1;
tmp_assign_source_16 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 536;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_y;
    assert(old != NULL);
    par_y = tmp_assign_source_16;
    Py_DECREF(old);
}

}
branch_no_6:;
branch_end_5:;
branch_end_4:;
// Tried code:
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_3 = module_var_accessor_pyautogui$_pyautogui_win$_sendMouseEvent(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__sendMouseEvent);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 539;
type_description_1 = "ooooooo";
    goto try_except_handler_6;
}
tmp_kw_call_arg_value_0_1 = module_var_accessor_pyautogui$_pyautogui_win$MOUSEEVENTF_WHEEL(tstate);
if (unlikely(tmp_kw_call_arg_value_0_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MOUSEEVENTF_WHEEL);
}

if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 539;
type_description_1 = "ooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(par_x);
tmp_kw_call_arg_value_1_1 = par_x;
CHECK_OBJECT(par_y);
tmp_kw_call_arg_value_2_1 = par_y;
CHECK_OBJECT(par_clicks);
tmp_kw_call_dict_value_0_1 = par_clicks;
frame_frame_pyautogui$_pyautogui_win$$$function__11__scroll->m_frame.f_lineno = 539;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_dwData_tuple);
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 539;
type_description_1 = "ooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_end_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pyautogui$_pyautogui_win$$$function__11__scroll, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyautogui$_pyautogui_win$$$function__11__scroll, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
tmp_cmp_expr_left_7 = EXC_TYPE(tstate);
tmp_cmp_expr_right_7 = mod_consts.const_tuple_type_PermissionError_type_OSError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 540;
type_description_1 = "ooooooo";
    goto try_except_handler_7;
}
tmp_condition_result_7 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 538;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pyautogui$_pyautogui_win$$$function__11__scroll->m_frame)) {
        frame_frame_pyautogui$_pyautogui_win$$$function__11__scroll->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooo";
goto try_except_handler_7;
branch_no_7:;
goto try_end_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_5;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_5:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pyautogui$_pyautogui_win$$$function__11__scroll, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyautogui$_pyautogui_win$$$function__11__scroll->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyautogui$_pyautogui_win$$$function__11__scroll, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyautogui$_pyautogui_win$$$function__11__scroll,
    type_description_1,
    par_clicks,
    par_x,
    par_y,
    var_startx,
    var_starty,
    var_width,
    var_height
);


// Release cached frame if used for exception.
if (frame_frame_pyautogui$_pyautogui_win$$$function__11__scroll == cache_frame_frame_pyautogui$_pyautogui_win$$$function__11__scroll) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyautogui$_pyautogui_win$$$function__11__scroll);
    cache_frame_frame_pyautogui$_pyautogui_win$$$function__11__scroll = NULL;
}

assertFrameObject(frame_frame_pyautogui$_pyautogui_win$$$function__11__scroll);

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
CHECK_OBJECT(par_x);
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
par_x = NULL;
CHECK_OBJECT(par_y);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
par_y = NULL;
CHECK_OBJECT(var_startx);
CHECK_OBJECT(var_startx);
Py_DECREF(var_startx);
var_startx = NULL;
CHECK_OBJECT(var_starty);
CHECK_OBJECT(var_starty);
Py_DECREF(var_starty);
var_starty = NULL;
CHECK_OBJECT(var_width);
CHECK_OBJECT(var_width);
Py_DECREF(var_width);
var_width = NULL;
CHECK_OBJECT(var_height);
CHECK_OBJECT(var_height);
Py_DECREF(var_height);
var_height = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_x);
par_x = NULL;
Py_XDECREF(par_y);
par_y = NULL;
Py_XDECREF(var_startx);
var_startx = NULL;
Py_XDECREF(var_starty);
var_starty = NULL;
Py_XDECREF(var_width);
var_width = NULL;
Py_XDECREF(var_height);
var_height = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_clicks);
Py_DECREF(par_clicks);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_clicks);
Py_DECREF(par_clicks);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyautogui$_pyautogui_win$$$function__12__hscroll(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_clicks = python_pars[0];
PyObject *par_x = python_pars[1];
PyObject *par_y = python_pars[2];
struct Nuitka_FrameObject *frame_frame_pyautogui$_pyautogui_win$$$function__12__hscroll;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyautogui$_pyautogui_win$$$function__12__hscroll = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyautogui$_pyautogui_win$$$function__12__hscroll)) {
    Py_XDECREF(cache_frame_frame_pyautogui$_pyautogui_win$$$function__12__hscroll);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyautogui$_pyautogui_win$$$function__12__hscroll == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyautogui$_pyautogui_win$$$function__12__hscroll = MAKE_FUNCTION_FRAME(tstate, code_objects_86632260e6551991f8e8ba36336d11de, module_pyautogui$_pyautogui_win, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyautogui$_pyautogui_win$$$function__12__hscroll->m_type_description == NULL);
frame_frame_pyautogui$_pyautogui_win$$$function__12__hscroll = cache_frame_frame_pyautogui$_pyautogui_win$$$function__12__hscroll;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyautogui$_pyautogui_win$$$function__12__hscroll);
assert(Py_REFCNT(frame_frame_pyautogui$_pyautogui_win$$$function__12__hscroll) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_1 = module_var_accessor_pyautogui$_pyautogui_win$_scroll(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__scroll);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 557;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_clicks);
tmp_args_element_value_1 = par_clicks;
CHECK_OBJECT(par_x);
tmp_args_element_value_2 = par_x;
CHECK_OBJECT(par_y);
tmp_args_element_value_3 = par_y;
frame_frame_pyautogui$_pyautogui_win$$$function__12__hscroll->m_frame.f_lineno = 557;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 557;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyautogui$_pyautogui_win$$$function__12__hscroll, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyautogui$_pyautogui_win$$$function__12__hscroll->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyautogui$_pyautogui_win$$$function__12__hscroll, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyautogui$_pyautogui_win$$$function__12__hscroll,
    type_description_1,
    par_clicks,
    par_x,
    par_y
);


// Release cached frame if used for exception.
if (frame_frame_pyautogui$_pyautogui_win$$$function__12__hscroll == cache_frame_frame_pyautogui$_pyautogui_win$$$function__12__hscroll) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyautogui$_pyautogui_win$$$function__12__hscroll);
    cache_frame_frame_pyautogui$_pyautogui_win$$$function__12__hscroll = NULL;
}

assertFrameObject(frame_frame_pyautogui$_pyautogui_win$$$function__12__hscroll);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_clicks);
Py_DECREF(par_clicks);
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_clicks);
Py_DECREF(par_clicks);
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyautogui$_pyautogui_win$$$function__13__vscroll(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_clicks = python_pars[0];
PyObject *par_x = python_pars[1];
PyObject *par_y = python_pars[2];
struct Nuitka_FrameObject *frame_frame_pyautogui$_pyautogui_win$$$function__13__vscroll;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyautogui$_pyautogui_win$$$function__13__vscroll = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyautogui$_pyautogui_win$$$function__13__vscroll)) {
    Py_XDECREF(cache_frame_frame_pyautogui$_pyautogui_win$$$function__13__vscroll);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyautogui$_pyautogui_win$$$function__13__vscroll == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyautogui$_pyautogui_win$$$function__13__vscroll = MAKE_FUNCTION_FRAME(tstate, code_objects_82072cca1d1f9037703632eefb77464f, module_pyautogui$_pyautogui_win, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyautogui$_pyautogui_win$$$function__13__vscroll->m_type_description == NULL);
frame_frame_pyautogui$_pyautogui_win$$$function__13__vscroll = cache_frame_frame_pyautogui$_pyautogui_win$$$function__13__vscroll;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyautogui$_pyautogui_win$$$function__13__vscroll);
assert(Py_REFCNT(frame_frame_pyautogui$_pyautogui_win$$$function__13__vscroll) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_1 = module_var_accessor_pyautogui$_pyautogui_win$_scroll(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__scroll);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 572;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_clicks);
tmp_args_element_value_1 = par_clicks;
CHECK_OBJECT(par_x);
tmp_args_element_value_2 = par_x;
CHECK_OBJECT(par_y);
tmp_args_element_value_3 = par_y;
frame_frame_pyautogui$_pyautogui_win$$$function__13__vscroll->m_frame.f_lineno = 572;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 572;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyautogui$_pyautogui_win$$$function__13__vscroll, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyautogui$_pyautogui_win$$$function__13__vscroll->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyautogui$_pyautogui_win$$$function__13__vscroll, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyautogui$_pyautogui_win$$$function__13__vscroll,
    type_description_1,
    par_clicks,
    par_x,
    par_y
);


// Release cached frame if used for exception.
if (frame_frame_pyautogui$_pyautogui_win$$$function__13__vscroll == cache_frame_frame_pyautogui$_pyautogui_win$$$function__13__vscroll) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyautogui$_pyautogui_win$$$function__13__vscroll);
    cache_frame_frame_pyautogui$_pyautogui_win$$$function__13__vscroll = NULL;
}

assertFrameObject(frame_frame_pyautogui$_pyautogui_win$$$function__13__vscroll);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_clicks);
Py_DECREF(par_clicks);
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_clicks);
Py_DECREF(par_clicks);
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__10__sendMouseEvent(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyautogui$_pyautogui_win$$$function__10__sendMouseEvent,
        mod_consts.const_str_plain__sendMouseEvent,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3a66777896150b7ab5e703dc76c25719,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyautogui$_pyautogui_win,
        mod_consts.const_str_digest_6f5ba235cc10d1c9c6cae9a436523269,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__11__scroll(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyautogui$_pyautogui_win$$$function__11__scroll,
        mod_consts.const_str_plain__scroll,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_fc0df964ef3732bb53e7e3c3dbe6a9c3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyautogui$_pyautogui_win,
        mod_consts.const_str_digest_b0a03059de90af4751a7cd1279c7faad,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__12__hscroll(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyautogui$_pyautogui_win$$$function__12__hscroll,
        mod_consts.const_str_plain__hscroll,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_86632260e6551991f8e8ba36336d11de,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyautogui$_pyautogui_win,
        mod_consts.const_str_digest_a31abb96473408834e46744632bbd2fa,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__13__vscroll(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyautogui$_pyautogui_win$$$function__13__vscroll,
        mod_consts.const_str_plain__vscroll,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_82072cca1d1f9037703632eefb77464f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyautogui$_pyautogui_win,
        mod_consts.const_str_digest_bc459a963683e0631af20dd60810b4dd,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__1__keyDown(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyautogui$_pyautogui_win$$$function__1__keyDown,
        mod_consts.const_str_plain__keyDown,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_56891a14998100a29921f53ef8e46223,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyautogui$_pyautogui_win,
        mod_consts.const_str_digest_e5428430de2b82708ebcd9abc6650186,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__2__keyUp(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyautogui$_pyautogui_win$$$function__2__keyUp,
        mod_consts.const_str_plain__keyUp,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_88069d726c466e7f6884cb3f749281df,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyautogui$_pyautogui_win,
        mod_consts.const_str_digest_ad6def8bb586985bb76cbcdeebe8c4e9,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__3__position(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyautogui$_pyautogui_win$$$function__3__position,
        mod_consts.const_str_plain__position,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9ee1ec09e920cf836aef88673517b5b6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyautogui$_pyautogui_win,
        mod_consts.const_str_digest_cb5342b4d635afe5eb38c242c55784b1,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__4__size(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyautogui$_pyautogui_win$$$function__4__size,
        mod_consts.const_str_plain__size,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_fa0864e8b93d2b102bc24bd9b394a672,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyautogui$_pyautogui_win,
        mod_consts.const_str_digest_647ff2d34ac837eb32fa798e5dfec2ce,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__5__moveTo(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyautogui$_pyautogui_win$$$function__5__moveTo,
        mod_consts.const_str_plain__moveTo,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_10aca6dd76b5ba856164b1ef9c0b6f91,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyautogui$_pyautogui_win,
        mod_consts.const_str_digest_ddf5bbcba2370e85e7a5a55157445e6c,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__6__mouseDown(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyautogui$_pyautogui_win$$$function__6__mouseDown,
        mod_consts.const_str_plain__mouseDown,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d3385933638c9bf71d45d3e27cfa90a5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyautogui$_pyautogui_win,
        mod_consts.const_str_digest_22bc2b9984c5026d6b94ef38f995437e,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__7__mouseUp(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyautogui$_pyautogui_win$$$function__7__mouseUp,
        mod_consts.const_str_plain__mouseUp,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8388452b3192b143ec9620022d4f9aec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyautogui$_pyautogui_win,
        mod_consts.const_str_digest_a1725db8638a6d88a53b388d4bf4db29,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__8__click(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyautogui$_pyautogui_win$$$function__8__click,
        mod_consts.const_str_plain__click,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_620e5c0cef9d029c9ed1d22615ed893f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyautogui$_pyautogui_win,
        mod_consts.const_str_digest_ed8575c212299373cbce70f410739ca0,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__9__mouse_is_swapped(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyautogui$_pyautogui_win$$$function__9__mouse_is_swapped,
        mod_consts.const_str_plain__mouse_is_swapped,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_cd935cb9a98fee09cf9333d1878ca30e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyautogui$_pyautogui_win,
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

static function_impl_code const function_table_pyautogui$_pyautogui_win[] = {
impl_pyautogui$_pyautogui_win$$$function__1__keyDown,
impl_pyautogui$_pyautogui_win$$$function__2__keyUp,
impl_pyautogui$_pyautogui_win$$$function__3__position,
impl_pyautogui$_pyautogui_win$$$function__4__size,
impl_pyautogui$_pyautogui_win$$$function__5__moveTo,
impl_pyautogui$_pyautogui_win$$$function__6__mouseDown,
impl_pyautogui$_pyautogui_win$$$function__7__mouseUp,
impl_pyautogui$_pyautogui_win$$$function__8__click,
impl_pyautogui$_pyautogui_win$$$function__9__mouse_is_swapped,
impl_pyautogui$_pyautogui_win$$$function__10__sendMouseEvent,
impl_pyautogui$_pyautogui_win$$$function__11__scroll,
impl_pyautogui$_pyautogui_win$$$function__12__hscroll,
impl_pyautogui$_pyautogui_win$$$function__13__vscroll,
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

    return Nuitka_Function_GetFunctionState(function, function_table_pyautogui$_pyautogui_win);
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
        module_pyautogui$_pyautogui_win,
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
        function_table_pyautogui$_pyautogui_win,
        sizeof(function_table_pyautogui$_pyautogui_win) / sizeof(function_impl_code)
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
static char const *module_full_name = "pyautogui._pyautogui_win";
#endif

// Internal entry point for module code.
PyObject *module_code_pyautogui$_pyautogui_win(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pyautogui$_pyautogui_win");

    // Store the module for future use.
    module_pyautogui$_pyautogui_win = module;

    moduledict_pyautogui$_pyautogui_win = MODULE_DICT(module_pyautogui$_pyautogui_win);

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
        PRINT_STRING("pyautogui$_pyautogui_win: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("pyautogui$_pyautogui_win: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pyautogui$_pyautogui_win: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "pyautogui._pyautogui_win" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initpyautogui$_pyautogui_win\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_pyautogui$_pyautogui_win,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyautogui$_pyautogui_win,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyautogui$_pyautogui_win,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyautogui$_pyautogui_win,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyautogui$_pyautogui_win,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyautogui$_pyautogui_win);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pyautogui$_pyautogui_win);
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

        UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
PyObject *outline_4_var___class__ = NULL;
PyObject *outline_5_var_key = NULL;
PyObject *tmp_INPUT$class_container$class_creation_1__bases = NULL;
PyObject *tmp_INPUT$class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_INPUT$class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_INPUT$class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_INPUT$class_container$class_creation_1__prepared = NULL;
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
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_pyautogui$_pyautogui_win;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *locals_pyautogui$_pyautogui_win$$$class__1_MOUSEINPUT_62 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_pyautogui$_pyautogui_win$$$class__1_MOUSEINPUT_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
PyObject *locals_pyautogui$_pyautogui_win$$$class__2_KEYBDINPUT_72 = NULL;
struct Nuitka_FrameObject *frame_frame_pyautogui$_pyautogui_win$$$class__2_KEYBDINPUT_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
PyObject *locals_pyautogui$_pyautogui_win$$$class__3_HARDWAREINPUT_81 = NULL;
struct Nuitka_FrameObject *frame_frame_pyautogui$_pyautogui_win$$$class__3_HARDWAREINPUT_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
PyObject *locals_pyautogui$_pyautogui_win$$$class__4_INPUT_88 = NULL;
struct Nuitka_FrameObject *frame_frame_pyautogui$_pyautogui_win$$$class__4_INPUT_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
PyObject *locals_pyautogui$_pyautogui_win$$$class__5__I_89 = NULL;
struct Nuitka_FrameObject *frame_frame_pyautogui$_pyautogui_win$$$class__5__I_6;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_pyautogui$_pyautogui_win = MAKE_MODULE_FRAME(code_objects_e82bd0ede9f9f06e9f5af4d03df05408, module_pyautogui$_pyautogui_win);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyautogui$_pyautogui_win);
assert(Py_REFCNT(frame_frame_pyautogui$_pyautogui_win) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_pyautogui$_pyautogui_win$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_pyautogui$_pyautogui_win$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_CTYPES();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_ctypes, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_pyautogui;
tmp_globals_arg_value_1 = (PyObject *)moduledict_pyautogui$_pyautogui_win;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_pyautogui$_pyautogui_win->m_frame.f_lineno = 7;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_pyautogui, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_pyautogui;
tmp_globals_arg_value_2 = (PyObject *)moduledict_pyautogui$_pyautogui_win;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_LEFT_str_plain_MIDDLE_str_plain_RIGHT_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_pyautogui$_pyautogui_win->m_frame.f_lineno = 8;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
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
        (PyObject *)moduledict_pyautogui$_pyautogui_win,
        mod_consts.const_str_plain_LEFT,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_LEFT);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_LEFT, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_pyautogui$_pyautogui_win,
        mod_consts.const_str_plain_MIDDLE,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_MIDDLE);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MIDDLE, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_pyautogui$_pyautogui_win,
        mod_consts.const_str_plain_RIGHT,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_RIGHT);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_RIGHT, tmp_assign_source_10);
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
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_11 == NULL));
UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_11);
}
// Tried code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
IMPORT_HARD_CTYPES__WINTYPES();
tmp_expression_value_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_2 == NULL));
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_windll);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_2;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_2;
}
frame_frame_pyautogui$_pyautogui_win->m_frame.f_lineno = 17;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_SetProcessDPIAware);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pyautogui$_pyautogui_win, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyautogui$_pyautogui_win, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_2);
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
    exception_lineno = 16;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pyautogui$_pyautogui_win->m_frame)) {
        frame_frame_pyautogui$_pyautogui_win->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_3;
branch_no_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = const_int_pos_1;
UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_MOVE, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = mod_consts.const_int_pos_2;
UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_LEFTDOWN, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = mod_consts.const_int_pos_4;
UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_LEFTUP, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
tmp_add_expr_left_1 = module_var_accessor_pyautogui$_pyautogui_win$MOUSEEVENTF_LEFTDOWN(tstate);
assert(!(tmp_add_expr_left_1 == NULL));
tmp_add_expr_right_1 = module_var_accessor_pyautogui$_pyautogui_win$MOUSEEVENTF_LEFTUP(tstate);
assert(!(tmp_add_expr_right_1 == NULL));
tmp_assign_source_15 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
assert(!(tmp_assign_source_15 == NULL));
UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_LEFTCLICK, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = mod_consts.const_int_pos_8;
UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_RIGHTDOWN, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = mod_consts.const_int_pos_16;
UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_RIGHTUP, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
tmp_add_expr_left_2 = module_var_accessor_pyautogui$_pyautogui_win$MOUSEEVENTF_RIGHTDOWN(tstate);
assert(!(tmp_add_expr_left_2 == NULL));
tmp_add_expr_right_2 = module_var_accessor_pyautogui$_pyautogui_win$MOUSEEVENTF_RIGHTUP(tstate);
assert(!(tmp_add_expr_right_2 == NULL));
tmp_assign_source_18 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
assert(!(tmp_assign_source_18 == NULL));
UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_RIGHTCLICK, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = mod_consts.const_int_pos_32;
UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_MIDDLEDOWN, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = mod_consts.const_int_pos_64;
UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_MIDDLEUP, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
tmp_add_expr_left_3 = module_var_accessor_pyautogui$_pyautogui_win$MOUSEEVENTF_MIDDLEDOWN(tstate);
assert(!(tmp_add_expr_left_3 == NULL));
tmp_add_expr_right_3 = module_var_accessor_pyautogui$_pyautogui_win$MOUSEEVENTF_MIDDLEUP(tstate);
assert(!(tmp_add_expr_right_3 == NULL));
tmp_assign_source_21 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
assert(!(tmp_assign_source_21 == NULL));
UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_MIDDLECLICK, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = mod_consts.const_int_pos_32768;
UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_ABSOLUTE, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = mod_consts.const_int_pos_2048;
UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_WHEEL, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = mod_consts.const_int_pos_4096;
UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEEVENTF_HWHEEL, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = const_int_0;
UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_KEYEVENTF_KEYDOWN, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = mod_consts.const_int_pos_2;
UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_KEYEVENTF_KEYUP, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = const_int_0;
UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_INPUT_MOUSE, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = const_int_pos_1;
UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_INPUT_KEYBOARD, tmp_assign_source_28);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_29;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_3;
IMPORT_HARD_CTYPES__WINTYPES();
tmp_expression_value_3 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_3 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_Structure);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_4;
}
tmp_assign_source_29 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_29, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_29;
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_30 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_30;
}
{
PyObject *tmp_assign_source_31;
tmp_assign_source_31 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_31;
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_4;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_4 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_4;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_4;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_32 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_32;
}
{
bool tmp_condition_result_3;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_4;
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
PyObject *tmp_assign_source_33;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_4;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_MOUSEINPUT;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_pyautogui$_pyautogui_win->m_frame.f_lineno = 62;
tmp_assign_source_33 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_33;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_7 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_7, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_4;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
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
PyObject *tmp_expression_value_8;
PyObject *tmp_name_value_3;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_8 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_3 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_8, tmp_name_value_3, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_4;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_9;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_9 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_9 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_4;
}
frame_frame_pyautogui$_pyautogui_win->m_frame.f_lineno = 62;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 62;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_4;
}
branch_no_3:;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_34;
tmp_assign_source_34 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_34;
}
branch_end_2:;
{
PyObject *tmp_assign_source_35;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_pyautogui$_pyautogui_win$$$class__1_MOUSEINPUT_62 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_e64a4354945d8630712c79dfd53962a2;
tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__1_MOUSEINPUT_62, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_plain_MOUSEINPUT;
tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__1_MOUSEINPUT_62, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_int_pos_62;
tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__1_MOUSEINPUT_62, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_6;
}
frame_frame_pyautogui$_pyautogui_win$$$class__1_MOUSEINPUT_2 = MAKE_CLASS_FRAME(tstate, code_objects_76c3103d8b859f6b06ba97e1a02d3dfc, module_pyautogui$_pyautogui_win, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pyautogui$_pyautogui_win$$$class__1_MOUSEINPUT_2, locals_pyautogui$_pyautogui_win$$$class__1_MOUSEINPUT_62);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyautogui$_pyautogui_win$$$class__1_MOUSEINPUT_2);
assert(Py_REFCNT(frame_frame_pyautogui$_pyautogui_win$$$class__1_MOUSEINPUT_2) == 2);

// Framed code:
{
PyObject *tmp_list_element_1;
PyObject *tmp_tuple_element_4;
tmp_tuple_element_4 = mod_consts.const_str_plain_dx;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_10;
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_4);
tmp_expression_value_10 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_10 == NULL));
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_LONG);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
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
PyObject *tmp_expression_value_11;
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_5);
tmp_expression_value_11 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_11 == NULL));
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_LONG);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
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
PyObject *tmp_expression_value_12;
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_6);
tmp_expression_value_12 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_12 == NULL));
tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_DWORD);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
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
PyObject *tmp_expression_value_13;
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_7);
tmp_expression_value_13 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_13 == NULL));
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_DWORD);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
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
PyObject *tmp_expression_value_14;
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_8);
tmp_expression_value_14 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_14 == NULL));
tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_DWORD);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
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
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_16;
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_9);
IMPORT_HARD_CTYPES__WINTYPES();
tmp_expression_value_15 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_15 == NULL));
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_POINTER);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_2 = "o";
    goto tuple_build_exception_7;
}
tmp_expression_value_16 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_16 == NULL));
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_ULONG);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 69;
type_description_2 = "o";
    goto tuple_build_exception_7;
}
frame_frame_pyautogui$_pyautogui_win$$$class__1_MOUSEINPUT_2->m_frame.f_lineno = 69;
tmp_tuple_element_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
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
tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__1_MOUSEINPUT_62, mod_consts.const_str_plain__fields_, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pyautogui$_pyautogui_win$$$class__1_MOUSEINPUT_2);


goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pyautogui$_pyautogui_win$$$class__1_MOUSEINPUT_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyautogui$_pyautogui_win$$$class__1_MOUSEINPUT_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyautogui$_pyautogui_win$$$class__1_MOUSEINPUT_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyautogui$_pyautogui_win$$$class__1_MOUSEINPUT_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_pyautogui$_pyautogui_win$$$class__1_MOUSEINPUT_2);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pyautogui$_pyautogui_win$$$class__1_MOUSEINPUT_2);


// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_6;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__1_MOUSEINPUT_62, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_6;
}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_1__bases_orig;
tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_6;
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
tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__1_MOUSEINPUT_62, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_6;
}
branch_no_4:;
{
PyObject *tmp_assign_source_36;
PyObject *tmp_metaclass_value_2;
PyObject *tmp_name_value_4;
PyObject *tmp_bases_value_2;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_metaclass_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_4 = mod_consts.const_str_plain_MOUSEINPUT;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_1__bases;
tmp_dict_arg_value_1 = locals_pyautogui$_pyautogui_win$$$class__1_MOUSEINPUT_62;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_4, tmp_bases_value_2, tmp_dict_arg_value_1);
tmp_assign_source_36 = CALL_FUNCTION(tstate, tmp_metaclass_value_2, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_6;
}
{
    PyObject *old = outline_0_var___class__;
    outline_0_var___class__ = tmp_assign_source_36;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_35 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_35);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_pyautogui$_pyautogui_win$$$class__1_MOUSEINPUT_62);
locals_pyautogui$_pyautogui_win$$$class__1_MOUSEINPUT_62 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pyautogui$_pyautogui_win$$$class__1_MOUSEINPUT_62);
locals_pyautogui$_pyautogui_win$$$class__1_MOUSEINPUT_62 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 62;
goto try_except_handler_4;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSEINPUT, tmp_assign_source_35);
}
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
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
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
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
PyObject *tmp_assign_source_37;
PyObject *tmp_tuple_element_10;
PyObject *tmp_expression_value_17;
IMPORT_HARD_CTYPES__WINTYPES();
tmp_expression_value_17 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_17 == NULL));
tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_Structure);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto try_except_handler_7;
}
tmp_assign_source_37 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_37, 0, tmp_tuple_element_10);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_37;
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_38 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_38;
}
{
PyObject *tmp_assign_source_39;
tmp_assign_source_39 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_39;
}
{
PyObject *tmp_assign_source_40;
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


exception_lineno = 72;

    goto try_except_handler_7;
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


exception_lineno = 72;

    goto try_except_handler_7;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto try_except_handler_7;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_40 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_40;
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


exception_lineno = 72;

    goto try_except_handler_7;
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
PyObject *tmp_assign_source_41;
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


exception_lineno = 72;

    goto try_except_handler_7;
}
tmp_tuple_element_11 = mod_consts.const_str_plain_KEYBDINPUT;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_11 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_pyautogui$_pyautogui_win->m_frame.f_lineno = 72;
tmp_assign_source_41 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_41;
}
{
bool tmp_condition_result_8;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_21;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_21 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_21, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto try_except_handler_7;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
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
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_22 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_5 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_12 = BUILTIN_GETATTR(tstate, tmp_expression_value_22, tmp_name_value_5, tmp_default_value_2);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto try_except_handler_7;
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


exception_lineno = 72;

    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_12);
}
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto try_except_handler_7;
}
frame_frame_pyautogui$_pyautogui_win->m_frame.f_lineno = 72;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 72;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_7;
}
branch_no_6:;
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_assign_source_42;
tmp_assign_source_42 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_42;
}
branch_end_5:;
{
PyObject *tmp_assign_source_43;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_pyautogui$_pyautogui_win$$$class__2_KEYBDINPUT_72 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_e64a4354945d8630712c79dfd53962a2;
tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__2_KEYBDINPUT_72, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_plain_KEYBDINPUT;
tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__2_KEYBDINPUT_72, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_int_pos_72;
tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__2_KEYBDINPUT_72, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto try_except_handler_9;
}
frame_frame_pyautogui$_pyautogui_win$$$class__2_KEYBDINPUT_3 = MAKE_CLASS_FRAME(tstate, code_objects_ed7d1431ae03a48a8300697df15c88d9, module_pyautogui$_pyautogui_win, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pyautogui$_pyautogui_win$$$class__2_KEYBDINPUT_3, locals_pyautogui$_pyautogui_win$$$class__2_KEYBDINPUT_72);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyautogui$_pyautogui_win$$$class__2_KEYBDINPUT_3);
assert(Py_REFCNT(frame_frame_pyautogui$_pyautogui_win$$$class__2_KEYBDINPUT_3) == 2);

// Framed code:
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


exception_lineno = 74;
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


exception_lineno = 75;
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


exception_lineno = 76;
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


exception_lineno = 77;
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
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_28;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_29;
PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_17);
IMPORT_HARD_CTYPES__WINTYPES();
tmp_expression_value_28 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_28 == NULL));
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_POINTER);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_2 = "o";
    goto tuple_build_exception_13;
}
tmp_expression_value_29 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_29 == NULL));
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_ULONG);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 78;
type_description_2 = "o";
    goto tuple_build_exception_13;
}
frame_frame_pyautogui$_pyautogui_win$$$class__2_KEYBDINPUT_3->m_frame.f_lineno = 78;
tmp_tuple_element_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_tuple_element_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
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
tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__2_KEYBDINPUT_72, mod_consts.const_str_plain__fields_, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pyautogui$_pyautogui_win$$$class__2_KEYBDINPUT_3);


goto frame_no_exception_2;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pyautogui$_pyautogui_win$$$class__2_KEYBDINPUT_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyautogui$_pyautogui_win$$$class__2_KEYBDINPUT_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyautogui$_pyautogui_win$$$class__2_KEYBDINPUT_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyautogui$_pyautogui_win$$$class__2_KEYBDINPUT_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_pyautogui$_pyautogui_win$$$class__2_KEYBDINPUT_3);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pyautogui$_pyautogui_win$$$class__2_KEYBDINPUT_3);


// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_9;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__2_KEYBDINPUT_72, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto try_except_handler_9;
}
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_2__bases_orig;
tmp_condition_result_9 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto try_except_handler_9;
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
tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__2_KEYBDINPUT_72, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto try_except_handler_9;
}
branch_no_7:;
{
PyObject *tmp_assign_source_44;
PyObject *tmp_metaclass_value_4;
PyObject *tmp_name_value_6;
PyObject *tmp_bases_value_4;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_class_decl_dict_value_2;
PyObject *tmp_metaclass_args_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_metaclass_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_6 = mod_consts.const_str_plain_KEYBDINPUT;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_2__bases;
tmp_dict_arg_value_2 = locals_pyautogui$_pyautogui_win$$$class__2_KEYBDINPUT_72;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_decl_dict_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_metaclass_args_2 = MAKE_TUPLE3(tstate, tmp_name_value_6, tmp_bases_value_4, tmp_dict_arg_value_2);
tmp_assign_source_44 = CALL_FUNCTION(tstate, tmp_metaclass_value_4, tmp_metaclass_args_2, tmp_class_decl_dict_value_2);
CHECK_OBJECT(tmp_metaclass_args_2);
Py_DECREF(tmp_metaclass_args_2);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto try_except_handler_9;
}
{
    PyObject *old = outline_1_var___class__;
    outline_1_var___class__ = tmp_assign_source_44;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_43 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_43);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_DECREF(locals_pyautogui$_pyautogui_win$$$class__2_KEYBDINPUT_72);
locals_pyautogui$_pyautogui_win$$$class__2_KEYBDINPUT_72 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pyautogui$_pyautogui_win$$$class__2_KEYBDINPUT_72);
locals_pyautogui$_pyautogui_win$$$class__2_KEYBDINPUT_72 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_8;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 72;
goto try_except_handler_7;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_KEYBDINPUT, tmp_assign_source_43);
}
goto try_end_5;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
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
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
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
PyObject *tmp_assign_source_45;
PyObject *tmp_tuple_element_18;
PyObject *tmp_expression_value_30;
IMPORT_HARD_CTYPES__WINTYPES();
tmp_expression_value_30 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_30 == NULL));
tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_Structure);
if (tmp_tuple_element_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_10;
}
tmp_assign_source_45 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_45, 0, tmp_tuple_element_18);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_45;
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_46 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_46;
}
{
PyObject *tmp_assign_source_47;
tmp_assign_source_47 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_47;
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_metaclass_value_5;
nuitka_bool tmp_condition_result_10;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_31;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_10;
}
tmp_condition_result_10 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_31 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_31, tmp_subscript_value_3, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_10;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_10;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_5);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_5 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_48 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
CHECK_OBJECT(tmp_metaclass_value_5);
Py_DECREF(tmp_metaclass_value_5);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_48;
}
{
bool tmp_condition_result_11;
PyObject *tmp_expression_value_32;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_32 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_32, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_10;
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
PyObject *tmp_assign_source_49;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_33;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_19;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_33 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_10;
}
tmp_tuple_element_19 = mod_consts.const_str_plain_HARDWAREINPUT;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_19 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_pyautogui$_pyautogui_win->m_frame.f_lineno = 81;
tmp_assign_source_49 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_49;
}
{
bool tmp_condition_result_12;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_34;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_34 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_34, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_10;
}
tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
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
PyObject *tmp_expression_value_35;
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_35 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_20 = BUILTIN_GETATTR(tstate, tmp_expression_value_35, tmp_name_value_7, tmp_default_value_3);
if (tmp_tuple_element_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_10;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_36;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_36 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_36 == NULL));
tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_36);
Py_DECREF(tmp_expression_value_36);
if (tmp_tuple_element_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto tuple_build_exception_14;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_20);
}
goto tuple_build_no_exception_14;
// Exception handling pass through code for tuple_build:
tuple_build_exception_14:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_10;
// Finished with no exception for tuple_build:
tuple_build_no_exception_14:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_10;
}
frame_frame_pyautogui$_pyautogui_win->m_frame.f_lineno = 81;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 81;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_10;
}
branch_no_9:;
goto branch_end_8;
branch_no_8:;
{
PyObject *tmp_assign_source_50;
tmp_assign_source_50 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_50;
}
branch_end_8:;
{
PyObject *tmp_assign_source_51;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_pyautogui$_pyautogui_win$$$class__3_HARDWAREINPUT_81 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_e64a4354945d8630712c79dfd53962a2;
tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__3_HARDWAREINPUT_81, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_plain_HARDWAREINPUT;
tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__3_HARDWAREINPUT_81, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_int_pos_81;
tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__3_HARDWAREINPUT_81, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_12;
}
frame_frame_pyautogui$_pyautogui_win$$$class__3_HARDWAREINPUT_4 = MAKE_CLASS_FRAME(tstate, code_objects_313d5dce690fb1af72d03a48363d4caf, module_pyautogui$_pyautogui_win, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pyautogui$_pyautogui_win$$$class__3_HARDWAREINPUT_4, locals_pyautogui$_pyautogui_win$$$class__3_HARDWAREINPUT_81);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyautogui$_pyautogui_win$$$class__3_HARDWAREINPUT_4);
assert(Py_REFCNT(frame_frame_pyautogui$_pyautogui_win$$$class__3_HARDWAREINPUT_4) == 2);

// Framed code:
{
PyObject *tmp_list_element_3;
PyObject *tmp_tuple_element_21;
tmp_tuple_element_21 = mod_consts.const_str_plain_uMsg;
tmp_list_element_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_37;
PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_21);
tmp_expression_value_37 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_37 == NULL));
tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain_DWORD);
if (tmp_tuple_element_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
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
PyObject *tmp_expression_value_38;
PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_22);
tmp_expression_value_38 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_38 == NULL));
tmp_tuple_element_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts.const_str_plain_WORD);
if (tmp_tuple_element_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
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
PyObject *tmp_expression_value_39;
PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_23);
tmp_expression_value_39 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_39 == NULL));
tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_DWORD);
if (tmp_tuple_element_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
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
tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__3_HARDWAREINPUT_81, mod_consts.const_str_plain__fields_, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pyautogui$_pyautogui_win$$$class__3_HARDWAREINPUT_4);


goto frame_no_exception_3;
frame_exception_exit_4:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pyautogui$_pyautogui_win$$$class__3_HARDWAREINPUT_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyautogui$_pyautogui_win$$$class__3_HARDWAREINPUT_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyautogui$_pyautogui_win$$$class__3_HARDWAREINPUT_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyautogui$_pyautogui_win$$$class__3_HARDWAREINPUT_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_pyautogui$_pyautogui_win$$$class__3_HARDWAREINPUT_4);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pyautogui$_pyautogui_win$$$class__3_HARDWAREINPUT_4);


// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_12;
skip_nested_handling_3:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__3_HARDWAREINPUT_81, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_12;
}
{
nuitka_bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_4 = tmp_class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_4 = tmp_class_container$class_creation_3__bases_orig;
tmp_condition_result_13 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_12;
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
tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__3_HARDWAREINPUT_81, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_12;
}
branch_no_10:;
{
PyObject *tmp_assign_source_52;
PyObject *tmp_metaclass_value_6;
PyObject *tmp_name_value_8;
PyObject *tmp_bases_value_6;
PyObject *tmp_dict_arg_value_3;
PyObject *tmp_class_decl_dict_value_3;
PyObject *tmp_metaclass_args_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_metaclass_value_6 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_8 = mod_consts.const_str_plain_HARDWAREINPUT;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_6 = tmp_class_container$class_creation_3__bases;
tmp_dict_arg_value_3 = locals_pyautogui$_pyautogui_win$$$class__3_HARDWAREINPUT_81;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_decl_dict_value_3 = tmp_class_container$class_creation_3__class_decl_dict;
tmp_metaclass_args_3 = MAKE_TUPLE3(tstate, tmp_name_value_8, tmp_bases_value_6, tmp_dict_arg_value_3);
tmp_assign_source_52 = CALL_FUNCTION(tstate, tmp_metaclass_value_6, tmp_metaclass_args_3, tmp_class_decl_dict_value_3);
CHECK_OBJECT(tmp_metaclass_args_3);
Py_DECREF(tmp_metaclass_args_3);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_12;
}
{
    PyObject *old = outline_2_var___class__;
    outline_2_var___class__ = tmp_assign_source_52;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_51 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_51);
goto try_return_handler_12;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
Py_DECREF(locals_pyautogui$_pyautogui_win$$$class__3_HARDWAREINPUT_81);
locals_pyautogui$_pyautogui_win$$$class__3_HARDWAREINPUT_81 = NULL;
goto try_return_handler_11;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pyautogui$_pyautogui_win$$$class__3_HARDWAREINPUT_81);
locals_pyautogui$_pyautogui_win$$$class__3_HARDWAREINPUT_81 = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_11;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 81;
goto try_except_handler_10;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_HARDWAREINPUT, tmp_assign_source_51);
}
goto try_end_6;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
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
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

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
{
PyObject *tmp_outline_return_value_4;
// Tried code:
{
PyObject *tmp_assign_source_53;
PyObject *tmp_tuple_element_24;
PyObject *tmp_expression_value_40;
IMPORT_HARD_CTYPES__WINTYPES();
tmp_expression_value_40 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_40 == NULL));
tmp_tuple_element_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain_Structure);
if (tmp_tuple_element_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_13;
}
tmp_assign_source_53 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_53, 0, tmp_tuple_element_24);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_53;
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_54 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_54;
}
{
PyObject *tmp_assign_source_55;
tmp_assign_source_55 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_55;
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_metaclass_value_7;
nuitka_bool tmp_condition_result_14;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_41;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_13;
}
tmp_condition_result_14 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_41 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_41, tmp_subscript_value_4, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_13;
}
tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_13;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_7);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_7 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_56 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
CHECK_OBJECT(tmp_metaclass_value_7);
Py_DECREF(tmp_metaclass_value_7);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_56;
}
{
bool tmp_condition_result_15;
PyObject *tmp_expression_value_42;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_42 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_42, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_13;
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
PyObject *tmp_assign_source_57;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_43;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_25;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_43 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_13;
}
tmp_tuple_element_25 = mod_consts.const_str_plain_INPUT;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_25);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_25 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_25);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_pyautogui$_pyautogui_win->m_frame.f_lineno = 88;
tmp_assign_source_57 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_57;
}
{
bool tmp_condition_result_16;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_44;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_44 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_44, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_13;
}
tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
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
PyObject *tmp_expression_value_45;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_45 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_26 = BUILTIN_GETATTR(tstate, tmp_expression_value_45, tmp_name_value_9, tmp_default_value_4);
if (tmp_tuple_element_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_13;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_46;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_26);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_46 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_46 == NULL));
tmp_tuple_element_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_46);
Py_DECREF(tmp_expression_value_46);
if (tmp_tuple_element_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto tuple_build_exception_18;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_26);
}
goto tuple_build_no_exception_18;
// Exception handling pass through code for tuple_build:
tuple_build_exception_18:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_13;
// Finished with no exception for tuple_build:
tuple_build_no_exception_18:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_13;
}
frame_frame_pyautogui$_pyautogui_win->m_frame.f_lineno = 88;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 88;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_13;
}
branch_no_12:;
goto branch_end_11;
branch_no_11:;
{
PyObject *tmp_assign_source_58;
tmp_assign_source_58 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_58;
}
branch_end_11:;
{
PyObject *tmp_assign_source_59;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_pyautogui$_pyautogui_win$$$class__4_INPUT_88 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_e64a4354945d8630712c79dfd53962a2;
tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__4_INPUT_88, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_str_plain_INPUT;
tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__4_INPUT_88, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_int_pos_88;
tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__4_INPUT_88, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_15;
}
frame_frame_pyautogui$_pyautogui_win$$$class__4_INPUT_5 = MAKE_CLASS_FRAME(tstate, code_objects_b587ae5702c3ee5dfcf68701d0f4230d, module_pyautogui$_pyautogui_win, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pyautogui$_pyautogui_win$$$class__4_INPUT_5, locals_pyautogui$_pyautogui_win$$$class__4_INPUT_88);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyautogui$_pyautogui_win$$$class__4_INPUT_5);
assert(Py_REFCNT(frame_frame_pyautogui$_pyautogui_win$$$class__4_INPUT_5) == 2);

// Framed code:
{
PyObject *tmp_outline_return_value_5;
// Tried code:
{
PyObject *tmp_assign_source_60;
PyObject *tmp_tuple_element_27;
PyObject *tmp_expression_value_47;
IMPORT_HARD_CTYPES__WINTYPES();
tmp_expression_value_47 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_47 == NULL));
tmp_tuple_element_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts.const_str_plain_Union);
if (tmp_tuple_element_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto try_except_handler_16;
}
tmp_assign_source_60 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_60, 0, tmp_tuple_element_27);
{
    PyObject *old = tmp_INPUT$class_container$class_creation_1__bases_orig;
    tmp_INPUT$class_container$class_creation_1__bases_orig = tmp_assign_source_60;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_61;
PyObject *tmp_direct_call_arg1_5;
CHECK_OBJECT(tmp_INPUT$class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_5 = tmp_INPUT$class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5};
    tmp_assign_source_61 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto try_except_handler_16;
}
{
    PyObject *old = tmp_INPUT$class_container$class_creation_1__bases;
    tmp_INPUT$class_container$class_creation_1__bases = tmp_assign_source_61;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_62;
tmp_assign_source_62 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = tmp_INPUT$class_container$class_creation_1__class_decl_dict;
    tmp_INPUT$class_container$class_creation_1__class_decl_dict = tmp_assign_source_62;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_63;
PyObject *tmp_metaclass_value_8;
nuitka_bool tmp_condition_result_17;
int tmp_truth_name_5;
PyObject *tmp_type_arg_9;
PyObject *tmp_expression_value_48;
PyObject *tmp_subscript_value_5;
PyObject *tmp_bases_value_8;
CHECK_OBJECT(tmp_INPUT$class_container$class_creation_1__bases);
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_INPUT$class_container$class_creation_1__bases);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto try_except_handler_16;
}
tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_5;
} else {
    goto condexpr_false_5;
}
condexpr_true_5:;
CHECK_OBJECT(tmp_INPUT$class_container$class_creation_1__bases);
tmp_expression_value_48 = tmp_INPUT$class_container$class_creation_1__bases;
tmp_subscript_value_5 = const_int_0;
tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_48, tmp_subscript_value_5, 0);
if (tmp_type_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto try_except_handler_16;
}
tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_9);
CHECK_OBJECT(tmp_type_arg_9);
Py_DECREF(tmp_type_arg_9);
if (tmp_metaclass_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto try_except_handler_16;
}
goto condexpr_end_5;
condexpr_false_5:;
tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_8);
condexpr_end_5:;
CHECK_OBJECT(tmp_INPUT$class_container$class_creation_1__bases);
tmp_bases_value_8 = tmp_INPUT$class_container$class_creation_1__bases;
tmp_assign_source_63 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
CHECK_OBJECT(tmp_metaclass_value_8);
Py_DECREF(tmp_metaclass_value_8);
if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto try_except_handler_16;
}
{
    PyObject *old = tmp_INPUT$class_container$class_creation_1__metaclass;
    tmp_INPUT$class_container$class_creation_1__metaclass = tmp_assign_source_63;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_18;
PyObject *tmp_expression_value_49;
CHECK_OBJECT(tmp_INPUT$class_container$class_creation_1__metaclass);
tmp_expression_value_49 = tmp_INPUT$class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_49, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto try_except_handler_16;
}
tmp_condition_result_18 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_18 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assign_source_64;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_50;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_28;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_INPUT$class_container$class_creation_1__metaclass);
tmp_expression_value_50 = tmp_INPUT$class_container$class_creation_1__metaclass;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto try_except_handler_16;
}
tmp_tuple_element_28 = mod_consts.const_str_plain__I;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_28);
CHECK_OBJECT(tmp_INPUT$class_container$class_creation_1__bases);
tmp_tuple_element_28 = tmp_INPUT$class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_28);
CHECK_OBJECT(tmp_INPUT$class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_5 = tmp_INPUT$class_container$class_creation_1__class_decl_dict;
frame_frame_pyautogui$_pyautogui_win$$$class__4_INPUT_5->m_frame.f_lineno = 89;
tmp_assign_source_64 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto try_except_handler_16;
}
{
    PyObject *old = tmp_INPUT$class_container$class_creation_1__prepared;
    tmp_INPUT$class_container$class_creation_1__prepared = tmp_assign_source_64;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_19;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_51;
CHECK_OBJECT(tmp_INPUT$class_container$class_creation_1__prepared);
tmp_expression_value_51 = tmp_INPUT$class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_51, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto try_except_handler_16;
}
tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
assert(!(tmp_res == -1));
tmp_condition_result_19 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_19 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_raise_type_5;
PyObject *tmp_make_exception_arg_5;
PyObject *tmp_mod_expr_left_5;
PyObject *tmp_mod_expr_right_5;
PyObject *tmp_tuple_element_29;
PyObject *tmp_expression_value_52;
PyObject *tmp_name_value_10;
PyObject *tmp_default_value_5;
tmp_mod_expr_left_5 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_INPUT$class_container$class_creation_1__metaclass);
tmp_expression_value_52 = tmp_INPUT$class_container$class_creation_1__metaclass;
tmp_name_value_10 = const_str_plain___name__;
tmp_default_value_5 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_29 = BUILTIN_GETATTR(tstate, tmp_expression_value_52, tmp_name_value_10, tmp_default_value_5);
if (tmp_tuple_element_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto try_except_handler_16;
}
tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_53;
PyObject *tmp_type_arg_10;
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_29);
CHECK_OBJECT(tmp_INPUT$class_container$class_creation_1__prepared);
tmp_type_arg_10 = tmp_INPUT$class_container$class_creation_1__prepared;
tmp_expression_value_53 = BUILTIN_TYPE1(tmp_type_arg_10);
assert(!(tmp_expression_value_53 == NULL));
tmp_tuple_element_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_53);
Py_DECREF(tmp_expression_value_53);
if (tmp_tuple_element_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto tuple_build_exception_19;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_29);
}
goto tuple_build_no_exception_19;
// Exception handling pass through code for tuple_build:
tuple_build_exception_19:;
Py_DECREF(tmp_mod_expr_right_5);
goto try_except_handler_16;
// Finished with no exception for tuple_build:
tuple_build_no_exception_19:;
tmp_make_exception_arg_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
CHECK_OBJECT(tmp_mod_expr_right_5);
Py_DECREF(tmp_mod_expr_right_5);
if (tmp_make_exception_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto try_except_handler_16;
}
frame_frame_pyautogui$_pyautogui_win$$$class__4_INPUT_5->m_frame.f_lineno = 89;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 89;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_2 = "o";
goto try_except_handler_16;
}
branch_no_14:;
goto branch_end_13;
branch_no_13:;
{
PyObject *tmp_assign_source_65;
tmp_assign_source_65 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = tmp_INPUT$class_container$class_creation_1__prepared;
    tmp_INPUT$class_container$class_creation_1__prepared = tmp_assign_source_65;
    Py_XDECREF(old);
}

}
branch_end_13:;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_INPUT$class_container$class_creation_1__prepared);
tmp_set_locals_5 = tmp_INPUT$class_container$class_creation_1__prepared;
locals_pyautogui$_pyautogui_win$$$class__5__I_89 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_e64a4354945d8630712c79dfd53962a2;
tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__5__I_89, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_str_digest_381e31f8cb4bdd6603ed147ffefe3f43;
tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__5__I_89, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_int_pos_89;
tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__5__I_89, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto try_except_handler_18;
}
frame_frame_pyautogui$_pyautogui_win$$$class__5__I_6 = MAKE_CLASS_FRAME(tstate, code_objects_228846f674c7b14ace66f3a8ae925f0c, module_pyautogui$_pyautogui_win, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pyautogui$_pyautogui_win$$$class__5__I_6, locals_pyautogui$_pyautogui_win$$$class__5__I_89);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyautogui$_pyautogui_win$$$class__5__I_6);
assert(Py_REFCNT(frame_frame_pyautogui$_pyautogui_win$$$class__5__I_6) == 2);

// Framed code:
{
PyObject *tmp_list_element_4;
PyObject *tmp_tuple_element_30;
tmp_tuple_element_30 = mod_consts.const_str_plain_mi;
tmp_list_element_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_30);
tmp_tuple_element_30 = PyObject_GetItem(locals_pyautogui$_pyautogui_win$$$class__5__I_89, mod_consts.const_str_plain_MOUSEINPUT);

if (tmp_tuple_element_30 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_30 = module_var_accessor_pyautogui$_pyautogui_win$MOUSEINPUT(tstate);
if (unlikely(tmp_tuple_element_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MOUSEINPUT);
}

if (tmp_tuple_element_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 91;
type_description_3 = "o";
    goto tuple_build_exception_20;
}
        Py_INCREF(tmp_tuple_element_30);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_20;
    }
}

PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_30);
goto tuple_build_no_exception_20;
// Exception handling pass through code for tuple_build:
tuple_build_exception_20:;
Py_DECREF(tmp_list_element_4);
goto frame_exception_exit_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_20:;
tmp_dictset_value = MAKE_LIST_EMPTY(tstate, 3);
{
PyObject *tmp_tuple_element_31;
PyObject *tmp_tuple_element_32;
PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_4);
tmp_tuple_element_31 = mod_consts.const_str_plain_ki;
tmp_list_element_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_31);
tmp_tuple_element_31 = PyObject_GetItem(locals_pyautogui$_pyautogui_win$$$class__5__I_89, mod_consts.const_str_plain_KEYBDINPUT);

if (tmp_tuple_element_31 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_31 = module_var_accessor_pyautogui$_pyautogui_win$KEYBDINPUT(tstate);
if (unlikely(tmp_tuple_element_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KEYBDINPUT);
}

if (tmp_tuple_element_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 92;
type_description_3 = "o";
    goto tuple_build_exception_21;
}
        Py_INCREF(tmp_tuple_element_31);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_21;
    }
}

PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_31);
goto tuple_build_no_exception_21;
// Exception handling pass through code for tuple_build:
tuple_build_exception_21:;
Py_DECREF(tmp_list_element_4);
goto list_build_exception_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_21:;
PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_4);
tmp_tuple_element_32 = mod_consts.const_str_plain_hi;
tmp_list_element_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_32);
tmp_tuple_element_32 = PyObject_GetItem(locals_pyautogui$_pyautogui_win$$$class__5__I_89, mod_consts.const_str_plain_HARDWAREINPUT);

if (tmp_tuple_element_32 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_32 = module_var_accessor_pyautogui$_pyautogui_win$HARDWAREINPUT(tstate);
if (unlikely(tmp_tuple_element_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HARDWAREINPUT);
}

if (tmp_tuple_element_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 93;
type_description_3 = "o";
    goto tuple_build_exception_22;
}
        Py_INCREF(tmp_tuple_element_32);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_22;
    }
}

PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_32);
goto tuple_build_no_exception_22;
// Exception handling pass through code for tuple_build:
tuple_build_exception_22:;
Py_DECREF(tmp_list_element_4);
goto list_build_exception_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_22:;
PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_4);
}
goto list_build_no_exception_4;
// Exception handling pass through code for list_build:
list_build_exception_4:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_6;
// Finished with no exception for list_build:
list_build_no_exception_4:;
tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__5__I_89, mod_consts.const_str_plain__fields_, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_3 = "o";
    goto frame_exception_exit_6;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pyautogui$_pyautogui_win$$$class__5__I_6);


goto frame_no_exception_4;
frame_exception_exit_6:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pyautogui$_pyautogui_win$$$class__5__I_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyautogui$_pyautogui_win$$$class__5__I_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyautogui$_pyautogui_win$$$class__5__I_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyautogui$_pyautogui_win$$$class__5__I_6,
    type_description_3,
    outline_4_var___class__
);



assertFrameObject(frame_frame_pyautogui$_pyautogui_win$$$class__5__I_6);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pyautogui$_pyautogui_win$$$class__5__I_6);


// Return the error.
goto nested_frame_exit_5;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_5:;
type_description_2 = "o";
goto try_except_handler_18;
skip_nested_handling_4:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__5__I_89, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto try_except_handler_18;
}
{
nuitka_bool tmp_condition_result_20;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(tmp_INPUT$class_container$class_creation_1__bases);
tmp_cmp_expr_left_5 = tmp_INPUT$class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_INPUT$class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_5 = tmp_INPUT$class_container$class_creation_1__bases_orig;
tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto try_except_handler_18;
}
if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
CHECK_OBJECT(tmp_INPUT$class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_INPUT$class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__5__I_89, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto try_except_handler_18;
}
branch_no_15:;
{
PyObject *tmp_assign_source_66;
PyObject *tmp_metaclass_value_9;
PyObject *tmp_name_value_11;
PyObject *tmp_bases_value_9;
PyObject *tmp_dict_arg_value_4;
PyObject *tmp_class_decl_dict_value_4;
PyObject *tmp_metaclass_args_4;
CHECK_OBJECT(tmp_INPUT$class_container$class_creation_1__metaclass);
tmp_metaclass_value_9 = tmp_INPUT$class_container$class_creation_1__metaclass;
tmp_name_value_11 = mod_consts.const_str_plain__I;
CHECK_OBJECT(tmp_INPUT$class_container$class_creation_1__bases);
tmp_bases_value_9 = tmp_INPUT$class_container$class_creation_1__bases;
tmp_dict_arg_value_4 = locals_pyautogui$_pyautogui_win$$$class__5__I_89;
CHECK_OBJECT(tmp_INPUT$class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_4 = tmp_INPUT$class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_4 = MAKE_TUPLE3(tstate, tmp_name_value_11, tmp_bases_value_9, tmp_dict_arg_value_4);
tmp_assign_source_66 = CALL_FUNCTION(tstate, tmp_metaclass_value_9, tmp_metaclass_args_4, tmp_class_decl_dict_value_4);
CHECK_OBJECT(tmp_metaclass_args_4);
Py_DECREF(tmp_metaclass_args_4);
if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto try_except_handler_18;
}
{
    PyObject *old = outline_4_var___class__;
    outline_4_var___class__ = tmp_assign_source_66;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_4_var___class__);
tmp_dictset_value = outline_4_var___class__;
Py_INCREF(tmp_dictset_value);
goto try_return_handler_18;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_18:;
Py_DECREF(locals_pyautogui$_pyautogui_win$$$class__5__I_89);
locals_pyautogui$_pyautogui_win$$$class__5__I_89 = NULL;
goto try_return_handler_17;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pyautogui$_pyautogui_win$$$class__5__I_89);
locals_pyautogui$_pyautogui_win$$$class__5__I_89 = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto try_except_handler_17;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_17:;
CHECK_OBJECT(outline_4_var___class__);
CHECK_OBJECT(outline_4_var___class__);
Py_DECREF(outline_4_var___class__);
outline_4_var___class__ = NULL;
goto outline_result_10;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto outline_exception_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_5:;
exception_lineno = 89;
goto try_except_handler_16;
outline_result_10:;
tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__4_INPUT_88, mod_consts.const_str_plain__I, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto try_except_handler_16;
}
goto try_end_7;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_INPUT$class_container$class_creation_1__bases_orig);
tmp_INPUT$class_container$class_creation_1__bases_orig = NULL;
Py_XDECREF(tmp_INPUT$class_container$class_creation_1__bases);
tmp_INPUT$class_container$class_creation_1__bases = NULL;
Py_XDECREF(tmp_INPUT$class_container$class_creation_1__class_decl_dict);
tmp_INPUT$class_container$class_creation_1__class_decl_dict = NULL;
Py_XDECREF(tmp_INPUT$class_container$class_creation_1__metaclass);
tmp_INPUT$class_container$class_creation_1__metaclass = NULL;
Py_XDECREF(tmp_INPUT$class_container$class_creation_1__prepared);
tmp_INPUT$class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto frame_exception_exit_5;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_INPUT$class_container$class_creation_1__bases_orig);
CHECK_OBJECT(tmp_INPUT$class_container$class_creation_1__bases_orig);
Py_DECREF(tmp_INPUT$class_container$class_creation_1__bases_orig);
tmp_INPUT$class_container$class_creation_1__bases_orig = NULL;
CHECK_OBJECT(tmp_INPUT$class_container$class_creation_1__bases);
CHECK_OBJECT(tmp_INPUT$class_container$class_creation_1__bases);
Py_DECREF(tmp_INPUT$class_container$class_creation_1__bases);
tmp_INPUT$class_container$class_creation_1__bases = NULL;
CHECK_OBJECT(tmp_INPUT$class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_INPUT$class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_INPUT$class_container$class_creation_1__class_decl_dict);
tmp_INPUT$class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_INPUT$class_container$class_creation_1__metaclass);
CHECK_OBJECT(tmp_INPUT$class_container$class_creation_1__metaclass);
Py_DECREF(tmp_INPUT$class_container$class_creation_1__metaclass);
tmp_INPUT$class_container$class_creation_1__metaclass = NULL;
CHECK_OBJECT(tmp_INPUT$class_container$class_creation_1__prepared);
CHECK_OBJECT(tmp_INPUT$class_container$class_creation_1__prepared);
Py_DECREF(tmp_INPUT$class_container$class_creation_1__prepared);
tmp_INPUT$class_container$class_creation_1__prepared = NULL;
tmp_outline_return_value_5 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_5);
goto outline_result_9;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_9:;
CHECK_OBJECT(tmp_outline_return_value_5);
Py_DECREF(tmp_outline_return_value_5);
}
tmp_dictset_value = mod_consts.const_tuple_str_plain_i_tuple;
tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__4_INPUT_88, mod_consts.const_str_plain__anonymous_, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
{
PyObject *tmp_list_element_5;
PyObject *tmp_tuple_element_33;
tmp_tuple_element_33 = const_str_plain_type;
tmp_list_element_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_54;
PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_33);
tmp_expression_value_54 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_54 == NULL));
tmp_tuple_element_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts.const_str_plain_DWORD);
if (tmp_tuple_element_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_2 = "o";
    goto tuple_build_exception_23;
}
PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_33);
}
goto tuple_build_no_exception_23;
// Exception handling pass through code for tuple_build:
tuple_build_exception_23:;
Py_DECREF(tmp_list_element_5);
goto frame_exception_exit_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_23:;
tmp_dictset_value = MAKE_LIST_EMPTY(tstate, 2);
{
PyObject *tmp_tuple_element_34;
PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_5);
tmp_tuple_element_34 = mod_consts.const_str_plain_i;
tmp_list_element_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_34);
tmp_tuple_element_34 = PyObject_GetItem(locals_pyautogui$_pyautogui_win$$$class__4_INPUT_88, mod_consts.const_str_plain__I);

if (unlikely(tmp_tuple_element_34 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__I);

exception_lineno = 99;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_tuple_element_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_34);
PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_5);
}
tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__4_INPUT_88, mod_consts.const_str_plain__fields_, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pyautogui$_pyautogui_win$$$class__4_INPUT_5);


goto frame_no_exception_5;
frame_exception_exit_5:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pyautogui$_pyautogui_win$$$class__4_INPUT_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyautogui$_pyautogui_win$$$class__4_INPUT_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyautogui$_pyautogui_win$$$class__4_INPUT_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyautogui$_pyautogui_win$$$class__4_INPUT_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_pyautogui$_pyautogui_win$$$class__4_INPUT_5);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pyautogui$_pyautogui_win$$$class__4_INPUT_5);


// Return the error.
goto nested_frame_exit_4;
frame_no_exception_5:;
goto skip_nested_handling_5;
nested_frame_exit_4:;

goto try_except_handler_15;
skip_nested_handling_5:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__4_INPUT_88, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_15;
}
{
nuitka_bool tmp_condition_result_21;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_cmp_expr_left_6 = tmp_class_container$class_creation_4__bases;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_cmp_expr_right_6 = tmp_class_container$class_creation_4__bases_orig;
tmp_condition_result_21 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_21 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_15;
}
if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_4__bases_orig;
tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__4_INPUT_88, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_15;
}
branch_no_16:;
{
PyObject *tmp_assign_source_67;
PyObject *tmp_metaclass_value_10;
PyObject *tmp_name_value_12;
PyObject *tmp_bases_value_10;
PyObject *tmp_dict_arg_value_5;
PyObject *tmp_class_decl_dict_value_5;
PyObject *tmp_metaclass_args_5;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_metaclass_value_10 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_12 = mod_consts.const_str_plain_INPUT;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_10 = tmp_class_container$class_creation_4__bases;
tmp_dict_arg_value_5 = locals_pyautogui$_pyautogui_win$$$class__4_INPUT_88;
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_decl_dict_value_5 = tmp_class_container$class_creation_4__class_decl_dict;
tmp_metaclass_args_5 = MAKE_TUPLE3(tstate, tmp_name_value_12, tmp_bases_value_10, tmp_dict_arg_value_5);
tmp_assign_source_67 = CALL_FUNCTION(tstate, tmp_metaclass_value_10, tmp_metaclass_args_5, tmp_class_decl_dict_value_5);
CHECK_OBJECT(tmp_metaclass_args_5);
Py_DECREF(tmp_metaclass_args_5);
if (tmp_assign_source_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_15;
}
{
    PyObject *old = outline_3_var___class__;
    outline_3_var___class__ = tmp_assign_source_67;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_59 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_59);
goto try_return_handler_15;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
Py_DECREF(locals_pyautogui$_pyautogui_win$$$class__4_INPUT_88);
locals_pyautogui$_pyautogui_win$$$class__4_INPUT_88 = NULL;
goto try_return_handler_14;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pyautogui$_pyautogui_win$$$class__4_INPUT_88);
locals_pyautogui$_pyautogui_win$$$class__4_INPUT_88 = NULL;
// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto try_except_handler_14;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_14:;
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
exception_lineno = 88;
goto try_except_handler_13;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_INPUT, tmp_assign_source_59);
}
goto try_end_8;
// Exception handler code:
try_except_handler_13:;
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
try_end_8:;
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
PyObject *tmp_assign_source_68;
PyObject *tmp_dict_seq_1;
// Tried code:
{
PyObject *tmp_assign_source_69;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_55;
tmp_expression_value_55 = module_var_accessor_pyautogui$_pyautogui_win$pyautogui(tstate);
if (unlikely(tmp_expression_value_55 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pyautogui);
}

if (tmp_expression_value_55 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 112;

    goto try_except_handler_19;
}
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts.const_str_plain_KEY_NAMES);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_19;
}
tmp_assign_source_69 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_19;
}
{
    PyObject *old = tmp_listcomp_1__$0;
    tmp_listcomp_1__$0 = tmp_assign_source_69;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_70;
tmp_assign_source_70 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = tmp_listcomp_1__contraction;
    tmp_listcomp_1__contraction = tmp_assign_source_70;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_71;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_71 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_71 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 112;
        goto try_except_handler_20;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_71;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_72;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_72 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_5_var_key;
    outline_5_var_key = tmp_assign_source_72;
    Py_INCREF(outline_5_var_key);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_tuple_element_35;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_5_var_key);
tmp_tuple_element_35 = outline_5_var_key;
tmp_append_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_append_value_1, 0, tmp_tuple_element_35);
tmp_tuple_element_35 = Py_None;
PyTuple_SET_ITEM0(tmp_append_value_1, 1, tmp_tuple_element_35);
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_20;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto try_except_handler_20;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_dict_seq_1 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_dict_seq_1);
goto try_return_handler_20;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_20:;
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
goto try_return_handler_19;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
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
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto try_except_handler_19;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_19:;
Py_XDECREF(outline_5_var_key);
outline_5_var_key = NULL;
goto outline_result_11;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_5_var_key);
outline_5_var_key = NULL;
// Re-raise.
exception_state = exception_keeper_name_20;
exception_lineno = exception_keeper_lineno_20;

goto outline_exception_6;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_6:;
exception_lineno = 112;
goto frame_exception_exit_1;
outline_result_11:;
tmp_assign_source_68 = TO_DICT(tstate, tmp_dict_seq_1, NULL);
CHECK_OBJECT(tmp_dict_seq_1);
Py_DECREF(tmp_dict_seq_1);
if (tmp_assign_source_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_keyboardMapping, tmp_assign_source_68);
}
{
PyObject *tmp_dict_arg_value_6;
PyObject *tmp_iterable_value_1;
tmp_dict_arg_value_6 = module_var_accessor_pyautogui$_pyautogui_win$keyboardMapping(tstate);
assert(!(tmp_dict_arg_value_6 == NULL));
tmp_iterable_value_1 = DICT_COPY(tstate, mod_consts.const_dict_dd2eea6e3c2e65ca25944cf57fcde142);
assert(PyDict_Check(tmp_dict_arg_value_6));
    tmp_res = PyDict_Merge(tmp_dict_arg_value_6, tmp_iterable_value_1, 1);

CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_73;
PyObject *tmp_iter_arg_2;
tmp_iter_arg_2 = mod_consts.const_xrange_32_128;
tmp_assign_source_73 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
assert(!(tmp_assign_source_73 == NULL));
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_73;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_74;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_2 = tmp_for_loop_1__for_iterator;
tmp_assign_source_74 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
if (tmp_assign_source_74 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 246;
        goto try_except_handler_21;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_74;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_75;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_75 = tmp_for_loop_1__iter_value;
UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain_c, tmp_assign_source_75);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_56;
PyObject *tmp_expression_value_57;
PyObject *tmp_expression_value_58;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_59;
PyObject *tmp_args_element_value_4;
PyObject *tmp_chr_arg_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
PyObject *tmp_chr_arg_2;
IMPORT_HARD_CTYPES__WINTYPES();
tmp_expression_value_58 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_58 == NULL));
tmp_expression_value_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts.const_str_plain_windll);
if (tmp_expression_value_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;

    goto try_except_handler_21;
}
tmp_expression_value_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_57);
Py_DECREF(tmp_expression_value_57);
if (tmp_expression_value_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;

    goto try_except_handler_21;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts.const_str_plain_VkKeyScanA);
CHECK_OBJECT(tmp_expression_value_56);
Py_DECREF(tmp_expression_value_56);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;

    goto try_except_handler_21;
}
tmp_expression_value_59 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_59 == NULL));
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts.const_str_plain_WCHAR);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 247;

    goto try_except_handler_21;
}
tmp_chr_arg_1 = module_var_accessor_pyautogui$_pyautogui_win$c(tstate);
if (unlikely(tmp_chr_arg_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
}

if (tmp_chr_arg_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_8);
Py_DECREF(tmp_called_value_9);

exception_lineno = 247;

    goto try_except_handler_21;
}
tmp_args_element_value_4 = BUILTIN_CHR(tstate, tmp_chr_arg_1);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);
Py_DECREF(tmp_called_value_9);

exception_lineno = 247;

    goto try_except_handler_21;
}
frame_frame_pyautogui$_pyautogui_win->m_frame.f_lineno = 247;
tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 247;

    goto try_except_handler_21;
}
frame_frame_pyautogui$_pyautogui_win->m_frame.f_lineno = 247;
tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;

    goto try_except_handler_21;
}
tmp_ass_subscribed_1 = module_var_accessor_pyautogui$_pyautogui_win$keyboardMapping(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_keyboardMapping);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 247;

    goto try_except_handler_21;
}
tmp_chr_arg_2 = module_var_accessor_pyautogui$_pyautogui_win$c(tstate);
if (unlikely(tmp_chr_arg_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
}

if (tmp_chr_arg_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 247;

    goto try_except_handler_21;
}
tmp_ass_subscript_1 = BUILTIN_CHR(tstate, tmp_chr_arg_2);
if (tmp_ass_subscript_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 247;

    goto try_except_handler_21;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscript_1);
Py_DECREF(tmp_ass_subscript_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;

    goto try_except_handler_21;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;

    goto try_except_handler_21;
}
goto loop_start_2;
loop_end_2:;
goto try_end_9;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_21 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_21 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_21;
exception_lineno = exception_keeper_lineno_21;

goto frame_exception_exit_1;
// End of try:
try_end_9:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_6;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pyautogui$_pyautogui_win, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyautogui$_pyautogui_win->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyautogui$_pyautogui_win, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_pyautogui$_pyautogui_win);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_6:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_assign_source_76;

tmp_assign_source_76 = MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__1__keyDown(tstate);

UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain__keyDown, tmp_assign_source_76);
}
{
PyObject *tmp_assign_source_77;

tmp_assign_source_77 = MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__2__keyUp(tstate);

UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain__keyUp, tmp_assign_source_77);
}
{
PyObject *tmp_assign_source_78;

tmp_assign_source_78 = MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__3__position(tstate);

UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain__position, tmp_assign_source_78);
}
{
PyObject *tmp_assign_source_79;

tmp_assign_source_79 = MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__4__size(tstate);

UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain__size, tmp_assign_source_79);
}
{
PyObject *tmp_assign_source_80;

tmp_assign_source_80 = MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__5__moveTo(tstate);

UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain__moveTo, tmp_assign_source_80);
}
{
PyObject *tmp_assign_source_81;

tmp_assign_source_81 = MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__6__mouseDown(tstate);

UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain__mouseDown, tmp_assign_source_81);
}
{
PyObject *tmp_assign_source_82;

tmp_assign_source_82 = MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__7__mouseUp(tstate);

UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain__mouseUp, tmp_assign_source_82);
}
{
PyObject *tmp_assign_source_83;

tmp_assign_source_83 = MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__8__click(tstate);

UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain__click, tmp_assign_source_83);
}
{
PyObject *tmp_assign_source_84;

tmp_assign_source_84 = MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__9__mouse_is_swapped(tstate);

UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain__mouse_is_swapped, tmp_assign_source_84);
}
{
PyObject *tmp_assign_source_85;
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_int_0_tuple;
Py_INCREF(tmp_defaults_1);

tmp_assign_source_85 = MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__10__sendMouseEvent(tstate, tmp_defaults_1);

UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain__sendMouseEvent, tmp_assign_source_85);
}
{
PyObject *tmp_assign_source_86;
PyObject *tmp_defaults_2;
tmp_defaults_2 = mod_consts.const_tuple_none_none_tuple;
Py_INCREF(tmp_defaults_2);

tmp_assign_source_86 = MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__11__scroll(tstate, tmp_defaults_2);

UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain__scroll, tmp_assign_source_86);
}
{
PyObject *tmp_assign_source_87;

tmp_assign_source_87 = MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__12__hscroll(tstate);

UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain__hscroll, tmp_assign_source_87);
}
{
PyObject *tmp_assign_source_88;

tmp_assign_source_88 = MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__13__vscroll(tstate);

UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts.const_str_plain__vscroll, tmp_assign_source_88);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pyautogui$_pyautogui_win", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "pyautogui._pyautogui_win" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_pyautogui$_pyautogui_win);
    return module_pyautogui$_pyautogui_win;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pyautogui$_pyautogui_win", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
