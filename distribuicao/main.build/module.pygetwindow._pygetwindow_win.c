/* Generated code for Python module 'pygetwindow$_pygetwindow_win'
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



/* The "module_pygetwindow$_pygetwindow_win" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pygetwindow$_pygetwindow_win;
PyDictObject *moduledict_pygetwindow$_pygetwindow_win;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_foreach_window;
PyObject *const_str_digest_30d666cd744e8cdbcd5910f85e4a4bd4;
PyObject *const_str_plain_enumWindows;
PyObject *const_str_plain_enumWindowsProc;
PyObject *const_str_plain_isWindowVisible;
PyObject *const_str_plain_getWindowTextLength;
PyObject *const_str_plain_create_unicode_buffer;
PyObject *const_str_plain_getWindowText;
PyObject *const_str_plain_titles;
PyObject *const_str_plain_append;
PyObject *const_str_plain_value;
PyObject *const_str_plain_LPWSTR;
PyObject *const_str_plain_windll;
PyObject *const_str_plain_kernel32;
PyObject *const_str_plain_FormatMessageW;
PyObject *const_str_plain_FORMAT_MESSAGE_FROM_SYSTEM;
PyObject *const_str_plain_FORMAT_MESSAGE_ALLOCATE_BUFFER;
PyObject *const_str_plain_FORMAT_MESSAGE_IGNORE_INSERTS;
PyObject *const_str_plain_NULL;
PyObject *const_str_plain_cast;
PyObject *const_str_plain_byref;
PyObject *const_str_plain_rstrip;
PyObject *const_str_plain_LocalFree;
PyObject *const_str_digest_d054d1307a0934653407ba0ca90276f4;
PyObject *const_str_plain_GetLastError;
PyObject *const_str_plain_PyGetWindowException;
PyObject *const_str_digest_e455f349b3701636c63fd989b2a4e858;
PyObject *const_str_plain__formatMessage;
PyObject *const_str_digest_e88ed2149ff8ff12d18869af92b77f92;
PyObject *const_str_plain_user32;
PyObject *const_str_plain_GetForegroundWindow;
PyObject *const_str_plain_Win32Window;
PyObject *const_str_digest_1d022ee69c59d664987345ba5272e87f;
PyObject *const_str_digest_6df562fe377e056528a1f6b835a23c58;
PyObject *const_str_plain_activeWindowTitle;
PyObject *const_str_digest_ca0cc6f21737ddbc955a7ab3f655a511;
PyObject *const_str_plain_activeWindowHwnd;
PyObject *const_str_plain_getAllWindows;
PyObject *const_str_plain_pointInRect;
PyObject *const_str_plain_x;
PyObject *const_str_plain_y;
PyObject *const_str_plain_left;
PyObject *const_str_plain_top;
PyObject *const_str_plain_width;
PyObject *const_str_plain_height;
PyObject *const_str_plain_windowsAtXY;
PyObject *const_str_digest_83fe9b59a0af00ad913a9113f3688dae;
PyObject *const_str_plain__getAllTitles;
PyObject *const_str_plain_title;
PyObject *const_str_plain_upper;
PyObject *const_str_plain_windowObjs;
PyObject *const_str_digest_6aff297347b5944a236a55f06bf6064d;
PyObject *const_str_digest_a90c0625b9a52987c5b5d5af83a4798b;
PyObject *const_str_digest_6723533f6ebd6a198c650522a9934109;
PyObject *const_str_digest_8628dc4ad1f0bf447da586b18167552f;
PyObject *const_str_plain_IsWindowVisible;
PyObject *const_str_plain__hWnd;
PyObject *const_str_plain__setupRectProperties;
PyObject *const_str_plain_RECT;
PyObject *const_str_plain_GetWindowRect;
PyObject *const_str_plain_Rect;
PyObject *const_str_plain_right;
PyObject *const_str_plain_bottom;
PyObject *const_str_plain__raiseWithLastError;
PyObject *const_str_digest_6192dfd13ab83f583193a710794ce796;
PyObject *const_str_digest_901749523d23be756c6e9667e6073003;
PyObject *const_str_plain_PostMessageA;
PyObject *const_str_plain_WM_CLOSE;
PyObject *const_str_digest_24c52ffbd16785c159377738d3ba47c9;
PyObject *const_str_plain_ShowWindow;
PyObject *const_str_plain_SW_MINIMIZE;
PyObject *const_str_digest_2347950359e50bb585b0d7babecbf024;
PyObject *const_str_plain_SW_MAXIMIZE;
PyObject *const_str_digest_a28d9e0ac5f91719f703deb6e0e0fcf6;
PyObject *const_str_plain_SW_RESTORE;
PyObject *const_str_digest_141ccf651bf778bc6787af9c47f23e1f;
PyObject *const_str_plain_SW_SHOW;
PyObject *const_str_digest_c5294f7eb5967a23dde47a2d32a2416d;
PyObject *const_str_plain_SW_HIDE;
PyObject *const_str_digest_afd4370183ce6c4fb289bf732bd20df6;
PyObject *const_str_plain_SetForegroundWindow;
PyObject *const_str_digest_30ebf2e745290c3a8aaa2eb972e64850;
PyObject *const_str_plain_SetWindowPos;
PyObject *const_str_plain_HWND_TOP;
PyObject *const_str_digest_b780765a76de9b11db29a7a00f3a69d0;
PyObject *const_str_digest_d52131e9b9ea154df4b2cb2c18c92faa;
PyObject *const_str_digest_b698657005bf7ee0ac8dab377c504ff2;
PyObject *const_str_digest_49d03aed15d9494f2b6e71b63caa167b;
PyObject *const_str_plain_IsIconic;
PyObject *const_str_digest_92bff2f447afdea35933ceccc107f36e;
PyObject *const_str_plain_IsZoomed;
PyObject *const_str_digest_bbb474f7c20ec4f75d1d03154738d3cc;
PyObject *const_str_plain_getActiveWindow;
PyObject *const_str_digest_6f09f303e6817cd06b336b083f09ee38;
PyObject *const_str_plain_GetWindowTextLengthW;
PyObject *const_str_plain_GetWindowTextW;
PyObject *const_str_digest_262a77c342046ca08690443d03637adb;
PyObject *const_str_digest_fc389ecfdbefb680ff030d4824789842;
PyObject *const_str_plain_POINT;
PyObject *const_str_plain_GetCursorPos;
PyObject *const_str_plain_Point;
PyObject *const_tuple_str_plain_x_str_plain_y_tuple;
PyObject *const_str_digest_cb5342b4d635afe5eb38c242c55784b1;
PyObject *const_str_plain_Size;
PyObject *const_str_plain_GetSystemMetrics;
PyObject *const_tuple_int_0_tuple;
PyObject *const_tuple_int_pos_1_tuple;
PyObject *const_tuple_str_plain_width_str_plain_height_tuple;
PyObject *const_str_digest_647ff2d34ac837eb32fa798e5dfec2ce;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_ctypes;
PyObject *const_str_plain_wintypes;
PyObject *const_str_plain_pygetwindow;
PyObject *const_tuple_e7cb26ed194d532e592c5c8d9a799d04_tuple;
PyObject *const_str_plain_BaseWindow;
PyObject *const_int_pos_256;
PyObject *const_int_pos_4096;
PyObject *const_int_pos_512;
PyObject *const_int_pos_6;
PyObject *const_int_pos_3;
PyObject *const_int_pos_5;
PyObject *const_int_pos_9;
PyObject *const_int_pos_16;
PyObject *const_str_plain_Structure;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_2776695a09cf567af3dff8b9993d40ac;
PyObject *const_int_pos_32;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_c_long;
PyObject *const_str_plain__fields_;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_EnumWindows;
PyObject *const_str_plain_WINFUNCTYPE;
PyObject *const_str_plain_c_bool;
PyObject *const_str_plain_c_int;
PyObject *const_str_plain_POINTER;
PyObject *const_str_digest_a383f92da1028744707e2d78dbf204e4;
PyObject *const_int_pos_43;
PyObject *const_str_plain_getActiveWindowTitle;
PyObject *const_str_plain_getWindowsAt;
PyObject *const_str_plain_getWindowsWithTitle;
PyObject *const_str_plain_getAllTitles;
PyObject *const_int_pos_176;
PyObject *const_str_digest_ffcc55b07d45ca7cd9bcba35e6747155;
PyObject *const_str_plain__getWindowRect;
PyObject *const_str_digest_1ef1ebdcf62f0bda5b9c45d411610ef6;
PyObject *const_str_plain___repr__;
PyObject *const_str_digest_6a501f0ab9b0a5ae998b2d9377920220;
PyObject *const_str_plain___eq__;
PyObject *const_str_digest_bb42c3414b1c71102c4d2811cefca583;
PyObject *const_str_digest_1ad20944f64700c3bbe5e1775b64718c;
PyObject *const_str_plain_minimize;
PyObject *const_str_digest_769f42585dcde3885c0722adb3cba398;
PyObject *const_str_plain_maximize;
PyObject *const_str_digest_1fa11f5f717ed8a8051d7be477396d17;
PyObject *const_str_plain_restore;
PyObject *const_str_digest_070ad4bb55c211c719adac77b833f576;
PyObject *const_str_plain_show;
PyObject *const_str_digest_604005b13371455c696a768302d4e016;
PyObject *const_str_plain_hide;
PyObject *const_str_digest_6b8c083c888a05564df8c14abe519101;
PyObject *const_str_plain_activate;
PyObject *const_str_digest_49b1ed9be2d6002965f4e8ae7169764f;
PyObject *const_str_plain_resize;
PyObject *const_str_digest_24313cb4f884f6879d35d6bad647ebb7;
PyObject *const_str_plain_resizeRel;
PyObject *const_str_plain_resizeTo;
PyObject *const_str_digest_426ebaa52290918ea89ce64a92671ce7;
PyObject *const_str_plain_move;
PyObject *const_str_digest_f3af80468b391e32ab7b1246882eeff3;
PyObject *const_str_plain_moveRel;
PyObject *const_str_plain_moveTo;
PyObject *const_str_digest_b63a4a971b3eaf53b84c680af8c4cb70;
PyObject *const_str_plain_property;
PyObject *const_str_plain_isMinimized;
PyObject *const_str_digest_a6b961e65626bc6503abfeba864d8415;
PyObject *const_str_plain_isMaximized;
PyObject *const_str_digest_7e364981da5b76d9ca074cc82558e1cf;
PyObject *const_str_plain_isActive;
PyObject *const_str_digest_a6ffd92d024f2c266bc7ae66efe4f133;
PyObject *const_str_digest_2c941aae51fae6289882a26cb4eb112c;
PyObject *const_str_plain_visible;
PyObject *const_str_digest_e6f27490dd81b1fa228891f37db50da9;
PyObject *const_tuple_str_plain__hWnd_tuple;
PyObject *const_str_plain_cursor;
PyObject *const_str_plain_resolution;
PyObject *const_str_digest_72aaabfd0501bcbe0cfb904212e05cfd;
PyObject *const_str_digest_afb9b0e874342de85cfd9606a2472098;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_other_tuple;
PyObject *const_tuple_str_plain_self_str_plain_hWnd_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_errorCode_str_plain_lpBuffer_str_plain_msg_tuple;
PyObject *const_tuple_str_plain_titles_str_plain_foreach_window_tuple;
PyObject *const_tuple_str_plain_self_str_plain_rect_str_plain_result_tuple;
PyObject *const_tuple_str_plain_errorCode_tuple;
PyObject *const_tuple_str_plain_self_str_plain_result_tuple;
PyObject *const_tuple_str_plain_cursor_tuple;
PyObject *const_tuple_ef03884268a4914420460e0666c045ea_tuple;
PyObject *const_tuple_str_plain_titles_tuple;
PyObject *const_tuple_d44ee331259385ffc532959ef2940fd8_tuple;
PyObject *const_tuple_str_plain_activeWindowHwnd_tuple;
PyObject *const_tuple_str_plain_hWnd_str_plain_lParam_str_plain_windowObjs_tuple;
PyObject *const_tuple_str_plain_windowObjs_tuple;
PyObject *const_tuple_str_plain_hWnd_tuple;
PyObject *const_tuple_str_plain_activeWindowHwnd_str_plain_foreach_window_tuple;
PyObject *const_tuple_str_plain_windowObjs_str_plain_foreach_window_tuple;
PyObject *const_tuple_ba569327c01d7de1e72c53889ee071b0_tuple;
PyObject *const_tuple_66a089e3c9dc007af427a6e4a3e7f069_tuple;
PyObject *const_tuple_e44b7f06e9b27e53203e30d45150679c_tuple;
PyObject *const_tuple_67af7b133394d2f47ee657d165ea815f_tuple;
PyObject *const_tuple_ad237162e27fa1111d84be9343a584a9_tuple;
PyObject *const_tuple_58445927d3b41707483675fefec4e18c_tuple;
PyObject *const_tuple_4265532bed070c6bd9c8f2a66ff6e6e3_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[219];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("pygetwindow._pygetwindow_win"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 219) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 219 values, got %d\n",
                    UN_TRANSLATE("pygetwindow._pygetwindow_win"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_foreach_window", mod_consts.const_str_plain_foreach_window);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_foreach_window);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_30d666cd744e8cdbcd5910f85e4a4bd4", mod_consts.const_str_digest_30d666cd744e8cdbcd5910f85e4a4bd4);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_digest_30d666cd744e8cdbcd5910f85e4a4bd4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_enumWindows", mod_consts.const_str_plain_enumWindows);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_enumWindows);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_enumWindowsProc", mod_consts.const_str_plain_enumWindowsProc);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_enumWindowsProc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_isWindowVisible", mod_consts.const_str_plain_isWindowVisible);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_isWindowVisible);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getWindowTextLength", mod_consts.const_str_plain_getWindowTextLength);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_getWindowTextLength);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_create_unicode_buffer", mod_consts.const_str_plain_create_unicode_buffer);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_unicode_buffer);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getWindowText", mod_consts.const_str_plain_getWindowText);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_getWindowText);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_titles", mod_consts.const_str_plain_titles);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_titles);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_append", mod_consts.const_str_plain_append);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_value", mod_consts.const_str_plain_value);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_value);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LPWSTR", mod_consts.const_str_plain_LPWSTR);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_LPWSTR);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_windll", mod_consts.const_str_plain_windll);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_windll);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_kernel32", mod_consts.const_str_plain_kernel32);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_kernel32);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FormatMessageW", mod_consts.const_str_plain_FormatMessageW);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_FormatMessageW);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FORMAT_MESSAGE_FROM_SYSTEM", mod_consts.const_str_plain_FORMAT_MESSAGE_FROM_SYSTEM);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_FORMAT_MESSAGE_FROM_SYSTEM);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FORMAT_MESSAGE_ALLOCATE_BUFFER", mod_consts.const_str_plain_FORMAT_MESSAGE_ALLOCATE_BUFFER);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_FORMAT_MESSAGE_ALLOCATE_BUFFER);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FORMAT_MESSAGE_IGNORE_INSERTS", mod_consts.const_str_plain_FORMAT_MESSAGE_IGNORE_INSERTS);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_FORMAT_MESSAGE_IGNORE_INSERTS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NULL", mod_consts.const_str_plain_NULL);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_NULL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cast", mod_consts.const_str_plain_cast);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_cast);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_byref", mod_consts.const_str_plain_byref);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_byref);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rstrip", mod_consts.const_str_plain_rstrip);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_rstrip);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LocalFree", mod_consts.const_str_plain_LocalFree);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_LocalFree);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d054d1307a0934653407ba0ca90276f4", mod_consts.const_str_digest_d054d1307a0934653407ba0ca90276f4);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_d054d1307a0934653407ba0ca90276f4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GetLastError", mod_consts.const_str_plain_GetLastError);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_GetLastError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PyGetWindowException", mod_consts.const_str_plain_PyGetWindowException);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_PyGetWindowException);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e455f349b3701636c63fd989b2a4e858", mod_consts.const_str_digest_e455f349b3701636c63fd989b2a4e858);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_e455f349b3701636c63fd989b2a4e858);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__formatMessage", mod_consts.const_str_plain__formatMessage);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain__formatMessage);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e88ed2149ff8ff12d18869af92b77f92", mod_consts.const_str_digest_e88ed2149ff8ff12d18869af92b77f92);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_e88ed2149ff8ff12d18869af92b77f92);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_user32", mod_consts.const_str_plain_user32);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_user32);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GetForegroundWindow", mod_consts.const_str_plain_GetForegroundWindow);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_GetForegroundWindow);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Win32Window", mod_consts.const_str_plain_Win32Window);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_Win32Window);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1d022ee69c59d664987345ba5272e87f", mod_consts.const_str_digest_1d022ee69c59d664987345ba5272e87f);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_1d022ee69c59d664987345ba5272e87f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6df562fe377e056528a1f6b835a23c58", mod_consts.const_str_digest_6df562fe377e056528a1f6b835a23c58);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_6df562fe377e056528a1f6b835a23c58);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_activeWindowTitle", mod_consts.const_str_plain_activeWindowTitle);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_activeWindowTitle);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ca0cc6f21737ddbc955a7ab3f655a511", mod_consts.const_str_digest_ca0cc6f21737ddbc955a7ab3f655a511);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_ca0cc6f21737ddbc955a7ab3f655a511);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_activeWindowHwnd", mod_consts.const_str_plain_activeWindowHwnd);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_activeWindowHwnd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getAllWindows", mod_consts.const_str_plain_getAllWindows);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_getAllWindows);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pointInRect", mod_consts.const_str_plain_pointInRect);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_pointInRect);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_x", mod_consts.const_str_plain_x);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_x);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_y", mod_consts.const_str_plain_y);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_y);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_left", mod_consts.const_str_plain_left);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_left);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_top", mod_consts.const_str_plain_top);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_top);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_width", mod_consts.const_str_plain_width);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_width);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_height", mod_consts.const_str_plain_height);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_height);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_windowsAtXY", mod_consts.const_str_plain_windowsAtXY);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_windowsAtXY);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_83fe9b59a0af00ad913a9113f3688dae", mod_consts.const_str_digest_83fe9b59a0af00ad913a9113f3688dae);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_83fe9b59a0af00ad913a9113f3688dae);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__getAllTitles", mod_consts.const_str_plain__getAllTitles);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain__getAllTitles);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_title", mod_consts.const_str_plain_title);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_title);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_upper", mod_consts.const_str_plain_upper);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_upper);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_windowObjs", mod_consts.const_str_plain_windowObjs);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_windowObjs);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6aff297347b5944a236a55f06bf6064d", mod_consts.const_str_digest_6aff297347b5944a236a55f06bf6064d);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_6aff297347b5944a236a55f06bf6064d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a90c0625b9a52987c5b5d5af83a4798b", mod_consts.const_str_digest_a90c0625b9a52987c5b5d5af83a4798b);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_a90c0625b9a52987c5b5d5af83a4798b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6723533f6ebd6a198c650522a9934109", mod_consts.const_str_digest_6723533f6ebd6a198c650522a9934109);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_6723533f6ebd6a198c650522a9934109);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8628dc4ad1f0bf447da586b18167552f", mod_consts.const_str_digest_8628dc4ad1f0bf447da586b18167552f);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_8628dc4ad1f0bf447da586b18167552f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IsWindowVisible", mod_consts.const_str_plain_IsWindowVisible);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_IsWindowVisible);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__hWnd", mod_consts.const_str_plain__hWnd);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain__hWnd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__setupRectProperties", mod_consts.const_str_plain__setupRectProperties);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain__setupRectProperties);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RECT", mod_consts.const_str_plain_RECT);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_RECT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GetWindowRect", mod_consts.const_str_plain_GetWindowRect);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_GetWindowRect);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Rect", mod_consts.const_str_plain_Rect);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_Rect);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_right", mod_consts.const_str_plain_right);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_right);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_bottom", mod_consts.const_str_plain_bottom);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_bottom);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__raiseWithLastError", mod_consts.const_str_plain__raiseWithLastError);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain__raiseWithLastError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6192dfd13ab83f583193a710794ce796", mod_consts.const_str_digest_6192dfd13ab83f583193a710794ce796);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_6192dfd13ab83f583193a710794ce796);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_901749523d23be756c6e9667e6073003", mod_consts.const_str_digest_901749523d23be756c6e9667e6073003);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_901749523d23be756c6e9667e6073003);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PostMessageA", mod_consts.const_str_plain_PostMessageA);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_PostMessageA);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WM_CLOSE", mod_consts.const_str_plain_WM_CLOSE);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_WM_CLOSE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_24c52ffbd16785c159377738d3ba47c9", mod_consts.const_str_digest_24c52ffbd16785c159377738d3ba47c9);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_24c52ffbd16785c159377738d3ba47c9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ShowWindow", mod_consts.const_str_plain_ShowWindow);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_ShowWindow);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SW_MINIMIZE", mod_consts.const_str_plain_SW_MINIMIZE);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_SW_MINIMIZE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2347950359e50bb585b0d7babecbf024", mod_consts.const_str_digest_2347950359e50bb585b0d7babecbf024);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_2347950359e50bb585b0d7babecbf024);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SW_MAXIMIZE", mod_consts.const_str_plain_SW_MAXIMIZE);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_SW_MAXIMIZE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a28d9e0ac5f91719f703deb6e0e0fcf6", mod_consts.const_str_digest_a28d9e0ac5f91719f703deb6e0e0fcf6);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_a28d9e0ac5f91719f703deb6e0e0fcf6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SW_RESTORE", mod_consts.const_str_plain_SW_RESTORE);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_SW_RESTORE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_141ccf651bf778bc6787af9c47f23e1f", mod_consts.const_str_digest_141ccf651bf778bc6787af9c47f23e1f);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_141ccf651bf778bc6787af9c47f23e1f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SW_SHOW", mod_consts.const_str_plain_SW_SHOW);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_SW_SHOW);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c5294f7eb5967a23dde47a2d32a2416d", mod_consts.const_str_digest_c5294f7eb5967a23dde47a2d32a2416d);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_digest_c5294f7eb5967a23dde47a2d32a2416d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SW_HIDE", mod_consts.const_str_plain_SW_HIDE);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_SW_HIDE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_afd4370183ce6c4fb289bf732bd20df6", mod_consts.const_str_digest_afd4370183ce6c4fb289bf732bd20df6);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_afd4370183ce6c4fb289bf732bd20df6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SetForegroundWindow", mod_consts.const_str_plain_SetForegroundWindow);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_SetForegroundWindow);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_30ebf2e745290c3a8aaa2eb972e64850", mod_consts.const_str_digest_30ebf2e745290c3a8aaa2eb972e64850);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_30ebf2e745290c3a8aaa2eb972e64850);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SetWindowPos", mod_consts.const_str_plain_SetWindowPos);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_SetWindowPos);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HWND_TOP", mod_consts.const_str_plain_HWND_TOP);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_HWND_TOP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b780765a76de9b11db29a7a00f3a69d0", mod_consts.const_str_digest_b780765a76de9b11db29a7a00f3a69d0);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_b780765a76de9b11db29a7a00f3a69d0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d52131e9b9ea154df4b2cb2c18c92faa", mod_consts.const_str_digest_d52131e9b9ea154df4b2cb2c18c92faa);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_d52131e9b9ea154df4b2cb2c18c92faa);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b698657005bf7ee0ac8dab377c504ff2", mod_consts.const_str_digest_b698657005bf7ee0ac8dab377c504ff2);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_b698657005bf7ee0ac8dab377c504ff2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_49d03aed15d9494f2b6e71b63caa167b", mod_consts.const_str_digest_49d03aed15d9494f2b6e71b63caa167b);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_49d03aed15d9494f2b6e71b63caa167b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IsIconic", mod_consts.const_str_plain_IsIconic);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_IsIconic);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_92bff2f447afdea35933ceccc107f36e", mod_consts.const_str_digest_92bff2f447afdea35933ceccc107f36e);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_92bff2f447afdea35933ceccc107f36e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IsZoomed", mod_consts.const_str_plain_IsZoomed);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_IsZoomed);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bbb474f7c20ec4f75d1d03154738d3cc", mod_consts.const_str_digest_bbb474f7c20ec4f75d1d03154738d3cc);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_digest_bbb474f7c20ec4f75d1d03154738d3cc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getActiveWindow", mod_consts.const_str_plain_getActiveWindow);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_getActiveWindow);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6f09f303e6817cd06b336b083f09ee38", mod_consts.const_str_digest_6f09f303e6817cd06b336b083f09ee38);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_6f09f303e6817cd06b336b083f09ee38);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GetWindowTextLengthW", mod_consts.const_str_plain_GetWindowTextLengthW);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_GetWindowTextLengthW);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GetWindowTextW", mod_consts.const_str_plain_GetWindowTextW);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_GetWindowTextW);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_262a77c342046ca08690443d03637adb", mod_consts.const_str_digest_262a77c342046ca08690443d03637adb);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_262a77c342046ca08690443d03637adb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fc389ecfdbefb680ff030d4824789842", mod_consts.const_str_digest_fc389ecfdbefb680ff030d4824789842);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_fc389ecfdbefb680ff030d4824789842);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_POINT", mod_consts.const_str_plain_POINT);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_POINT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GetCursorPos", mod_consts.const_str_plain_GetCursorPos);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_GetCursorPos);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Point", mod_consts.const_str_plain_Point);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_Point);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_x_str_plain_y_tuple", mod_consts.const_tuple_str_plain_x_str_plain_y_tuple);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cb5342b4d635afe5eb38c242c55784b1", mod_consts.const_str_digest_cb5342b4d635afe5eb38c242c55784b1);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_cb5342b4d635afe5eb38c242c55784b1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Size", mod_consts.const_str_plain_Size);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_Size);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GetSystemMetrics", mod_consts.const_str_plain_GetSystemMetrics);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_GetSystemMetrics);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_tuple", mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_1_tuple", mod_consts.const_tuple_int_pos_1_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_width_str_plain_height_tuple", mod_consts.const_tuple_str_plain_width_str_plain_height_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_width_str_plain_height_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_647ff2d34ac837eb32fa798e5dfec2ce", mod_consts.const_str_digest_647ff2d34ac837eb32fa798e5dfec2ce);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_647ff2d34ac837eb32fa798e5dfec2ce);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ctypes", mod_consts.const_str_plain_ctypes);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_ctypes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wintypes", mod_consts.const_str_plain_wintypes);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_wintypes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pygetwindow", mod_consts.const_str_plain_pygetwindow);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_pygetwindow);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_e7cb26ed194d532e592c5c8d9a799d04_tuple", mod_consts.const_tuple_e7cb26ed194d532e592c5c8d9a799d04_tuple);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_tuple_e7cb26ed194d532e592c5c8d9a799d04_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BaseWindow", mod_consts.const_str_plain_BaseWindow);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaseWindow);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_256", mod_consts.const_int_pos_256);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_int_pos_256);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4096", mod_consts.const_int_pos_4096);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_int_pos_4096);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_512", mod_consts.const_int_pos_512);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_int_pos_512);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_6", mod_consts.const_int_pos_6);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_int_pos_6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_3", mod_consts.const_int_pos_3);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_5", mod_consts.const_int_pos_5);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_int_pos_5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_9", mod_consts.const_int_pos_9);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_int_pos_9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16", mod_consts.const_int_pos_16);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_int_pos_16);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Structure", mod_consts.const_str_plain_Structure);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_Structure);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2776695a09cf567af3dff8b9993d40ac", mod_consts.const_str_digest_2776695a09cf567af3dff8b9993d40ac);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_2776695a09cf567af3dff8b9993d40ac);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_32", mod_consts.const_int_pos_32);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_int_pos_32);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_c_long", mod_consts.const_str_plain_c_long);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_c_long);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__fields_", mod_consts.const_str_plain__fields_);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain__fields_);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EnumWindows", mod_consts.const_str_plain_EnumWindows);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_EnumWindows);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WINFUNCTYPE", mod_consts.const_str_plain_WINFUNCTYPE);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_WINFUNCTYPE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_c_bool", mod_consts.const_str_plain_c_bool);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_c_bool);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_c_int", mod_consts.const_str_plain_c_int);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_c_int);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_POINTER", mod_consts.const_str_plain_POINTER);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_POINTER);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a383f92da1028744707e2d78dbf204e4", mod_consts.const_str_digest_a383f92da1028744707e2d78dbf204e4);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_digest_a383f92da1028744707e2d78dbf204e4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_43", mod_consts.const_int_pos_43);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_int_pos_43);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getActiveWindowTitle", mod_consts.const_str_plain_getActiveWindowTitle);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_getActiveWindowTitle);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getWindowsAt", mod_consts.const_str_plain_getWindowsAt);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_getWindowsAt);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getWindowsWithTitle", mod_consts.const_str_plain_getWindowsWithTitle);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_getWindowsWithTitle);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getAllTitles", mod_consts.const_str_plain_getAllTitles);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_getAllTitles);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_176", mod_consts.const_int_pos_176);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_int_pos_176);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ffcc55b07d45ca7cd9bcba35e6747155", mod_consts.const_str_digest_ffcc55b07d45ca7cd9bcba35e6747155);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_digest_ffcc55b07d45ca7cd9bcba35e6747155);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__getWindowRect", mod_consts.const_str_plain__getWindowRect);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain__getWindowRect);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1ef1ebdcf62f0bda5b9c45d411610ef6", mod_consts.const_str_digest_1ef1ebdcf62f0bda5b9c45d411610ef6);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_digest_1ef1ebdcf62f0bda5b9c45d411610ef6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___repr__", mod_consts.const_str_plain___repr__);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain___repr__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6a501f0ab9b0a5ae998b2d9377920220", mod_consts.const_str_digest_6a501f0ab9b0a5ae998b2d9377920220);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_digest_6a501f0ab9b0a5ae998b2d9377920220);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___eq__", mod_consts.const_str_plain___eq__);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain___eq__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bb42c3414b1c71102c4d2811cefca583", mod_consts.const_str_digest_bb42c3414b1c71102c4d2811cefca583);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_digest_bb42c3414b1c71102c4d2811cefca583);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1ad20944f64700c3bbe5e1775b64718c", mod_consts.const_str_digest_1ad20944f64700c3bbe5e1775b64718c);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_digest_1ad20944f64700c3bbe5e1775b64718c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_minimize", mod_consts.const_str_plain_minimize);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain_minimize);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_769f42585dcde3885c0722adb3cba398", mod_consts.const_str_digest_769f42585dcde3885c0722adb3cba398);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_digest_769f42585dcde3885c0722adb3cba398);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_maximize", mod_consts.const_str_plain_maximize);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain_maximize);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1fa11f5f717ed8a8051d7be477396d17", mod_consts.const_str_digest_1fa11f5f717ed8a8051d7be477396d17);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_digest_1fa11f5f717ed8a8051d7be477396d17);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_restore", mod_consts.const_str_plain_restore);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain_restore);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_070ad4bb55c211c719adac77b833f576", mod_consts.const_str_digest_070ad4bb55c211c719adac77b833f576);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_digest_070ad4bb55c211c719adac77b833f576);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_show", mod_consts.const_str_plain_show);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain_show);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_604005b13371455c696a768302d4e016", mod_consts.const_str_digest_604005b13371455c696a768302d4e016);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_digest_604005b13371455c696a768302d4e016);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hide", mod_consts.const_str_plain_hide);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain_hide);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6b8c083c888a05564df8c14abe519101", mod_consts.const_str_digest_6b8c083c888a05564df8c14abe519101);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_digest_6b8c083c888a05564df8c14abe519101);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_activate", mod_consts.const_str_plain_activate);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain_activate);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_49b1ed9be2d6002965f4e8ae7169764f", mod_consts.const_str_digest_49b1ed9be2d6002965f4e8ae7169764f);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_digest_49b1ed9be2d6002965f4e8ae7169764f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_resize", mod_consts.const_str_plain_resize);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_plain_resize);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_24313cb4f884f6879d35d6bad647ebb7", mod_consts.const_str_digest_24313cb4f884f6879d35d6bad647ebb7);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_digest_24313cb4f884f6879d35d6bad647ebb7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_resizeRel", mod_consts.const_str_plain_resizeRel);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain_resizeRel);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_resizeTo", mod_consts.const_str_plain_resizeTo);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_resizeTo);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_426ebaa52290918ea89ce64a92671ce7", mod_consts.const_str_digest_426ebaa52290918ea89ce64a92671ce7);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_digest_426ebaa52290918ea89ce64a92671ce7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_move", mod_consts.const_str_plain_move);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain_move);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f3af80468b391e32ab7b1246882eeff3", mod_consts.const_str_digest_f3af80468b391e32ab7b1246882eeff3);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_digest_f3af80468b391e32ab7b1246882eeff3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_moveRel", mod_consts.const_str_plain_moveRel);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_plain_moveRel);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_moveTo", mod_consts.const_str_plain_moveTo);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_plain_moveTo);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b63a4a971b3eaf53b84c680af8c4cb70", mod_consts.const_str_digest_b63a4a971b3eaf53b84c680af8c4cb70);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_digest_b63a4a971b3eaf53b84c680af8c4cb70);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_property", mod_consts.const_str_plain_property);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_isMinimized", mod_consts.const_str_plain_isMinimized);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_plain_isMinimized);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a6b961e65626bc6503abfeba864d8415", mod_consts.const_str_digest_a6b961e65626bc6503abfeba864d8415);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_digest_a6b961e65626bc6503abfeba864d8415);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_isMaximized", mod_consts.const_str_plain_isMaximized);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain_isMaximized);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7e364981da5b76d9ca074cc82558e1cf", mod_consts.const_str_digest_7e364981da5b76d9ca074cc82558e1cf);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_digest_7e364981da5b76d9ca074cc82558e1cf);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_isActive", mod_consts.const_str_plain_isActive);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_plain_isActive);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a6ffd92d024f2c266bc7ae66efe4f133", mod_consts.const_str_digest_a6ffd92d024f2c266bc7ae66efe4f133);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_digest_a6ffd92d024f2c266bc7ae66efe4f133);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2c941aae51fae6289882a26cb4eb112c", mod_consts.const_str_digest_2c941aae51fae6289882a26cb4eb112c);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_digest_2c941aae51fae6289882a26cb4eb112c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_visible", mod_consts.const_str_plain_visible);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_plain_visible);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e6f27490dd81b1fa228891f37db50da9", mod_consts.const_str_digest_e6f27490dd81b1fa228891f37db50da9);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_digest_e6f27490dd81b1fa228891f37db50da9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__hWnd_tuple", mod_consts.const_tuple_str_plain__hWnd_tuple);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__hWnd_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cursor", mod_consts.const_str_plain_cursor);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_plain_cursor);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_resolution", mod_consts.const_str_plain_resolution);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_plain_resolution);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_72aaabfd0501bcbe0cfb904212e05cfd", mod_consts.const_str_digest_72aaabfd0501bcbe0cfb904212e05cfd);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_digest_72aaabfd0501bcbe0cfb904212e05cfd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_afb9b0e874342de85cfd9606a2472098", mod_consts.const_str_digest_afb9b0e874342de85cfd9606a2472098);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_digest_afb9b0e874342de85cfd9606a2472098);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_other_tuple", mod_consts.const_tuple_str_plain_self_str_plain_other_tuple);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_hWnd_tuple", mod_consts.const_tuple_str_plain_self_str_plain_hWnd_tuple);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_hWnd_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_errorCode_str_plain_lpBuffer_str_plain_msg_tuple", mod_consts.const_tuple_str_plain_errorCode_str_plain_lpBuffer_str_plain_msg_tuple);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_errorCode_str_plain_lpBuffer_str_plain_msg_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_titles_str_plain_foreach_window_tuple", mod_consts.const_tuple_str_plain_titles_str_plain_foreach_window_tuple);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_titles_str_plain_foreach_window_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_rect_str_plain_result_tuple", mod_consts.const_tuple_str_plain_self_str_plain_rect_str_plain_result_tuple);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_rect_str_plain_result_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_errorCode_tuple", mod_consts.const_tuple_str_plain_errorCode_tuple);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_errorCode_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_result_tuple", mod_consts.const_tuple_str_plain_self_str_plain_result_tuple);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_result_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_cursor_tuple", mod_consts.const_tuple_str_plain_cursor_tuple);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cursor_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_ef03884268a4914420460e0666c045ea_tuple", mod_consts.const_tuple_ef03884268a4914420460e0666c045ea_tuple);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_tuple_ef03884268a4914420460e0666c045ea_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_titles_tuple", mod_consts.const_tuple_str_plain_titles_tuple);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_titles_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_d44ee331259385ffc532959ef2940fd8_tuple", mod_consts.const_tuple_d44ee331259385ffc532959ef2940fd8_tuple);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_tuple_d44ee331259385ffc532959ef2940fd8_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_activeWindowHwnd_tuple", mod_consts.const_tuple_str_plain_activeWindowHwnd_tuple);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_activeWindowHwnd_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_hWnd_str_plain_lParam_str_plain_windowObjs_tuple", mod_consts.const_tuple_str_plain_hWnd_str_plain_lParam_str_plain_windowObjs_tuple);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_hWnd_str_plain_lParam_str_plain_windowObjs_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_windowObjs_tuple", mod_consts.const_tuple_str_plain_windowObjs_tuple);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_windowObjs_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_hWnd_tuple", mod_consts.const_tuple_str_plain_hWnd_tuple);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_hWnd_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_activeWindowHwnd_str_plain_foreach_window_tuple", mod_consts.const_tuple_str_plain_activeWindowHwnd_str_plain_foreach_window_tuple);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_activeWindowHwnd_str_plain_foreach_window_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_windowObjs_str_plain_foreach_window_tuple", mod_consts.const_tuple_str_plain_windowObjs_str_plain_foreach_window_tuple);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_windowObjs_str_plain_foreach_window_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_ba569327c01d7de1e72c53889ee071b0_tuple", mod_consts.const_tuple_ba569327c01d7de1e72c53889ee071b0_tuple);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_tuple_ba569327c01d7de1e72c53889ee071b0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_66a089e3c9dc007af427a6e4a3e7f069_tuple", mod_consts.const_tuple_66a089e3c9dc007af427a6e4a3e7f069_tuple);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_tuple_66a089e3c9dc007af427a6e4a3e7f069_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_e44b7f06e9b27e53203e30d45150679c_tuple", mod_consts.const_tuple_e44b7f06e9b27e53203e30d45150679c_tuple);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_tuple_e44b7f06e9b27e53203e30d45150679c_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_67af7b133394d2f47ee657d165ea815f_tuple", mod_consts.const_tuple_67af7b133394d2f47ee657d165ea815f_tuple);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_tuple_67af7b133394d2f47ee657d165ea815f_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_ad237162e27fa1111d84be9343a584a9_tuple", mod_consts.const_tuple_ad237162e27fa1111d84be9343a584a9_tuple);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_tuple_ad237162e27fa1111d84be9343a584a9_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_58445927d3b41707483675fefec4e18c_tuple", mod_consts.const_tuple_58445927d3b41707483675fefec4e18c_tuple);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_tuple_58445927d3b41707483675fefec4e18c_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_4265532bed070c6bd9c8f2a66ff6e6e3_tuple", mod_consts.const_tuple_4265532bed070c6bd9c8f2a66ff6e6e3_tuple);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_tuple_4265532bed070c6bd9c8f2a66ff6e6e3_tuple);
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
void checkModuleConstants_pygetwindow$_pygetwindow_win(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_foreach_window", mod_consts.const_str_plain_foreach_window);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_foreach_window) && "mod_consts.const_str_plain_foreach_window");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_30d666cd744e8cdbcd5910f85e4a4bd4", mod_consts.const_str_digest_30d666cd744e8cdbcd5910f85e4a4bd4);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_digest_30d666cd744e8cdbcd5910f85e4a4bd4) && "mod_consts.const_str_digest_30d666cd744e8cdbcd5910f85e4a4bd4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_enumWindows", mod_consts.const_str_plain_enumWindows);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_enumWindows) && "mod_consts.const_str_plain_enumWindows");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_enumWindowsProc", mod_consts.const_str_plain_enumWindowsProc);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_enumWindowsProc) && "mod_consts.const_str_plain_enumWindowsProc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_isWindowVisible", mod_consts.const_str_plain_isWindowVisible);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_isWindowVisible) && "mod_consts.const_str_plain_isWindowVisible");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getWindowTextLength", mod_consts.const_str_plain_getWindowTextLength);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_getWindowTextLength) && "mod_consts.const_str_plain_getWindowTextLength");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_create_unicode_buffer", mod_consts.const_str_plain_create_unicode_buffer);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_unicode_buffer) && "mod_consts.const_str_plain_create_unicode_buffer");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getWindowText", mod_consts.const_str_plain_getWindowText);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_getWindowText) && "mod_consts.const_str_plain_getWindowText");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_titles", mod_consts.const_str_plain_titles);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_titles) && "mod_consts.const_str_plain_titles");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_append", mod_consts.const_str_plain_append);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_append) && "mod_consts.const_str_plain_append");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_value", mod_consts.const_str_plain_value);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_value) && "mod_consts.const_str_plain_value");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LPWSTR", mod_consts.const_str_plain_LPWSTR);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_LPWSTR) && "mod_consts.const_str_plain_LPWSTR");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_windll", mod_consts.const_str_plain_windll);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_windll) && "mod_consts.const_str_plain_windll");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_kernel32", mod_consts.const_str_plain_kernel32);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_kernel32) && "mod_consts.const_str_plain_kernel32");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FormatMessageW", mod_consts.const_str_plain_FormatMessageW);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_FormatMessageW) && "mod_consts.const_str_plain_FormatMessageW");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FORMAT_MESSAGE_FROM_SYSTEM", mod_consts.const_str_plain_FORMAT_MESSAGE_FROM_SYSTEM);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_FORMAT_MESSAGE_FROM_SYSTEM) && "mod_consts.const_str_plain_FORMAT_MESSAGE_FROM_SYSTEM");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FORMAT_MESSAGE_ALLOCATE_BUFFER", mod_consts.const_str_plain_FORMAT_MESSAGE_ALLOCATE_BUFFER);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_FORMAT_MESSAGE_ALLOCATE_BUFFER) && "mod_consts.const_str_plain_FORMAT_MESSAGE_ALLOCATE_BUFFER");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FORMAT_MESSAGE_IGNORE_INSERTS", mod_consts.const_str_plain_FORMAT_MESSAGE_IGNORE_INSERTS);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_FORMAT_MESSAGE_IGNORE_INSERTS) && "mod_consts.const_str_plain_FORMAT_MESSAGE_IGNORE_INSERTS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NULL", mod_consts.const_str_plain_NULL);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_NULL) && "mod_consts.const_str_plain_NULL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cast", mod_consts.const_str_plain_cast);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_cast) && "mod_consts.const_str_plain_cast");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_byref", mod_consts.const_str_plain_byref);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_byref) && "mod_consts.const_str_plain_byref");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rstrip", mod_consts.const_str_plain_rstrip);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_rstrip) && "mod_consts.const_str_plain_rstrip");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LocalFree", mod_consts.const_str_plain_LocalFree);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_LocalFree) && "mod_consts.const_str_plain_LocalFree");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d054d1307a0934653407ba0ca90276f4", mod_consts.const_str_digest_d054d1307a0934653407ba0ca90276f4);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_d054d1307a0934653407ba0ca90276f4) && "mod_consts.const_str_digest_d054d1307a0934653407ba0ca90276f4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GetLastError", mod_consts.const_str_plain_GetLastError);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_GetLastError) && "mod_consts.const_str_plain_GetLastError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PyGetWindowException", mod_consts.const_str_plain_PyGetWindowException);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_PyGetWindowException) && "mod_consts.const_str_plain_PyGetWindowException");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e455f349b3701636c63fd989b2a4e858", mod_consts.const_str_digest_e455f349b3701636c63fd989b2a4e858);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_e455f349b3701636c63fd989b2a4e858) && "mod_consts.const_str_digest_e455f349b3701636c63fd989b2a4e858");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__formatMessage", mod_consts.const_str_plain__formatMessage);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain__formatMessage) && "mod_consts.const_str_plain__formatMessage");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e88ed2149ff8ff12d18869af92b77f92", mod_consts.const_str_digest_e88ed2149ff8ff12d18869af92b77f92);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_e88ed2149ff8ff12d18869af92b77f92) && "mod_consts.const_str_digest_e88ed2149ff8ff12d18869af92b77f92");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_user32", mod_consts.const_str_plain_user32);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_user32) && "mod_consts.const_str_plain_user32");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GetForegroundWindow", mod_consts.const_str_plain_GetForegroundWindow);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_GetForegroundWindow) && "mod_consts.const_str_plain_GetForegroundWindow");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Win32Window", mod_consts.const_str_plain_Win32Window);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_Win32Window) && "mod_consts.const_str_plain_Win32Window");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1d022ee69c59d664987345ba5272e87f", mod_consts.const_str_digest_1d022ee69c59d664987345ba5272e87f);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_1d022ee69c59d664987345ba5272e87f) && "mod_consts.const_str_digest_1d022ee69c59d664987345ba5272e87f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6df562fe377e056528a1f6b835a23c58", mod_consts.const_str_digest_6df562fe377e056528a1f6b835a23c58);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_6df562fe377e056528a1f6b835a23c58) && "mod_consts.const_str_digest_6df562fe377e056528a1f6b835a23c58");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_activeWindowTitle", mod_consts.const_str_plain_activeWindowTitle);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_activeWindowTitle) && "mod_consts.const_str_plain_activeWindowTitle");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ca0cc6f21737ddbc955a7ab3f655a511", mod_consts.const_str_digest_ca0cc6f21737ddbc955a7ab3f655a511);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_ca0cc6f21737ddbc955a7ab3f655a511) && "mod_consts.const_str_digest_ca0cc6f21737ddbc955a7ab3f655a511");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_activeWindowHwnd", mod_consts.const_str_plain_activeWindowHwnd);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_activeWindowHwnd) && "mod_consts.const_str_plain_activeWindowHwnd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getAllWindows", mod_consts.const_str_plain_getAllWindows);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_getAllWindows) && "mod_consts.const_str_plain_getAllWindows");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pointInRect", mod_consts.const_str_plain_pointInRect);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_pointInRect) && "mod_consts.const_str_plain_pointInRect");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_x", mod_consts.const_str_plain_x);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_x) && "mod_consts.const_str_plain_x");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_y", mod_consts.const_str_plain_y);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_y) && "mod_consts.const_str_plain_y");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_left", mod_consts.const_str_plain_left);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_left) && "mod_consts.const_str_plain_left");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_top", mod_consts.const_str_plain_top);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_top) && "mod_consts.const_str_plain_top");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_width", mod_consts.const_str_plain_width);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_width) && "mod_consts.const_str_plain_width");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_height", mod_consts.const_str_plain_height);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_height) && "mod_consts.const_str_plain_height");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_windowsAtXY", mod_consts.const_str_plain_windowsAtXY);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_windowsAtXY) && "mod_consts.const_str_plain_windowsAtXY");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_83fe9b59a0af00ad913a9113f3688dae", mod_consts.const_str_digest_83fe9b59a0af00ad913a9113f3688dae);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_83fe9b59a0af00ad913a9113f3688dae) && "mod_consts.const_str_digest_83fe9b59a0af00ad913a9113f3688dae");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__getAllTitles", mod_consts.const_str_plain__getAllTitles);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain__getAllTitles) && "mod_consts.const_str_plain__getAllTitles");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_title", mod_consts.const_str_plain_title);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_title) && "mod_consts.const_str_plain_title");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_upper", mod_consts.const_str_plain_upper);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_upper) && "mod_consts.const_str_plain_upper");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_windowObjs", mod_consts.const_str_plain_windowObjs);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_windowObjs) && "mod_consts.const_str_plain_windowObjs");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6aff297347b5944a236a55f06bf6064d", mod_consts.const_str_digest_6aff297347b5944a236a55f06bf6064d);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_6aff297347b5944a236a55f06bf6064d) && "mod_consts.const_str_digest_6aff297347b5944a236a55f06bf6064d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a90c0625b9a52987c5b5d5af83a4798b", mod_consts.const_str_digest_a90c0625b9a52987c5b5d5af83a4798b);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_a90c0625b9a52987c5b5d5af83a4798b) && "mod_consts.const_str_digest_a90c0625b9a52987c5b5d5af83a4798b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6723533f6ebd6a198c650522a9934109", mod_consts.const_str_digest_6723533f6ebd6a198c650522a9934109);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_6723533f6ebd6a198c650522a9934109) && "mod_consts.const_str_digest_6723533f6ebd6a198c650522a9934109");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8628dc4ad1f0bf447da586b18167552f", mod_consts.const_str_digest_8628dc4ad1f0bf447da586b18167552f);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_8628dc4ad1f0bf447da586b18167552f) && "mod_consts.const_str_digest_8628dc4ad1f0bf447da586b18167552f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IsWindowVisible", mod_consts.const_str_plain_IsWindowVisible);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_IsWindowVisible) && "mod_consts.const_str_plain_IsWindowVisible");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__hWnd", mod_consts.const_str_plain__hWnd);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain__hWnd) && "mod_consts.const_str_plain__hWnd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__setupRectProperties", mod_consts.const_str_plain__setupRectProperties);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain__setupRectProperties) && "mod_consts.const_str_plain__setupRectProperties");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RECT", mod_consts.const_str_plain_RECT);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_RECT) && "mod_consts.const_str_plain_RECT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GetWindowRect", mod_consts.const_str_plain_GetWindowRect);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_GetWindowRect) && "mod_consts.const_str_plain_GetWindowRect");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Rect", mod_consts.const_str_plain_Rect);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_Rect) && "mod_consts.const_str_plain_Rect");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_right", mod_consts.const_str_plain_right);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_right) && "mod_consts.const_str_plain_right");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_bottom", mod_consts.const_str_plain_bottom);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_bottom) && "mod_consts.const_str_plain_bottom");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__raiseWithLastError", mod_consts.const_str_plain__raiseWithLastError);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain__raiseWithLastError) && "mod_consts.const_str_plain__raiseWithLastError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6192dfd13ab83f583193a710794ce796", mod_consts.const_str_digest_6192dfd13ab83f583193a710794ce796);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_6192dfd13ab83f583193a710794ce796) && "mod_consts.const_str_digest_6192dfd13ab83f583193a710794ce796");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_901749523d23be756c6e9667e6073003", mod_consts.const_str_digest_901749523d23be756c6e9667e6073003);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_901749523d23be756c6e9667e6073003) && "mod_consts.const_str_digest_901749523d23be756c6e9667e6073003");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PostMessageA", mod_consts.const_str_plain_PostMessageA);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_PostMessageA) && "mod_consts.const_str_plain_PostMessageA");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WM_CLOSE", mod_consts.const_str_plain_WM_CLOSE);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_WM_CLOSE) && "mod_consts.const_str_plain_WM_CLOSE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_24c52ffbd16785c159377738d3ba47c9", mod_consts.const_str_digest_24c52ffbd16785c159377738d3ba47c9);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_24c52ffbd16785c159377738d3ba47c9) && "mod_consts.const_str_digest_24c52ffbd16785c159377738d3ba47c9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ShowWindow", mod_consts.const_str_plain_ShowWindow);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_ShowWindow) && "mod_consts.const_str_plain_ShowWindow");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SW_MINIMIZE", mod_consts.const_str_plain_SW_MINIMIZE);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_SW_MINIMIZE) && "mod_consts.const_str_plain_SW_MINIMIZE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2347950359e50bb585b0d7babecbf024", mod_consts.const_str_digest_2347950359e50bb585b0d7babecbf024);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_2347950359e50bb585b0d7babecbf024) && "mod_consts.const_str_digest_2347950359e50bb585b0d7babecbf024");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SW_MAXIMIZE", mod_consts.const_str_plain_SW_MAXIMIZE);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_SW_MAXIMIZE) && "mod_consts.const_str_plain_SW_MAXIMIZE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a28d9e0ac5f91719f703deb6e0e0fcf6", mod_consts.const_str_digest_a28d9e0ac5f91719f703deb6e0e0fcf6);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_a28d9e0ac5f91719f703deb6e0e0fcf6) && "mod_consts.const_str_digest_a28d9e0ac5f91719f703deb6e0e0fcf6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SW_RESTORE", mod_consts.const_str_plain_SW_RESTORE);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_SW_RESTORE) && "mod_consts.const_str_plain_SW_RESTORE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_141ccf651bf778bc6787af9c47f23e1f", mod_consts.const_str_digest_141ccf651bf778bc6787af9c47f23e1f);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_141ccf651bf778bc6787af9c47f23e1f) && "mod_consts.const_str_digest_141ccf651bf778bc6787af9c47f23e1f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SW_SHOW", mod_consts.const_str_plain_SW_SHOW);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_SW_SHOW) && "mod_consts.const_str_plain_SW_SHOW");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c5294f7eb5967a23dde47a2d32a2416d", mod_consts.const_str_digest_c5294f7eb5967a23dde47a2d32a2416d);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_digest_c5294f7eb5967a23dde47a2d32a2416d) && "mod_consts.const_str_digest_c5294f7eb5967a23dde47a2d32a2416d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SW_HIDE", mod_consts.const_str_plain_SW_HIDE);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_SW_HIDE) && "mod_consts.const_str_plain_SW_HIDE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_afd4370183ce6c4fb289bf732bd20df6", mod_consts.const_str_digest_afd4370183ce6c4fb289bf732bd20df6);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_afd4370183ce6c4fb289bf732bd20df6) && "mod_consts.const_str_digest_afd4370183ce6c4fb289bf732bd20df6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SetForegroundWindow", mod_consts.const_str_plain_SetForegroundWindow);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_SetForegroundWindow) && "mod_consts.const_str_plain_SetForegroundWindow");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_30ebf2e745290c3a8aaa2eb972e64850", mod_consts.const_str_digest_30ebf2e745290c3a8aaa2eb972e64850);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_30ebf2e745290c3a8aaa2eb972e64850) && "mod_consts.const_str_digest_30ebf2e745290c3a8aaa2eb972e64850");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SetWindowPos", mod_consts.const_str_plain_SetWindowPos);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_SetWindowPos) && "mod_consts.const_str_plain_SetWindowPos");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HWND_TOP", mod_consts.const_str_plain_HWND_TOP);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_HWND_TOP) && "mod_consts.const_str_plain_HWND_TOP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b780765a76de9b11db29a7a00f3a69d0", mod_consts.const_str_digest_b780765a76de9b11db29a7a00f3a69d0);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_b780765a76de9b11db29a7a00f3a69d0) && "mod_consts.const_str_digest_b780765a76de9b11db29a7a00f3a69d0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d52131e9b9ea154df4b2cb2c18c92faa", mod_consts.const_str_digest_d52131e9b9ea154df4b2cb2c18c92faa);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_d52131e9b9ea154df4b2cb2c18c92faa) && "mod_consts.const_str_digest_d52131e9b9ea154df4b2cb2c18c92faa");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b698657005bf7ee0ac8dab377c504ff2", mod_consts.const_str_digest_b698657005bf7ee0ac8dab377c504ff2);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_b698657005bf7ee0ac8dab377c504ff2) && "mod_consts.const_str_digest_b698657005bf7ee0ac8dab377c504ff2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_49d03aed15d9494f2b6e71b63caa167b", mod_consts.const_str_digest_49d03aed15d9494f2b6e71b63caa167b);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_49d03aed15d9494f2b6e71b63caa167b) && "mod_consts.const_str_digest_49d03aed15d9494f2b6e71b63caa167b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IsIconic", mod_consts.const_str_plain_IsIconic);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_IsIconic) && "mod_consts.const_str_plain_IsIconic");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_92bff2f447afdea35933ceccc107f36e", mod_consts.const_str_digest_92bff2f447afdea35933ceccc107f36e);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_92bff2f447afdea35933ceccc107f36e) && "mod_consts.const_str_digest_92bff2f447afdea35933ceccc107f36e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IsZoomed", mod_consts.const_str_plain_IsZoomed);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_IsZoomed) && "mod_consts.const_str_plain_IsZoomed");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bbb474f7c20ec4f75d1d03154738d3cc", mod_consts.const_str_digest_bbb474f7c20ec4f75d1d03154738d3cc);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_digest_bbb474f7c20ec4f75d1d03154738d3cc) && "mod_consts.const_str_digest_bbb474f7c20ec4f75d1d03154738d3cc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getActiveWindow", mod_consts.const_str_plain_getActiveWindow);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_getActiveWindow) && "mod_consts.const_str_plain_getActiveWindow");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6f09f303e6817cd06b336b083f09ee38", mod_consts.const_str_digest_6f09f303e6817cd06b336b083f09ee38);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_6f09f303e6817cd06b336b083f09ee38) && "mod_consts.const_str_digest_6f09f303e6817cd06b336b083f09ee38");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GetWindowTextLengthW", mod_consts.const_str_plain_GetWindowTextLengthW);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_GetWindowTextLengthW) && "mod_consts.const_str_plain_GetWindowTextLengthW");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GetWindowTextW", mod_consts.const_str_plain_GetWindowTextW);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_GetWindowTextW) && "mod_consts.const_str_plain_GetWindowTextW");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_262a77c342046ca08690443d03637adb", mod_consts.const_str_digest_262a77c342046ca08690443d03637adb);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_262a77c342046ca08690443d03637adb) && "mod_consts.const_str_digest_262a77c342046ca08690443d03637adb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fc389ecfdbefb680ff030d4824789842", mod_consts.const_str_digest_fc389ecfdbefb680ff030d4824789842);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_fc389ecfdbefb680ff030d4824789842) && "mod_consts.const_str_digest_fc389ecfdbefb680ff030d4824789842");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_POINT", mod_consts.const_str_plain_POINT);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_POINT) && "mod_consts.const_str_plain_POINT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GetCursorPos", mod_consts.const_str_plain_GetCursorPos);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_GetCursorPos) && "mod_consts.const_str_plain_GetCursorPos");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Point", mod_consts.const_str_plain_Point);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_Point) && "mod_consts.const_str_plain_Point");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_x_str_plain_y_tuple", mod_consts.const_tuple_str_plain_x_str_plain_y_tuple);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_tuple) && "mod_consts.const_tuple_str_plain_x_str_plain_y_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cb5342b4d635afe5eb38c242c55784b1", mod_consts.const_str_digest_cb5342b4d635afe5eb38c242c55784b1);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_cb5342b4d635afe5eb38c242c55784b1) && "mod_consts.const_str_digest_cb5342b4d635afe5eb38c242c55784b1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Size", mod_consts.const_str_plain_Size);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_Size) && "mod_consts.const_str_plain_Size");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GetSystemMetrics", mod_consts.const_str_plain_GetSystemMetrics);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_GetSystemMetrics) && "mod_consts.const_str_plain_GetSystemMetrics");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_tuple", mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple) && "mod_consts.const_tuple_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_1_tuple", mod_consts.const_tuple_int_pos_1_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple) && "mod_consts.const_tuple_int_pos_1_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_width_str_plain_height_tuple", mod_consts.const_tuple_str_plain_width_str_plain_height_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_width_str_plain_height_tuple) && "mod_consts.const_tuple_str_plain_width_str_plain_height_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_647ff2d34ac837eb32fa798e5dfec2ce", mod_consts.const_str_digest_647ff2d34ac837eb32fa798e5dfec2ce);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_647ff2d34ac837eb32fa798e5dfec2ce) && "mod_consts.const_str_digest_647ff2d34ac837eb32fa798e5dfec2ce");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ctypes", mod_consts.const_str_plain_ctypes);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_ctypes) && "mod_consts.const_str_plain_ctypes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wintypes", mod_consts.const_str_plain_wintypes);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_wintypes) && "mod_consts.const_str_plain_wintypes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pygetwindow", mod_consts.const_str_plain_pygetwindow);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_pygetwindow) && "mod_consts.const_str_plain_pygetwindow");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_e7cb26ed194d532e592c5c8d9a799d04_tuple", mod_consts.const_tuple_e7cb26ed194d532e592c5c8d9a799d04_tuple);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_tuple_e7cb26ed194d532e592c5c8d9a799d04_tuple) && "mod_consts.const_tuple_e7cb26ed194d532e592c5c8d9a799d04_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BaseWindow", mod_consts.const_str_plain_BaseWindow);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaseWindow) && "mod_consts.const_str_plain_BaseWindow");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_256", mod_consts.const_int_pos_256);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_int_pos_256) && "mod_consts.const_int_pos_256");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4096", mod_consts.const_int_pos_4096);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_int_pos_4096) && "mod_consts.const_int_pos_4096");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_512", mod_consts.const_int_pos_512);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_int_pos_512) && "mod_consts.const_int_pos_512");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_6", mod_consts.const_int_pos_6);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_int_pos_6) && "mod_consts.const_int_pos_6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_3", mod_consts.const_int_pos_3);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_int_pos_3) && "mod_consts.const_int_pos_3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_5", mod_consts.const_int_pos_5);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_int_pos_5) && "mod_consts.const_int_pos_5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_9", mod_consts.const_int_pos_9);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_int_pos_9) && "mod_consts.const_int_pos_9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16", mod_consts.const_int_pos_16);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_int_pos_16) && "mod_consts.const_int_pos_16");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Structure", mod_consts.const_str_plain_Structure);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_Structure) && "mod_consts.const_str_plain_Structure");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__) && "mod_consts.const_str_plain___prepare__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__) && "mod_consts.const_str_plain___getitem__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295) && "mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass) && "mod_consts.const_str_angle_metaclass");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2776695a09cf567af3dff8b9993d40ac", mod_consts.const_str_digest_2776695a09cf567af3dff8b9993d40ac);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_2776695a09cf567af3dff8b9993d40ac) && "mod_consts.const_str_digest_2776695a09cf567af3dff8b9993d40ac");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_32", mod_consts.const_int_pos_32);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_int_pos_32) && "mod_consts.const_int_pos_32");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_c_long", mod_consts.const_str_plain_c_long);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_c_long) && "mod_consts.const_str_plain_c_long");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__fields_", mod_consts.const_str_plain__fields_);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain__fields_) && "mod_consts.const_str_plain__fields_");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__) && "mod_consts.const_str_plain___orig_bases__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EnumWindows", mod_consts.const_str_plain_EnumWindows);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_EnumWindows) && "mod_consts.const_str_plain_EnumWindows");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WINFUNCTYPE", mod_consts.const_str_plain_WINFUNCTYPE);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_WINFUNCTYPE) && "mod_consts.const_str_plain_WINFUNCTYPE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_c_bool", mod_consts.const_str_plain_c_bool);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_c_bool) && "mod_consts.const_str_plain_c_bool");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_c_int", mod_consts.const_str_plain_c_int);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_c_int) && "mod_consts.const_str_plain_c_int");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_POINTER", mod_consts.const_str_plain_POINTER);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_POINTER) && "mod_consts.const_str_plain_POINTER");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a383f92da1028744707e2d78dbf204e4", mod_consts.const_str_digest_a383f92da1028744707e2d78dbf204e4);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_digest_a383f92da1028744707e2d78dbf204e4) && "mod_consts.const_str_digest_a383f92da1028744707e2d78dbf204e4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_43", mod_consts.const_int_pos_43);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_int_pos_43) && "mod_consts.const_int_pos_43");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getActiveWindowTitle", mod_consts.const_str_plain_getActiveWindowTitle);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_getActiveWindowTitle) && "mod_consts.const_str_plain_getActiveWindowTitle");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getWindowsAt", mod_consts.const_str_plain_getWindowsAt);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_getWindowsAt) && "mod_consts.const_str_plain_getWindowsAt");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getWindowsWithTitle", mod_consts.const_str_plain_getWindowsWithTitle);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_getWindowsWithTitle) && "mod_consts.const_str_plain_getWindowsWithTitle");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getAllTitles", mod_consts.const_str_plain_getAllTitles);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_getAllTitles) && "mod_consts.const_str_plain_getAllTitles");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_176", mod_consts.const_int_pos_176);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_int_pos_176) && "mod_consts.const_int_pos_176");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ffcc55b07d45ca7cd9bcba35e6747155", mod_consts.const_str_digest_ffcc55b07d45ca7cd9bcba35e6747155);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_digest_ffcc55b07d45ca7cd9bcba35e6747155) && "mod_consts.const_str_digest_ffcc55b07d45ca7cd9bcba35e6747155");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__getWindowRect", mod_consts.const_str_plain__getWindowRect);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain__getWindowRect) && "mod_consts.const_str_plain__getWindowRect");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1ef1ebdcf62f0bda5b9c45d411610ef6", mod_consts.const_str_digest_1ef1ebdcf62f0bda5b9c45d411610ef6);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_digest_1ef1ebdcf62f0bda5b9c45d411610ef6) && "mod_consts.const_str_digest_1ef1ebdcf62f0bda5b9c45d411610ef6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___repr__", mod_consts.const_str_plain___repr__);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain___repr__) && "mod_consts.const_str_plain___repr__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6a501f0ab9b0a5ae998b2d9377920220", mod_consts.const_str_digest_6a501f0ab9b0a5ae998b2d9377920220);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_digest_6a501f0ab9b0a5ae998b2d9377920220) && "mod_consts.const_str_digest_6a501f0ab9b0a5ae998b2d9377920220");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___eq__", mod_consts.const_str_plain___eq__);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain___eq__) && "mod_consts.const_str_plain___eq__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bb42c3414b1c71102c4d2811cefca583", mod_consts.const_str_digest_bb42c3414b1c71102c4d2811cefca583);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_digest_bb42c3414b1c71102c4d2811cefca583) && "mod_consts.const_str_digest_bb42c3414b1c71102c4d2811cefca583");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1ad20944f64700c3bbe5e1775b64718c", mod_consts.const_str_digest_1ad20944f64700c3bbe5e1775b64718c);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_digest_1ad20944f64700c3bbe5e1775b64718c) && "mod_consts.const_str_digest_1ad20944f64700c3bbe5e1775b64718c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_minimize", mod_consts.const_str_plain_minimize);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain_minimize) && "mod_consts.const_str_plain_minimize");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_769f42585dcde3885c0722adb3cba398", mod_consts.const_str_digest_769f42585dcde3885c0722adb3cba398);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_digest_769f42585dcde3885c0722adb3cba398) && "mod_consts.const_str_digest_769f42585dcde3885c0722adb3cba398");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_maximize", mod_consts.const_str_plain_maximize);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain_maximize) && "mod_consts.const_str_plain_maximize");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1fa11f5f717ed8a8051d7be477396d17", mod_consts.const_str_digest_1fa11f5f717ed8a8051d7be477396d17);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_digest_1fa11f5f717ed8a8051d7be477396d17) && "mod_consts.const_str_digest_1fa11f5f717ed8a8051d7be477396d17");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_restore", mod_consts.const_str_plain_restore);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain_restore) && "mod_consts.const_str_plain_restore");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_070ad4bb55c211c719adac77b833f576", mod_consts.const_str_digest_070ad4bb55c211c719adac77b833f576);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_digest_070ad4bb55c211c719adac77b833f576) && "mod_consts.const_str_digest_070ad4bb55c211c719adac77b833f576");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_show", mod_consts.const_str_plain_show);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain_show) && "mod_consts.const_str_plain_show");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_604005b13371455c696a768302d4e016", mod_consts.const_str_digest_604005b13371455c696a768302d4e016);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_digest_604005b13371455c696a768302d4e016) && "mod_consts.const_str_digest_604005b13371455c696a768302d4e016");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hide", mod_consts.const_str_plain_hide);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain_hide) && "mod_consts.const_str_plain_hide");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6b8c083c888a05564df8c14abe519101", mod_consts.const_str_digest_6b8c083c888a05564df8c14abe519101);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_digest_6b8c083c888a05564df8c14abe519101) && "mod_consts.const_str_digest_6b8c083c888a05564df8c14abe519101");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_activate", mod_consts.const_str_plain_activate);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain_activate) && "mod_consts.const_str_plain_activate");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_49b1ed9be2d6002965f4e8ae7169764f", mod_consts.const_str_digest_49b1ed9be2d6002965f4e8ae7169764f);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_digest_49b1ed9be2d6002965f4e8ae7169764f) && "mod_consts.const_str_digest_49b1ed9be2d6002965f4e8ae7169764f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_resize", mod_consts.const_str_plain_resize);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_plain_resize) && "mod_consts.const_str_plain_resize");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_24313cb4f884f6879d35d6bad647ebb7", mod_consts.const_str_digest_24313cb4f884f6879d35d6bad647ebb7);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_digest_24313cb4f884f6879d35d6bad647ebb7) && "mod_consts.const_str_digest_24313cb4f884f6879d35d6bad647ebb7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_resizeRel", mod_consts.const_str_plain_resizeRel);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain_resizeRel) && "mod_consts.const_str_plain_resizeRel");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_resizeTo", mod_consts.const_str_plain_resizeTo);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_resizeTo) && "mod_consts.const_str_plain_resizeTo");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_426ebaa52290918ea89ce64a92671ce7", mod_consts.const_str_digest_426ebaa52290918ea89ce64a92671ce7);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_digest_426ebaa52290918ea89ce64a92671ce7) && "mod_consts.const_str_digest_426ebaa52290918ea89ce64a92671ce7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_move", mod_consts.const_str_plain_move);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain_move) && "mod_consts.const_str_plain_move");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f3af80468b391e32ab7b1246882eeff3", mod_consts.const_str_digest_f3af80468b391e32ab7b1246882eeff3);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_digest_f3af80468b391e32ab7b1246882eeff3) && "mod_consts.const_str_digest_f3af80468b391e32ab7b1246882eeff3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_moveRel", mod_consts.const_str_plain_moveRel);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_plain_moveRel) && "mod_consts.const_str_plain_moveRel");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_moveTo", mod_consts.const_str_plain_moveTo);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_plain_moveTo) && "mod_consts.const_str_plain_moveTo");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b63a4a971b3eaf53b84c680af8c4cb70", mod_consts.const_str_digest_b63a4a971b3eaf53b84c680af8c4cb70);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_digest_b63a4a971b3eaf53b84c680af8c4cb70) && "mod_consts.const_str_digest_b63a4a971b3eaf53b84c680af8c4cb70");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_property", mod_consts.const_str_plain_property);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain_property) && "mod_consts.const_str_plain_property");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_isMinimized", mod_consts.const_str_plain_isMinimized);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_plain_isMinimized) && "mod_consts.const_str_plain_isMinimized");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a6b961e65626bc6503abfeba864d8415", mod_consts.const_str_digest_a6b961e65626bc6503abfeba864d8415);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_digest_a6b961e65626bc6503abfeba864d8415) && "mod_consts.const_str_digest_a6b961e65626bc6503abfeba864d8415");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_isMaximized", mod_consts.const_str_plain_isMaximized);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain_isMaximized) && "mod_consts.const_str_plain_isMaximized");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7e364981da5b76d9ca074cc82558e1cf", mod_consts.const_str_digest_7e364981da5b76d9ca074cc82558e1cf);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_digest_7e364981da5b76d9ca074cc82558e1cf) && "mod_consts.const_str_digest_7e364981da5b76d9ca074cc82558e1cf");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_isActive", mod_consts.const_str_plain_isActive);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_plain_isActive) && "mod_consts.const_str_plain_isActive");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a6ffd92d024f2c266bc7ae66efe4f133", mod_consts.const_str_digest_a6ffd92d024f2c266bc7ae66efe4f133);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_digest_a6ffd92d024f2c266bc7ae66efe4f133) && "mod_consts.const_str_digest_a6ffd92d024f2c266bc7ae66efe4f133");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2c941aae51fae6289882a26cb4eb112c", mod_consts.const_str_digest_2c941aae51fae6289882a26cb4eb112c);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_digest_2c941aae51fae6289882a26cb4eb112c) && "mod_consts.const_str_digest_2c941aae51fae6289882a26cb4eb112c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_visible", mod_consts.const_str_plain_visible);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_plain_visible) && "mod_consts.const_str_plain_visible");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e6f27490dd81b1fa228891f37db50da9", mod_consts.const_str_digest_e6f27490dd81b1fa228891f37db50da9);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_digest_e6f27490dd81b1fa228891f37db50da9) && "mod_consts.const_str_digest_e6f27490dd81b1fa228891f37db50da9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__hWnd_tuple", mod_consts.const_tuple_str_plain__hWnd_tuple);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__hWnd_tuple) && "mod_consts.const_tuple_str_plain__hWnd_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cursor", mod_consts.const_str_plain_cursor);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_plain_cursor) && "mod_consts.const_str_plain_cursor");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_resolution", mod_consts.const_str_plain_resolution);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_plain_resolution) && "mod_consts.const_str_plain_resolution");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_72aaabfd0501bcbe0cfb904212e05cfd", mod_consts.const_str_digest_72aaabfd0501bcbe0cfb904212e05cfd);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_digest_72aaabfd0501bcbe0cfb904212e05cfd) && "mod_consts.const_str_digest_72aaabfd0501bcbe0cfb904212e05cfd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_afb9b0e874342de85cfd9606a2472098", mod_consts.const_str_digest_afb9b0e874342de85cfd9606a2472098);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_digest_afb9b0e874342de85cfd9606a2472098) && "mod_consts.const_str_digest_afb9b0e874342de85cfd9606a2472098");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple) && "mod_consts.const_tuple_str_plain___class___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_other_tuple", mod_consts.const_tuple_str_plain_self_str_plain_other_tuple);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_other_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_hWnd_tuple", mod_consts.const_tuple_str_plain_self_str_plain_hWnd_tuple);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_hWnd_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_hWnd_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple) && "mod_consts.const_tuple_str_plain_self_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_errorCode_str_plain_lpBuffer_str_plain_msg_tuple", mod_consts.const_tuple_str_plain_errorCode_str_plain_lpBuffer_str_plain_msg_tuple);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_errorCode_str_plain_lpBuffer_str_plain_msg_tuple) && "mod_consts.const_tuple_str_plain_errorCode_str_plain_lpBuffer_str_plain_msg_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_titles_str_plain_foreach_window_tuple", mod_consts.const_tuple_str_plain_titles_str_plain_foreach_window_tuple);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_titles_str_plain_foreach_window_tuple) && "mod_consts.const_tuple_str_plain_titles_str_plain_foreach_window_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_rect_str_plain_result_tuple", mod_consts.const_tuple_str_plain_self_str_plain_rect_str_plain_result_tuple);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_rect_str_plain_result_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_rect_str_plain_result_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_errorCode_tuple", mod_consts.const_tuple_str_plain_errorCode_tuple);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_errorCode_tuple) && "mod_consts.const_tuple_str_plain_errorCode_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_result_tuple", mod_consts.const_tuple_str_plain_self_str_plain_result_tuple);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_result_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_result_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_cursor_tuple", mod_consts.const_tuple_str_plain_cursor_tuple);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cursor_tuple) && "mod_consts.const_tuple_str_plain_cursor_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_ef03884268a4914420460e0666c045ea_tuple", mod_consts.const_tuple_ef03884268a4914420460e0666c045ea_tuple);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_tuple_ef03884268a4914420460e0666c045ea_tuple) && "mod_consts.const_tuple_ef03884268a4914420460e0666c045ea_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_titles_tuple", mod_consts.const_tuple_str_plain_titles_tuple);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_titles_tuple) && "mod_consts.const_tuple_str_plain_titles_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_d44ee331259385ffc532959ef2940fd8_tuple", mod_consts.const_tuple_d44ee331259385ffc532959ef2940fd8_tuple);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_tuple_d44ee331259385ffc532959ef2940fd8_tuple) && "mod_consts.const_tuple_d44ee331259385ffc532959ef2940fd8_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_activeWindowHwnd_tuple", mod_consts.const_tuple_str_plain_activeWindowHwnd_tuple);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_activeWindowHwnd_tuple) && "mod_consts.const_tuple_str_plain_activeWindowHwnd_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_hWnd_str_plain_lParam_str_plain_windowObjs_tuple", mod_consts.const_tuple_str_plain_hWnd_str_plain_lParam_str_plain_windowObjs_tuple);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_hWnd_str_plain_lParam_str_plain_windowObjs_tuple) && "mod_consts.const_tuple_str_plain_hWnd_str_plain_lParam_str_plain_windowObjs_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_windowObjs_tuple", mod_consts.const_tuple_str_plain_windowObjs_tuple);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_windowObjs_tuple) && "mod_consts.const_tuple_str_plain_windowObjs_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_hWnd_tuple", mod_consts.const_tuple_str_plain_hWnd_tuple);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_hWnd_tuple) && "mod_consts.const_tuple_str_plain_hWnd_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_activeWindowHwnd_str_plain_foreach_window_tuple", mod_consts.const_tuple_str_plain_activeWindowHwnd_str_plain_foreach_window_tuple);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_activeWindowHwnd_str_plain_foreach_window_tuple) && "mod_consts.const_tuple_str_plain_activeWindowHwnd_str_plain_foreach_window_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_windowObjs_str_plain_foreach_window_tuple", mod_consts.const_tuple_str_plain_windowObjs_str_plain_foreach_window_tuple);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_windowObjs_str_plain_foreach_window_tuple) && "mod_consts.const_tuple_str_plain_windowObjs_str_plain_foreach_window_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_ba569327c01d7de1e72c53889ee071b0_tuple", mod_consts.const_tuple_ba569327c01d7de1e72c53889ee071b0_tuple);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_tuple_ba569327c01d7de1e72c53889ee071b0_tuple) && "mod_consts.const_tuple_ba569327c01d7de1e72c53889ee071b0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_66a089e3c9dc007af427a6e4a3e7f069_tuple", mod_consts.const_tuple_66a089e3c9dc007af427a6e4a3e7f069_tuple);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_tuple_66a089e3c9dc007af427a6e4a3e7f069_tuple) && "mod_consts.const_tuple_66a089e3c9dc007af427a6e4a3e7f069_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_e44b7f06e9b27e53203e30d45150679c_tuple", mod_consts.const_tuple_e44b7f06e9b27e53203e30d45150679c_tuple);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_tuple_e44b7f06e9b27e53203e30d45150679c_tuple) && "mod_consts.const_tuple_e44b7f06e9b27e53203e30d45150679c_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_67af7b133394d2f47ee657d165ea815f_tuple", mod_consts.const_tuple_67af7b133394d2f47ee657d165ea815f_tuple);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_tuple_67af7b133394d2f47ee657d165ea815f_tuple) && "mod_consts.const_tuple_67af7b133394d2f47ee657d165ea815f_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_ad237162e27fa1111d84be9343a584a9_tuple", mod_consts.const_tuple_ad237162e27fa1111d84be9343a584a9_tuple);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_tuple_ad237162e27fa1111d84be9343a584a9_tuple) && "mod_consts.const_tuple_ad237162e27fa1111d84be9343a584a9_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_58445927d3b41707483675fefec4e18c_tuple", mod_consts.const_tuple_58445927d3b41707483675fefec4e18c_tuple);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_tuple_58445927d3b41707483675fefec4e18c_tuple) && "mod_consts.const_tuple_58445927d3b41707483675fefec4e18c_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_4265532bed070c6bd9c8f2a66ff6e6e3_tuple", mod_consts.const_tuple_4265532bed070c6bd9c8f2a66ff6e6e3_tuple);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_tuple_4265532bed070c6bd9c8f2a66ff6e6e3_tuple) && "mod_consts.const_tuple_4265532bed070c6bd9c8f2a66ff6e6e3_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 32
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
static PyObject *module_var_accessor_pygetwindow$_pygetwindow_win$BaseWindow(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pygetwindow$_pygetwindow_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pygetwindow$_pygetwindow_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseWindow);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pygetwindow$_pygetwindow_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BaseWindow);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BaseWindow, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BaseWindow);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BaseWindow, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseWindow);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseWindow);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseWindow);
    }

    return result;
}

static PyObject *module_var_accessor_pygetwindow$_pygetwindow_win$FORMAT_MESSAGE_ALLOCATE_BUFFER(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pygetwindow$_pygetwindow_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pygetwindow$_pygetwindow_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_FORMAT_MESSAGE_ALLOCATE_BUFFER);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pygetwindow$_pygetwindow_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FORMAT_MESSAGE_ALLOCATE_BUFFER);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FORMAT_MESSAGE_ALLOCATE_BUFFER, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FORMAT_MESSAGE_ALLOCATE_BUFFER);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FORMAT_MESSAGE_ALLOCATE_BUFFER, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_FORMAT_MESSAGE_ALLOCATE_BUFFER);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_FORMAT_MESSAGE_ALLOCATE_BUFFER);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FORMAT_MESSAGE_ALLOCATE_BUFFER);
    }

    return result;
}

static PyObject *module_var_accessor_pygetwindow$_pygetwindow_win$FORMAT_MESSAGE_FROM_SYSTEM(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pygetwindow$_pygetwindow_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pygetwindow$_pygetwindow_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_FORMAT_MESSAGE_FROM_SYSTEM);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pygetwindow$_pygetwindow_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FORMAT_MESSAGE_FROM_SYSTEM);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FORMAT_MESSAGE_FROM_SYSTEM, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FORMAT_MESSAGE_FROM_SYSTEM);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FORMAT_MESSAGE_FROM_SYSTEM, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_FORMAT_MESSAGE_FROM_SYSTEM);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_FORMAT_MESSAGE_FROM_SYSTEM);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FORMAT_MESSAGE_FROM_SYSTEM);
    }

    return result;
}

static PyObject *module_var_accessor_pygetwindow$_pygetwindow_win$FORMAT_MESSAGE_IGNORE_INSERTS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pygetwindow$_pygetwindow_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pygetwindow$_pygetwindow_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_FORMAT_MESSAGE_IGNORE_INSERTS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pygetwindow$_pygetwindow_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FORMAT_MESSAGE_IGNORE_INSERTS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FORMAT_MESSAGE_IGNORE_INSERTS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FORMAT_MESSAGE_IGNORE_INSERTS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FORMAT_MESSAGE_IGNORE_INSERTS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_FORMAT_MESSAGE_IGNORE_INSERTS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_FORMAT_MESSAGE_IGNORE_INSERTS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FORMAT_MESSAGE_IGNORE_INSERTS);
    }

    return result;
}

static PyObject *module_var_accessor_pygetwindow$_pygetwindow_win$HWND_TOP(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pygetwindow$_pygetwindow_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pygetwindow$_pygetwindow_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_HWND_TOP);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pygetwindow$_pygetwindow_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HWND_TOP);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HWND_TOP, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HWND_TOP);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HWND_TOP, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_HWND_TOP);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_HWND_TOP);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HWND_TOP);
    }

    return result;
}

static PyObject *module_var_accessor_pygetwindow$_pygetwindow_win$NULL(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pygetwindow$_pygetwindow_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pygetwindow$_pygetwindow_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_NULL);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pygetwindow$_pygetwindow_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NULL);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NULL, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NULL);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NULL, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_NULL);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_NULL);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_NULL);
    }

    return result;
}

static PyObject *module_var_accessor_pygetwindow$_pygetwindow_win$POINT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pygetwindow$_pygetwindow_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pygetwindow$_pygetwindow_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_POINT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pygetwindow$_pygetwindow_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_POINT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_POINT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_POINT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_POINT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_POINT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_POINT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_POINT);
    }

    return result;
}

static PyObject *module_var_accessor_pygetwindow$_pygetwindow_win$Point(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pygetwindow$_pygetwindow_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pygetwindow$_pygetwindow_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_Point);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pygetwindow$_pygetwindow_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Point);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Point, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Point);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Point, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_Point);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_Point);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Point);
    }

    return result;
}

static PyObject *module_var_accessor_pygetwindow$_pygetwindow_win$PyGetWindowException(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pygetwindow$_pygetwindow_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pygetwindow$_pygetwindow_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_PyGetWindowException);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pygetwindow$_pygetwindow_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PyGetWindowException);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PyGetWindowException, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PyGetWindowException);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PyGetWindowException, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_PyGetWindowException);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_PyGetWindowException);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PyGetWindowException);
    }

    return result;
}

static PyObject *module_var_accessor_pygetwindow$_pygetwindow_win$RECT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pygetwindow$_pygetwindow_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pygetwindow$_pygetwindow_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_RECT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pygetwindow$_pygetwindow_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RECT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RECT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RECT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RECT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_RECT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_RECT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RECT);
    }

    return result;
}

static PyObject *module_var_accessor_pygetwindow$_pygetwindow_win$Rect(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pygetwindow$_pygetwindow_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pygetwindow$_pygetwindow_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_Rect);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pygetwindow$_pygetwindow_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Rect);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Rect, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Rect);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Rect, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_Rect);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_Rect);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Rect);
    }

    return result;
}

static PyObject *module_var_accessor_pygetwindow$_pygetwindow_win$SW_HIDE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pygetwindow$_pygetwindow_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pygetwindow$_pygetwindow_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_SW_HIDE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pygetwindow$_pygetwindow_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SW_HIDE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SW_HIDE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SW_HIDE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SW_HIDE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_SW_HIDE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_SW_HIDE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SW_HIDE);
    }

    return result;
}

static PyObject *module_var_accessor_pygetwindow$_pygetwindow_win$SW_MAXIMIZE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pygetwindow$_pygetwindow_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pygetwindow$_pygetwindow_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_SW_MAXIMIZE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pygetwindow$_pygetwindow_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SW_MAXIMIZE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SW_MAXIMIZE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SW_MAXIMIZE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SW_MAXIMIZE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_SW_MAXIMIZE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_SW_MAXIMIZE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SW_MAXIMIZE);
    }

    return result;
}

static PyObject *module_var_accessor_pygetwindow$_pygetwindow_win$SW_MINIMIZE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pygetwindow$_pygetwindow_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pygetwindow$_pygetwindow_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_SW_MINIMIZE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pygetwindow$_pygetwindow_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SW_MINIMIZE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SW_MINIMIZE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SW_MINIMIZE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SW_MINIMIZE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_SW_MINIMIZE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_SW_MINIMIZE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SW_MINIMIZE);
    }

    return result;
}

static PyObject *module_var_accessor_pygetwindow$_pygetwindow_win$SW_RESTORE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pygetwindow$_pygetwindow_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pygetwindow$_pygetwindow_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_SW_RESTORE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pygetwindow$_pygetwindow_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SW_RESTORE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SW_RESTORE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SW_RESTORE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SW_RESTORE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_SW_RESTORE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_SW_RESTORE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SW_RESTORE);
    }

    return result;
}

static PyObject *module_var_accessor_pygetwindow$_pygetwindow_win$SW_SHOW(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pygetwindow$_pygetwindow_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pygetwindow$_pygetwindow_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_SW_SHOW);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pygetwindow$_pygetwindow_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SW_SHOW);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SW_SHOW, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SW_SHOW);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SW_SHOW, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_SW_SHOW);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_SW_SHOW);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SW_SHOW);
    }

    return result;
}

static PyObject *module_var_accessor_pygetwindow$_pygetwindow_win$Size(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pygetwindow$_pygetwindow_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pygetwindow$_pygetwindow_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_Size);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pygetwindow$_pygetwindow_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Size);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Size, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Size);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Size, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_Size);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_Size);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Size);
    }

    return result;
}

static PyObject *module_var_accessor_pygetwindow$_pygetwindow_win$WM_CLOSE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pygetwindow$_pygetwindow_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pygetwindow$_pygetwindow_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_WM_CLOSE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pygetwindow$_pygetwindow_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WM_CLOSE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WM_CLOSE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WM_CLOSE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WM_CLOSE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_WM_CLOSE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_WM_CLOSE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_WM_CLOSE);
    }

    return result;
}

static PyObject *module_var_accessor_pygetwindow$_pygetwindow_win$Win32Window(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pygetwindow$_pygetwindow_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pygetwindow$_pygetwindow_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_Win32Window);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pygetwindow$_pygetwindow_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Win32Window);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Win32Window, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Win32Window);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Win32Window, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_Win32Window);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_Win32Window);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Win32Window);
    }

    return result;
}

static PyObject *module_var_accessor_pygetwindow$_pygetwindow_win$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pygetwindow$_pygetwindow_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pygetwindow$_pygetwindow_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pygetwindow$_pygetwindow_win->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_pygetwindow$_pygetwindow_win$_formatMessage(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pygetwindow$_pygetwindow_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pygetwindow$_pygetwindow_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain__formatMessage);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pygetwindow$_pygetwindow_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__formatMessage);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__formatMessage, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__formatMessage);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__formatMessage, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain__formatMessage);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain__formatMessage);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__formatMessage);
    }

    return result;
}

static PyObject *module_var_accessor_pygetwindow$_pygetwindow_win$_getAllTitles(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pygetwindow$_pygetwindow_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pygetwindow$_pygetwindow_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain__getAllTitles);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pygetwindow$_pygetwindow_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__getAllTitles);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__getAllTitles, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__getAllTitles);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__getAllTitles, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain__getAllTitles);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain__getAllTitles);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__getAllTitles);
    }

    return result;
}

static PyObject *module_var_accessor_pygetwindow$_pygetwindow_win$_raiseWithLastError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pygetwindow$_pygetwindow_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pygetwindow$_pygetwindow_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain__raiseWithLastError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pygetwindow$_pygetwindow_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__raiseWithLastError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__raiseWithLastError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__raiseWithLastError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__raiseWithLastError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain__raiseWithLastError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain__raiseWithLastError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__raiseWithLastError);
    }

    return result;
}

static PyObject *module_var_accessor_pygetwindow$_pygetwindow_win$activeWindowTitle(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pygetwindow$_pygetwindow_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pygetwindow$_pygetwindow_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_activeWindowTitle);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pygetwindow$_pygetwindow_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_activeWindowTitle);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_activeWindowTitle, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_activeWindowTitle);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_activeWindowTitle, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_activeWindowTitle);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_activeWindowTitle);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_activeWindowTitle);
    }

    return result;
}

static PyObject *module_var_accessor_pygetwindow$_pygetwindow_win$enumWindows(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pygetwindow$_pygetwindow_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pygetwindow$_pygetwindow_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_enumWindows);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pygetwindow$_pygetwindow_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_enumWindows);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_enumWindows, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_enumWindows);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_enumWindows, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_enumWindows);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_enumWindows);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_enumWindows);
    }

    return result;
}

static PyObject *module_var_accessor_pygetwindow$_pygetwindow_win$enumWindowsProc(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pygetwindow$_pygetwindow_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pygetwindow$_pygetwindow_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_enumWindowsProc);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pygetwindow$_pygetwindow_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_enumWindowsProc);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_enumWindowsProc, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_enumWindowsProc);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_enumWindowsProc, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_enumWindowsProc);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_enumWindowsProc);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_enumWindowsProc);
    }

    return result;
}

static PyObject *module_var_accessor_pygetwindow$_pygetwindow_win$getActiveWindow(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pygetwindow$_pygetwindow_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pygetwindow$_pygetwindow_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_getActiveWindow);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pygetwindow$_pygetwindow_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_getActiveWindow);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_getActiveWindow, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_getActiveWindow);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_getActiveWindow, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_getActiveWindow);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_getActiveWindow);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_getActiveWindow);
    }

    return result;
}

static PyObject *module_var_accessor_pygetwindow$_pygetwindow_win$getAllWindows(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pygetwindow$_pygetwindow_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pygetwindow$_pygetwindow_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_getAllWindows);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pygetwindow$_pygetwindow_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_getAllWindows);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_getAllWindows, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_getAllWindows);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_getAllWindows, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_getAllWindows);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_getAllWindows);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_getAllWindows);
    }

    return result;
}

static PyObject *module_var_accessor_pygetwindow$_pygetwindow_win$getWindowText(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pygetwindow$_pygetwindow_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pygetwindow$_pygetwindow_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_getWindowText);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pygetwindow$_pygetwindow_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_getWindowText);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_getWindowText, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_getWindowText);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_getWindowText, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_getWindowText);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_getWindowText);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_getWindowText);
    }

    return result;
}

static PyObject *module_var_accessor_pygetwindow$_pygetwindow_win$getWindowTextLength(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pygetwindow$_pygetwindow_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pygetwindow$_pygetwindow_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_getWindowTextLength);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pygetwindow$_pygetwindow_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_getWindowTextLength);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_getWindowTextLength, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_getWindowTextLength);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_getWindowTextLength, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_getWindowTextLength);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_getWindowTextLength);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_getWindowTextLength);
    }

    return result;
}

static PyObject *module_var_accessor_pygetwindow$_pygetwindow_win$isWindowVisible(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pygetwindow$_pygetwindow_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pygetwindow$_pygetwindow_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_isWindowVisible);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pygetwindow$_pygetwindow_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_isWindowVisible);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_isWindowVisible, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_isWindowVisible);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_isWindowVisible, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_isWindowVisible);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_isWindowVisible);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_isWindowVisible);
    }

    return result;
}

static PyObject *module_var_accessor_pygetwindow$_pygetwindow_win$pointInRect(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pygetwindow$_pygetwindow_win->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pygetwindow$_pygetwindow_win->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_pointInRect);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pygetwindow$_pygetwindow_win->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_pointInRect);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_pointInRect, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_pointInRect);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_pointInRect, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_pointInRect);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_pointInRect);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_pointInRect);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_73158b271121826e9add765d8456d6db;
static PyCodeObject *code_objects_14a5c96364be4db7686bb7acb2a99f1e;
static PyCodeObject *code_objects_2e4f0c20847868ac4a61116484fc1797;
static PyCodeObject *code_objects_d9d04815e355d1277b71e469b88bd865;
static PyCodeObject *code_objects_3008b7ae7d1a936f505f4d03ee5a25cc;
static PyCodeObject *code_objects_5cc6b34199545134c0b8449ed2d36283;
static PyCodeObject *code_objects_9b67d7de7b0a26789b40513661104373;
static PyCodeObject *code_objects_bb9cb4934b1c9233cf8e20bff5bcac1d;
static PyCodeObject *code_objects_1a4d381996abac61846a43f5c9a83c44;
static PyCodeObject *code_objects_36f85e5f822011a4fc125e2495a8e4d9;
static PyCodeObject *code_objects_38d304e74a4e2d4e642f218211fd4abb;
static PyCodeObject *code_objects_757b5bec9f98d5222811eddc60079816;
static PyCodeObject *code_objects_37cdc53ae3adbcf018c3c5f563ae15fd;
static PyCodeObject *code_objects_84b48ed9e0b282382f58990144aa9650;
static PyCodeObject *code_objects_a945d81ec8ae0455d6ccd9b97cfd3dd8;
static PyCodeObject *code_objects_78991e5fddcdbf1df909f210f253ae83;
static PyCodeObject *code_objects_94f1ee4cf7c3a79f4374666d28ce57fb;
static PyCodeObject *code_objects_ab6267bd7f14488140ff444f3bcdbd84;
static PyCodeObject *code_objects_34ae38e9d8b9c923298a64f5a520ff65;
static PyCodeObject *code_objects_303f01770203c768b4877c56a1579fb9;
static PyCodeObject *code_objects_e1fa28bf34e3af1624efb6aaefeb3a07;
static PyCodeObject *code_objects_1e6d8b40a3392aedf0f161c1c12f533f;
static PyCodeObject *code_objects_221be0a68337f2e3cb69b7c2d4a62a4a;
static PyCodeObject *code_objects_068fc8e341a64247208f1e5383229ede;
static PyCodeObject *code_objects_6af9fe2ff91a93525f715af436a0cf63;
static PyCodeObject *code_objects_4f291b15f704ee398c98cdb881140eea;
static PyCodeObject *code_objects_d6d967f303045fbb123045f3406e988d;
static PyCodeObject *code_objects_562b141a01a06838f703110d97414e4f;
static PyCodeObject *code_objects_b3da12247d659b6e3f04858affa5ba17;
static PyCodeObject *code_objects_8d5d47a6c9110d1de89639a72253b1aa;
static PyCodeObject *code_objects_f65c4fba1f33ebc91b8a6e92857b0334;
static PyCodeObject *code_objects_821c4d31ea10fac37138cd3d3e907413;
static PyCodeObject *code_objects_8a73e6769399e4d07772728593d4aed4;
static PyCodeObject *code_objects_2a41cefbad8dc02c2d907320869afe2c;
static PyCodeObject *code_objects_54b7040cc01386908aea7e237c74abc0;
static PyCodeObject *code_objects_97b71e62f47d42a1deaf92ca7b322549;
static PyCodeObject *code_objects_7dddfd9b00692b3b5efd140ab1d8d3ab;
static PyCodeObject *code_objects_a91f6d786c8494a0df7aef0e8496d159;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_72aaabfd0501bcbe0cfb904212e05cfd); CHECK_OBJECT(module_filename_obj);
code_objects_73158b271121826e9add765d8456d6db = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_afb9b0e874342de85cfd9606a2472098, mod_consts.const_str_digest_afb9b0e874342de85cfd9606a2472098, NULL, NULL, 0, 0, 0);
code_objects_14a5c96364be4db7686bb7acb2a99f1e = MAKE_CODE_OBJECT(module_filename_obj, 32, 0, mod_consts.const_str_plain_POINT, mod_consts.const_str_plain_POINT, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_2e4f0c20847868ac4a61116484fc1797 = MAKE_CODE_OBJECT(module_filename_obj, 43, 0, mod_consts.const_str_plain_RECT, mod_consts.const_str_plain_RECT, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_d9d04815e355d1277b71e469b88bd865 = MAKE_CODE_OBJECT(module_filename_obj, 176, 0, mod_consts.const_str_plain_Win32Window, mod_consts.const_str_plain_Win32Window, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_3008b7ae7d1a936f505f4d03ee5a25cc = MAKE_CODE_OBJECT(module_filename_obj, 206, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___eq__, mod_consts.const_str_digest_bb42c3414b1c71102c4d2811cefca583, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_5cc6b34199545134c0b8449ed2d36283 = MAKE_CODE_OBJECT(module_filename_obj, 177, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_ffcc55b07d45ca7cd9bcba35e6747155, mod_consts.const_tuple_str_plain_self_str_plain_hWnd_tuple, NULL, 2, 0, 0);
code_objects_9b67d7de7b0a26789b40513661104373 = MAKE_CODE_OBJECT(module_filename_obj, 202, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_6a501f0ab9b0a5ae998b2d9377920220, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_bb9cb4934b1c9233cf8e20bff5bcac1d = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__formatMessage, mod_consts.const_str_plain__formatMessage, mod_consts.const_tuple_str_plain_errorCode_str_plain_lpBuffer_str_plain_msg_tuple, NULL, 1, 0, 0);
code_objects_1a4d381996abac61846a43f5c9a83c44 = MAKE_CODE_OBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__getAllTitles, mod_consts.const_str_plain__getAllTitles, mod_consts.const_tuple_str_plain_titles_str_plain_foreach_window_tuple, NULL, 0, 0, 0);
code_objects_36f85e5f822011a4fc125e2495a8e4d9 = MAKE_CODE_OBJECT(module_filename_obj, 182, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__getWindowRect, mod_consts.const_str_digest_1ef1ebdcf62f0bda5b9c45d411610ef6, mod_consts.const_tuple_str_plain_self_str_plain_rect_str_plain_result_tuple, NULL, 1, 0, 0);
code_objects_38d304e74a4e2d4e642f218211fd4abb = MAKE_CODE_OBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__raiseWithLastError, mod_consts.const_str_plain__raiseWithLastError, mod_consts.const_tuple_str_plain_errorCode_tuple, NULL, 0, 0, 0);
code_objects_757b5bec9f98d5222811eddc60079816 = MAKE_CODE_OBJECT(module_filename_obj, 242, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_activate, mod_consts.const_str_digest_49b1ed9be2d6002965f4e8ae7169764f, mod_consts.const_tuple_str_plain_self_str_plain_result_tuple, NULL, 1, 0, 0);
code_objects_37cdc53ae3adbcf018c3c5f563ae15fd = MAKE_CODE_OBJECT(module_filename_obj, 210, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_close, mod_consts.const_str_digest_1ad20944f64700c3bbe5e1775b64718c, mod_consts.const_tuple_str_plain_self_str_plain_result_tuple, NULL, 1, 0, 0);
code_objects_84b48ed9e0b282382f58990144aa9650 = MAKE_CODE_OBJECT(module_filename_obj, 308, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_cursor, mod_consts.const_str_plain_cursor, mod_consts.const_tuple_str_plain_cursor_tuple, NULL, 0, 0, 0);
code_objects_a945d81ec8ae0455d6ccd9b97cfd3dd8 = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_foreach_window, mod_consts.const_str_digest_30d666cd744e8cdbcd5910f85e4a4bd4, mod_consts.const_tuple_ef03884268a4914420460e0666c045ea_tuple, mod_consts.const_tuple_str_plain_titles_tuple, 2, 0, 0);
code_objects_78991e5fddcdbf1df909f210f253ae83 = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_foreach_window, mod_consts.const_str_digest_6df562fe377e056528a1f6b835a23c58, mod_consts.const_tuple_d44ee331259385ffc532959ef2940fd8_tuple, mod_consts.const_tuple_str_plain_activeWindowHwnd_tuple, 2, 0, 0);
code_objects_94f1ee4cf7c3a79f4374666d28ce57fb = MAKE_CODE_OBJECT(module_filename_obj, 167, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_foreach_window, mod_consts.const_str_digest_6723533f6ebd6a198c650522a9934109, mod_consts.const_tuple_str_plain_hWnd_str_plain_lParam_str_plain_windowObjs_tuple, mod_consts.const_tuple_str_plain_windowObjs_tuple, 2, 0, 0);
code_objects_ab6267bd7f14488140ff444f3bcdbd84 = MAKE_CODE_OBJECT(module_filename_obj, 102, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_getActiveWindow, mod_consts.const_str_plain_getActiveWindow, mod_consts.const_tuple_str_plain_hWnd_tuple, NULL, 0, 0, 0);
code_objects_34ae38e9d8b9c923298a64f5a520ff65 = MAKE_CODE_OBJECT(module_filename_obj, 112, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_getActiveWindowTitle, mod_consts.const_str_plain_getActiveWindowTitle, mod_consts.const_tuple_str_plain_activeWindowHwnd_str_plain_foreach_window_tuple, NULL, 0, 0, 0);
code_objects_303f01770203c768b4877c56a1579fb9 = MAKE_CODE_OBJECT(module_filename_obj, 157, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_getAllTitles, mod_consts.const_str_plain_getAllTitles, NULL, NULL, 0, 0, 0);
code_objects_e1fa28bf34e3af1624efb6aaefeb3a07 = MAKE_CODE_OBJECT(module_filename_obj, 163, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_getAllWindows, mod_consts.const_str_plain_getAllWindows, mod_consts.const_tuple_str_plain_windowObjs_str_plain_foreach_window_tuple, NULL, 0, 0, 0);
code_objects_1e6d8b40a3392aedf0f161c1c12f533f = MAKE_CODE_OBJECT(module_filename_obj, 135, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_getWindowsAt, mod_consts.const_str_plain_getWindowsAt, mod_consts.const_tuple_ba569327c01d7de1e72c53889ee071b0_tuple, NULL, 2, 0, 0);
code_objects_221be0a68337f2e3cb69b7c2d4a62a4a = MAKE_CODE_OBJECT(module_filename_obj, 147, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_getWindowsWithTitle, mod_consts.const_str_plain_getWindowsWithTitle, mod_consts.const_tuple_66a089e3c9dc007af427a6e4a3e7f069_tuple, NULL, 1, 0, 0);
code_objects_068fc8e341a64247208f1e5383229ede = MAKE_CODE_OBJECT(module_filename_obj, 238, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_hide, mod_consts.const_str_digest_6b8c083c888a05564df8c14abe519101, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_6af9fe2ff91a93525f715af436a0cf63 = MAKE_CODE_OBJECT(module_filename_obj, 288, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_isActive, mod_consts.const_str_digest_a6ffd92d024f2c266bc7ae66efe4f133, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_4f291b15f704ee398c98cdb881140eea = MAKE_CODE_OBJECT(module_filename_obj, 283, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_isMaximized, mod_consts.const_str_digest_7e364981da5b76d9ca074cc82558e1cf, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_d6d967f303045fbb123045f3406e988d = MAKE_CODE_OBJECT(module_filename_obj, 278, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_isMinimized, mod_consts.const_str_digest_a6b961e65626bc6503abfeba864d8415, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_562b141a01a06838f703110d97414e4f = MAKE_CODE_OBJECT(module_filename_obj, 225, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_maximize, mod_consts.const_str_digest_1fa11f5f717ed8a8051d7be477396d17, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_b3da12247d659b6e3f04858affa5ba17 = MAKE_CODE_OBJECT(module_filename_obj, 220, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_minimize, mod_consts.const_str_digest_769f42585dcde3885c0722adb3cba398, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_8d5d47a6c9110d1de89639a72253b1aa = MAKE_CODE_OBJECT(module_filename_obj, 263, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_move, mod_consts.const_str_digest_f3af80468b391e32ab7b1246882eeff3, mod_consts.const_tuple_e44b7f06e9b27e53203e30d45150679c_tuple, NULL, 3, 0, 0);
code_objects_f65c4fba1f33ebc91b8a6e92857b0334 = MAKE_CODE_OBJECT(module_filename_obj, 270, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_moveTo, mod_consts.const_str_digest_b63a4a971b3eaf53b84c680af8c4cb70, mod_consts.const_tuple_67af7b133394d2f47ee657d165ea815f_tuple, NULL, 3, 0, 0);
code_objects_821c4d31ea10fac37138cd3d3e907413 = MAKE_CODE_OBJECT(module_filename_obj, 249, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_resize, mod_consts.const_str_digest_24313cb4f884f6879d35d6bad647ebb7, mod_consts.const_tuple_ad237162e27fa1111d84be9343a584a9_tuple, NULL, 3, 0, 0);
code_objects_8a73e6769399e4d07772728593d4aed4 = MAKE_CODE_OBJECT(module_filename_obj, 256, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_resizeTo, mod_consts.const_str_digest_426ebaa52290918ea89ce64a92671ce7, mod_consts.const_tuple_58445927d3b41707483675fefec4e18c_tuple, NULL, 3, 0, 0);
code_objects_2a41cefbad8dc02c2d907320869afe2c = MAKE_CODE_OBJECT(module_filename_obj, 321, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_resolution, mod_consts.const_str_plain_resolution, NULL, NULL, 0, 0, 0);
code_objects_54b7040cc01386908aea7e237c74abc0 = MAKE_CODE_OBJECT(module_filename_obj, 230, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_restore, mod_consts.const_str_digest_070ad4bb55c211c719adac77b833f576, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_97b71e62f47d42a1deaf92ca7b322549 = MAKE_CODE_OBJECT(module_filename_obj, 234, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_show, mod_consts.const_str_digest_604005b13371455c696a768302d4e016, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_7dddfd9b00692b3b5efd140ab1d8d3ab = MAKE_CODE_OBJECT(module_filename_obj, 293, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_title, mod_consts.const_str_digest_2c941aae51fae6289882a26cb4eb112c, mod_consts.const_tuple_4265532bed070c6bd9c8f2a66ff6e6e3_tuple, NULL, 1, 0, 0);
code_objects_a91f6d786c8494a0df7aef0e8496d159 = MAKE_CODE_OBJECT(module_filename_obj, 303, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_visible, mod_consts.const_str_digest_e6f27490dd81b1fa228891f37db50da9, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__10___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__11__getWindowRect(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__12___repr__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__13___eq__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__14_close(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__15_minimize(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__16_maximize(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__17_restore(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__18_show(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__19_hide(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles$$$function__1_foreach_window(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__20_activate(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__21_resize(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__22_resizeTo(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__23_move(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__24_moveTo(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__25_isMinimized(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__26_isMaximized(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__27_isActive(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__28_title(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__29_visible(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__2__formatMessage(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__30_cursor(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__31_resolution(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__3__raiseWithLastError(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__4_getActiveWindow(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle$$$function__1_foreach_window(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__6_getWindowsAt(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__7_getWindowsWithTitle(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__8_getAllTitles(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows$$$function__1_foreach_window(PyThreadState *tstate, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *var_titles = Nuitka_Cell_NewEmpty();
PyObject *var_foreach_window = NULL;
struct Nuitka_FrameObject *frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = Nuitka_Cell_GET(var_titles);
    Nuitka_Cell_SET(var_titles, tmp_assign_source_1);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = var_titles;
Py_INCREF(tmp_closure_1[0]);
tmp_assign_source_2 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles$$$function__1_foreach_window(tstate, tmp_closure_1);

{
    PyObject *old = var_foreach_window;
    var_foreach_window = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
// Tried code:
if (isFrameUnusable(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles)) {
    Py_XDECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles = MAKE_FUNCTION_FRAME(tstate, code_objects_1a4d381996abac61846a43f5c9a83c44, module_pygetwindow$_pygetwindow_win, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles->m_type_description == NULL);
frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles = cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles);
assert(Py_REFCNT(frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_1 = module_var_accessor_pygetwindow$_pygetwindow_win$enumWindows(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enumWindows);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 66;
type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_pygetwindow$_pygetwindow_win$enumWindowsProc(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enumWindowsProc);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 66;
type_description_1 = "co";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_foreach_window);
tmp_args_element_value_2 = var_foreach_window;
frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles->m_frame.f_lineno = 66;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = const_int_0;
frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles->m_frame.f_lineno = 66;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "co";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles,
    type_description_1,
    var_titles,
    var_foreach_window
);


// Release cached frame if used for exception.
if (frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles == cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles);
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles = NULL;
}

assertFrameObject(frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(Nuitka_Cell_GET(var_titles));
tmp_return_value = Nuitka_Cell_GET(var_titles);
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_titles);
CHECK_OBJECT(var_titles);
Py_DECREF(var_titles);
var_titles = NULL;
CHECK_OBJECT(var_foreach_window);
CHECK_OBJECT(var_foreach_window);
Py_DECREF(var_foreach_window);
var_foreach_window = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_titles);
CHECK_OBJECT(var_titles);
Py_DECREF(var_titles);
var_titles = NULL;
CHECK_OBJECT(var_foreach_window);
CHECK_OBJECT(var_foreach_window);
Py_DECREF(var_foreach_window);
var_foreach_window = NULL;
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


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles$$$function__1_foreach_window(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_hWnd = python_pars[0];
PyObject *par_lParam = python_pars[1];
PyObject *var_length = NULL;
PyObject *var_buff = NULL;
struct Nuitka_FrameObject *frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles$$$function__1_foreach_window;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles$$$function__1_foreach_window = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles$$$function__1_foreach_window)) {
    Py_XDECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles$$$function__1_foreach_window);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles$$$function__1_foreach_window == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles$$$function__1_foreach_window = MAKE_FUNCTION_FRAME(tstate, code_objects_a945d81ec8ae0455d6ccd9b97cfd3dd8, module_pygetwindow$_pygetwindow_win, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles$$$function__1_foreach_window->m_type_description == NULL);
frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles$$$function__1_foreach_window = cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles$$$function__1_foreach_window;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles$$$function__1_foreach_window);
assert(Py_REFCNT(frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles$$$function__1_foreach_window) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
tmp_called_value_1 = module_var_accessor_pygetwindow$_pygetwindow_win$isWindowVisible(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_isWindowVisible);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_hWnd);
tmp_args_element_value_1 = par_hWnd;
frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles$$$function__1_foreach_window->m_frame.f_lineno = 60;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 60;
type_description_1 = "ooooc";
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
tmp_called_value_2 = module_var_accessor_pygetwindow$_pygetwindow_win$getWindowTextLength(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getWindowTextLength);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 61;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_hWnd);
tmp_args_element_value_2 = par_hWnd;
frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles$$$function__1_foreach_window->m_frame.f_lineno = 61;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_length;
    var_length = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
tmp_expression_value_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_create_unicode_buffer);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_length);
tmp_add_expr_left_1 = var_length;
tmp_add_expr_right_1 = const_int_pos_1;
tmp_args_element_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 62;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles$$$function__1_foreach_window->m_frame.f_lineno = 62;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_buff;
    var_buff = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
tmp_called_value_4 = module_var_accessor_pygetwindow$_pygetwindow_win$getWindowText(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getWindowText);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_hWnd);
tmp_args_element_value_4 = par_hWnd;
CHECK_OBJECT(var_buff);
tmp_args_element_value_5 = var_buff;
CHECK_OBJECT(var_length);
tmp_add_expr_left_2 = var_length;
tmp_add_expr_right_2 = const_int_pos_1;
tmp_args_element_value_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles$$$function__1_foreach_window->m_frame.f_lineno = 63;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_7;
PyObject *tmp_tuple_element_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_titles);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 64;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_append);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_hWnd);
tmp_tuple_element_1 = par_hWnd;
tmp_args_element_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_3;
PyTuple_SET_ITEM0(tmp_args_element_value_7, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_buff);
tmp_expression_value_3 = var_buff;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_value);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooooc";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_args_element_value_7, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_args_element_value_7);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles$$$function__1_foreach_window->m_frame.f_lineno = 64;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles$$$function__1_foreach_window, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles$$$function__1_foreach_window->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles$$$function__1_foreach_window, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles$$$function__1_foreach_window,
    type_description_1,
    par_hWnd,
    par_lParam,
    var_length,
    var_buff,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles$$$function__1_foreach_window == cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles$$$function__1_foreach_window) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles$$$function__1_foreach_window);
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles$$$function__1_foreach_window = NULL;
}

assertFrameObject(frame_frame_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles$$$function__1_foreach_window);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_length);
var_length = NULL;
Py_XDECREF(var_buff);
var_buff = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_length);
var_length = NULL;
Py_XDECREF(var_buff);
var_buff = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_hWnd);
Py_DECREF(par_hWnd);
CHECK_OBJECT(par_lParam);
Py_DECREF(par_lParam);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_hWnd);
Py_DECREF(par_hWnd);
CHECK_OBJECT(par_lParam);
Py_DECREF(par_lParam);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__2__formatMessage(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_errorCode = python_pars[0];
PyObject *var_lpBuffer = NULL;
PyObject *var_msg = NULL;
struct Nuitka_FrameObject *frame_frame_pygetwindow$_pygetwindow_win$$$function__2__formatMessage;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__2__formatMessage = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__2__formatMessage)) {
    Py_XDECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__2__formatMessage);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__2__formatMessage == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__2__formatMessage = MAKE_FUNCTION_FRAME(tstate, code_objects_bb9cb4934b1c9233cf8e20bff5bcac1d, module_pygetwindow$_pygetwindow_win, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__2__formatMessage->m_type_description == NULL);
frame_frame_pygetwindow$_pygetwindow_win$$$function__2__formatMessage = cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__2__formatMessage;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pygetwindow$_pygetwindow_win$$$function__2__formatMessage);
assert(Py_REFCNT(frame_frame_pygetwindow$_pygetwindow_win$$$function__2__formatMessage) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_called_instance_1 == NULL));
frame_frame_pygetwindow$_pygetwindow_win$$$function__2__formatMessage->m_frame.f_lineno = 81;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_LPWSTR);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_lpBuffer;
    var_lpBuffer = tmp_assign_source_1;
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
PyObject *tmp_bitor_expr_left_1;
PyObject *tmp_bitor_expr_right_1;
PyObject *tmp_bitor_expr_left_2;
PyObject *tmp_bitor_expr_right_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_6;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
tmp_expression_value_3 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_3 == NULL));
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_windll);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_kernel32);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_FormatMessageW);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_bitor_expr_left_2 = module_var_accessor_pygetwindow$_pygetwindow_win$FORMAT_MESSAGE_FROM_SYSTEM(tstate);
if (unlikely(tmp_bitor_expr_left_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FORMAT_MESSAGE_FROM_SYSTEM);
}

if (tmp_bitor_expr_left_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 83;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_bitor_expr_right_2 = module_var_accessor_pygetwindow$_pygetwindow_win$FORMAT_MESSAGE_ALLOCATE_BUFFER(tstate);
if (unlikely(tmp_bitor_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FORMAT_MESSAGE_ALLOCATE_BUFFER);
}

if (tmp_bitor_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 83;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_bitor_expr_left_1 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_2, tmp_bitor_expr_right_2);
if (tmp_bitor_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 83;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_bitor_expr_right_1 = module_var_accessor_pygetwindow$_pygetwindow_win$FORMAT_MESSAGE_IGNORE_INSERTS(tstate);
if (unlikely(tmp_bitor_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FORMAT_MESSAGE_IGNORE_INSERTS);
}

if (tmp_bitor_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_bitor_expr_left_1);

exception_lineno = 83;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
CHECK_OBJECT(tmp_bitor_expr_left_1);
Py_DECREF(tmp_bitor_expr_left_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 83;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_pygetwindow$_pygetwindow_win$NULL(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NULL);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 84;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_errorCode);
tmp_args_element_value_3 = par_errorCode;
tmp_args_element_value_4 = const_int_0;
tmp_expression_value_4 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_4 == NULL));
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_cast);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 87;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_called_instance_2 == NULL));
CHECK_OBJECT(var_lpBuffer);
tmp_args_element_value_7 = var_lpBuffer;
frame_frame_pygetwindow$_pygetwindow_win$$$function__2__formatMessage->m_frame.f_lineno = 87;
tmp_args_element_value_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_byref, tmp_args_element_value_7);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 87;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_5 == NULL));
tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_LPWSTR);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 87;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__2__formatMessage->m_frame.f_lineno = 87;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_8};
    tmp_args_element_value_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 87;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = const_int_0;
tmp_args_element_value_10 = module_var_accessor_pygetwindow$_pygetwindow_win$NULL(tstate);
if (unlikely(tmp_args_element_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NULL);
}

if (tmp_args_element_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_5);

exception_lineno = 89;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__2__formatMessage->m_frame.f_lineno = 83;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_lpBuffer);
tmp_expression_value_7 = var_lpBuffer;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_value);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_rstrip);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__2__formatMessage->m_frame.f_lineno = 90;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_msg;
    var_msg = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_11;
tmp_expression_value_9 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_9 == NULL));
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_windll);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_kernel32);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_lpBuffer);
tmp_args_element_value_11 = var_lpBuffer;
frame_frame_pygetwindow$_pygetwindow_win$$$function__2__formatMessage->m_frame.f_lineno = 91;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_LocalFree, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pygetwindow$_pygetwindow_win$$$function__2__formatMessage, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pygetwindow$_pygetwindow_win$$$function__2__formatMessage->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pygetwindow$_pygetwindow_win$$$function__2__formatMessage, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pygetwindow$_pygetwindow_win$$$function__2__formatMessage,
    type_description_1,
    par_errorCode,
    var_lpBuffer,
    var_msg
);


// Release cached frame if used for exception.
if (frame_frame_pygetwindow$_pygetwindow_win$$$function__2__formatMessage == cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__2__formatMessage) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__2__formatMessage);
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__2__formatMessage = NULL;
}

assertFrameObject(frame_frame_pygetwindow$_pygetwindow_win$$$function__2__formatMessage);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_msg);
tmp_return_value = var_msg;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_lpBuffer);
CHECK_OBJECT(var_lpBuffer);
Py_DECREF(var_lpBuffer);
var_lpBuffer = NULL;
CHECK_OBJECT(var_msg);
CHECK_OBJECT(var_msg);
Py_DECREF(var_msg);
var_msg = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_lpBuffer);
var_lpBuffer = NULL;
Py_XDECREF(var_msg);
var_msg = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_errorCode);
Py_DECREF(par_errorCode);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_errorCode);
Py_DECREF(par_errorCode);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__3__raiseWithLastError(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_errorCode = NULL;
struct Nuitka_FrameObject *frame_frame_pygetwindow$_pygetwindow_win$$$function__3__raiseWithLastError;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__3__raiseWithLastError = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__3__raiseWithLastError)) {
    Py_XDECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__3__raiseWithLastError);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__3__raiseWithLastError == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__3__raiseWithLastError = MAKE_FUNCTION_FRAME(tstate, code_objects_38d304e74a4e2d4e642f218211fd4abb, module_pygetwindow$_pygetwindow_win, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__3__raiseWithLastError->m_type_description == NULL);
frame_frame_pygetwindow$_pygetwindow_win$$$function__3__raiseWithLastError = cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__3__raiseWithLastError;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pygetwindow$_pygetwindow_win$$$function__3__raiseWithLastError);
assert(Py_REFCNT(frame_frame_pygetwindow$_pygetwindow_win$$$function__3__raiseWithLastError) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_2 == NULL));
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_windll);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_kernel32);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__3__raiseWithLastError->m_frame.f_lineno = 98;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_GetLastError);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_errorCode;
    var_errorCode = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_1;
tmp_called_value_1 = module_var_accessor_pygetwindow$_pygetwindow_win$PyGetWindowException(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PyGetWindowException);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 99;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_mod_expr_left_1 = mod_consts.const_str_digest_e455f349b3701636c63fd989b2a4e858;
CHECK_OBJECT(var_errorCode);
tmp_tuple_element_1 = var_errorCode;
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
tmp_called_value_2 = module_var_accessor_pygetwindow$_pygetwindow_win$_formatMessage(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__formatMessage);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 99;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(var_errorCode);
tmp_args_element_value_2 = var_errorCode;
frame_frame_pygetwindow$_pygetwindow_win$$$function__3__raiseWithLastError->m_frame.f_lineno = 99;
tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__3__raiseWithLastError->m_frame.f_lineno = 99;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 99;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pygetwindow$_pygetwindow_win$$$function__3__raiseWithLastError, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pygetwindow$_pygetwindow_win$$$function__3__raiseWithLastError->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pygetwindow$_pygetwindow_win$$$function__3__raiseWithLastError, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pygetwindow$_pygetwindow_win$$$function__3__raiseWithLastError,
    type_description_1,
    var_errorCode
);


// Release cached frame if used for exception.
if (frame_frame_pygetwindow$_pygetwindow_win$$$function__3__raiseWithLastError == cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__3__raiseWithLastError) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__3__raiseWithLastError);
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__3__raiseWithLastError = NULL;
}

assertFrameObject(frame_frame_pygetwindow$_pygetwindow_win$$$function__3__raiseWithLastError);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_errorCode);
var_errorCode = NULL;
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

}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__4_getActiveWindow(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_hWnd = NULL;
struct Nuitka_FrameObject *frame_frame_pygetwindow$_pygetwindow_win$$$function__4_getActiveWindow;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__4_getActiveWindow = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__4_getActiveWindow)) {
    Py_XDECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__4_getActiveWindow);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__4_getActiveWindow == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__4_getActiveWindow = MAKE_FUNCTION_FRAME(tstate, code_objects_ab6267bd7f14488140ff444f3bcdbd84, module_pygetwindow$_pygetwindow_win, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__4_getActiveWindow->m_type_description == NULL);
frame_frame_pygetwindow$_pygetwindow_win$$$function__4_getActiveWindow = cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__4_getActiveWindow;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pygetwindow$_pygetwindow_win$$$function__4_getActiveWindow);
assert(Py_REFCNT(frame_frame_pygetwindow$_pygetwindow_win$$$function__4_getActiveWindow) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_2 == NULL));
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_windll);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__4_getActiveWindow->m_frame.f_lineno = 104;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_GetForegroundWindow);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_hWnd;
    var_hWnd = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_hWnd);
tmp_cmp_expr_left_1 = var_hWnd;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "o";
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
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_pygetwindow$_pygetwindow_win$Win32Window(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Win32Window);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 109;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_hWnd);
tmp_args_element_value_1 = var_hWnd;
frame_frame_pygetwindow$_pygetwindow_win$$$function__4_getActiveWindow->m_frame.f_lineno = 109;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "o";
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pygetwindow$_pygetwindow_win$$$function__4_getActiveWindow, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pygetwindow$_pygetwindow_win$$$function__4_getActiveWindow->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pygetwindow$_pygetwindow_win$$$function__4_getActiveWindow, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pygetwindow$_pygetwindow_win$$$function__4_getActiveWindow,
    type_description_1,
    var_hWnd
);


// Release cached frame if used for exception.
if (frame_frame_pygetwindow$_pygetwindow_win$$$function__4_getActiveWindow == cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__4_getActiveWindow) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__4_getActiveWindow);
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__4_getActiveWindow = NULL;
}

assertFrameObject(frame_frame_pygetwindow$_pygetwindow_win$$$function__4_getActiveWindow);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_hWnd);
CHECK_OBJECT(var_hWnd);
Py_DECREF(var_hWnd);
var_hWnd = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_hWnd);
var_hWnd = NULL;
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


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *var_activeWindowHwnd = Nuitka_Cell_NewEmpty();
PyObject *var_foreach_window = NULL;
struct Nuitka_FrameObject *frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle)) {
    Py_XDECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle = MAKE_FUNCTION_FRAME(tstate, code_objects_34ae38e9d8b9c923298a64f5a520ff65, module_pygetwindow$_pygetwindow_win, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle->m_type_description == NULL);
frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle = cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle);
assert(Py_REFCNT(frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_2 == NULL));
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_windll);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "co";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle->m_frame.f_lineno = 117;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_GetForegroundWindow);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "co";
    goto frame_exception_exit_1;
}
{
    PyObject *old = Nuitka_Cell_GET(var_activeWindowHwnd);
    Nuitka_Cell_SET(var_activeWindowHwnd, tmp_assign_source_1);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(Nuitka_Cell_GET(var_activeWindowHwnd));
tmp_cmp_expr_left_1 = Nuitka_Cell_GET(var_activeWindowHwnd);
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "co";
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
PyObject *tmp_assign_source_2;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = var_activeWindowHwnd;
Py_INCREF(tmp_closure_1[0]);
tmp_assign_source_2 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle$$$function__1_foreach_window(tstate, tmp_closure_1);

{
    PyObject *old = var_foreach_window;
    var_foreach_window = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_1 = module_var_accessor_pygetwindow$_pygetwindow_win$enumWindows(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enumWindows);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;
type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_pygetwindow$_pygetwindow_win$enumWindowsProc(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enumWindowsProc);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;
type_description_1 = "co";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_foreach_window);
tmp_args_element_value_2 = var_foreach_window;
frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle->m_frame.f_lineno = 130;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = const_int_0;
frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle->m_frame.f_lineno = 130;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "co";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
tmp_return_value = module_var_accessor_pygetwindow$_pygetwindow_win$activeWindowTitle(tstate);
if (unlikely(tmp_return_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_activeWindowTitle);
}

if (tmp_return_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 132;
type_description_1 = "co";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle,
    type_description_1,
    var_activeWindowHwnd,
    var_foreach_window
);


// Release cached frame if used for exception.
if (frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle == cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle);
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle = NULL;
}

assertFrameObject(frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_activeWindowHwnd);
CHECK_OBJECT(var_activeWindowHwnd);
Py_DECREF(var_activeWindowHwnd);
var_activeWindowHwnd = NULL;
Py_XDECREF(var_foreach_window);
var_foreach_window = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_activeWindowHwnd);
CHECK_OBJECT(var_activeWindowHwnd);
Py_DECREF(var_activeWindowHwnd);
var_activeWindowHwnd = NULL;
Py_XDECREF(var_foreach_window);
var_foreach_window = NULL;
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


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle$$$function__1_foreach_window(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_hWnd = python_pars[0];
PyObject *par_lParam = python_pars[1];
PyObject *var_length = NULL;
PyObject *var_buff = NULL;
struct Nuitka_FrameObject *frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle$$$function__1_foreach_window;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle$$$function__1_foreach_window = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle$$$function__1_foreach_window)) {
    Py_XDECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle$$$function__1_foreach_window);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle$$$function__1_foreach_window == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle$$$function__1_foreach_window = MAKE_FUNCTION_FRAME(tstate, code_objects_78991e5fddcdbf1df909f210f253ae83, module_pygetwindow$_pygetwindow_win, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle$$$function__1_foreach_window->m_type_description == NULL);
frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle$$$function__1_foreach_window = cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle$$$function__1_foreach_window;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle$$$function__1_foreach_window);
assert(Py_REFCNT(frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle$$$function__1_foreach_window) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_hWnd);
tmp_cmp_expr_left_1 = par_hWnd;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_activeWindowHwnd);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 124;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_1 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "ooooc";
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_pygetwindow$_pygetwindow_win$getWindowTextLength(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getWindowTextLength);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 125;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_hWnd);
tmp_args_element_value_1 = par_hWnd;
frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle$$$function__1_foreach_window->m_frame.f_lineno = 125;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_length;
    var_length = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
tmp_expression_value_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_create_unicode_buffer);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_length);
tmp_add_expr_left_1 = var_length;
tmp_add_expr_right_1 = const_int_pos_1;
tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 126;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle$$$function__1_foreach_window->m_frame.f_lineno = 126;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_buff;
    var_buff = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
tmp_called_value_3 = module_var_accessor_pygetwindow$_pygetwindow_win$getWindowText(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getWindowText);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_hWnd);
tmp_args_element_value_3 = par_hWnd;
CHECK_OBJECT(var_buff);
tmp_args_element_value_4 = var_buff;
CHECK_OBJECT(var_length);
tmp_add_expr_left_2 = var_length;
tmp_add_expr_right_2 = const_int_pos_1;
tmp_args_element_value_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle$$$function__1_foreach_window->m_frame.f_lineno = 127;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_buff);
tmp_expression_value_2 = var_buff;
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_value);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_activeWindowTitle, tmp_assign_source_3);
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle$$$function__1_foreach_window, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle$$$function__1_foreach_window->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle$$$function__1_foreach_window, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle$$$function__1_foreach_window,
    type_description_1,
    par_hWnd,
    par_lParam,
    var_length,
    var_buff,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle$$$function__1_foreach_window == cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle$$$function__1_foreach_window) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle$$$function__1_foreach_window);
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle$$$function__1_foreach_window = NULL;
}

assertFrameObject(frame_frame_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle$$$function__1_foreach_window);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_length);
var_length = NULL;
Py_XDECREF(var_buff);
var_buff = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_length);
var_length = NULL;
Py_XDECREF(var_buff);
var_buff = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_hWnd);
Py_DECREF(par_hWnd);
CHECK_OBJECT(par_lParam);
Py_DECREF(par_lParam);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_hWnd);
Py_DECREF(par_hWnd);
CHECK_OBJECT(par_lParam);
Py_DECREF(par_lParam);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__6_getWindowsAt(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_y = python_pars[1];
PyObject *var_windowsAtXY = NULL;
PyObject *var_window = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_pygetwindow$_pygetwindow_win$$$function__6_getWindowsAt;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__6_getWindowsAt = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = var_windowsAtXY;
    var_windowsAtXY = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
if (isFrameUnusable(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__6_getWindowsAt)) {
    Py_XDECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__6_getWindowsAt);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__6_getWindowsAt == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__6_getWindowsAt = MAKE_FUNCTION_FRAME(tstate, code_objects_1e6d8b40a3392aedf0f161c1c12f533f, module_pygetwindow$_pygetwindow_win, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__6_getWindowsAt->m_type_description == NULL);
frame_frame_pygetwindow$_pygetwindow_win$$$function__6_getWindowsAt = cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__6_getWindowsAt;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pygetwindow$_pygetwindow_win$$$function__6_getWindowsAt);
assert(Py_REFCNT(frame_frame_pygetwindow$_pygetwindow_win$$$function__6_getWindowsAt) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_pygetwindow$_pygetwindow_win$getAllWindows(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getAllWindows);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 141;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__6_getWindowsAt->m_frame.f_lineno = 141;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooo";
exception_lineno = 141;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_4 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_window;
    var_window = tmp_assign_source_4;
    Py_INCREF(var_window);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_4;
int tmp_truth_name_1;
tmp_called_value_2 = module_var_accessor_pygetwindow$_pygetwindow_win$pointInRect(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pointInRect);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 142;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
if (par_x == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 142;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_args_element_value_1 = par_x;
if (par_y == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_y);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 142;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_args_element_value_2 = par_y;
CHECK_OBJECT(var_window);
tmp_expression_value_1 = var_window;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_left);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_window);
tmp_expression_value_2 = var_window;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_top);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 142;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_window);
tmp_expression_value_3 = var_window;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_width);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 142;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_window);
tmp_expression_value_4 = var_window;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_height);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_5);

exception_lineno = 142;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__6_getWindowsAt->m_frame.f_lineno = 142;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 142;
type_description_1 = "oooo";
    goto try_except_handler_2;
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
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
if (var_windowsAtXY == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_windowsAtXY);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 143;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_windowsAtXY;
CHECK_OBJECT(var_window);
tmp_item_value_1 = var_window;
tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
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

goto frame_exception_exit_1;
// End of try:
try_end_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
if (var_windowsAtXY == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_windowsAtXY);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 144;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_windowsAtXY;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_pygetwindow$_pygetwindow_win$$$function__6_getWindowsAt, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pygetwindow$_pygetwindow_win$$$function__6_getWindowsAt->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pygetwindow$_pygetwindow_win$$$function__6_getWindowsAt, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pygetwindow$_pygetwindow_win$$$function__6_getWindowsAt,
    type_description_1,
    par_x,
    par_y,
    var_windowsAtXY,
    var_window
);


// Release cached frame if used for exception.
if (frame_frame_pygetwindow$_pygetwindow_win$$$function__6_getWindowsAt == cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__6_getWindowsAt) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__6_getWindowsAt);
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__6_getWindowsAt = NULL;
}

assertFrameObject(frame_frame_pygetwindow$_pygetwindow_win$$$function__6_getWindowsAt);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_windowsAtXY);
var_windowsAtXY = NULL;
Py_XDECREF(var_window);
var_window = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_windowsAtXY);
var_windowsAtXY = NULL;
Py_XDECREF(var_window);
var_window = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

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


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__7_getWindowsWithTitle(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_title = python_pars[0];
PyObject *var_hWndsAndTitles = NULL;
PyObject *var_windowObjs = NULL;
PyObject *var_hWnd = NULL;
PyObject *var_winTitle = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_pygetwindow$_pygetwindow_win$$$function__7_getWindowsWithTitle;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__7_getWindowsWithTitle = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__7_getWindowsWithTitle)) {
    Py_XDECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__7_getWindowsWithTitle);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__7_getWindowsWithTitle == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__7_getWindowsWithTitle = MAKE_FUNCTION_FRAME(tstate, code_objects_221be0a68337f2e3cb69b7c2d4a62a4a, module_pygetwindow$_pygetwindow_win, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__7_getWindowsWithTitle->m_type_description == NULL);
frame_frame_pygetwindow$_pygetwindow_win$$$function__7_getWindowsWithTitle = cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__7_getWindowsWithTitle;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pygetwindow$_pygetwindow_win$$$function__7_getWindowsWithTitle);
assert(Py_REFCNT(frame_frame_pygetwindow$_pygetwindow_win$$$function__7_getWindowsWithTitle) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_pygetwindow$_pygetwindow_win$_getAllTitles(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__getAllTitles);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 149;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__7_getWindowsWithTitle->m_frame.f_lineno = 149;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_hWndsAndTitles;
    var_hWndsAndTitles = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = var_windowObjs;
    var_windowObjs = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_hWndsAndTitles);
tmp_iter_arg_1 = var_hWndsAndTitles;
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooo";
exception_lineno = 151;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 151;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 151;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
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



exception_lineno = 151;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
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

goto try_except_handler_3;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
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

goto try_except_handler_2;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_hWnd;
    var_hWnd = tmp_assign_source_8;
    Py_INCREF(var_hWnd);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_winTitle;
    var_winTitle = tmp_assign_source_9;
    Py_INCREF(var_winTitle);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_2;
if (par_title == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_title);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 152;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}

tmp_expression_value_1 = par_title;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_upper);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__7_getWindowsWithTitle->m_frame.f_lineno = 152;
tmp_cmp_expr_left_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_winTitle);
tmp_expression_value_2 = var_winTitle;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_upper);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 152;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__7_getWindowsWithTitle->m_frame.f_lineno = 152;
tmp_cmp_expr_right_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 152;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "ooooo";
    goto try_except_handler_2;
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
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_1;
if (var_windowObjs == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_windowObjs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 153;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_windowObjs;
tmp_called_value_4 = module_var_accessor_pygetwindow$_pygetwindow_win$Win32Window(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Win32Window);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 153;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_hWnd);
tmp_args_element_value_1 = var_hWnd;
frame_frame_pygetwindow$_pygetwindow_win$$$function__7_getWindowsWithTitle->m_frame.f_lineno = 153;
tmp_item_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_1);
if (tmp_item_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
if (var_windowObjs == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_windowObjs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 154;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_windowObjs;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_pygetwindow$_pygetwindow_win$$$function__7_getWindowsWithTitle, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pygetwindow$_pygetwindow_win$$$function__7_getWindowsWithTitle->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pygetwindow$_pygetwindow_win$$$function__7_getWindowsWithTitle, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pygetwindow$_pygetwindow_win$$$function__7_getWindowsWithTitle,
    type_description_1,
    par_title,
    var_hWndsAndTitles,
    var_windowObjs,
    var_hWnd,
    var_winTitle
);


// Release cached frame if used for exception.
if (frame_frame_pygetwindow$_pygetwindow_win$$$function__7_getWindowsWithTitle == cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__7_getWindowsWithTitle) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__7_getWindowsWithTitle);
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__7_getWindowsWithTitle = NULL;
}

assertFrameObject(frame_frame_pygetwindow$_pygetwindow_win$$$function__7_getWindowsWithTitle);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_hWndsAndTitles);
CHECK_OBJECT(var_hWndsAndTitles);
Py_DECREF(var_hWndsAndTitles);
var_hWndsAndTitles = NULL;
Py_XDECREF(var_windowObjs);
var_windowObjs = NULL;
Py_XDECREF(var_hWnd);
var_hWnd = NULL;
Py_XDECREF(var_winTitle);
var_winTitle = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_hWndsAndTitles);
var_hWndsAndTitles = NULL;
Py_XDECREF(var_windowObjs);
var_windowObjs = NULL;
Py_XDECREF(var_hWnd);
var_hWnd = NULL;
Py_XDECREF(var_winTitle);
var_winTitle = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_title);
Py_DECREF(par_title);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_title);
Py_DECREF(par_title);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__8_getAllTitles(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *outline_0_var_window = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_pygetwindow$_pygetwindow_win$$$function__8_getAllTitles;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__8_getAllTitles = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__8_getAllTitles)) {
    Py_XDECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__8_getAllTitles);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__8_getAllTitles == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__8_getAllTitles = MAKE_FUNCTION_FRAME(tstate, code_objects_303f01770203c768b4877c56a1579fb9, module_pygetwindow$_pygetwindow_win, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__8_getAllTitles->m_type_description == NULL);
frame_frame_pygetwindow$_pygetwindow_win$$$function__8_getAllTitles = cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__8_getAllTitles;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pygetwindow$_pygetwindow_win$$$function__8_getAllTitles);
assert(Py_REFCNT(frame_frame_pygetwindow$_pygetwindow_win$$$function__8_getAllTitles) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_pygetwindow$_pygetwindow_win$getAllWindows(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getAllWindows);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 160;

    goto try_except_handler_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__8_getAllTitles->m_frame.f_lineno = 160;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;

    goto try_except_handler_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;

    goto try_except_handler_1;
}
{
    PyObject *old = tmp_listcomp_1__$0;
    tmp_listcomp_1__$0 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = tmp_listcomp_1__contraction;
    tmp_listcomp_1__contraction = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 160;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_4 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_window;
    outline_0_var_window = tmp_assign_source_4;
    Py_INCREF(outline_0_var_window);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_window);
tmp_expression_value_1 = outline_0_var_window;
tmp_append_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_title);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;

    goto try_except_handler_2;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;

    goto try_except_handler_2;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;

    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_return_value = tmp_listcomp_1__contraction;
Py_INCREF(tmp_return_value);
goto try_return_handler_2;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
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
goto try_return_handler_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
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
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_1;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(outline_0_var_window);
outline_0_var_window = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_window);
outline_0_var_window = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 160;
goto frame_exception_exit_1;
outline_result_1:;
goto frame_return_exit_1;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_pygetwindow$_pygetwindow_win$$$function__8_getAllTitles, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pygetwindow$_pygetwindow_win$$$function__8_getAllTitles->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pygetwindow$_pygetwindow_win$$$function__8_getAllTitles, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pygetwindow$_pygetwindow_win$$$function__8_getAllTitles,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_pygetwindow$_pygetwindow_win$$$function__8_getAllTitles == cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__8_getAllTitles) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__8_getAllTitles);
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__8_getAllTitles = NULL;
}

assertFrameObject(frame_frame_pygetwindow$_pygetwindow_win$$$function__8_getAllTitles);

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


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *var_windowObjs = Nuitka_Cell_NewEmpty();
PyObject *var_foreach_window = NULL;
struct Nuitka_FrameObject *frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = Nuitka_Cell_GET(var_windowObjs);
    Nuitka_Cell_SET(var_windowObjs, tmp_assign_source_1);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = var_windowObjs;
Py_INCREF(tmp_closure_1[0]);
tmp_assign_source_2 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows$$$function__1_foreach_window(tstate, tmp_closure_1);

{
    PyObject *old = var_foreach_window;
    var_foreach_window = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
// Tried code:
if (isFrameUnusable(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows)) {
    Py_XDECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows = MAKE_FUNCTION_FRAME(tstate, code_objects_e1fa28bf34e3af1624efb6aaefeb3a07, module_pygetwindow$_pygetwindow_win, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows->m_type_description == NULL);
frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows = cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows);
assert(Py_REFCNT(frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_1 = module_var_accessor_pygetwindow$_pygetwindow_win$enumWindows(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enumWindows);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 171;
type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_pygetwindow$_pygetwindow_win$enumWindowsProc(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enumWindowsProc);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 171;
type_description_1 = "co";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_foreach_window);
tmp_args_element_value_2 = var_foreach_window;
frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows->m_frame.f_lineno = 171;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = const_int_0;
frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows->m_frame.f_lineno = 171;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "co";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows,
    type_description_1,
    var_windowObjs,
    var_foreach_window
);


// Release cached frame if used for exception.
if (frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows == cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows);
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows = NULL;
}

assertFrameObject(frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(Nuitka_Cell_GET(var_windowObjs));
tmp_return_value = Nuitka_Cell_GET(var_windowObjs);
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_windowObjs);
CHECK_OBJECT(var_windowObjs);
Py_DECREF(var_windowObjs);
var_windowObjs = NULL;
CHECK_OBJECT(var_foreach_window);
CHECK_OBJECT(var_foreach_window);
Py_DECREF(var_foreach_window);
var_foreach_window = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_windowObjs);
CHECK_OBJECT(var_windowObjs);
Py_DECREF(var_windowObjs);
var_windowObjs = NULL;
CHECK_OBJECT(var_foreach_window);
CHECK_OBJECT(var_foreach_window);
Py_DECREF(var_foreach_window);
var_foreach_window = NULL;
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


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows$$$function__1_foreach_window(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_hWnd = python_pars[0];
PyObject *par_lParam = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows$$$function__1_foreach_window;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows$$$function__1_foreach_window = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows$$$function__1_foreach_window)) {
    Py_XDECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows$$$function__1_foreach_window);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows$$$function__1_foreach_window == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows$$$function__1_foreach_window = MAKE_FUNCTION_FRAME(tstate, code_objects_94f1ee4cf7c3a79f4374666d28ce57fb, module_pygetwindow$_pygetwindow_win, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows$$$function__1_foreach_window->m_type_description == NULL);
frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows$$$function__1_foreach_window = cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows$$$function__1_foreach_window;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows$$$function__1_foreach_window);
assert(Py_REFCNT(frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows$$$function__1_foreach_window) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
tmp_expression_value_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_2 == NULL));
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_windll);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_hWnd);
tmp_args_element_value_1 = par_hWnd;
frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows$$$function__1_foreach_window->m_frame.f_lineno = 168;
tmp_cmp_expr_left_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_IsWindowVisible, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooc";
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_windowObjs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 169;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_append);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_pygetwindow$_pygetwindow_win$Win32Window(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Win32Window);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 169;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_hWnd);
tmp_args_element_value_3 = par_hWnd;
frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows$$$function__1_foreach_window->m_frame.f_lineno = 169;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 169;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows$$$function__1_foreach_window->m_frame.f_lineno = 169;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "ooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows$$$function__1_foreach_window, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows$$$function__1_foreach_window->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows$$$function__1_foreach_window, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows$$$function__1_foreach_window,
    type_description_1,
    par_hWnd,
    par_lParam,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows$$$function__1_foreach_window == cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows$$$function__1_foreach_window) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows$$$function__1_foreach_window);
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows$$$function__1_foreach_window = NULL;
}

assertFrameObject(frame_frame_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows$$$function__1_foreach_window);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_hWnd);
Py_DECREF(par_hWnd);
CHECK_OBJECT(par_lParam);
Py_DECREF(par_lParam);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_hWnd);
Py_DECREF(par_hWnd);
CHECK_OBJECT(par_lParam);
Py_DECREF(par_lParam);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__10___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_hWnd = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pygetwindow$_pygetwindow_win$$$function__10___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__10___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__10___init__)) {
    Py_XDECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__10___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__10___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__10___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_5cc6b34199545134c0b8449ed2d36283, module_pygetwindow$_pygetwindow_win, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__10___init__->m_type_description == NULL);
frame_frame_pygetwindow$_pygetwindow_win$$$function__10___init__ = cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__10___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pygetwindow$_pygetwindow_win$$$function__10___init__);
assert(Py_REFCNT(frame_frame_pygetwindow$_pygetwindow_win$$$function__10___init__) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(par_hWnd);
tmp_ass_attr_value_1 = par_hWnd;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__hWnd, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_pygetwindow$_pygetwindow_win$$$function__10___init__->m_frame.f_lineno = 179;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__setupRectProperties);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pygetwindow$_pygetwindow_win$$$function__10___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pygetwindow$_pygetwindow_win$$$function__10___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pygetwindow$_pygetwindow_win$$$function__10___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pygetwindow$_pygetwindow_win$$$function__10___init__,
    type_description_1,
    par_self,
    par_hWnd
);


// Release cached frame if used for exception.
if (frame_frame_pygetwindow$_pygetwindow_win$$$function__10___init__ == cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__10___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__10___init__);
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__10___init__ = NULL;
}

assertFrameObject(frame_frame_pygetwindow$_pygetwindow_win$$$function__10___init__);

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
CHECK_OBJECT(par_hWnd);
Py_DECREF(par_hWnd);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_hWnd);
Py_DECREF(par_hWnd);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__11__getWindowRect(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_rect = NULL;
PyObject *var_result = NULL;
struct Nuitka_FrameObject *frame_frame_pygetwindow$_pygetwindow_win$$$function__11__getWindowRect;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__11__getWindowRect = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__11__getWindowRect)) {
    Py_XDECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__11__getWindowRect);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__11__getWindowRect == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__11__getWindowRect = MAKE_FUNCTION_FRAME(tstate, code_objects_36f85e5f822011a4fc125e2495a8e4d9, module_pygetwindow$_pygetwindow_win, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__11__getWindowRect->m_type_description == NULL);
frame_frame_pygetwindow$_pygetwindow_win$$$function__11__getWindowRect = cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__11__getWindowRect;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pygetwindow$_pygetwindow_win$$$function__11__getWindowRect);
assert(Py_REFCNT(frame_frame_pygetwindow$_pygetwindow_win$$$function__11__getWindowRect) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_pygetwindow$_pygetwindow_win$RECT(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RECT);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 194;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__11__getWindowRect->m_frame.f_lineno = 194;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_rect;
    var_rect = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_3;
tmp_expression_value_3 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_3 == NULL));
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_windll);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_GetWindowRect);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__hWnd);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 195;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_called_instance_1 == NULL));
CHECK_OBJECT(var_rect);
tmp_args_element_value_3 = var_rect;
frame_frame_pygetwindow$_pygetwindow_win$$$function__11__getWindowRect->m_frame.f_lineno = 195;
tmp_args_element_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_byref, tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 195;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__11__getWindowRect->m_frame.f_lineno = 195;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_result;
    var_result = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_result);
tmp_cmp_expr_left_1 = var_result;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "ooo";
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
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_8;
tmp_called_value_3 = module_var_accessor_pygetwindow$_pygetwindow_win$Rect(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Rect);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 197;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_rect);
tmp_expression_value_5 = var_rect;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_left);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_rect);
tmp_expression_value_6 = var_rect;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_top);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 197;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_rect);
tmp_expression_value_7 = var_rect;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_right);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_5);

exception_lineno = 197;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_rect);
tmp_expression_value_8 = var_rect;
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_bottom);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 197;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__11__getWindowRect->m_frame.f_lineno = 197;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_1;
tmp_called_value_4 = module_var_accessor_pygetwindow$_pygetwindow_win$_raiseWithLastError(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__raiseWithLastError);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 199;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__11__getWindowRect->m_frame.f_lineno = 199;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pygetwindow$_pygetwindow_win$$$function__11__getWindowRect, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pygetwindow$_pygetwindow_win$$$function__11__getWindowRect->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pygetwindow$_pygetwindow_win$$$function__11__getWindowRect, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pygetwindow$_pygetwindow_win$$$function__11__getWindowRect,
    type_description_1,
    par_self,
    var_rect,
    var_result
);


// Release cached frame if used for exception.
if (frame_frame_pygetwindow$_pygetwindow_win$$$function__11__getWindowRect == cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__11__getWindowRect) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__11__getWindowRect);
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__11__getWindowRect = NULL;
}

assertFrameObject(frame_frame_pygetwindow$_pygetwindow_win$$$function__11__getWindowRect);

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
CHECK_OBJECT(var_rect);
CHECK_OBJECT(var_rect);
Py_DECREF(var_rect);
var_rect = NULL;
CHECK_OBJECT(var_result);
CHECK_OBJECT(var_result);
Py_DECREF(var_result);
var_result = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_rect);
var_rect = NULL;
Py_XDECREF(var_result);
var_result = NULL;
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


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__12___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pygetwindow$_pygetwindow_win$$$function__12___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__12___repr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__12___repr__)) {
    Py_XDECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__12___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__12___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__12___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_9b67d7de7b0a26789b40513661104373, module_pygetwindow$_pygetwindow_win, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__12___repr__->m_type_description == NULL);
frame_frame_pygetwindow$_pygetwindow_win$$$function__12___repr__ = cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__12___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pygetwindow$_pygetwindow_win$$$function__12___repr__);
assert(Py_REFCNT(frame_frame_pygetwindow$_pygetwindow_win$$$function__12___repr__) == 2);

// Framed code:
{
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_901749523d23be756c6e9667e6073003;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_3;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__hWnd);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pygetwindow$_pygetwindow_win$$$function__12___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pygetwindow$_pygetwindow_win$$$function__12___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pygetwindow$_pygetwindow_win$$$function__12___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pygetwindow$_pygetwindow_win$$$function__12___repr__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pygetwindow$_pygetwindow_win$$$function__12___repr__ == cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__12___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__12___repr__);
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__12___repr__ = NULL;
}

assertFrameObject(frame_frame_pygetwindow$_pygetwindow_win$$$function__12___repr__);

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


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__13___eq__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pygetwindow$_pygetwindow_win$$$function__13___eq__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__13___eq__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__13___eq__)) {
    Py_XDECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__13___eq__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__13___eq__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__13___eq__ = MAKE_FUNCTION_FRAME(tstate, code_objects_3008b7ae7d1a936f505f4d03ee5a25cc, module_pygetwindow$_pygetwindow_win, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__13___eq__->m_type_description == NULL);
frame_frame_pygetwindow$_pygetwindow_win$$$function__13___eq__ = cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__13___eq__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pygetwindow$_pygetwindow_win$$$function__13___eq__);
assert(Py_REFCNT(frame_frame_pygetwindow$_pygetwindow_win$$$function__13___eq__) == 2);

// Framed code:
{
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_other);
tmp_isinstance_inst_1 = par_other;
tmp_isinstance_cls_1 = module_var_accessor_pygetwindow$_pygetwindow_win$Win32Window(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Win32Window);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 207;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__hWnd);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_expression_value_2 = par_other;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__hWnd);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 207;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_and_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
Py_INCREF(tmp_and_left_value_1);
tmp_return_value = tmp_and_left_value_1;
and_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pygetwindow$_pygetwindow_win$$$function__13___eq__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pygetwindow$_pygetwindow_win$$$function__13___eq__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pygetwindow$_pygetwindow_win$$$function__13___eq__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pygetwindow$_pygetwindow_win$$$function__13___eq__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_pygetwindow$_pygetwindow_win$$$function__13___eq__ == cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__13___eq__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__13___eq__);
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__13___eq__ = NULL;
}

assertFrameObject(frame_frame_pygetwindow$_pygetwindow_win$$$function__13___eq__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__14_close(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_result = NULL;
struct Nuitka_FrameObject *frame_frame_pygetwindow$_pygetwindow_win$$$function__14_close;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__14_close = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__14_close)) {
    Py_XDECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__14_close);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__14_close == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__14_close = MAKE_FUNCTION_FRAME(tstate, code_objects_37cdc53ae3adbcf018c3c5f563ae15fd, module_pygetwindow$_pygetwindow_win, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__14_close->m_type_description == NULL);
frame_frame_pygetwindow$_pygetwindow_win$$$function__14_close = cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__14_close;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pygetwindow$_pygetwindow_win$$$function__14_close);
assert(Py_REFCNT(frame_frame_pygetwindow$_pygetwindow_win$$$function__14_close) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_3 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_3 == NULL));
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_windll);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_PostMessageA);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__hWnd);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 215;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_pygetwindow$_pygetwindow_win$WM_CLOSE(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WM_CLOSE);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 215;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = const_int_0;
tmp_args_element_value_4 = const_int_0;
frame_frame_pygetwindow$_pygetwindow_win$$$function__14_close->m_frame.f_lineno = 215;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_result;
    var_result = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_result);
tmp_cmp_expr_left_1 = var_result;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "oo";
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
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
tmp_called_value_2 = module_var_accessor_pygetwindow$_pygetwindow_win$_raiseWithLastError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__raiseWithLastError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 217;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__14_close->m_frame.f_lineno = 217;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pygetwindow$_pygetwindow_win$$$function__14_close, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pygetwindow$_pygetwindow_win$$$function__14_close->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pygetwindow$_pygetwindow_win$$$function__14_close, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pygetwindow$_pygetwindow_win$$$function__14_close,
    type_description_1,
    par_self,
    var_result
);


// Release cached frame if used for exception.
if (frame_frame_pygetwindow$_pygetwindow_win$$$function__14_close == cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__14_close) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__14_close);
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__14_close = NULL;
}

assertFrameObject(frame_frame_pygetwindow$_pygetwindow_win$$$function__14_close);

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
CHECK_OBJECT(var_result);
CHECK_OBJECT(var_result);
Py_DECREF(var_result);
var_result = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_result);
var_result = NULL;
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


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__15_minimize(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pygetwindow$_pygetwindow_win$$$function__15_minimize;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__15_minimize = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__15_minimize)) {
    Py_XDECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__15_minimize);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__15_minimize == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__15_minimize = MAKE_FUNCTION_FRAME(tstate, code_objects_b3da12247d659b6e3f04858affa5ba17, module_pygetwindow$_pygetwindow_win, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__15_minimize->m_type_description == NULL);
frame_frame_pygetwindow$_pygetwindow_win$$$function__15_minimize = cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__15_minimize;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pygetwindow$_pygetwindow_win$$$function__15_minimize);
assert(Py_REFCNT(frame_frame_pygetwindow$_pygetwindow_win$$$function__15_minimize) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
tmp_expression_value_3 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_3 == NULL));
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_windll);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ShowWindow);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__hWnd);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 222;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_pygetwindow$_pygetwindow_win$SW_MINIMIZE(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SW_MINIMIZE);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 222;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__15_minimize->m_frame.f_lineno = 222;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pygetwindow$_pygetwindow_win$$$function__15_minimize, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pygetwindow$_pygetwindow_win$$$function__15_minimize->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pygetwindow$_pygetwindow_win$$$function__15_minimize, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pygetwindow$_pygetwindow_win$$$function__15_minimize,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pygetwindow$_pygetwindow_win$$$function__15_minimize == cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__15_minimize) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__15_minimize);
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__15_minimize = NULL;
}

assertFrameObject(frame_frame_pygetwindow$_pygetwindow_win$$$function__15_minimize);

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


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__16_maximize(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pygetwindow$_pygetwindow_win$$$function__16_maximize;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__16_maximize = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__16_maximize)) {
    Py_XDECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__16_maximize);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__16_maximize == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__16_maximize = MAKE_FUNCTION_FRAME(tstate, code_objects_562b141a01a06838f703110d97414e4f, module_pygetwindow$_pygetwindow_win, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__16_maximize->m_type_description == NULL);
frame_frame_pygetwindow$_pygetwindow_win$$$function__16_maximize = cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__16_maximize;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pygetwindow$_pygetwindow_win$$$function__16_maximize);
assert(Py_REFCNT(frame_frame_pygetwindow$_pygetwindow_win$$$function__16_maximize) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
tmp_expression_value_3 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_3 == NULL));
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_windll);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ShowWindow);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__hWnd);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 227;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_pygetwindow$_pygetwindow_win$SW_MAXIMIZE(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SW_MAXIMIZE);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 227;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__16_maximize->m_frame.f_lineno = 227;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pygetwindow$_pygetwindow_win$$$function__16_maximize, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pygetwindow$_pygetwindow_win$$$function__16_maximize->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pygetwindow$_pygetwindow_win$$$function__16_maximize, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pygetwindow$_pygetwindow_win$$$function__16_maximize,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pygetwindow$_pygetwindow_win$$$function__16_maximize == cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__16_maximize) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__16_maximize);
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__16_maximize = NULL;
}

assertFrameObject(frame_frame_pygetwindow$_pygetwindow_win$$$function__16_maximize);

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


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__17_restore(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pygetwindow$_pygetwindow_win$$$function__17_restore;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__17_restore = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__17_restore)) {
    Py_XDECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__17_restore);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__17_restore == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__17_restore = MAKE_FUNCTION_FRAME(tstate, code_objects_54b7040cc01386908aea7e237c74abc0, module_pygetwindow$_pygetwindow_win, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__17_restore->m_type_description == NULL);
frame_frame_pygetwindow$_pygetwindow_win$$$function__17_restore = cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__17_restore;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pygetwindow$_pygetwindow_win$$$function__17_restore);
assert(Py_REFCNT(frame_frame_pygetwindow$_pygetwindow_win$$$function__17_restore) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
tmp_expression_value_3 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_3 == NULL));
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_windll);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ShowWindow);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__hWnd);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 232;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_pygetwindow$_pygetwindow_win$SW_RESTORE(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SW_RESTORE);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 232;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__17_restore->m_frame.f_lineno = 232;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pygetwindow$_pygetwindow_win$$$function__17_restore, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pygetwindow$_pygetwindow_win$$$function__17_restore->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pygetwindow$_pygetwindow_win$$$function__17_restore, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pygetwindow$_pygetwindow_win$$$function__17_restore,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pygetwindow$_pygetwindow_win$$$function__17_restore == cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__17_restore) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__17_restore);
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__17_restore = NULL;
}

assertFrameObject(frame_frame_pygetwindow$_pygetwindow_win$$$function__17_restore);

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


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__18_show(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pygetwindow$_pygetwindow_win$$$function__18_show;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__18_show = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__18_show)) {
    Py_XDECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__18_show);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__18_show == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__18_show = MAKE_FUNCTION_FRAME(tstate, code_objects_97b71e62f47d42a1deaf92ca7b322549, module_pygetwindow$_pygetwindow_win, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__18_show->m_type_description == NULL);
frame_frame_pygetwindow$_pygetwindow_win$$$function__18_show = cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__18_show;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pygetwindow$_pygetwindow_win$$$function__18_show);
assert(Py_REFCNT(frame_frame_pygetwindow$_pygetwindow_win$$$function__18_show) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
tmp_expression_value_3 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_3 == NULL));
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_windll);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ShowWindow);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__hWnd);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 236;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_pygetwindow$_pygetwindow_win$SW_SHOW(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SW_SHOW);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 236;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__18_show->m_frame.f_lineno = 236;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pygetwindow$_pygetwindow_win$$$function__18_show, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pygetwindow$_pygetwindow_win$$$function__18_show->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pygetwindow$_pygetwindow_win$$$function__18_show, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pygetwindow$_pygetwindow_win$$$function__18_show,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pygetwindow$_pygetwindow_win$$$function__18_show == cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__18_show) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__18_show);
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__18_show = NULL;
}

assertFrameObject(frame_frame_pygetwindow$_pygetwindow_win$$$function__18_show);

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


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__19_hide(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pygetwindow$_pygetwindow_win$$$function__19_hide;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__19_hide = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__19_hide)) {
    Py_XDECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__19_hide);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__19_hide == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__19_hide = MAKE_FUNCTION_FRAME(tstate, code_objects_068fc8e341a64247208f1e5383229ede, module_pygetwindow$_pygetwindow_win, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__19_hide->m_type_description == NULL);
frame_frame_pygetwindow$_pygetwindow_win$$$function__19_hide = cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__19_hide;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pygetwindow$_pygetwindow_win$$$function__19_hide);
assert(Py_REFCNT(frame_frame_pygetwindow$_pygetwindow_win$$$function__19_hide) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
tmp_expression_value_3 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_3 == NULL));
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_windll);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ShowWindow);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__hWnd);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 240;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_pygetwindow$_pygetwindow_win$SW_HIDE(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SW_HIDE);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 240;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__19_hide->m_frame.f_lineno = 240;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pygetwindow$_pygetwindow_win$$$function__19_hide, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pygetwindow$_pygetwindow_win$$$function__19_hide->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pygetwindow$_pygetwindow_win$$$function__19_hide, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pygetwindow$_pygetwindow_win$$$function__19_hide,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pygetwindow$_pygetwindow_win$$$function__19_hide == cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__19_hide) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__19_hide);
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__19_hide = NULL;
}

assertFrameObject(frame_frame_pygetwindow$_pygetwindow_win$$$function__19_hide);

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


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__20_activate(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_result = NULL;
struct Nuitka_FrameObject *frame_frame_pygetwindow$_pygetwindow_win$$$function__20_activate;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__20_activate = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__20_activate)) {
    Py_XDECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__20_activate);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__20_activate == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__20_activate = MAKE_FUNCTION_FRAME(tstate, code_objects_757b5bec9f98d5222811eddc60079816, module_pygetwindow$_pygetwindow_win, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__20_activate->m_type_description == NULL);
frame_frame_pygetwindow$_pygetwindow_win$$$function__20_activate = cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__20_activate;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pygetwindow$_pygetwindow_win$$$function__20_activate);
assert(Py_REFCNT(frame_frame_pygetwindow$_pygetwindow_win$$$function__20_activate) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
tmp_expression_value_3 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_3 == NULL));
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_windll);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_SetForegroundWindow);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__hWnd);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 244;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__20_activate->m_frame.f_lineno = 244;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_result;
    var_result = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_result);
tmp_cmp_expr_left_1 = var_result;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "oo";
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
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
tmp_called_value_2 = module_var_accessor_pygetwindow$_pygetwindow_win$_raiseWithLastError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__raiseWithLastError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 246;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__20_activate->m_frame.f_lineno = 246;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pygetwindow$_pygetwindow_win$$$function__20_activate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pygetwindow$_pygetwindow_win$$$function__20_activate->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pygetwindow$_pygetwindow_win$$$function__20_activate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pygetwindow$_pygetwindow_win$$$function__20_activate,
    type_description_1,
    par_self,
    var_result
);


// Release cached frame if used for exception.
if (frame_frame_pygetwindow$_pygetwindow_win$$$function__20_activate == cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__20_activate) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__20_activate);
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__20_activate = NULL;
}

assertFrameObject(frame_frame_pygetwindow$_pygetwindow_win$$$function__20_activate);

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
CHECK_OBJECT(var_result);
CHECK_OBJECT(var_result);
Py_DECREF(var_result);
var_result = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_result);
var_result = NULL;
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


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__21_resize(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_widthOffset = python_pars[1];
PyObject *par_heightOffset = python_pars[2];
PyObject *var_result = NULL;
struct Nuitka_FrameObject *frame_frame_pygetwindow$_pygetwindow_win$$$function__21_resize;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__21_resize = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__21_resize)) {
    Py_XDECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__21_resize);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__21_resize == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__21_resize = MAKE_FUNCTION_FRAME(tstate, code_objects_821c4d31ea10fac37138cd3d3e907413, module_pygetwindow$_pygetwindow_win, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__21_resize->m_type_description == NULL);
frame_frame_pygetwindow$_pygetwindow_win$$$function__21_resize = cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__21_resize;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pygetwindow$_pygetwindow_win$$$function__21_resize);
assert(Py_REFCNT(frame_frame_pygetwindow$_pygetwindow_win$$$function__21_resize) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_5;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_6;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_7;
tmp_expression_value_3 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_3 == NULL));
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_windll);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_SetWindowPos);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__hWnd);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 251;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_pygetwindow$_pygetwindow_win$HWND_TOP(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HWND_TOP);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 251;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_left);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 251;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_top);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 251;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_width);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 251;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_widthOffset);
tmp_add_expr_right_1 = par_widthOffset;
tmp_args_element_value_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 251;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_add_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_height);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_5);

exception_lineno = 251;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_heightOffset);
tmp_add_expr_right_2 = par_heightOffset;
tmp_args_element_value_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_5);

exception_lineno = 251;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = const_int_0;
frame_frame_pygetwindow$_pygetwindow_win$$$function__21_resize->m_frame.f_lineno = 251;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_result;
    var_result = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_result);
tmp_cmp_expr_left_1 = var_result;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
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
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
tmp_called_value_2 = module_var_accessor_pygetwindow$_pygetwindow_win$_raiseWithLastError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__raiseWithLastError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 253;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__21_resize->m_frame.f_lineno = 253;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pygetwindow$_pygetwindow_win$$$function__21_resize, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pygetwindow$_pygetwindow_win$$$function__21_resize->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pygetwindow$_pygetwindow_win$$$function__21_resize, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pygetwindow$_pygetwindow_win$$$function__21_resize,
    type_description_1,
    par_self,
    par_widthOffset,
    par_heightOffset,
    var_result
);


// Release cached frame if used for exception.
if (frame_frame_pygetwindow$_pygetwindow_win$$$function__21_resize == cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__21_resize) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__21_resize);
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__21_resize = NULL;
}

assertFrameObject(frame_frame_pygetwindow$_pygetwindow_win$$$function__21_resize);

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
CHECK_OBJECT(var_result);
CHECK_OBJECT(var_result);
Py_DECREF(var_result);
var_result = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_result);
var_result = NULL;
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
CHECK_OBJECT(par_widthOffset);
Py_DECREF(par_widthOffset);
CHECK_OBJECT(par_heightOffset);
Py_DECREF(par_heightOffset);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_widthOffset);
Py_DECREF(par_widthOffset);
CHECK_OBJECT(par_heightOffset);
Py_DECREF(par_heightOffset);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__22_resizeTo(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_newWidth = python_pars[1];
PyObject *par_newHeight = python_pars[2];
PyObject *var_result = NULL;
struct Nuitka_FrameObject *frame_frame_pygetwindow$_pygetwindow_win$$$function__22_resizeTo;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__22_resizeTo = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__22_resizeTo)) {
    Py_XDECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__22_resizeTo);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__22_resizeTo == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__22_resizeTo = MAKE_FUNCTION_FRAME(tstate, code_objects_8a73e6769399e4d07772728593d4aed4, module_pygetwindow$_pygetwindow_win, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__22_resizeTo->m_type_description == NULL);
frame_frame_pygetwindow$_pygetwindow_win$$$function__22_resizeTo = cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__22_resizeTo;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pygetwindow$_pygetwindow_win$$$function__22_resizeTo);
assert(Py_REFCNT(frame_frame_pygetwindow$_pygetwindow_win$$$function__22_resizeTo) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_expression_value_3 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_3 == NULL));
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_windll);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_SetWindowPos);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__hWnd);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 258;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_pygetwindow$_pygetwindow_win$HWND_TOP(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HWND_TOP);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 258;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_left);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 258;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_top);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 258;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_newWidth);
tmp_args_element_value_5 = par_newWidth;
CHECK_OBJECT(par_newHeight);
tmp_args_element_value_6 = par_newHeight;
tmp_args_element_value_7 = const_int_0;
frame_frame_pygetwindow$_pygetwindow_win$$$function__22_resizeTo->m_frame.f_lineno = 258;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_result;
    var_result = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_result);
tmp_cmp_expr_left_1 = var_result;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
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
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
tmp_called_value_2 = module_var_accessor_pygetwindow$_pygetwindow_win$_raiseWithLastError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__raiseWithLastError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 260;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__22_resizeTo->m_frame.f_lineno = 260;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pygetwindow$_pygetwindow_win$$$function__22_resizeTo, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pygetwindow$_pygetwindow_win$$$function__22_resizeTo->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pygetwindow$_pygetwindow_win$$$function__22_resizeTo, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pygetwindow$_pygetwindow_win$$$function__22_resizeTo,
    type_description_1,
    par_self,
    par_newWidth,
    par_newHeight,
    var_result
);


// Release cached frame if used for exception.
if (frame_frame_pygetwindow$_pygetwindow_win$$$function__22_resizeTo == cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__22_resizeTo) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__22_resizeTo);
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__22_resizeTo = NULL;
}

assertFrameObject(frame_frame_pygetwindow$_pygetwindow_win$$$function__22_resizeTo);

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
CHECK_OBJECT(var_result);
CHECK_OBJECT(var_result);
Py_DECREF(var_result);
var_result = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_result);
var_result = NULL;
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
CHECK_OBJECT(par_newWidth);
Py_DECREF(par_newWidth);
CHECK_OBJECT(par_newHeight);
Py_DECREF(par_newHeight);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_newWidth);
Py_DECREF(par_newWidth);
CHECK_OBJECT(par_newHeight);
Py_DECREF(par_newHeight);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__23_move(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_xOffset = python_pars[1];
PyObject *par_yOffset = python_pars[2];
PyObject *var_result = NULL;
struct Nuitka_FrameObject *frame_frame_pygetwindow$_pygetwindow_win$$$function__23_move;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__23_move = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__23_move)) {
    Py_XDECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__23_move);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__23_move == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__23_move = MAKE_FUNCTION_FRAME(tstate, code_objects_8d5d47a6c9110d1de89639a72253b1aa, module_pygetwindow$_pygetwindow_win, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__23_move->m_type_description == NULL);
frame_frame_pygetwindow$_pygetwindow_win$$$function__23_move = cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__23_move;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pygetwindow$_pygetwindow_win$$$function__23_move);
assert(Py_REFCNT(frame_frame_pygetwindow$_pygetwindow_win$$$function__23_move) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_7;
tmp_expression_value_3 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_3 == NULL));
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_windll);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_SetWindowPos);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__hWnd);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 265;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_pygetwindow$_pygetwindow_win$HWND_TOP(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HWND_TOP);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 265;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_left);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 265;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_xOffset);
tmp_add_expr_right_1 = par_xOffset;
tmp_args_element_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 265;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_add_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_top);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 265;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_yOffset);
tmp_add_expr_right_2 = par_yOffset;
tmp_args_element_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 265;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_width);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 265;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_height);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_5);

exception_lineno = 265;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = const_int_0;
frame_frame_pygetwindow$_pygetwindow_win$$$function__23_move->m_frame.f_lineno = 265;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_result;
    var_result = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_result);
tmp_cmp_expr_left_1 = var_result;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
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
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
tmp_called_value_2 = module_var_accessor_pygetwindow$_pygetwindow_win$_raiseWithLastError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__raiseWithLastError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 267;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__23_move->m_frame.f_lineno = 267;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pygetwindow$_pygetwindow_win$$$function__23_move, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pygetwindow$_pygetwindow_win$$$function__23_move->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pygetwindow$_pygetwindow_win$$$function__23_move, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pygetwindow$_pygetwindow_win$$$function__23_move,
    type_description_1,
    par_self,
    par_xOffset,
    par_yOffset,
    var_result
);


// Release cached frame if used for exception.
if (frame_frame_pygetwindow$_pygetwindow_win$$$function__23_move == cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__23_move) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__23_move);
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__23_move = NULL;
}

assertFrameObject(frame_frame_pygetwindow$_pygetwindow_win$$$function__23_move);

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
CHECK_OBJECT(var_result);
CHECK_OBJECT(var_result);
Py_DECREF(var_result);
var_result = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_result);
var_result = NULL;
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
CHECK_OBJECT(par_xOffset);
Py_DECREF(par_xOffset);
CHECK_OBJECT(par_yOffset);
Py_DECREF(par_yOffset);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_xOffset);
Py_DECREF(par_xOffset);
CHECK_OBJECT(par_yOffset);
Py_DECREF(par_yOffset);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__24_moveTo(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_newLeft = python_pars[1];
PyObject *par_newTop = python_pars[2];
PyObject *var_result = NULL;
struct Nuitka_FrameObject *frame_frame_pygetwindow$_pygetwindow_win$$$function__24_moveTo;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__24_moveTo = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__24_moveTo)) {
    Py_XDECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__24_moveTo);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__24_moveTo == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__24_moveTo = MAKE_FUNCTION_FRAME(tstate, code_objects_f65c4fba1f33ebc91b8a6e92857b0334, module_pygetwindow$_pygetwindow_win, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__24_moveTo->m_type_description == NULL);
frame_frame_pygetwindow$_pygetwindow_win$$$function__24_moveTo = cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__24_moveTo;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pygetwindow$_pygetwindow_win$$$function__24_moveTo);
assert(Py_REFCNT(frame_frame_pygetwindow$_pygetwindow_win$$$function__24_moveTo) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_7;
tmp_expression_value_3 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_3 == NULL));
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_windll);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_SetWindowPos);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__hWnd);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 272;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_pygetwindow$_pygetwindow_win$HWND_TOP(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HWND_TOP);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 272;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_newLeft);
tmp_args_element_value_3 = par_newLeft;
CHECK_OBJECT(par_newTop);
tmp_args_element_value_4 = par_newTop;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_width);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 272;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_height);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_5);

exception_lineno = 272;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = const_int_0;
frame_frame_pygetwindow$_pygetwindow_win$$$function__24_moveTo->m_frame.f_lineno = 272;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_result;
    var_result = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_result);
tmp_cmp_expr_left_1 = var_result;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
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
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
tmp_called_value_2 = module_var_accessor_pygetwindow$_pygetwindow_win$_raiseWithLastError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__raiseWithLastError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 274;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__24_moveTo->m_frame.f_lineno = 274;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pygetwindow$_pygetwindow_win$$$function__24_moveTo, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pygetwindow$_pygetwindow_win$$$function__24_moveTo->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pygetwindow$_pygetwindow_win$$$function__24_moveTo, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pygetwindow$_pygetwindow_win$$$function__24_moveTo,
    type_description_1,
    par_self,
    par_newLeft,
    par_newTop,
    var_result
);


// Release cached frame if used for exception.
if (frame_frame_pygetwindow$_pygetwindow_win$$$function__24_moveTo == cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__24_moveTo) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__24_moveTo);
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__24_moveTo = NULL;
}

assertFrameObject(frame_frame_pygetwindow$_pygetwindow_win$$$function__24_moveTo);

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
CHECK_OBJECT(var_result);
CHECK_OBJECT(var_result);
Py_DECREF(var_result);
var_result = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_result);
var_result = NULL;
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
CHECK_OBJECT(par_newLeft);
Py_DECREF(par_newLeft);
CHECK_OBJECT(par_newTop);
Py_DECREF(par_newTop);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_newLeft);
Py_DECREF(par_newLeft);
CHECK_OBJECT(par_newTop);
Py_DECREF(par_newTop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__25_isMinimized(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pygetwindow$_pygetwindow_win$$$function__25_isMinimized;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__25_isMinimized = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__25_isMinimized)) {
    Py_XDECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__25_isMinimized);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__25_isMinimized == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__25_isMinimized = MAKE_FUNCTION_FRAME(tstate, code_objects_d6d967f303045fbb123045f3406e988d, module_pygetwindow$_pygetwindow_win, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__25_isMinimized->m_type_description == NULL);
frame_frame_pygetwindow$_pygetwindow_win$$$function__25_isMinimized = cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__25_isMinimized;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pygetwindow$_pygetwindow_win$$$function__25_isMinimized);
assert(Py_REFCNT(frame_frame_pygetwindow$_pygetwindow_win$$$function__25_isMinimized) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
tmp_expression_value_3 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_3 == NULL));
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_windll);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_IsIconic);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__hWnd);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 280;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__25_isMinimized->m_frame.f_lineno = 280;
tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = const_int_0;
tmp_return_value = RICH_COMPARE_NE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pygetwindow$_pygetwindow_win$$$function__25_isMinimized, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pygetwindow$_pygetwindow_win$$$function__25_isMinimized->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pygetwindow$_pygetwindow_win$$$function__25_isMinimized, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pygetwindow$_pygetwindow_win$$$function__25_isMinimized,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pygetwindow$_pygetwindow_win$$$function__25_isMinimized == cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__25_isMinimized) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__25_isMinimized);
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__25_isMinimized = NULL;
}

assertFrameObject(frame_frame_pygetwindow$_pygetwindow_win$$$function__25_isMinimized);

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


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__26_isMaximized(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pygetwindow$_pygetwindow_win$$$function__26_isMaximized;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__26_isMaximized = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__26_isMaximized)) {
    Py_XDECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__26_isMaximized);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__26_isMaximized == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__26_isMaximized = MAKE_FUNCTION_FRAME(tstate, code_objects_4f291b15f704ee398c98cdb881140eea, module_pygetwindow$_pygetwindow_win, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__26_isMaximized->m_type_description == NULL);
frame_frame_pygetwindow$_pygetwindow_win$$$function__26_isMaximized = cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__26_isMaximized;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pygetwindow$_pygetwindow_win$$$function__26_isMaximized);
assert(Py_REFCNT(frame_frame_pygetwindow$_pygetwindow_win$$$function__26_isMaximized) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
tmp_expression_value_3 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_3 == NULL));
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_windll);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_IsZoomed);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__hWnd);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 285;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__26_isMaximized->m_frame.f_lineno = 285;
tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = const_int_0;
tmp_return_value = RICH_COMPARE_NE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pygetwindow$_pygetwindow_win$$$function__26_isMaximized, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pygetwindow$_pygetwindow_win$$$function__26_isMaximized->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pygetwindow$_pygetwindow_win$$$function__26_isMaximized, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pygetwindow$_pygetwindow_win$$$function__26_isMaximized,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pygetwindow$_pygetwindow_win$$$function__26_isMaximized == cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__26_isMaximized) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__26_isMaximized);
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__26_isMaximized = NULL;
}

assertFrameObject(frame_frame_pygetwindow$_pygetwindow_win$$$function__26_isMaximized);

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


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__27_isActive(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pygetwindow$_pygetwindow_win$$$function__27_isActive;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__27_isActive = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__27_isActive)) {
    Py_XDECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__27_isActive);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__27_isActive == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__27_isActive = MAKE_FUNCTION_FRAME(tstate, code_objects_6af9fe2ff91a93525f715af436a0cf63, module_pygetwindow$_pygetwindow_win, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__27_isActive->m_type_description == NULL);
frame_frame_pygetwindow$_pygetwindow_win$$$function__27_isActive = cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__27_isActive;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pygetwindow$_pygetwindow_win$$$function__27_isActive);
assert(Py_REFCNT(frame_frame_pygetwindow$_pygetwindow_win$$$function__27_isActive) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_pygetwindow$_pygetwindow_win$getActiveWindow(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getActiveWindow);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 290;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__27_isActive->m_frame.f_lineno = 290;
tmp_cmp_expr_left_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_cmp_expr_right_1 = par_self;
tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pygetwindow$_pygetwindow_win$$$function__27_isActive, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pygetwindow$_pygetwindow_win$$$function__27_isActive->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pygetwindow$_pygetwindow_win$$$function__27_isActive, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pygetwindow$_pygetwindow_win$$$function__27_isActive,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pygetwindow$_pygetwindow_win$$$function__27_isActive == cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__27_isActive) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__27_isActive);
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__27_isActive = NULL;
}

assertFrameObject(frame_frame_pygetwindow$_pygetwindow_win$$$function__27_isActive);

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


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__28_title(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_textLenInCharacters = NULL;
PyObject *var_stringBuffer = NULL;
struct Nuitka_FrameObject *frame_frame_pygetwindow$_pygetwindow_win$$$function__28_title;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__28_title = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__28_title)) {
    Py_XDECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__28_title);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__28_title == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__28_title = MAKE_FUNCTION_FRAME(tstate, code_objects_7dddfd9b00692b3b5efd140ab1d8d3ab, module_pygetwindow$_pygetwindow_win, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__28_title->m_type_description == NULL);
frame_frame_pygetwindow$_pygetwindow_win$$$function__28_title = cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__28_title;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pygetwindow$_pygetwindow_win$$$function__28_title);
assert(Py_REFCNT(frame_frame_pygetwindow$_pygetwindow_win$$$function__28_title) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
tmp_expression_value_3 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_3 == NULL));
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_windll);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_GetWindowTextLengthW);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__hWnd);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 295;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__28_title->m_frame.f_lineno = 295;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_textLenInCharacters;
    var_textLenInCharacters = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
tmp_expression_value_5 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_5 == NULL));
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_create_unicode_buffer);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_textLenInCharacters);
tmp_add_expr_left_1 = var_textLenInCharacters;
tmp_add_expr_right_1 = const_int_pos_1;
tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 296;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__28_title->m_frame.f_lineno = 296;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_stringBuffer;
    var_stringBuffer = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
tmp_expression_value_8 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_8 == NULL));
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_windll);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_GetWindowTextW);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__hWnd);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 297;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_stringBuffer);
tmp_args_element_value_4 = var_stringBuffer;
CHECK_OBJECT(var_textLenInCharacters);
tmp_add_expr_left_2 = var_textLenInCharacters;
tmp_add_expr_right_2 = const_int_pos_1;
tmp_args_element_value_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 297;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__28_title->m_frame.f_lineno = 297;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_expression_value_10;
CHECK_OBJECT(var_stringBuffer);
tmp_expression_value_10 = var_stringBuffer;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_value);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pygetwindow$_pygetwindow_win$$$function__28_title, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pygetwindow$_pygetwindow_win$$$function__28_title->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pygetwindow$_pygetwindow_win$$$function__28_title, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pygetwindow$_pygetwindow_win$$$function__28_title,
    type_description_1,
    par_self,
    var_textLenInCharacters,
    var_stringBuffer
);


// Release cached frame if used for exception.
if (frame_frame_pygetwindow$_pygetwindow_win$$$function__28_title == cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__28_title) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__28_title);
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__28_title = NULL;
}

assertFrameObject(frame_frame_pygetwindow$_pygetwindow_win$$$function__28_title);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_textLenInCharacters);
CHECK_OBJECT(var_textLenInCharacters);
Py_DECREF(var_textLenInCharacters);
var_textLenInCharacters = NULL;
CHECK_OBJECT(var_stringBuffer);
CHECK_OBJECT(var_stringBuffer);
Py_DECREF(var_stringBuffer);
var_stringBuffer = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_textLenInCharacters);
var_textLenInCharacters = NULL;
Py_XDECREF(var_stringBuffer);
var_stringBuffer = NULL;
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


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__29_visible(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pygetwindow$_pygetwindow_win$$$function__29_visible;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__29_visible = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__29_visible)) {
    Py_XDECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__29_visible);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__29_visible == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__29_visible = MAKE_FUNCTION_FRAME(tstate, code_objects_a91f6d786c8494a0df7aef0e8496d159, module_pygetwindow$_pygetwindow_win, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__29_visible->m_type_description == NULL);
frame_frame_pygetwindow$_pygetwindow_win$$$function__29_visible = cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__29_visible;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pygetwindow$_pygetwindow_win$$$function__29_visible);
assert(Py_REFCNT(frame_frame_pygetwindow$_pygetwindow_win$$$function__29_visible) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_pygetwindow$_pygetwindow_win$isWindowVisible(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_isWindowVisible);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 305;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__hWnd);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__29_visible->m_frame.f_lineno = 305;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pygetwindow$_pygetwindow_win$$$function__29_visible, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pygetwindow$_pygetwindow_win$$$function__29_visible->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pygetwindow$_pygetwindow_win$$$function__29_visible, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pygetwindow$_pygetwindow_win$$$function__29_visible,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pygetwindow$_pygetwindow_win$$$function__29_visible == cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__29_visible) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__29_visible);
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__29_visible = NULL;
}

assertFrameObject(frame_frame_pygetwindow$_pygetwindow_win$$$function__29_visible);

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


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__30_cursor(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_cursor = NULL;
struct Nuitka_FrameObject *frame_frame_pygetwindow$_pygetwindow_win$$$function__30_cursor;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__30_cursor = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__30_cursor)) {
    Py_XDECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__30_cursor);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__30_cursor == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__30_cursor = MAKE_FUNCTION_FRAME(tstate, code_objects_84b48ed9e0b282382f58990144aa9650, module_pygetwindow$_pygetwindow_win, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__30_cursor->m_type_description == NULL);
frame_frame_pygetwindow$_pygetwindow_win$$$function__30_cursor = cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__30_cursor;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pygetwindow$_pygetwindow_win$$$function__30_cursor);
assert(Py_REFCNT(frame_frame_pygetwindow$_pygetwindow_win$$$function__30_cursor) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_pygetwindow$_pygetwindow_win$POINT(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_POINT);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 316;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__30_cursor->m_frame.f_lineno = 316;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
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
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_3 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_3 == NULL));
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_windll);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_GetCursorPos);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_called_instance_1 == NULL));
CHECK_OBJECT(var_cursor);
tmp_args_element_value_2 = var_cursor;
frame_frame_pygetwindow$_pygetwindow_win$$$function__30_cursor->m_frame.f_lineno = 317;
tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_byref, tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 317;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__30_cursor->m_frame.f_lineno = 317;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_expression_value_5;
tmp_called_value_3 = module_var_accessor_pygetwindow$_pygetwindow_win$Point(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Point);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 318;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_cursor);
tmp_expression_value_4 = var_cursor;
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_x);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_cursor);
tmp_expression_value_5 = var_cursor;
tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_y);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 318;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__30_cursor->m_frame.f_lineno = 318;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_str_plain_x_str_plain_y_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pygetwindow$_pygetwindow_win$$$function__30_cursor, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pygetwindow$_pygetwindow_win$$$function__30_cursor->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pygetwindow$_pygetwindow_win$$$function__30_cursor, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pygetwindow$_pygetwindow_win$$$function__30_cursor,
    type_description_1,
    var_cursor
);


// Release cached frame if used for exception.
if (frame_frame_pygetwindow$_pygetwindow_win$$$function__30_cursor == cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__30_cursor) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__30_cursor);
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__30_cursor = NULL;
}

assertFrameObject(frame_frame_pygetwindow$_pygetwindow_win$$$function__30_cursor);

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


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__31_resolution(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_pygetwindow$_pygetwindow_win$$$function__31_resolution;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__31_resolution = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__31_resolution)) {
    Py_XDECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__31_resolution);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__31_resolution == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__31_resolution = MAKE_FUNCTION_FRAME(tstate, code_objects_2a41cefbad8dc02c2d907320869afe2c, module_pygetwindow$_pygetwindow_win, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__31_resolution->m_type_description == NULL);
frame_frame_pygetwindow$_pygetwindow_win$$$function__31_resolution = cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__31_resolution;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pygetwindow$_pygetwindow_win$$$function__31_resolution);
assert(Py_REFCNT(frame_frame_pygetwindow$_pygetwindow_win$$$function__31_resolution) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
tmp_called_value_1 = module_var_accessor_pygetwindow$_pygetwindow_win$Size(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Size);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 327;

    goto frame_exception_exit_1;
}
tmp_expression_value_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_2 == NULL));
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_windll);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__31_resolution->m_frame.f_lineno = 327;
tmp_kw_call_value_0_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_GetSystemMetrics,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto frame_exception_exit_1;
}
tmp_expression_value_4 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_4 == NULL));
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_windll);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 327;

    goto frame_exception_exit_1;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 327;

    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__31_resolution->m_frame.f_lineno = 327;
tmp_kw_call_value_1_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_GetSystemMetrics,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_1_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 327;

    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win$$$function__31_resolution->m_frame.f_lineno = 327;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_width_str_plain_height_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_pygetwindow$_pygetwindow_win$$$function__31_resolution, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pygetwindow$_pygetwindow_win$$$function__31_resolution->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pygetwindow$_pygetwindow_win$$$function__31_resolution, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pygetwindow$_pygetwindow_win$$$function__31_resolution,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_pygetwindow$_pygetwindow_win$$$function__31_resolution == cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__31_resolution) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__31_resolution);
    cache_frame_frame_pygetwindow$_pygetwindow_win$$$function__31_resolution = NULL;
}

assertFrameObject(frame_frame_pygetwindow$_pygetwindow_win$$$function__31_resolution);

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



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__10___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__10___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ffcc55b07d45ca7cd9bcba35e6747155,
#endif
        code_objects_5cc6b34199545134c0b8449ed2d36283,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__11__getWindowRect(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__11__getWindowRect,
        mod_consts.const_str_plain__getWindowRect,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1ef1ebdcf62f0bda5b9c45d411610ef6,
#endif
        code_objects_36f85e5f822011a4fc125e2495a8e4d9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts.const_str_digest_6192dfd13ab83f583193a710794ce796,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__12___repr__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__12___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6a501f0ab9b0a5ae998b2d9377920220,
#endif
        code_objects_9b67d7de7b0a26789b40513661104373,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__13___eq__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__13___eq__,
        mod_consts.const_str_plain___eq__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_bb42c3414b1c71102c4d2811cefca583,
#endif
        code_objects_3008b7ae7d1a936f505f4d03ee5a25cc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__14_close(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__14_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1ad20944f64700c3bbe5e1775b64718c,
#endif
        code_objects_37cdc53ae3adbcf018c3c5f563ae15fd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts.const_str_digest_24c52ffbd16785c159377738d3ba47c9,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__15_minimize(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__15_minimize,
        mod_consts.const_str_plain_minimize,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_769f42585dcde3885c0722adb3cba398,
#endif
        code_objects_b3da12247d659b6e3f04858affa5ba17,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts.const_str_digest_2347950359e50bb585b0d7babecbf024,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__16_maximize(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__16_maximize,
        mod_consts.const_str_plain_maximize,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1fa11f5f717ed8a8051d7be477396d17,
#endif
        code_objects_562b141a01a06838f703110d97414e4f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts.const_str_digest_a28d9e0ac5f91719f703deb6e0e0fcf6,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__17_restore(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__17_restore,
        mod_consts.const_str_plain_restore,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_070ad4bb55c211c719adac77b833f576,
#endif
        code_objects_54b7040cc01386908aea7e237c74abc0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts.const_str_digest_141ccf651bf778bc6787af9c47f23e1f,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__18_show(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__18_show,
        mod_consts.const_str_plain_show,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_604005b13371455c696a768302d4e016,
#endif
        code_objects_97b71e62f47d42a1deaf92ca7b322549,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts.const_str_digest_c5294f7eb5967a23dde47a2d32a2416d,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__19_hide(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__19_hide,
        mod_consts.const_str_plain_hide,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6b8c083c888a05564df8c14abe519101,
#endif
        code_objects_068fc8e341a64247208f1e5383229ede,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts.const_str_digest_afd4370183ce6c4fb289bf732bd20df6,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles,
        mod_consts.const_str_plain__getAllTitles,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1a4d381996abac61846a43f5c9a83c44,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles$$$function__1_foreach_window(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles$$$function__1_foreach_window,
        mod_consts.const_str_plain_foreach_window,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_30d666cd744e8cdbcd5910f85e4a4bd4,
#endif
        code_objects_a945d81ec8ae0455d6ccd9b97cfd3dd8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        NULL,
        closure,
        1
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__20_activate(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__20_activate,
        mod_consts.const_str_plain_activate,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_49b1ed9be2d6002965f4e8ae7169764f,
#endif
        code_objects_757b5bec9f98d5222811eddc60079816,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts.const_str_digest_30ebf2e745290c3a8aaa2eb972e64850,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__21_resize(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__21_resize,
        mod_consts.const_str_plain_resize,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_24313cb4f884f6879d35d6bad647ebb7,
#endif
        code_objects_821c4d31ea10fac37138cd3d3e907413,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts.const_str_digest_b780765a76de9b11db29a7a00f3a69d0,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__22_resizeTo(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__22_resizeTo,
        mod_consts.const_str_plain_resizeTo,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_426ebaa52290918ea89ce64a92671ce7,
#endif
        code_objects_8a73e6769399e4d07772728593d4aed4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts.const_str_digest_d52131e9b9ea154df4b2cb2c18c92faa,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__23_move(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__23_move,
        mod_consts.const_str_plain_move,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f3af80468b391e32ab7b1246882eeff3,
#endif
        code_objects_8d5d47a6c9110d1de89639a72253b1aa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts.const_str_digest_b698657005bf7ee0ac8dab377c504ff2,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__24_moveTo(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__24_moveTo,
        mod_consts.const_str_plain_moveTo,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b63a4a971b3eaf53b84c680af8c4cb70,
#endif
        code_objects_f65c4fba1f33ebc91b8a6e92857b0334,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts.const_str_digest_49d03aed15d9494f2b6e71b63caa167b,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__25_isMinimized(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__25_isMinimized,
        mod_consts.const_str_plain_isMinimized,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a6b961e65626bc6503abfeba864d8415,
#endif
        code_objects_d6d967f303045fbb123045f3406e988d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts.const_str_digest_92bff2f447afdea35933ceccc107f36e,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__26_isMaximized(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__26_isMaximized,
        mod_consts.const_str_plain_isMaximized,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7e364981da5b76d9ca074cc82558e1cf,
#endif
        code_objects_4f291b15f704ee398c98cdb881140eea,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts.const_str_digest_bbb474f7c20ec4f75d1d03154738d3cc,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__27_isActive(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__27_isActive,
        mod_consts.const_str_plain_isActive,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a6ffd92d024f2c266bc7ae66efe4f133,
#endif
        code_objects_6af9fe2ff91a93525f715af436a0cf63,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts.const_str_digest_6f09f303e6817cd06b336b083f09ee38,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__28_title(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__28_title,
        mod_consts.const_str_plain_title,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2c941aae51fae6289882a26cb4eb112c,
#endif
        code_objects_7dddfd9b00692b3b5efd140ab1d8d3ab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts.const_str_digest_262a77c342046ca08690443d03637adb,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__29_visible(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__29_visible,
        mod_consts.const_str_plain_visible,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e6f27490dd81b1fa228891f37db50da9,
#endif
        code_objects_a91f6d786c8494a0df7aef0e8496d159,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts.const_str_digest_fc389ecfdbefb680ff030d4824789842,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__2__formatMessage(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__2__formatMessage,
        mod_consts.const_str_plain__formatMessage,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_bb9cb4934b1c9233cf8e20bff5bcac1d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts.const_str_digest_d054d1307a0934653407ba0ca90276f4,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__30_cursor(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__30_cursor,
        mod_consts.const_str_plain_cursor,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_84b48ed9e0b282382f58990144aa9650,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts.const_str_digest_cb5342b4d635afe5eb38c242c55784b1,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__31_resolution(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__31_resolution,
        mod_consts.const_str_plain_resolution,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2a41cefbad8dc02c2d907320869afe2c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts.const_str_digest_647ff2d34ac837eb32fa798e5dfec2ce,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__3__raiseWithLastError(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__3__raiseWithLastError,
        mod_consts.const_str_plain__raiseWithLastError,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_38d304e74a4e2d4e642f218211fd4abb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts.const_str_digest_e88ed2149ff8ff12d18869af92b77f92,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__4_getActiveWindow(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__4_getActiveWindow,
        mod_consts.const_str_plain_getActiveWindow,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ab6267bd7f14488140ff444f3bcdbd84,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts.const_str_digest_1d022ee69c59d664987345ba5272e87f,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle,
        mod_consts.const_str_plain_getActiveWindowTitle,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_34ae38e9d8b9c923298a64f5a520ff65,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts.const_str_digest_ca0cc6f21737ddbc955a7ab3f655a511,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle$$$function__1_foreach_window(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle$$$function__1_foreach_window,
        mod_consts.const_str_plain_foreach_window,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6df562fe377e056528a1f6b835a23c58,
#endif
        code_objects_78991e5fddcdbf1df909f210f253ae83,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        NULL,
        closure,
        1
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__6_getWindowsAt(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__6_getWindowsAt,
        mod_consts.const_str_plain_getWindowsAt,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1e6d8b40a3392aedf0f161c1c12f533f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts.const_str_digest_83fe9b59a0af00ad913a9113f3688dae,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__7_getWindowsWithTitle(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__7_getWindowsWithTitle,
        mod_consts.const_str_plain_getWindowsWithTitle,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_221be0a68337f2e3cb69b7c2d4a62a4a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts.const_str_digest_6aff297347b5944a236a55f06bf6064d,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__8_getAllTitles(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__8_getAllTitles,
        mod_consts.const_str_plain_getAllTitles,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_303f01770203c768b4877c56a1579fb9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts.const_str_digest_a90c0625b9a52987c5b5d5af83a4798b,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows,
        mod_consts.const_str_plain_getAllWindows,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e1fa28bf34e3af1624efb6aaefeb3a07,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts.const_str_digest_8628dc4ad1f0bf447da586b18167552f,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows$$$function__1_foreach_window(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows$$$function__1_foreach_window,
        mod_consts.const_str_plain_foreach_window,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6723533f6ebd6a198c650522a9934109,
#endif
        code_objects_94f1ee4cf7c3a79f4374666d28ce57fb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        NULL,
        closure,
        1
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

static function_impl_code const function_table_pygetwindow$_pygetwindow_win[] = {
impl_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles$$$function__1_foreach_window,
impl_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle$$$function__1_foreach_window,
impl_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows$$$function__1_foreach_window,
impl_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles,
impl_pygetwindow$_pygetwindow_win$$$function__2__formatMessage,
impl_pygetwindow$_pygetwindow_win$$$function__3__raiseWithLastError,
impl_pygetwindow$_pygetwindow_win$$$function__4_getActiveWindow,
impl_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle,
impl_pygetwindow$_pygetwindow_win$$$function__6_getWindowsAt,
impl_pygetwindow$_pygetwindow_win$$$function__7_getWindowsWithTitle,
impl_pygetwindow$_pygetwindow_win$$$function__8_getAllTitles,
impl_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows,
impl_pygetwindow$_pygetwindow_win$$$function__10___init__,
impl_pygetwindow$_pygetwindow_win$$$function__11__getWindowRect,
impl_pygetwindow$_pygetwindow_win$$$function__12___repr__,
impl_pygetwindow$_pygetwindow_win$$$function__13___eq__,
impl_pygetwindow$_pygetwindow_win$$$function__14_close,
impl_pygetwindow$_pygetwindow_win$$$function__15_minimize,
impl_pygetwindow$_pygetwindow_win$$$function__16_maximize,
impl_pygetwindow$_pygetwindow_win$$$function__17_restore,
impl_pygetwindow$_pygetwindow_win$$$function__18_show,
impl_pygetwindow$_pygetwindow_win$$$function__19_hide,
impl_pygetwindow$_pygetwindow_win$$$function__20_activate,
impl_pygetwindow$_pygetwindow_win$$$function__21_resize,
impl_pygetwindow$_pygetwindow_win$$$function__22_resizeTo,
impl_pygetwindow$_pygetwindow_win$$$function__23_move,
impl_pygetwindow$_pygetwindow_win$$$function__24_moveTo,
impl_pygetwindow$_pygetwindow_win$$$function__25_isMinimized,
impl_pygetwindow$_pygetwindow_win$$$function__26_isMaximized,
impl_pygetwindow$_pygetwindow_win$$$function__27_isActive,
impl_pygetwindow$_pygetwindow_win$$$function__28_title,
impl_pygetwindow$_pygetwindow_win$$$function__29_visible,
impl_pygetwindow$_pygetwindow_win$$$function__30_cursor,
impl_pygetwindow$_pygetwindow_win$$$function__31_resolution,
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

    return Nuitka_Function_GetFunctionState(function, function_table_pygetwindow$_pygetwindow_win);
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
        module_pygetwindow$_pygetwindow_win,
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
        function_table_pygetwindow$_pygetwindow_win,
        sizeof(function_table_pygetwindow$_pygetwindow_win) / sizeof(function_impl_code)
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
static char const *module_full_name = "pygetwindow._pygetwindow_win";
#endif

// Internal entry point for module code.
PyObject *module_code_pygetwindow$_pygetwindow_win(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pygetwindow$_pygetwindow_win");

    // Store the module for future use.
    module_pygetwindow$_pygetwindow_win = module;

    moduledict_pygetwindow$_pygetwindow_win = MODULE_DICT(module_pygetwindow$_pygetwindow_win);

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
        PRINT_STRING("pygetwindow$_pygetwindow_win: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("pygetwindow$_pygetwindow_win: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pygetwindow$_pygetwindow_win: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "pygetwindow._pygetwindow_win" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initpygetwindow$_pygetwindow_win\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_pygetwindow$_pygetwindow_win,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pygetwindow$_pygetwindow_win,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pygetwindow$_pygetwindow_win,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pygetwindow$_pygetwindow_win,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pygetwindow$_pygetwindow_win,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pygetwindow$_pygetwindow_win);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pygetwindow$_pygetwindow_win);
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

        UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
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
struct Nuitka_FrameObject *frame_frame_pygetwindow$_pygetwindow_win;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_pygetwindow$_pygetwindow_win$$$class__1_POINT_32 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_pygetwindow$_pygetwindow_win$$$class__1_POINT_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *locals_pygetwindow$_pygetwindow_win$$$class__2_RECT_43 = NULL;
struct Nuitka_FrameObject *frame_frame_pygetwindow$_pygetwindow_win$$$class__2_RECT_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
PyObject *locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176 = NULL;
struct Nuitka_FrameObject *frame_frame_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_pygetwindow$_pygetwindow_win = MAKE_MODULE_FRAME(code_objects_73158b271121826e9add765d8456d6db, module_pygetwindow$_pygetwindow_win);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pygetwindow$_pygetwindow_win);
assert(Py_REFCNT(frame_frame_pygetwindow$_pygetwindow_win) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_pygetwindow$_pygetwindow_win$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_pygetwindow$_pygetwindow_win$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_CTYPES();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_ctypes, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_wintypes, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_pygetwindow;
tmp_globals_arg_value_1 = (PyObject *)moduledict_pygetwindow$_pygetwindow_win;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_e7cb26ed194d532e592c5c8d9a799d04_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_pygetwindow$_pygetwindow_win->m_frame.f_lineno = 4;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

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
        (PyObject *)moduledict_pygetwindow$_pygetwindow_win,
        mod_consts.const_str_plain_PyGetWindowException,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_PyGetWindowException);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_PyGetWindowException, tmp_assign_source_8);
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
        (PyObject *)moduledict_pygetwindow$_pygetwindow_win,
        mod_consts.const_str_plain_pointInRect,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_pointInRect);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_pointInRect, tmp_assign_source_9);
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
        (PyObject *)moduledict_pygetwindow$_pygetwindow_win,
        mod_consts.const_str_plain_BaseWindow,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_BaseWindow);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseWindow, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_pygetwindow$_pygetwindow_win,
        mod_consts.const_str_plain_Rect,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Rect);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_Rect, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_pygetwindow$_pygetwindow_win,
        mod_consts.const_str_plain_Point,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Point);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_Point, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_pygetwindow$_pygetwindow_win,
        mod_consts.const_str_plain_Size,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Size);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_Size, tmp_assign_source_13);
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
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = const_int_0;
UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_NULL, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = mod_consts.const_int_pos_256;
UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_FORMAT_MESSAGE_ALLOCATE_BUFFER, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = mod_consts.const_int_pos_4096;
UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_FORMAT_MESSAGE_FROM_SYSTEM, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = mod_consts.const_int_pos_512;
UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_FORMAT_MESSAGE_IGNORE_INSERTS, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = mod_consts.const_int_pos_6;
UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_SW_MINIMIZE, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = mod_consts.const_int_pos_3;
UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_SW_MAXIMIZE, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = const_int_0;
UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_SW_HIDE, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = mod_consts.const_int_pos_5;
UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_SW_SHOW, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = mod_consts.const_int_pos_9;
UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_SW_RESTORE, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = const_int_0;
UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_HWND_TOP, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = mod_consts.const_int_pos_16;
UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_WM_CLOSE, tmp_assign_source_24);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_25;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_1 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_Structure);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_2;
}
tmp_assign_source_25 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_25, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_25;
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_26 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_26;
}
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_27;
}
{
PyObject *tmp_assign_source_28;
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


exception_lineno = 32;

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


exception_lineno = 32;

    goto try_except_handler_2;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_28 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_28;
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


exception_lineno = 32;

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
PyObject *tmp_assign_source_29;
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


exception_lineno = 32;

    goto try_except_handler_2;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_POINT;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_pygetwindow$_pygetwindow_win->m_frame.f_lineno = 32;
tmp_assign_source_29 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_29;
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


exception_lineno = 32;

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
PyObject *tmp_name_value_2;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_2 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_2, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

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


exception_lineno = 32;

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


exception_lineno = 32;

    goto try_except_handler_2;
}
frame_frame_pygetwindow$_pygetwindow_win->m_frame.f_lineno = 32;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 32;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_30;
}
branch_end_1:;
{
PyObject *tmp_assign_source_31;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_pygetwindow$_pygetwindow_win$$$class__1_POINT_32 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_2776695a09cf567af3dff8b9993d40ac;
tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__1_POINT_32, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain_POINT;
tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__1_POINT_32, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_32;
tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__1_POINT_32, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_4;
}
frame_frame_pygetwindow$_pygetwindow_win$$$class__1_POINT_2 = MAKE_CLASS_FRAME(tstate, code_objects_14a5c96364be4db7686bb7acb2a99f1e, module_pygetwindow$_pygetwindow_win, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pygetwindow$_pygetwindow_win$$$class__1_POINT_2, locals_pygetwindow$_pygetwindow_win$$$class__1_POINT_32);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pygetwindow$_pygetwindow_win$$$class__1_POINT_2);
assert(Py_REFCNT(frame_frame_pygetwindow$_pygetwindow_win$$$class__1_POINT_2) == 2);

// Framed code:
{
PyObject *tmp_list_element_1;
PyObject *tmp_tuple_element_4;
tmp_tuple_element_4 = mod_consts.const_str_plain_x;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_8;
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_4);
tmp_expression_value_8 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_8 == NULL));
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_c_long);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
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
tmp_dictset_value = MAKE_LIST_EMPTY(tstate, 2);
{
PyObject *tmp_tuple_element_5;
PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_1);
tmp_tuple_element_5 = mod_consts.const_str_plain_y;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_9;
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_5);
tmp_expression_value_9 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_9 == NULL));
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_c_long);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
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
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_2;
// Finished with no exception for list_build:
list_build_no_exception_1:;
tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__1_POINT_32, mod_consts.const_str_plain__fields_, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pygetwindow$_pygetwindow_win$$$class__1_POINT_2);


goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pygetwindow$_pygetwindow_win$$$class__1_POINT_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pygetwindow$_pygetwindow_win$$$class__1_POINT_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pygetwindow$_pygetwindow_win$$$class__1_POINT_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pygetwindow$_pygetwindow_win$$$class__1_POINT_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_pygetwindow$_pygetwindow_win$$$class__1_POINT_2);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pygetwindow$_pygetwindow_win$$$class__1_POINT_2);


// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_4;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__1_POINT_32, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

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


exception_lineno = 32;

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
tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__1_POINT_32, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_4;
}
branch_no_3:;
{
PyObject *tmp_assign_source_32;
PyObject *tmp_metaclass_value_2;
PyObject *tmp_name_value_3;
PyObject *tmp_bases_value_2;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_metaclass_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_3 = mod_consts.const_str_plain_POINT;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_1__bases;
tmp_dict_arg_value_1 = locals_pygetwindow$_pygetwindow_win$$$class__1_POINT_32;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_3, tmp_bases_value_2, tmp_dict_arg_value_1);
tmp_assign_source_32 = CALL_FUNCTION(tstate, tmp_metaclass_value_2, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_4;
}
{
    PyObject *old = outline_0_var___class__;
    outline_0_var___class__ = tmp_assign_source_32;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_31 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_31);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_pygetwindow$_pygetwindow_win$$$class__1_POINT_32);
locals_pygetwindow$_pygetwindow_win$$$class__1_POINT_32 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pygetwindow$_pygetwindow_win$$$class__1_POINT_32);
locals_pygetwindow$_pygetwindow_win$$$class__1_POINT_32 = NULL;
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
exception_lineno = 32;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_POINT, tmp_assign_source_31);
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
PyObject *tmp_assign_source_33;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
tmp_expression_value_12 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_12 == NULL));
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_windll);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
tmp_assign_source_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_EnumWindows);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_enumWindows, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_17;
tmp_expression_value_13 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_13 == NULL));
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_WINFUNCTYPE);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
tmp_expression_value_14 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_14 == NULL));
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_c_bool);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 37;

    goto frame_exception_exit_1;
}
tmp_expression_value_15 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_15 == NULL));
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_c_int);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 37;

    goto frame_exception_exit_1;
}
tmp_expression_value_16 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_16 == NULL));
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_POINTER);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 37;

    goto frame_exception_exit_1;
}
tmp_expression_value_17 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_17 == NULL));
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_c_int);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_called_value_3);

exception_lineno = 37;

    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win->m_frame.f_lineno = 37;
tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 37;

    goto frame_exception_exit_1;
}
frame_frame_pygetwindow$_pygetwindow_win->m_frame.f_lineno = 37;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_enumWindowsProc, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_expression_value_18;
PyObject *tmp_expression_value_19;
PyObject *tmp_expression_value_20;
tmp_expression_value_20 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_20 == NULL));
tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_windll);
if (tmp_expression_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
tmp_assign_source_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_GetWindowTextW);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_getWindowText, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_expression_value_21;
PyObject *tmp_expression_value_22;
PyObject *tmp_expression_value_23;
tmp_expression_value_23 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_23 == NULL));
tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_windll);
if (tmp_expression_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_22);
Py_DECREF(tmp_expression_value_22);
if (tmp_expression_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
tmp_assign_source_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_GetWindowTextLengthW);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_getWindowTextLength, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_expression_value_24;
PyObject *tmp_expression_value_25;
PyObject *tmp_expression_value_26;
tmp_expression_value_26 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_26 == NULL));
tmp_expression_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_windll);
if (tmp_expression_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_user32);
CHECK_OBJECT(tmp_expression_value_25);
Py_DECREF(tmp_expression_value_25);
if (tmp_expression_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
tmp_assign_source_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_IsWindowVisible);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_isWindowVisible, tmp_assign_source_37);
}
{
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_38;
PyObject *tmp_tuple_element_6;
PyObject *tmp_expression_value_27;
tmp_expression_value_27 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_27 == NULL));
tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_Structure);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_5;
}
tmp_assign_source_38 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_38, 0, tmp_tuple_element_6);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_38;
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_39 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_39;
}
{
PyObject *tmp_assign_source_40;
tmp_assign_source_40 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_40;
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_28;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

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
tmp_expression_value_28 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_28, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_5;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_5;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_41 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_41;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_29;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_29 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_29, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

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
PyObject *tmp_assign_source_42;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_30;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_7;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_30 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_5;
}
tmp_tuple_element_7 = mod_consts.const_str_plain_RECT;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_7 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_pygetwindow$_pygetwindow_win->m_frame.f_lineno = 43;
tmp_assign_source_42 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_42;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_31;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_31 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_31, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

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
PyObject *tmp_tuple_element_8;
PyObject *tmp_expression_value_32;
PyObject *tmp_name_value_4;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_32 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_4 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_8 = BUILTIN_GETATTR(tstate, tmp_expression_value_32, tmp_name_value_4, tmp_default_value_2);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_5;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_33;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_33 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_33 == NULL));
tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_33);
Py_DECREF(tmp_expression_value_33);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_8);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_5;
}
frame_frame_pygetwindow$_pygetwindow_win->m_frame.f_lineno = 43;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 43;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_5;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_43;
tmp_assign_source_43 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_43;
}
branch_end_4:;
{
PyObject *tmp_assign_source_44;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_pygetwindow$_pygetwindow_win$$$class__2_RECT_43 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_2776695a09cf567af3dff8b9993d40ac;
tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__2_RECT_43, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_digest_a383f92da1028744707e2d78dbf204e4;
tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__2_RECT_43, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_plain_RECT;
tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__2_RECT_43, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_int_pos_43;
tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__2_RECT_43, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_7;
}
frame_frame_pygetwindow$_pygetwindow_win$$$class__2_RECT_3 = MAKE_CLASS_FRAME(tstate, code_objects_2e4f0c20847868ac4a61116484fc1797, module_pygetwindow$_pygetwindow_win, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pygetwindow$_pygetwindow_win$$$class__2_RECT_3, locals_pygetwindow$_pygetwindow_win$$$class__2_RECT_43);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pygetwindow$_pygetwindow_win$$$class__2_RECT_3);
assert(Py_REFCNT(frame_frame_pygetwindow$_pygetwindow_win$$$class__2_RECT_3) == 2);

// Framed code:
{
PyObject *tmp_list_element_2;
PyObject *tmp_tuple_element_9;
tmp_tuple_element_9 = mod_consts.const_str_plain_left;
tmp_list_element_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_34;
PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_9);
tmp_expression_value_34 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_34 == NULL));
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_c_long);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_2 = "o";
    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_9);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_list_element_2);
goto frame_exception_exit_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_dictset_value = MAKE_LIST_EMPTY(tstate, 4);
{
PyObject *tmp_tuple_element_10;
PyObject *tmp_tuple_element_11;
PyObject *tmp_tuple_element_12;
PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_2);
tmp_tuple_element_10 = mod_consts.const_str_plain_top;
tmp_list_element_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_35;
PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_10);
tmp_expression_value_35 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_35 == NULL));
tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_c_long);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_2 = "o";
    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_10);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_list_element_2);
goto list_build_exception_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_2);
tmp_tuple_element_11 = mod_consts.const_str_plain_right;
tmp_list_element_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_36;
PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_11);
tmp_expression_value_36 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_36 == NULL));
tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain_c_long);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_2 = "o";
    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_11);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_list_element_2);
goto list_build_exception_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_2);
tmp_tuple_element_12 = mod_consts.const_str_plain_bottom;
tmp_list_element_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_37;
PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_12);
tmp_expression_value_37 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_37 == NULL));
tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain_c_long);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_2 = "o";
    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_12);
}
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_list_element_2);
goto list_build_exception_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_2);
}
goto list_build_no_exception_2;
// Exception handling pass through code for list_build:
list_build_exception_2:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_3;
// Finished with no exception for list_build:
list_build_no_exception_2:;
tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__2_RECT_43, mod_consts.const_str_plain__fields_, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pygetwindow$_pygetwindow_win$$$class__2_RECT_3);


goto frame_no_exception_2;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pygetwindow$_pygetwindow_win$$$class__2_RECT_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pygetwindow$_pygetwindow_win$$$class__2_RECT_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pygetwindow$_pygetwindow_win$$$class__2_RECT_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pygetwindow$_pygetwindow_win$$$class__2_RECT_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_pygetwindow$_pygetwindow_win$$$class__2_RECT_3);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pygetwindow$_pygetwindow_win$$$class__2_RECT_3);


// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_7;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__2_RECT_43, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

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


exception_lineno = 43;

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
tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__2_RECT_43, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_7;
}
branch_no_6:;
{
PyObject *tmp_assign_source_45;
PyObject *tmp_metaclass_value_4;
PyObject *tmp_name_value_5;
PyObject *tmp_bases_value_4;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_class_decl_dict_value_2;
PyObject *tmp_metaclass_args_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_metaclass_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_5 = mod_consts.const_str_plain_RECT;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_2__bases;
tmp_dict_arg_value_2 = locals_pygetwindow$_pygetwindow_win$$$class__2_RECT_43;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_decl_dict_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_metaclass_args_2 = MAKE_TUPLE3(tstate, tmp_name_value_5, tmp_bases_value_4, tmp_dict_arg_value_2);
tmp_assign_source_45 = CALL_FUNCTION(tstate, tmp_metaclass_value_4, tmp_metaclass_args_2, tmp_class_decl_dict_value_2);
CHECK_OBJECT(tmp_metaclass_args_2);
Py_DECREF(tmp_metaclass_args_2);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_7;
}
{
    PyObject *old = outline_1_var___class__;
    outline_1_var___class__ = tmp_assign_source_45;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_44 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_44);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_pygetwindow$_pygetwindow_win$$$class__2_RECT_43);
locals_pygetwindow$_pygetwindow_win$$$class__2_RECT_43 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pygetwindow$_pygetwindow_win$$$class__2_RECT_43);
locals_pygetwindow$_pygetwindow_win$$$class__2_RECT_43 = NULL;
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
exception_lineno = 43;
goto try_except_handler_5;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_RECT, tmp_assign_source_44);
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
PyObject *tmp_assign_source_46;

tmp_assign_source_46 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles(tstate);

UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain__getAllTitles, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;

tmp_assign_source_47 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__2__formatMessage(tstate);

UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain__formatMessage, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;

tmp_assign_source_48 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__3__raiseWithLastError(tstate);

UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain__raiseWithLastError, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;

tmp_assign_source_49 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__4_getActiveWindow(tstate);

UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_getActiveWindow, tmp_assign_source_49);
}
{
PyObject *tmp_assign_source_50;

tmp_assign_source_50 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle(tstate);

UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_getActiveWindowTitle, tmp_assign_source_50);
}
{
PyObject *tmp_assign_source_51;

tmp_assign_source_51 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__6_getWindowsAt(tstate);

UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_getWindowsAt, tmp_assign_source_51);
}
{
PyObject *tmp_assign_source_52;

tmp_assign_source_52 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__7_getWindowsWithTitle(tstate);

UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_getWindowsWithTitle, tmp_assign_source_52);
}
{
PyObject *tmp_assign_source_53;

tmp_assign_source_53 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__8_getAllTitles(tstate);

UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_getAllTitles, tmp_assign_source_53);
}
{
PyObject *tmp_assign_source_54;

tmp_assign_source_54 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows(tstate);

UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_getAllWindows, tmp_assign_source_54);
}
{
PyObject *tmp_outline_return_value_3;
// Tried code:
{
PyObject *tmp_assign_source_55;
PyObject *tmp_tuple_element_13;
tmp_tuple_element_13 = module_var_accessor_pygetwindow$_pygetwindow_win$BaseWindow(tstate);
if (unlikely(tmp_tuple_element_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseWindow);
}

if (tmp_tuple_element_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 176;

    goto try_except_handler_8;
}
tmp_assign_source_55 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_55, 0, tmp_tuple_element_13);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_55;
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_56 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_56;
}
{
PyObject *tmp_assign_source_57;
tmp_assign_source_57 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_57;
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_metaclass_value_5;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_38;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

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
tmp_expression_value_38 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_38, tmp_subscript_value_3, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_8;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_8;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_5);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_5 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_58 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
CHECK_OBJECT(tmp_metaclass_value_5);
Py_DECREF(tmp_metaclass_value_5);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_58;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_39;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_39 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_39, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

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
PyObject *tmp_assign_source_59;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_40;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_14;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_40 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_8;
}
tmp_tuple_element_14 = mod_consts.const_str_plain_Win32Window;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_14 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_pygetwindow$_pygetwindow_win->m_frame.f_lineno = 176;
tmp_assign_source_59 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_59;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_41;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_41 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_41, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

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
PyObject *tmp_tuple_element_15;
PyObject *tmp_expression_value_42;
PyObject *tmp_name_value_6;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_42 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_6 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_15 = BUILTIN_GETATTR(tstate, tmp_expression_value_42, tmp_name_value_6, tmp_default_value_3);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_8;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_43;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_43 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_43 == NULL));
tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_43);
Py_DECREF(tmp_expression_value_43);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_15);
}
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_8;
}
frame_frame_pygetwindow$_pygetwindow_win->m_frame.f_lineno = 176;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 176;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_8;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_60;
tmp_assign_source_60 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_60;
}
branch_end_7:;
{
PyObject *tmp_assign_source_61;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_2776695a09cf567af3dff8b9993d40ac;
tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_plain_Win32Window;
tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_int_pos_176;
tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_10;
}
frame_frame_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_4 = MAKE_CLASS_FRAME(tstate, code_objects_d9d04815e355d1277b71e469b88bd865, module_pygetwindow$_pygetwindow_win, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_4, locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_4);
assert(Py_REFCNT(frame_frame_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_4) == 2);

// Framed code:

tmp_dictset_value = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__10___init__(tstate);

tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

tmp_dictset_value = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__11__getWindowRect(tstate);

tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts.const_str_plain__getWindowRect, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

tmp_dictset_value = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__12___repr__(tstate);

tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

tmp_dictset_value = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__13___eq__(tstate);

tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts.const_str_plain___eq__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

tmp_dictset_value = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__14_close(tstate);

tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, const_str_plain_close, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

tmp_dictset_value = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__15_minimize(tstate);

tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts.const_str_plain_minimize, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

tmp_dictset_value = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__16_maximize(tstate);

tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts.const_str_plain_maximize, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

tmp_dictset_value = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__17_restore(tstate);

tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts.const_str_plain_restore, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

tmp_dictset_value = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__18_show(tstate);

tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts.const_str_plain_show, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

tmp_dictset_value = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__19_hide(tstate);

tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts.const_str_plain_hide, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

tmp_dictset_value = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__20_activate(tstate);

tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts.const_str_plain_activate, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

tmp_dictset_value = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__21_resize(tstate);

tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts.const_str_plain_resize, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = PyObject_GetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts.const_str_plain_resize);

if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_resize);

exception_lineno = 254;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts.const_str_plain_resizeRel, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

tmp_dictset_value = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__22_resizeTo(tstate);

tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts.const_str_plain_resizeTo, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

tmp_dictset_value = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__23_move(tstate);

tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts.const_str_plain_move, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = PyObject_GetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts.const_str_plain_move);

if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_move);

exception_lineno = 268;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts.const_str_plain_moveRel, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

tmp_dictset_value = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__24_moveTo(tstate);

tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts.const_str_plain_moveTo, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_5;
tmp_called_value_6 = PyObject_GetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts.const_str_plain_property);

if (tmp_called_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_6 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}


tmp_args_element_value_5 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__25_isMinimized(tstate);

frame_frame_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_4->m_frame.f_lineno = 277;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts.const_str_plain_isMinimized, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_6;
tmp_called_value_7 = PyObject_GetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts.const_str_plain_property);

if (tmp_called_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_7 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}


tmp_args_element_value_6 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__26_isMaximized(tstate);

frame_frame_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_4->m_frame.f_lineno = 282;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts.const_str_plain_isMaximized, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_7;
tmp_called_value_8 = PyObject_GetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts.const_str_plain_property);

if (tmp_called_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_8 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}


tmp_args_element_value_7 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__27_isActive(tstate);

frame_frame_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_4->m_frame.f_lineno = 287;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts.const_str_plain_isActive, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_8;
tmp_called_value_9 = PyObject_GetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts.const_str_plain_property);

if (tmp_called_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_9 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}


tmp_args_element_value_8 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__28_title(tstate);

frame_frame_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_4->m_frame.f_lineno = 292;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts.const_str_plain_title, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_9;
tmp_called_value_10 = PyObject_GetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts.const_str_plain_property);

if (tmp_called_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_10 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}


tmp_args_element_value_9 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__29_visible(tstate);

frame_frame_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_4->m_frame.f_lineno = 302;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts.const_str_plain_visible, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_4);


goto frame_no_exception_3;
frame_exception_exit_4:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_4);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_4);


// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_10;
skip_nested_handling_3:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__hWnd_tuple;
tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

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


exception_lineno = 176;

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
tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_10;
}
branch_no_9:;
{
PyObject *tmp_assign_source_62;
PyObject *tmp_metaclass_value_6;
PyObject *tmp_name_value_7;
PyObject *tmp_bases_value_6;
PyObject *tmp_dict_arg_value_3;
PyObject *tmp_class_decl_dict_value_3;
PyObject *tmp_metaclass_args_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_metaclass_value_6 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_7 = mod_consts.const_str_plain_Win32Window;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_6 = tmp_class_container$class_creation_3__bases;
tmp_dict_arg_value_3 = locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_decl_dict_value_3 = tmp_class_container$class_creation_3__class_decl_dict;
tmp_metaclass_args_3 = MAKE_TUPLE3(tstate, tmp_name_value_7, tmp_bases_value_6, tmp_dict_arg_value_3);
tmp_assign_source_62 = CALL_FUNCTION(tstate, tmp_metaclass_value_6, tmp_metaclass_args_3, tmp_class_decl_dict_value_3);
CHECK_OBJECT(tmp_metaclass_args_3);
Py_DECREF(tmp_metaclass_args_3);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_10;
}
{
    PyObject *old = outline_2_var___class__;
    outline_2_var___class__ = tmp_assign_source_62;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_61 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_61);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
Py_DECREF(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176);
locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176 = NULL;
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176);
locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176 = NULL;
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
exception_lineno = 176;
goto try_except_handler_8;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_Win32Window, tmp_assign_source_61);
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_4;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pygetwindow$_pygetwindow_win, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pygetwindow$_pygetwindow_win->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pygetwindow$_pygetwindow_win, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_pygetwindow$_pygetwindow_win);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_4:;
{
PyObject *tmp_assign_source_63;

tmp_assign_source_63 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__30_cursor(tstate);

UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_cursor, tmp_assign_source_63);
}
{
PyObject *tmp_assign_source_64;

tmp_assign_source_64 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__31_resolution(tstate);

UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts.const_str_plain_resolution, tmp_assign_source_64);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pygetwindow$_pygetwindow_win", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "pygetwindow._pygetwindow_win" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_pygetwindow$_pygetwindow_win);
    return module_pygetwindow$_pygetwindow_win;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pygetwindow$_pygetwindow_win", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
