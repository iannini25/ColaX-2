/* Generated code for Python module 'pynput$_util$win32_vks'
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



/* The "module_pynput$_util$win32_vks" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pynput$_util$win32_vks;
PyDictObject *moduledict_pynput$_util$win32_vks;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_LBUTTON;
PyObject *const_int_pos_2;
PyObject *const_str_plain_RBUTTON;
PyObject *const_int_pos_3;
PyObject *const_str_plain_CANCEL;
PyObject *const_int_pos_4;
PyObject *const_str_plain_MBUTTON;
PyObject *const_int_pos_5;
PyObject *const_str_plain_XBUTTON1;
PyObject *const_int_pos_6;
PyObject *const_str_plain_XBUTTON2;
PyObject *const_int_pos_8;
PyObject *const_str_plain_BACK;
PyObject *const_int_pos_9;
PyObject *const_str_plain_TAB;
PyObject *const_int_pos_12;
PyObject *const_str_plain_CLEAR;
PyObject *const_int_pos_13;
PyObject *const_str_plain_RETURN;
PyObject *const_int_pos_16;
PyObject *const_str_plain_SHIFT;
PyObject *const_int_pos_17;
PyObject *const_str_plain_CONTROL;
PyObject *const_int_pos_18;
PyObject *const_str_plain_MENU;
PyObject *const_int_pos_19;
PyObject *const_str_plain_PAUSE;
PyObject *const_int_pos_20;
PyObject *const_str_plain_CAPITAL;
PyObject *const_int_pos_21;
PyObject *const_str_plain_KANA;
PyObject *const_str_plain_HANGEUL;
PyObject *const_str_plain_HANGUL;
PyObject *const_int_pos_23;
PyObject *const_str_plain_JUNJA;
PyObject *const_int_pos_24;
PyObject *const_str_plain_FINAL;
PyObject *const_int_pos_25;
PyObject *const_str_plain_HANJA;
PyObject *const_str_plain_KANJI;
PyObject *const_int_pos_27;
PyObject *const_str_plain_ESCAPE;
PyObject *const_int_pos_28;
PyObject *const_str_plain_CONVERT;
PyObject *const_int_pos_29;
PyObject *const_str_plain_NONCONVERT;
PyObject *const_int_pos_30;
PyObject *const_str_plain_ACCEPT;
PyObject *const_int_pos_31;
PyObject *const_str_plain_MODECHANGE;
PyObject *const_int_pos_32;
PyObject *const_str_plain_SPACE;
PyObject *const_int_pos_33;
PyObject *const_str_plain_PRIOR;
PyObject *const_int_pos_34;
PyObject *const_str_plain_NEXT;
PyObject *const_int_pos_35;
PyObject *const_str_plain_END;
PyObject *const_int_pos_36;
PyObject *const_str_plain_HOME;
PyObject *const_int_pos_37;
PyObject *const_str_plain_LEFT;
PyObject *const_int_pos_38;
PyObject *const_str_plain_UP;
PyObject *const_int_pos_39;
PyObject *const_str_plain_RIGHT;
PyObject *const_int_pos_40;
PyObject *const_str_plain_DOWN;
PyObject *const_int_pos_41;
PyObject *const_str_plain_SELECT;
PyObject *const_int_pos_42;
PyObject *const_str_plain_PRINT;
PyObject *const_int_pos_43;
PyObject *const_str_plain_EXECUTE;
PyObject *const_int_pos_44;
PyObject *const_str_plain_SNAPSHOT;
PyObject *const_int_pos_45;
PyObject *const_str_plain_INSERT;
PyObject *const_int_pos_46;
PyObject *const_str_plain_DELETE;
PyObject *const_int_pos_47;
PyObject *const_str_plain_HELP;
PyObject *const_int_pos_91;
PyObject *const_str_plain_LWIN;
PyObject *const_int_pos_92;
PyObject *const_str_plain_RWIN;
PyObject *const_int_pos_93;
PyObject *const_str_plain_APPS;
PyObject *const_int_pos_95;
PyObject *const_str_plain_SLEEP;
PyObject *const_int_pos_96;
PyObject *const_str_plain_NUMPAD0;
PyObject *const_int_pos_97;
PyObject *const_str_plain_NUMPAD1;
PyObject *const_int_pos_98;
PyObject *const_str_plain_NUMPAD2;
PyObject *const_int_pos_99;
PyObject *const_str_plain_NUMPAD3;
PyObject *const_int_pos_100;
PyObject *const_str_plain_NUMPAD4;
PyObject *const_int_pos_101;
PyObject *const_str_plain_NUMPAD5;
PyObject *const_int_pos_102;
PyObject *const_str_plain_NUMPAD6;
PyObject *const_int_pos_103;
PyObject *const_str_plain_NUMPAD7;
PyObject *const_int_pos_104;
PyObject *const_str_plain_NUMPAD8;
PyObject *const_int_pos_105;
PyObject *const_str_plain_NUMPAD9;
PyObject *const_int_pos_106;
PyObject *const_str_plain_MULTIPLY;
PyObject *const_int_pos_107;
PyObject *const_str_plain_ADD;
PyObject *const_int_pos_108;
PyObject *const_str_plain_SEPARATOR;
PyObject *const_int_pos_109;
PyObject *const_str_plain_SUBTRACT;
PyObject *const_int_pos_110;
PyObject *const_str_plain_DECIMAL;
PyObject *const_int_pos_111;
PyObject *const_str_plain_DIVIDE;
PyObject *const_int_pos_112;
PyObject *const_str_plain_F1;
PyObject *const_int_pos_113;
PyObject *const_str_plain_F2;
PyObject *const_int_pos_114;
PyObject *const_str_plain_F3;
PyObject *const_int_pos_115;
PyObject *const_str_plain_F4;
PyObject *const_int_pos_116;
PyObject *const_str_plain_F5;
PyObject *const_int_pos_117;
PyObject *const_str_plain_F6;
PyObject *const_int_pos_118;
PyObject *const_str_plain_F7;
PyObject *const_int_pos_119;
PyObject *const_str_plain_F8;
PyObject *const_int_pos_120;
PyObject *const_str_plain_F9;
PyObject *const_int_pos_121;
PyObject *const_str_plain_F10;
PyObject *const_int_pos_122;
PyObject *const_str_plain_F11;
PyObject *const_int_pos_123;
PyObject *const_str_plain_F12;
PyObject *const_int_pos_124;
PyObject *const_str_plain_F13;
PyObject *const_int_pos_125;
PyObject *const_str_plain_F14;
PyObject *const_int_pos_126;
PyObject *const_str_plain_F15;
PyObject *const_int_pos_127;
PyObject *const_str_plain_F16;
PyObject *const_int_pos_128;
PyObject *const_str_plain_F17;
PyObject *const_int_pos_129;
PyObject *const_str_plain_F18;
PyObject *const_int_pos_130;
PyObject *const_str_plain_F19;
PyObject *const_int_pos_131;
PyObject *const_str_plain_F20;
PyObject *const_int_pos_132;
PyObject *const_str_plain_F21;
PyObject *const_int_pos_133;
PyObject *const_str_plain_F22;
PyObject *const_int_pos_134;
PyObject *const_str_plain_F23;
PyObject *const_int_pos_135;
PyObject *const_str_plain_F24;
PyObject *const_int_pos_144;
PyObject *const_str_plain_NUMLOCK;
PyObject *const_int_pos_145;
PyObject *const_str_plain_SCROLL;
PyObject *const_int_pos_146;
PyObject *const_str_plain_OEM_NEC_EQUAL;
PyObject *const_str_plain_OEM_FJ_JISHO;
PyObject *const_int_pos_147;
PyObject *const_str_plain_OEM_FJ_MASSHOU;
PyObject *const_int_pos_148;
PyObject *const_str_plain_OEM_FJ_TOUROKU;
PyObject *const_int_pos_149;
PyObject *const_str_plain_OEM_FJ_LOYA;
PyObject *const_int_pos_150;
PyObject *const_str_plain_OEM_FJ_ROYA;
PyObject *const_int_pos_160;
PyObject *const_str_plain_LSHIFT;
PyObject *const_int_pos_161;
PyObject *const_str_plain_RSHIFT;
PyObject *const_int_pos_162;
PyObject *const_str_plain_LCONTROL;
PyObject *const_int_pos_163;
PyObject *const_str_plain_RCONTROL;
PyObject *const_int_pos_164;
PyObject *const_str_plain_LMENU;
PyObject *const_int_pos_165;
PyObject *const_str_plain_RMENU;
PyObject *const_int_pos_166;
PyObject *const_str_plain_BROWSER_BACK;
PyObject *const_int_pos_167;
PyObject *const_str_plain_BROWSER_FORWARD;
PyObject *const_int_pos_168;
PyObject *const_str_plain_BROWSER_REFRESH;
PyObject *const_int_pos_169;
PyObject *const_str_plain_BROWSER_STOP;
PyObject *const_int_pos_170;
PyObject *const_str_plain_BROWSER_SEARCH;
PyObject *const_int_pos_171;
PyObject *const_str_plain_BROWSER_FAVORITES;
PyObject *const_int_pos_172;
PyObject *const_str_plain_BROWSER_HOME;
PyObject *const_int_pos_173;
PyObject *const_str_plain_VOLUME_MUTE;
PyObject *const_int_pos_174;
PyObject *const_str_plain_VOLUME_DOWN;
PyObject *const_int_pos_175;
PyObject *const_str_plain_VOLUME_UP;
PyObject *const_int_pos_176;
PyObject *const_str_plain_MEDIA_NEXT_TRACK;
PyObject *const_int_pos_177;
PyObject *const_str_plain_MEDIA_PREV_TRACK;
PyObject *const_int_pos_178;
PyObject *const_str_plain_MEDIA_STOP;
PyObject *const_int_pos_179;
PyObject *const_str_plain_MEDIA_PLAY_PAUSE;
PyObject *const_int_pos_180;
PyObject *const_str_plain_LAUNCH_MAIL;
PyObject *const_int_pos_181;
PyObject *const_str_plain_LAUNCH_MEDIA_SELECT;
PyObject *const_int_pos_182;
PyObject *const_str_plain_LAUNCH_APP1;
PyObject *const_int_pos_183;
PyObject *const_str_plain_LAUNCH_APP2;
PyObject *const_int_pos_186;
PyObject *const_str_plain_OEM_1;
PyObject *const_int_pos_187;
PyObject *const_str_plain_OEM_PLUS;
PyObject *const_int_pos_188;
PyObject *const_str_plain_OEM_COMMA;
PyObject *const_int_pos_189;
PyObject *const_str_plain_OEM_MINUS;
PyObject *const_int_pos_190;
PyObject *const_str_plain_OEM_PERIOD;
PyObject *const_int_pos_191;
PyObject *const_str_plain_OEM_2;
PyObject *const_int_pos_192;
PyObject *const_str_plain_OEM_3;
PyObject *const_int_pos_219;
PyObject *const_str_plain_OEM_4;
PyObject *const_int_pos_220;
PyObject *const_str_plain_OEM_5;
PyObject *const_int_pos_221;
PyObject *const_str_plain_OEM_6;
PyObject *const_int_pos_222;
PyObject *const_str_plain_OEM_7;
PyObject *const_int_pos_223;
PyObject *const_str_plain_OEM_8;
PyObject *const_int_pos_225;
PyObject *const_str_plain_OEM_AX;
PyObject *const_int_pos_226;
PyObject *const_str_plain_OEM_102;
PyObject *const_int_pos_227;
PyObject *const_str_plain_ICO_HELP;
PyObject *const_int_pos_228;
PyObject *const_str_plain_ICO_00;
PyObject *const_int_pos_229;
PyObject *const_str_plain_PROCESSKEY;
PyObject *const_int_pos_230;
PyObject *const_str_plain_ICO_CLEAR;
PyObject *const_int_pos_231;
PyObject *const_str_plain_PACKET;
PyObject *const_int_pos_233;
PyObject *const_str_plain_OEM_RESET;
PyObject *const_int_pos_234;
PyObject *const_str_plain_OEM_JUMP;
PyObject *const_int_pos_235;
PyObject *const_str_plain_OEM_PA1;
PyObject *const_int_pos_236;
PyObject *const_str_plain_OEM_PA2;
PyObject *const_int_pos_237;
PyObject *const_str_plain_OEM_PA3;
PyObject *const_int_pos_238;
PyObject *const_str_plain_OEM_WSCTRL;
PyObject *const_int_pos_239;
PyObject *const_str_plain_OEM_CUSEL;
PyObject *const_int_pos_240;
PyObject *const_str_plain_OEM_ATTN;
PyObject *const_int_pos_241;
PyObject *const_str_plain_OEM_FINISH;
PyObject *const_int_pos_242;
PyObject *const_str_plain_OEM_COPY;
PyObject *const_int_pos_243;
PyObject *const_str_plain_OEM_AUTO;
PyObject *const_int_pos_244;
PyObject *const_str_plain_OEM_ENLW;
PyObject *const_int_pos_245;
PyObject *const_str_plain_OEM_BACKTAB;
PyObject *const_int_pos_246;
PyObject *const_str_plain_ATTN;
PyObject *const_int_pos_247;
PyObject *const_str_plain_CRSEL;
PyObject *const_int_pos_248;
PyObject *const_str_plain_EXSEL;
PyObject *const_int_pos_249;
PyObject *const_str_plain_EREOF;
PyObject *const_int_pos_250;
PyObject *const_str_plain_PLAY;
PyObject *const_int_pos_251;
PyObject *const_str_plain_ZOOM;
PyObject *const_int_pos_252;
PyObject *const_str_plain_NONAME;
PyObject *const_int_pos_253;
PyObject *const_str_plain_PA1;
PyObject *const_int_pos_254;
PyObject *const_str_plain_OEM_CLEAR;
PyObject *const_str_digest_78f9d7956c153c08453bbbf8ff77ceb7;
PyObject *const_str_digest_bc8dd84fb88bd7ef0620e10d7ad95d5b;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[319];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("pynput._util.win32_vks"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 319) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 319 values, got %d\n",
                    UN_TRANSLATE("pynput._util.win32_vks"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LBUTTON", mod_consts.const_str_plain_LBUTTON);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_LBUTTON);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RBUTTON", mod_consts.const_str_plain_RBUTTON);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_RBUTTON);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_3", mod_consts.const_int_pos_3);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CANCEL", mod_consts.const_str_plain_CANCEL);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_CANCEL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4", mod_consts.const_int_pos_4);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_int_pos_4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MBUTTON", mod_consts.const_str_plain_MBUTTON);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_MBUTTON);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_5", mod_consts.const_int_pos_5);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_int_pos_5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XBUTTON1", mod_consts.const_str_plain_XBUTTON1);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_XBUTTON1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_6", mod_consts.const_int_pos_6);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_int_pos_6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XBUTTON2", mod_consts.const_str_plain_XBUTTON2);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_XBUTTON2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_8", mod_consts.const_int_pos_8);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_int_pos_8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BACK", mod_consts.const_str_plain_BACK);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_BACK);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_9", mod_consts.const_int_pos_9);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_int_pos_9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TAB", mod_consts.const_str_plain_TAB);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_TAB);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_12", mod_consts.const_int_pos_12);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_int_pos_12);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CLEAR", mod_consts.const_str_plain_CLEAR);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_CLEAR);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_13", mod_consts.const_int_pos_13);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_int_pos_13);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RETURN", mod_consts.const_str_plain_RETURN);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_RETURN);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16", mod_consts.const_int_pos_16);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_int_pos_16);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SHIFT", mod_consts.const_str_plain_SHIFT);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHIFT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_17", mod_consts.const_int_pos_17);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_int_pos_17);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CONTROL", mod_consts.const_str_plain_CONTROL);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_CONTROL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_18", mod_consts.const_int_pos_18);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_int_pos_18);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MENU", mod_consts.const_str_plain_MENU);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_MENU);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_19", mod_consts.const_int_pos_19);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_int_pos_19);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PAUSE", mod_consts.const_str_plain_PAUSE);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_PAUSE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_20", mod_consts.const_int_pos_20);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_int_pos_20);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CAPITAL", mod_consts.const_str_plain_CAPITAL);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_CAPITAL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_21", mod_consts.const_int_pos_21);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_int_pos_21);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KANA", mod_consts.const_str_plain_KANA);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_KANA);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HANGEUL", mod_consts.const_str_plain_HANGEUL);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_HANGEUL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HANGUL", mod_consts.const_str_plain_HANGUL);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_HANGUL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_23", mod_consts.const_int_pos_23);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_int_pos_23);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JUNJA", mod_consts.const_str_plain_JUNJA);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_JUNJA);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_24", mod_consts.const_int_pos_24);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_int_pos_24);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FINAL", mod_consts.const_str_plain_FINAL);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_FINAL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_25", mod_consts.const_int_pos_25);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_int_pos_25);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HANJA", mod_consts.const_str_plain_HANJA);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_HANJA);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KANJI", mod_consts.const_str_plain_KANJI);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_KANJI);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_27", mod_consts.const_int_pos_27);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_int_pos_27);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ESCAPE", mod_consts.const_str_plain_ESCAPE);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_ESCAPE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_28", mod_consts.const_int_pos_28);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_int_pos_28);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CONVERT", mod_consts.const_str_plain_CONVERT);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_CONVERT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_29", mod_consts.const_int_pos_29);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_int_pos_29);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NONCONVERT", mod_consts.const_str_plain_NONCONVERT);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_NONCONVERT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_30", mod_consts.const_int_pos_30);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_int_pos_30);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ACCEPT", mod_consts.const_str_plain_ACCEPT);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_ACCEPT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_31", mod_consts.const_int_pos_31);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_int_pos_31);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MODECHANGE", mod_consts.const_str_plain_MODECHANGE);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_MODECHANGE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_32", mod_consts.const_int_pos_32);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_int_pos_32);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SPACE", mod_consts.const_str_plain_SPACE);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_SPACE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_33", mod_consts.const_int_pos_33);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_int_pos_33);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PRIOR", mod_consts.const_str_plain_PRIOR);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_PRIOR);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34", mod_consts.const_int_pos_34);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_int_pos_34);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NEXT", mod_consts.const_str_plain_NEXT);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_NEXT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_35", mod_consts.const_int_pos_35);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_int_pos_35);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_END", mod_consts.const_str_plain_END);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_END);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_36", mod_consts.const_int_pos_36);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_int_pos_36);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HOME", mod_consts.const_str_plain_HOME);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_HOME);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37", mod_consts.const_int_pos_37);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_int_pos_37);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LEFT", mod_consts.const_str_plain_LEFT);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_LEFT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_38", mod_consts.const_int_pos_38);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_int_pos_38);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UP", mod_consts.const_str_plain_UP);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_UP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_39", mod_consts.const_int_pos_39);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_int_pos_39);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RIGHT", mod_consts.const_str_plain_RIGHT);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_RIGHT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_40", mod_consts.const_int_pos_40);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_int_pos_40);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DOWN", mod_consts.const_str_plain_DOWN);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_DOWN);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41", mod_consts.const_int_pos_41);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_int_pos_41);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SELECT", mod_consts.const_str_plain_SELECT);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_SELECT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_42", mod_consts.const_int_pos_42);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_int_pos_42);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PRINT", mod_consts.const_str_plain_PRINT);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_PRINT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_43", mod_consts.const_int_pos_43);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_int_pos_43);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EXECUTE", mod_consts.const_str_plain_EXECUTE);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_EXECUTE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_44", mod_consts.const_int_pos_44);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_int_pos_44);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SNAPSHOT", mod_consts.const_str_plain_SNAPSHOT);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_SNAPSHOT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45", mod_consts.const_int_pos_45);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_int_pos_45);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_INSERT", mod_consts.const_str_plain_INSERT);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_INSERT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_46", mod_consts.const_int_pos_46);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_int_pos_46);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DELETE", mod_consts.const_str_plain_DELETE);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_DELETE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_47", mod_consts.const_int_pos_47);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_int_pos_47);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HELP", mod_consts.const_str_plain_HELP);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_HELP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_91", mod_consts.const_int_pos_91);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_int_pos_91);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LWIN", mod_consts.const_str_plain_LWIN);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_LWIN);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_92", mod_consts.const_int_pos_92);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_int_pos_92);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RWIN", mod_consts.const_str_plain_RWIN);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_RWIN);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_93", mod_consts.const_int_pos_93);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_int_pos_93);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_APPS", mod_consts.const_str_plain_APPS);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_APPS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_95", mod_consts.const_int_pos_95);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_int_pos_95);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SLEEP", mod_consts.const_str_plain_SLEEP);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_SLEEP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_96", mod_consts.const_int_pos_96);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_int_pos_96);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NUMPAD0", mod_consts.const_str_plain_NUMPAD0);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_NUMPAD0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_97", mod_consts.const_int_pos_97);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_int_pos_97);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NUMPAD1", mod_consts.const_str_plain_NUMPAD1);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_NUMPAD1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_98", mod_consts.const_int_pos_98);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_int_pos_98);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NUMPAD2", mod_consts.const_str_plain_NUMPAD2);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_NUMPAD2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_99", mod_consts.const_int_pos_99);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_int_pos_99);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NUMPAD3", mod_consts.const_str_plain_NUMPAD3);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_NUMPAD3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_100", mod_consts.const_int_pos_100);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_int_pos_100);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NUMPAD4", mod_consts.const_str_plain_NUMPAD4);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_NUMPAD4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_101", mod_consts.const_int_pos_101);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_int_pos_101);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NUMPAD5", mod_consts.const_str_plain_NUMPAD5);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_NUMPAD5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_102", mod_consts.const_int_pos_102);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_int_pos_102);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NUMPAD6", mod_consts.const_str_plain_NUMPAD6);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_NUMPAD6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_103", mod_consts.const_int_pos_103);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_int_pos_103);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NUMPAD7", mod_consts.const_str_plain_NUMPAD7);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_NUMPAD7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_104", mod_consts.const_int_pos_104);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_int_pos_104);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NUMPAD8", mod_consts.const_str_plain_NUMPAD8);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_NUMPAD8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_105", mod_consts.const_int_pos_105);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_int_pos_105);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NUMPAD9", mod_consts.const_str_plain_NUMPAD9);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_NUMPAD9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_106", mod_consts.const_int_pos_106);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_int_pos_106);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MULTIPLY", mod_consts.const_str_plain_MULTIPLY);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_MULTIPLY);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_107", mod_consts.const_int_pos_107);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_int_pos_107);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ADD", mod_consts.const_str_plain_ADD);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_ADD);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_108", mod_consts.const_int_pos_108);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_int_pos_108);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SEPARATOR", mod_consts.const_str_plain_SEPARATOR);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_SEPARATOR);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_109", mod_consts.const_int_pos_109);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_int_pos_109);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SUBTRACT", mod_consts.const_str_plain_SUBTRACT);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_SUBTRACT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_110", mod_consts.const_int_pos_110);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_int_pos_110);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DECIMAL", mod_consts.const_str_plain_DECIMAL);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_DECIMAL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_111", mod_consts.const_int_pos_111);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_int_pos_111);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DIVIDE", mod_consts.const_str_plain_DIVIDE);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_DIVIDE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_112", mod_consts.const_int_pos_112);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_int_pos_112);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F1", mod_consts.const_str_plain_F1);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_F1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_113", mod_consts.const_int_pos_113);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_int_pos_113);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F2", mod_consts.const_str_plain_F2);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_F2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_114", mod_consts.const_int_pos_114);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_int_pos_114);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F3", mod_consts.const_str_plain_F3);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_F3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_115", mod_consts.const_int_pos_115);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_int_pos_115);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F4", mod_consts.const_str_plain_F4);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_F4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_116", mod_consts.const_int_pos_116);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_int_pos_116);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F5", mod_consts.const_str_plain_F5);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_F5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_117", mod_consts.const_int_pos_117);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_int_pos_117);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F6", mod_consts.const_str_plain_F6);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_F6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_118", mod_consts.const_int_pos_118);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_int_pos_118);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F7", mod_consts.const_str_plain_F7);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_F7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_119", mod_consts.const_int_pos_119);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_int_pos_119);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F8", mod_consts.const_str_plain_F8);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_F8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_120", mod_consts.const_int_pos_120);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_int_pos_120);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F9", mod_consts.const_str_plain_F9);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_F9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_121", mod_consts.const_int_pos_121);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_int_pos_121);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F10", mod_consts.const_str_plain_F10);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_F10);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_122", mod_consts.const_int_pos_122);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_int_pos_122);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F11", mod_consts.const_str_plain_F11);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_F11);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_123", mod_consts.const_int_pos_123);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_int_pos_123);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F12", mod_consts.const_str_plain_F12);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_F12);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_124", mod_consts.const_int_pos_124);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_int_pos_124);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F13", mod_consts.const_str_plain_F13);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_F13);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_125", mod_consts.const_int_pos_125);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_int_pos_125);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F14", mod_consts.const_str_plain_F14);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_F14);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_126", mod_consts.const_int_pos_126);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_int_pos_126);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F15", mod_consts.const_str_plain_F15);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_F15);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_127", mod_consts.const_int_pos_127);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_int_pos_127);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F16", mod_consts.const_str_plain_F16);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_F16);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_128", mod_consts.const_int_pos_128);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_int_pos_128);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F17", mod_consts.const_str_plain_F17);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_F17);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_129", mod_consts.const_int_pos_129);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_int_pos_129);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F18", mod_consts.const_str_plain_F18);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_F18);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_130", mod_consts.const_int_pos_130);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_int_pos_130);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F19", mod_consts.const_str_plain_F19);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_F19);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_131", mod_consts.const_int_pos_131);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_int_pos_131);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F20", mod_consts.const_str_plain_F20);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain_F20);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_132", mod_consts.const_int_pos_132);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_int_pos_132);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F21", mod_consts.const_str_plain_F21);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_F21);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_133", mod_consts.const_int_pos_133);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_int_pos_133);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F22", mod_consts.const_str_plain_F22);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain_F22);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_134", mod_consts.const_int_pos_134);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_int_pos_134);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F23", mod_consts.const_str_plain_F23);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_F23);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_135", mod_consts.const_int_pos_135);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_int_pos_135);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F24", mod_consts.const_str_plain_F24);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_F24);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_144", mod_consts.const_int_pos_144);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_int_pos_144);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NUMLOCK", mod_consts.const_str_plain_NUMLOCK);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain_NUMLOCK);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_145", mod_consts.const_int_pos_145);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_int_pos_145);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SCROLL", mod_consts.const_str_plain_SCROLL);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_plain_SCROLL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_146", mod_consts.const_int_pos_146);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_int_pos_146);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_NEC_EQUAL", mod_consts.const_str_plain_OEM_NEC_EQUAL);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_NEC_EQUAL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_FJ_JISHO", mod_consts.const_str_plain_OEM_FJ_JISHO);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_FJ_JISHO);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_147", mod_consts.const_int_pos_147);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_int_pos_147);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_FJ_MASSHOU", mod_consts.const_str_plain_OEM_FJ_MASSHOU);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_FJ_MASSHOU);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_148", mod_consts.const_int_pos_148);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_int_pos_148);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_FJ_TOUROKU", mod_consts.const_str_plain_OEM_FJ_TOUROKU);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_FJ_TOUROKU);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_149", mod_consts.const_int_pos_149);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_int_pos_149);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_FJ_LOYA", mod_consts.const_str_plain_OEM_FJ_LOYA);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_FJ_LOYA);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_150", mod_consts.const_int_pos_150);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_int_pos_150);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_FJ_ROYA", mod_consts.const_str_plain_OEM_FJ_ROYA);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_FJ_ROYA);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_160", mod_consts.const_int_pos_160);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_int_pos_160);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LSHIFT", mod_consts.const_str_plain_LSHIFT);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_plain_LSHIFT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_161", mod_consts.const_int_pos_161);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_int_pos_161);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RSHIFT", mod_consts.const_str_plain_RSHIFT);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_plain_RSHIFT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_162", mod_consts.const_int_pos_162);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_int_pos_162);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LCONTROL", mod_consts.const_str_plain_LCONTROL);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_plain_LCONTROL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_163", mod_consts.const_int_pos_163);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_int_pos_163);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RCONTROL", mod_consts.const_str_plain_RCONTROL);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_plain_RCONTROL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_164", mod_consts.const_int_pos_164);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_int_pos_164);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LMENU", mod_consts.const_str_plain_LMENU);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_plain_LMENU);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_165", mod_consts.const_int_pos_165);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_int_pos_165);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RMENU", mod_consts.const_str_plain_RMENU);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_plain_RMENU);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_166", mod_consts.const_int_pos_166);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_int_pos_166);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BROWSER_BACK", mod_consts.const_str_plain_BROWSER_BACK);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_plain_BROWSER_BACK);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_167", mod_consts.const_int_pos_167);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_int_pos_167);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BROWSER_FORWARD", mod_consts.const_str_plain_BROWSER_FORWARD);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_plain_BROWSER_FORWARD);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_168", mod_consts.const_int_pos_168);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_int_pos_168);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BROWSER_REFRESH", mod_consts.const_str_plain_BROWSER_REFRESH);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_plain_BROWSER_REFRESH);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_169", mod_consts.const_int_pos_169);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_int_pos_169);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BROWSER_STOP", mod_consts.const_str_plain_BROWSER_STOP);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_str_plain_BROWSER_STOP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_170", mod_consts.const_int_pos_170);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_int_pos_170);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BROWSER_SEARCH", mod_consts.const_str_plain_BROWSER_SEARCH);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_str_plain_BROWSER_SEARCH);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_171", mod_consts.const_int_pos_171);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_int_pos_171);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BROWSER_FAVORITES", mod_consts.const_str_plain_BROWSER_FAVORITES);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_str_plain_BROWSER_FAVORITES);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_172", mod_consts.const_int_pos_172);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_int_pos_172);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BROWSER_HOME", mod_consts.const_str_plain_BROWSER_HOME);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_str_plain_BROWSER_HOME);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_173", mod_consts.const_int_pos_173);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_int_pos_173);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_VOLUME_MUTE", mod_consts.const_str_plain_VOLUME_MUTE);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_str_plain_VOLUME_MUTE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_174", mod_consts.const_int_pos_174);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_int_pos_174);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_VOLUME_DOWN", mod_consts.const_str_plain_VOLUME_DOWN);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_str_plain_VOLUME_DOWN);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_175", mod_consts.const_int_pos_175);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_int_pos_175);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_VOLUME_UP", mod_consts.const_str_plain_VOLUME_UP);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_str_plain_VOLUME_UP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_176", mod_consts.const_int_pos_176);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_int_pos_176);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MEDIA_NEXT_TRACK", mod_consts.const_str_plain_MEDIA_NEXT_TRACK);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_str_plain_MEDIA_NEXT_TRACK);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_177", mod_consts.const_int_pos_177);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_int_pos_177);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MEDIA_PREV_TRACK", mod_consts.const_str_plain_MEDIA_PREV_TRACK);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_str_plain_MEDIA_PREV_TRACK);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_178", mod_consts.const_int_pos_178);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_int_pos_178);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MEDIA_STOP", mod_consts.const_str_plain_MEDIA_STOP);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_str_plain_MEDIA_STOP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_179", mod_consts.const_int_pos_179);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_int_pos_179);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MEDIA_PLAY_PAUSE", mod_consts.const_str_plain_MEDIA_PLAY_PAUSE);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_str_plain_MEDIA_PLAY_PAUSE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_180", mod_consts.const_int_pos_180);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_int_pos_180);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LAUNCH_MAIL", mod_consts.const_str_plain_LAUNCH_MAIL);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_str_plain_LAUNCH_MAIL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_181", mod_consts.const_int_pos_181);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_int_pos_181);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LAUNCH_MEDIA_SELECT", mod_consts.const_str_plain_LAUNCH_MEDIA_SELECT);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_str_plain_LAUNCH_MEDIA_SELECT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_182", mod_consts.const_int_pos_182);
mod_consts_hash[231] = DEEP_HASH(tstate, mod_consts.const_int_pos_182);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LAUNCH_APP1", mod_consts.const_str_plain_LAUNCH_APP1);
mod_consts_hash[232] = DEEP_HASH(tstate, mod_consts.const_str_plain_LAUNCH_APP1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_183", mod_consts.const_int_pos_183);
mod_consts_hash[233] = DEEP_HASH(tstate, mod_consts.const_int_pos_183);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LAUNCH_APP2", mod_consts.const_str_plain_LAUNCH_APP2);
mod_consts_hash[234] = DEEP_HASH(tstate, mod_consts.const_str_plain_LAUNCH_APP2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_186", mod_consts.const_int_pos_186);
mod_consts_hash[235] = DEEP_HASH(tstate, mod_consts.const_int_pos_186);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_1", mod_consts.const_str_plain_OEM_1);
mod_consts_hash[236] = DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_187", mod_consts.const_int_pos_187);
mod_consts_hash[237] = DEEP_HASH(tstate, mod_consts.const_int_pos_187);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_PLUS", mod_consts.const_str_plain_OEM_PLUS);
mod_consts_hash[238] = DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_PLUS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_188", mod_consts.const_int_pos_188);
mod_consts_hash[239] = DEEP_HASH(tstate, mod_consts.const_int_pos_188);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_COMMA", mod_consts.const_str_plain_OEM_COMMA);
mod_consts_hash[240] = DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_COMMA);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_189", mod_consts.const_int_pos_189);
mod_consts_hash[241] = DEEP_HASH(tstate, mod_consts.const_int_pos_189);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_MINUS", mod_consts.const_str_plain_OEM_MINUS);
mod_consts_hash[242] = DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_MINUS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_190", mod_consts.const_int_pos_190);
mod_consts_hash[243] = DEEP_HASH(tstate, mod_consts.const_int_pos_190);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_PERIOD", mod_consts.const_str_plain_OEM_PERIOD);
mod_consts_hash[244] = DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_PERIOD);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_191", mod_consts.const_int_pos_191);
mod_consts_hash[245] = DEEP_HASH(tstate, mod_consts.const_int_pos_191);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_2", mod_consts.const_str_plain_OEM_2);
mod_consts_hash[246] = DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_192", mod_consts.const_int_pos_192);
mod_consts_hash[247] = DEEP_HASH(tstate, mod_consts.const_int_pos_192);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_3", mod_consts.const_str_plain_OEM_3);
mod_consts_hash[248] = DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_219", mod_consts.const_int_pos_219);
mod_consts_hash[249] = DEEP_HASH(tstate, mod_consts.const_int_pos_219);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_4", mod_consts.const_str_plain_OEM_4);
mod_consts_hash[250] = DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_220", mod_consts.const_int_pos_220);
mod_consts_hash[251] = DEEP_HASH(tstate, mod_consts.const_int_pos_220);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_5", mod_consts.const_str_plain_OEM_5);
mod_consts_hash[252] = DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_221", mod_consts.const_int_pos_221);
mod_consts_hash[253] = DEEP_HASH(tstate, mod_consts.const_int_pos_221);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_6", mod_consts.const_str_plain_OEM_6);
mod_consts_hash[254] = DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_222", mod_consts.const_int_pos_222);
mod_consts_hash[255] = DEEP_HASH(tstate, mod_consts.const_int_pos_222);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_7", mod_consts.const_str_plain_OEM_7);
mod_consts_hash[256] = DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_223", mod_consts.const_int_pos_223);
mod_consts_hash[257] = DEEP_HASH(tstate, mod_consts.const_int_pos_223);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_8", mod_consts.const_str_plain_OEM_8);
mod_consts_hash[258] = DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_225", mod_consts.const_int_pos_225);
mod_consts_hash[259] = DEEP_HASH(tstate, mod_consts.const_int_pos_225);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_AX", mod_consts.const_str_plain_OEM_AX);
mod_consts_hash[260] = DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_AX);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_226", mod_consts.const_int_pos_226);
mod_consts_hash[261] = DEEP_HASH(tstate, mod_consts.const_int_pos_226);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_102", mod_consts.const_str_plain_OEM_102);
mod_consts_hash[262] = DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_102);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_227", mod_consts.const_int_pos_227);
mod_consts_hash[263] = DEEP_HASH(tstate, mod_consts.const_int_pos_227);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ICO_HELP", mod_consts.const_str_plain_ICO_HELP);
mod_consts_hash[264] = DEEP_HASH(tstate, mod_consts.const_str_plain_ICO_HELP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_228", mod_consts.const_int_pos_228);
mod_consts_hash[265] = DEEP_HASH(tstate, mod_consts.const_int_pos_228);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ICO_00", mod_consts.const_str_plain_ICO_00);
mod_consts_hash[266] = DEEP_HASH(tstate, mod_consts.const_str_plain_ICO_00);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_229", mod_consts.const_int_pos_229);
mod_consts_hash[267] = DEEP_HASH(tstate, mod_consts.const_int_pos_229);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PROCESSKEY", mod_consts.const_str_plain_PROCESSKEY);
mod_consts_hash[268] = DEEP_HASH(tstate, mod_consts.const_str_plain_PROCESSKEY);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_230", mod_consts.const_int_pos_230);
mod_consts_hash[269] = DEEP_HASH(tstate, mod_consts.const_int_pos_230);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ICO_CLEAR", mod_consts.const_str_plain_ICO_CLEAR);
mod_consts_hash[270] = DEEP_HASH(tstate, mod_consts.const_str_plain_ICO_CLEAR);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_231", mod_consts.const_int_pos_231);
mod_consts_hash[271] = DEEP_HASH(tstate, mod_consts.const_int_pos_231);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PACKET", mod_consts.const_str_plain_PACKET);
mod_consts_hash[272] = DEEP_HASH(tstate, mod_consts.const_str_plain_PACKET);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_233", mod_consts.const_int_pos_233);
mod_consts_hash[273] = DEEP_HASH(tstate, mod_consts.const_int_pos_233);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_RESET", mod_consts.const_str_plain_OEM_RESET);
mod_consts_hash[274] = DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_RESET);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_234", mod_consts.const_int_pos_234);
mod_consts_hash[275] = DEEP_HASH(tstate, mod_consts.const_int_pos_234);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_JUMP", mod_consts.const_str_plain_OEM_JUMP);
mod_consts_hash[276] = DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_JUMP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_235", mod_consts.const_int_pos_235);
mod_consts_hash[277] = DEEP_HASH(tstate, mod_consts.const_int_pos_235);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_PA1", mod_consts.const_str_plain_OEM_PA1);
mod_consts_hash[278] = DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_PA1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_236", mod_consts.const_int_pos_236);
mod_consts_hash[279] = DEEP_HASH(tstate, mod_consts.const_int_pos_236);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_PA2", mod_consts.const_str_plain_OEM_PA2);
mod_consts_hash[280] = DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_PA2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_237", mod_consts.const_int_pos_237);
mod_consts_hash[281] = DEEP_HASH(tstate, mod_consts.const_int_pos_237);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_PA3", mod_consts.const_str_plain_OEM_PA3);
mod_consts_hash[282] = DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_PA3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_238", mod_consts.const_int_pos_238);
mod_consts_hash[283] = DEEP_HASH(tstate, mod_consts.const_int_pos_238);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_WSCTRL", mod_consts.const_str_plain_OEM_WSCTRL);
mod_consts_hash[284] = DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_WSCTRL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_239", mod_consts.const_int_pos_239);
mod_consts_hash[285] = DEEP_HASH(tstate, mod_consts.const_int_pos_239);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_CUSEL", mod_consts.const_str_plain_OEM_CUSEL);
mod_consts_hash[286] = DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_CUSEL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_240", mod_consts.const_int_pos_240);
mod_consts_hash[287] = DEEP_HASH(tstate, mod_consts.const_int_pos_240);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_ATTN", mod_consts.const_str_plain_OEM_ATTN);
mod_consts_hash[288] = DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_ATTN);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_241", mod_consts.const_int_pos_241);
mod_consts_hash[289] = DEEP_HASH(tstate, mod_consts.const_int_pos_241);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_FINISH", mod_consts.const_str_plain_OEM_FINISH);
mod_consts_hash[290] = DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_FINISH);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_242", mod_consts.const_int_pos_242);
mod_consts_hash[291] = DEEP_HASH(tstate, mod_consts.const_int_pos_242);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_COPY", mod_consts.const_str_plain_OEM_COPY);
mod_consts_hash[292] = DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_COPY);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_243", mod_consts.const_int_pos_243);
mod_consts_hash[293] = DEEP_HASH(tstate, mod_consts.const_int_pos_243);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_AUTO", mod_consts.const_str_plain_OEM_AUTO);
mod_consts_hash[294] = DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_AUTO);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_244", mod_consts.const_int_pos_244);
mod_consts_hash[295] = DEEP_HASH(tstate, mod_consts.const_int_pos_244);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_ENLW", mod_consts.const_str_plain_OEM_ENLW);
mod_consts_hash[296] = DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_ENLW);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_245", mod_consts.const_int_pos_245);
mod_consts_hash[297] = DEEP_HASH(tstate, mod_consts.const_int_pos_245);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_BACKTAB", mod_consts.const_str_plain_OEM_BACKTAB);
mod_consts_hash[298] = DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_BACKTAB);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_246", mod_consts.const_int_pos_246);
mod_consts_hash[299] = DEEP_HASH(tstate, mod_consts.const_int_pos_246);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ATTN", mod_consts.const_str_plain_ATTN);
mod_consts_hash[300] = DEEP_HASH(tstate, mod_consts.const_str_plain_ATTN);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_247", mod_consts.const_int_pos_247);
mod_consts_hash[301] = DEEP_HASH(tstate, mod_consts.const_int_pos_247);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CRSEL", mod_consts.const_str_plain_CRSEL);
mod_consts_hash[302] = DEEP_HASH(tstate, mod_consts.const_str_plain_CRSEL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_248", mod_consts.const_int_pos_248);
mod_consts_hash[303] = DEEP_HASH(tstate, mod_consts.const_int_pos_248);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EXSEL", mod_consts.const_str_plain_EXSEL);
mod_consts_hash[304] = DEEP_HASH(tstate, mod_consts.const_str_plain_EXSEL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_249", mod_consts.const_int_pos_249);
mod_consts_hash[305] = DEEP_HASH(tstate, mod_consts.const_int_pos_249);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EREOF", mod_consts.const_str_plain_EREOF);
mod_consts_hash[306] = DEEP_HASH(tstate, mod_consts.const_str_plain_EREOF);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_250", mod_consts.const_int_pos_250);
mod_consts_hash[307] = DEEP_HASH(tstate, mod_consts.const_int_pos_250);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PLAY", mod_consts.const_str_plain_PLAY);
mod_consts_hash[308] = DEEP_HASH(tstate, mod_consts.const_str_plain_PLAY);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_251", mod_consts.const_int_pos_251);
mod_consts_hash[309] = DEEP_HASH(tstate, mod_consts.const_int_pos_251);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ZOOM", mod_consts.const_str_plain_ZOOM);
mod_consts_hash[310] = DEEP_HASH(tstate, mod_consts.const_str_plain_ZOOM);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_252", mod_consts.const_int_pos_252);
mod_consts_hash[311] = DEEP_HASH(tstate, mod_consts.const_int_pos_252);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NONAME", mod_consts.const_str_plain_NONAME);
mod_consts_hash[312] = DEEP_HASH(tstate, mod_consts.const_str_plain_NONAME);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_253", mod_consts.const_int_pos_253);
mod_consts_hash[313] = DEEP_HASH(tstate, mod_consts.const_int_pos_253);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PA1", mod_consts.const_str_plain_PA1);
mod_consts_hash[314] = DEEP_HASH(tstate, mod_consts.const_str_plain_PA1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_254", mod_consts.const_int_pos_254);
mod_consts_hash[315] = DEEP_HASH(tstate, mod_consts.const_int_pos_254);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_CLEAR", mod_consts.const_str_plain_OEM_CLEAR);
mod_consts_hash[316] = DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_CLEAR);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_78f9d7956c153c08453bbbf8ff77ceb7", mod_consts.const_str_digest_78f9d7956c153c08453bbbf8ff77ceb7);
mod_consts_hash[317] = DEEP_HASH(tstate, mod_consts.const_str_digest_78f9d7956c153c08453bbbf8ff77ceb7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bc8dd84fb88bd7ef0620e10d7ad95d5b", mod_consts.const_str_digest_bc8dd84fb88bd7ef0620e10d7ad95d5b);
mod_consts_hash[318] = DEEP_HASH(tstate, mod_consts.const_str_digest_bc8dd84fb88bd7ef0620e10d7ad95d5b);
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
void checkModuleConstants_pynput$_util$win32_vks(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LBUTTON", mod_consts.const_str_plain_LBUTTON);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_LBUTTON) && "mod_consts.const_str_plain_LBUTTON");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_int_pos_2) && "mod_consts.const_int_pos_2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RBUTTON", mod_consts.const_str_plain_RBUTTON);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_RBUTTON) && "mod_consts.const_str_plain_RBUTTON");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_3", mod_consts.const_int_pos_3);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_int_pos_3) && "mod_consts.const_int_pos_3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CANCEL", mod_consts.const_str_plain_CANCEL);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_CANCEL) && "mod_consts.const_str_plain_CANCEL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4", mod_consts.const_int_pos_4);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_int_pos_4) && "mod_consts.const_int_pos_4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MBUTTON", mod_consts.const_str_plain_MBUTTON);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_MBUTTON) && "mod_consts.const_str_plain_MBUTTON");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_5", mod_consts.const_int_pos_5);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_int_pos_5) && "mod_consts.const_int_pos_5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XBUTTON1", mod_consts.const_str_plain_XBUTTON1);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_XBUTTON1) && "mod_consts.const_str_plain_XBUTTON1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_6", mod_consts.const_int_pos_6);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_int_pos_6) && "mod_consts.const_int_pos_6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_XBUTTON2", mod_consts.const_str_plain_XBUTTON2);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_XBUTTON2) && "mod_consts.const_str_plain_XBUTTON2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_8", mod_consts.const_int_pos_8);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_int_pos_8) && "mod_consts.const_int_pos_8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BACK", mod_consts.const_str_plain_BACK);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_BACK) && "mod_consts.const_str_plain_BACK");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_9", mod_consts.const_int_pos_9);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_int_pos_9) && "mod_consts.const_int_pos_9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TAB", mod_consts.const_str_plain_TAB);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_TAB) && "mod_consts.const_str_plain_TAB");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_12", mod_consts.const_int_pos_12);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_int_pos_12) && "mod_consts.const_int_pos_12");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CLEAR", mod_consts.const_str_plain_CLEAR);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_CLEAR) && "mod_consts.const_str_plain_CLEAR");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_13", mod_consts.const_int_pos_13);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_int_pos_13) && "mod_consts.const_int_pos_13");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RETURN", mod_consts.const_str_plain_RETURN);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_RETURN) && "mod_consts.const_str_plain_RETURN");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16", mod_consts.const_int_pos_16);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_int_pos_16) && "mod_consts.const_int_pos_16");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SHIFT", mod_consts.const_str_plain_SHIFT);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHIFT) && "mod_consts.const_str_plain_SHIFT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_17", mod_consts.const_int_pos_17);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_int_pos_17) && "mod_consts.const_int_pos_17");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CONTROL", mod_consts.const_str_plain_CONTROL);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_CONTROL) && "mod_consts.const_str_plain_CONTROL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_18", mod_consts.const_int_pos_18);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_int_pos_18) && "mod_consts.const_int_pos_18");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MENU", mod_consts.const_str_plain_MENU);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_MENU) && "mod_consts.const_str_plain_MENU");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_19", mod_consts.const_int_pos_19);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_int_pos_19) && "mod_consts.const_int_pos_19");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PAUSE", mod_consts.const_str_plain_PAUSE);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_PAUSE) && "mod_consts.const_str_plain_PAUSE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_20", mod_consts.const_int_pos_20);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_int_pos_20) && "mod_consts.const_int_pos_20");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CAPITAL", mod_consts.const_str_plain_CAPITAL);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_CAPITAL) && "mod_consts.const_str_plain_CAPITAL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_21", mod_consts.const_int_pos_21);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_int_pos_21) && "mod_consts.const_int_pos_21");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KANA", mod_consts.const_str_plain_KANA);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_KANA) && "mod_consts.const_str_plain_KANA");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HANGEUL", mod_consts.const_str_plain_HANGEUL);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_HANGEUL) && "mod_consts.const_str_plain_HANGEUL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HANGUL", mod_consts.const_str_plain_HANGUL);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_HANGUL) && "mod_consts.const_str_plain_HANGUL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_23", mod_consts.const_int_pos_23);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_int_pos_23) && "mod_consts.const_int_pos_23");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JUNJA", mod_consts.const_str_plain_JUNJA);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_JUNJA) && "mod_consts.const_str_plain_JUNJA");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_24", mod_consts.const_int_pos_24);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_int_pos_24) && "mod_consts.const_int_pos_24");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FINAL", mod_consts.const_str_plain_FINAL);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_FINAL) && "mod_consts.const_str_plain_FINAL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_25", mod_consts.const_int_pos_25);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_int_pos_25) && "mod_consts.const_int_pos_25");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HANJA", mod_consts.const_str_plain_HANJA);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_HANJA) && "mod_consts.const_str_plain_HANJA");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KANJI", mod_consts.const_str_plain_KANJI);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_KANJI) && "mod_consts.const_str_plain_KANJI");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_27", mod_consts.const_int_pos_27);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_int_pos_27) && "mod_consts.const_int_pos_27");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ESCAPE", mod_consts.const_str_plain_ESCAPE);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_ESCAPE) && "mod_consts.const_str_plain_ESCAPE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_28", mod_consts.const_int_pos_28);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_int_pos_28) && "mod_consts.const_int_pos_28");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CONVERT", mod_consts.const_str_plain_CONVERT);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_CONVERT) && "mod_consts.const_str_plain_CONVERT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_29", mod_consts.const_int_pos_29);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_int_pos_29) && "mod_consts.const_int_pos_29");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NONCONVERT", mod_consts.const_str_plain_NONCONVERT);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_NONCONVERT) && "mod_consts.const_str_plain_NONCONVERT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_30", mod_consts.const_int_pos_30);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_int_pos_30) && "mod_consts.const_int_pos_30");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ACCEPT", mod_consts.const_str_plain_ACCEPT);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_ACCEPT) && "mod_consts.const_str_plain_ACCEPT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_31", mod_consts.const_int_pos_31);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_int_pos_31) && "mod_consts.const_int_pos_31");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MODECHANGE", mod_consts.const_str_plain_MODECHANGE);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_MODECHANGE) && "mod_consts.const_str_plain_MODECHANGE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_32", mod_consts.const_int_pos_32);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_int_pos_32) && "mod_consts.const_int_pos_32");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SPACE", mod_consts.const_str_plain_SPACE);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_SPACE) && "mod_consts.const_str_plain_SPACE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_33", mod_consts.const_int_pos_33);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_int_pos_33) && "mod_consts.const_int_pos_33");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PRIOR", mod_consts.const_str_plain_PRIOR);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_PRIOR) && "mod_consts.const_str_plain_PRIOR");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_34", mod_consts.const_int_pos_34);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_int_pos_34) && "mod_consts.const_int_pos_34");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NEXT", mod_consts.const_str_plain_NEXT);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_NEXT) && "mod_consts.const_str_plain_NEXT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_35", mod_consts.const_int_pos_35);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_int_pos_35) && "mod_consts.const_int_pos_35");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_END", mod_consts.const_str_plain_END);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_END) && "mod_consts.const_str_plain_END");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_36", mod_consts.const_int_pos_36);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_int_pos_36) && "mod_consts.const_int_pos_36");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HOME", mod_consts.const_str_plain_HOME);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_HOME) && "mod_consts.const_str_plain_HOME");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_37", mod_consts.const_int_pos_37);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_int_pos_37) && "mod_consts.const_int_pos_37");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LEFT", mod_consts.const_str_plain_LEFT);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_LEFT) && "mod_consts.const_str_plain_LEFT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_38", mod_consts.const_int_pos_38);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_int_pos_38) && "mod_consts.const_int_pos_38");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UP", mod_consts.const_str_plain_UP);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_UP) && "mod_consts.const_str_plain_UP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_39", mod_consts.const_int_pos_39);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_int_pos_39) && "mod_consts.const_int_pos_39");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RIGHT", mod_consts.const_str_plain_RIGHT);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_RIGHT) && "mod_consts.const_str_plain_RIGHT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_40", mod_consts.const_int_pos_40);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_int_pos_40) && "mod_consts.const_int_pos_40");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DOWN", mod_consts.const_str_plain_DOWN);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_DOWN) && "mod_consts.const_str_plain_DOWN");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41", mod_consts.const_int_pos_41);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_int_pos_41) && "mod_consts.const_int_pos_41");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SELECT", mod_consts.const_str_plain_SELECT);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_SELECT) && "mod_consts.const_str_plain_SELECT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_42", mod_consts.const_int_pos_42);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_int_pos_42) && "mod_consts.const_int_pos_42");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PRINT", mod_consts.const_str_plain_PRINT);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_PRINT) && "mod_consts.const_str_plain_PRINT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_43", mod_consts.const_int_pos_43);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_int_pos_43) && "mod_consts.const_int_pos_43");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EXECUTE", mod_consts.const_str_plain_EXECUTE);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_EXECUTE) && "mod_consts.const_str_plain_EXECUTE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_44", mod_consts.const_int_pos_44);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_int_pos_44) && "mod_consts.const_int_pos_44");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SNAPSHOT", mod_consts.const_str_plain_SNAPSHOT);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_SNAPSHOT) && "mod_consts.const_str_plain_SNAPSHOT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_45", mod_consts.const_int_pos_45);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_int_pos_45) && "mod_consts.const_int_pos_45");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_INSERT", mod_consts.const_str_plain_INSERT);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_INSERT) && "mod_consts.const_str_plain_INSERT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_46", mod_consts.const_int_pos_46);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_int_pos_46) && "mod_consts.const_int_pos_46");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DELETE", mod_consts.const_str_plain_DELETE);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_DELETE) && "mod_consts.const_str_plain_DELETE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_47", mod_consts.const_int_pos_47);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_int_pos_47) && "mod_consts.const_int_pos_47");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HELP", mod_consts.const_str_plain_HELP);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_HELP) && "mod_consts.const_str_plain_HELP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_91", mod_consts.const_int_pos_91);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_int_pos_91) && "mod_consts.const_int_pos_91");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LWIN", mod_consts.const_str_plain_LWIN);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_LWIN) && "mod_consts.const_str_plain_LWIN");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_92", mod_consts.const_int_pos_92);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_int_pos_92) && "mod_consts.const_int_pos_92");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RWIN", mod_consts.const_str_plain_RWIN);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_RWIN) && "mod_consts.const_str_plain_RWIN");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_93", mod_consts.const_int_pos_93);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_int_pos_93) && "mod_consts.const_int_pos_93");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_APPS", mod_consts.const_str_plain_APPS);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_APPS) && "mod_consts.const_str_plain_APPS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_95", mod_consts.const_int_pos_95);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_int_pos_95) && "mod_consts.const_int_pos_95");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SLEEP", mod_consts.const_str_plain_SLEEP);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_SLEEP) && "mod_consts.const_str_plain_SLEEP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_96", mod_consts.const_int_pos_96);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_int_pos_96) && "mod_consts.const_int_pos_96");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NUMPAD0", mod_consts.const_str_plain_NUMPAD0);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_NUMPAD0) && "mod_consts.const_str_plain_NUMPAD0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_97", mod_consts.const_int_pos_97);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_int_pos_97) && "mod_consts.const_int_pos_97");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NUMPAD1", mod_consts.const_str_plain_NUMPAD1);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_NUMPAD1) && "mod_consts.const_str_plain_NUMPAD1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_98", mod_consts.const_int_pos_98);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_int_pos_98) && "mod_consts.const_int_pos_98");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NUMPAD2", mod_consts.const_str_plain_NUMPAD2);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_NUMPAD2) && "mod_consts.const_str_plain_NUMPAD2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_99", mod_consts.const_int_pos_99);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_int_pos_99) && "mod_consts.const_int_pos_99");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NUMPAD3", mod_consts.const_str_plain_NUMPAD3);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_NUMPAD3) && "mod_consts.const_str_plain_NUMPAD3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_100", mod_consts.const_int_pos_100);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_int_pos_100) && "mod_consts.const_int_pos_100");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NUMPAD4", mod_consts.const_str_plain_NUMPAD4);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_NUMPAD4) && "mod_consts.const_str_plain_NUMPAD4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_101", mod_consts.const_int_pos_101);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_int_pos_101) && "mod_consts.const_int_pos_101");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NUMPAD5", mod_consts.const_str_plain_NUMPAD5);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_NUMPAD5) && "mod_consts.const_str_plain_NUMPAD5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_102", mod_consts.const_int_pos_102);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_int_pos_102) && "mod_consts.const_int_pos_102");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NUMPAD6", mod_consts.const_str_plain_NUMPAD6);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_NUMPAD6) && "mod_consts.const_str_plain_NUMPAD6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_103", mod_consts.const_int_pos_103);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_int_pos_103) && "mod_consts.const_int_pos_103");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NUMPAD7", mod_consts.const_str_plain_NUMPAD7);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_NUMPAD7) && "mod_consts.const_str_plain_NUMPAD7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_104", mod_consts.const_int_pos_104);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_int_pos_104) && "mod_consts.const_int_pos_104");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NUMPAD8", mod_consts.const_str_plain_NUMPAD8);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_NUMPAD8) && "mod_consts.const_str_plain_NUMPAD8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_105", mod_consts.const_int_pos_105);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_int_pos_105) && "mod_consts.const_int_pos_105");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NUMPAD9", mod_consts.const_str_plain_NUMPAD9);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_NUMPAD9) && "mod_consts.const_str_plain_NUMPAD9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_106", mod_consts.const_int_pos_106);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_int_pos_106) && "mod_consts.const_int_pos_106");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MULTIPLY", mod_consts.const_str_plain_MULTIPLY);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_MULTIPLY) && "mod_consts.const_str_plain_MULTIPLY");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_107", mod_consts.const_int_pos_107);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_int_pos_107) && "mod_consts.const_int_pos_107");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ADD", mod_consts.const_str_plain_ADD);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_ADD) && "mod_consts.const_str_plain_ADD");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_108", mod_consts.const_int_pos_108);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_int_pos_108) && "mod_consts.const_int_pos_108");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SEPARATOR", mod_consts.const_str_plain_SEPARATOR);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_SEPARATOR) && "mod_consts.const_str_plain_SEPARATOR");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_109", mod_consts.const_int_pos_109);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_int_pos_109) && "mod_consts.const_int_pos_109");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SUBTRACT", mod_consts.const_str_plain_SUBTRACT);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_SUBTRACT) && "mod_consts.const_str_plain_SUBTRACT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_110", mod_consts.const_int_pos_110);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_int_pos_110) && "mod_consts.const_int_pos_110");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DECIMAL", mod_consts.const_str_plain_DECIMAL);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_DECIMAL) && "mod_consts.const_str_plain_DECIMAL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_111", mod_consts.const_int_pos_111);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_int_pos_111) && "mod_consts.const_int_pos_111");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DIVIDE", mod_consts.const_str_plain_DIVIDE);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_DIVIDE) && "mod_consts.const_str_plain_DIVIDE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_112", mod_consts.const_int_pos_112);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_int_pos_112) && "mod_consts.const_int_pos_112");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F1", mod_consts.const_str_plain_F1);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_F1) && "mod_consts.const_str_plain_F1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_113", mod_consts.const_int_pos_113);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_int_pos_113) && "mod_consts.const_int_pos_113");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F2", mod_consts.const_str_plain_F2);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_F2) && "mod_consts.const_str_plain_F2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_114", mod_consts.const_int_pos_114);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_int_pos_114) && "mod_consts.const_int_pos_114");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F3", mod_consts.const_str_plain_F3);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_F3) && "mod_consts.const_str_plain_F3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_115", mod_consts.const_int_pos_115);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_int_pos_115) && "mod_consts.const_int_pos_115");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F4", mod_consts.const_str_plain_F4);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_F4) && "mod_consts.const_str_plain_F4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_116", mod_consts.const_int_pos_116);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_int_pos_116) && "mod_consts.const_int_pos_116");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F5", mod_consts.const_str_plain_F5);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_F5) && "mod_consts.const_str_plain_F5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_117", mod_consts.const_int_pos_117);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_int_pos_117) && "mod_consts.const_int_pos_117");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F6", mod_consts.const_str_plain_F6);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_F6) && "mod_consts.const_str_plain_F6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_118", mod_consts.const_int_pos_118);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_int_pos_118) && "mod_consts.const_int_pos_118");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F7", mod_consts.const_str_plain_F7);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_F7) && "mod_consts.const_str_plain_F7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_119", mod_consts.const_int_pos_119);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_int_pos_119) && "mod_consts.const_int_pos_119");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F8", mod_consts.const_str_plain_F8);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_F8) && "mod_consts.const_str_plain_F8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_120", mod_consts.const_int_pos_120);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_int_pos_120) && "mod_consts.const_int_pos_120");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F9", mod_consts.const_str_plain_F9);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_F9) && "mod_consts.const_str_plain_F9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_121", mod_consts.const_int_pos_121);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_int_pos_121) && "mod_consts.const_int_pos_121");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F10", mod_consts.const_str_plain_F10);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_F10) && "mod_consts.const_str_plain_F10");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_122", mod_consts.const_int_pos_122);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_int_pos_122) && "mod_consts.const_int_pos_122");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F11", mod_consts.const_str_plain_F11);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_F11) && "mod_consts.const_str_plain_F11");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_123", mod_consts.const_int_pos_123);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_int_pos_123) && "mod_consts.const_int_pos_123");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F12", mod_consts.const_str_plain_F12);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_F12) && "mod_consts.const_str_plain_F12");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_124", mod_consts.const_int_pos_124);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_int_pos_124) && "mod_consts.const_int_pos_124");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F13", mod_consts.const_str_plain_F13);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_F13) && "mod_consts.const_str_plain_F13");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_125", mod_consts.const_int_pos_125);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_int_pos_125) && "mod_consts.const_int_pos_125");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F14", mod_consts.const_str_plain_F14);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_F14) && "mod_consts.const_str_plain_F14");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_126", mod_consts.const_int_pos_126);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_int_pos_126) && "mod_consts.const_int_pos_126");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F15", mod_consts.const_str_plain_F15);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_F15) && "mod_consts.const_str_plain_F15");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_127", mod_consts.const_int_pos_127);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_int_pos_127) && "mod_consts.const_int_pos_127");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F16", mod_consts.const_str_plain_F16);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_F16) && "mod_consts.const_str_plain_F16");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_128", mod_consts.const_int_pos_128);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_int_pos_128) && "mod_consts.const_int_pos_128");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F17", mod_consts.const_str_plain_F17);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_F17) && "mod_consts.const_str_plain_F17");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_129", mod_consts.const_int_pos_129);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_int_pos_129) && "mod_consts.const_int_pos_129");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F18", mod_consts.const_str_plain_F18);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_F18) && "mod_consts.const_str_plain_F18");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_130", mod_consts.const_int_pos_130);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_int_pos_130) && "mod_consts.const_int_pos_130");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F19", mod_consts.const_str_plain_F19);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_F19) && "mod_consts.const_str_plain_F19");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_131", mod_consts.const_int_pos_131);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_int_pos_131) && "mod_consts.const_int_pos_131");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F20", mod_consts.const_str_plain_F20);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain_F20) && "mod_consts.const_str_plain_F20");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_132", mod_consts.const_int_pos_132);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_int_pos_132) && "mod_consts.const_int_pos_132");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F21", mod_consts.const_str_plain_F21);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_F21) && "mod_consts.const_str_plain_F21");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_133", mod_consts.const_int_pos_133);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_int_pos_133) && "mod_consts.const_int_pos_133");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F22", mod_consts.const_str_plain_F22);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain_F22) && "mod_consts.const_str_plain_F22");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_134", mod_consts.const_int_pos_134);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_int_pos_134) && "mod_consts.const_int_pos_134");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F23", mod_consts.const_str_plain_F23);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_F23) && "mod_consts.const_str_plain_F23");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_135", mod_consts.const_int_pos_135);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_int_pos_135) && "mod_consts.const_int_pos_135");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F24", mod_consts.const_str_plain_F24);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_F24) && "mod_consts.const_str_plain_F24");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_144", mod_consts.const_int_pos_144);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_int_pos_144) && "mod_consts.const_int_pos_144");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NUMLOCK", mod_consts.const_str_plain_NUMLOCK);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain_NUMLOCK) && "mod_consts.const_str_plain_NUMLOCK");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_145", mod_consts.const_int_pos_145);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_int_pos_145) && "mod_consts.const_int_pos_145");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SCROLL", mod_consts.const_str_plain_SCROLL);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_plain_SCROLL) && "mod_consts.const_str_plain_SCROLL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_146", mod_consts.const_int_pos_146);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_int_pos_146) && "mod_consts.const_int_pos_146");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_NEC_EQUAL", mod_consts.const_str_plain_OEM_NEC_EQUAL);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_NEC_EQUAL) && "mod_consts.const_str_plain_OEM_NEC_EQUAL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_FJ_JISHO", mod_consts.const_str_plain_OEM_FJ_JISHO);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_FJ_JISHO) && "mod_consts.const_str_plain_OEM_FJ_JISHO");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_147", mod_consts.const_int_pos_147);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_int_pos_147) && "mod_consts.const_int_pos_147");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_FJ_MASSHOU", mod_consts.const_str_plain_OEM_FJ_MASSHOU);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_FJ_MASSHOU) && "mod_consts.const_str_plain_OEM_FJ_MASSHOU");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_148", mod_consts.const_int_pos_148);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_int_pos_148) && "mod_consts.const_int_pos_148");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_FJ_TOUROKU", mod_consts.const_str_plain_OEM_FJ_TOUROKU);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_FJ_TOUROKU) && "mod_consts.const_str_plain_OEM_FJ_TOUROKU");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_149", mod_consts.const_int_pos_149);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_int_pos_149) && "mod_consts.const_int_pos_149");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_FJ_LOYA", mod_consts.const_str_plain_OEM_FJ_LOYA);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_FJ_LOYA) && "mod_consts.const_str_plain_OEM_FJ_LOYA");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_150", mod_consts.const_int_pos_150);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_int_pos_150) && "mod_consts.const_int_pos_150");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_FJ_ROYA", mod_consts.const_str_plain_OEM_FJ_ROYA);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_FJ_ROYA) && "mod_consts.const_str_plain_OEM_FJ_ROYA");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_160", mod_consts.const_int_pos_160);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_int_pos_160) && "mod_consts.const_int_pos_160");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LSHIFT", mod_consts.const_str_plain_LSHIFT);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_plain_LSHIFT) && "mod_consts.const_str_plain_LSHIFT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_161", mod_consts.const_int_pos_161);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_int_pos_161) && "mod_consts.const_int_pos_161");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RSHIFT", mod_consts.const_str_plain_RSHIFT);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_plain_RSHIFT) && "mod_consts.const_str_plain_RSHIFT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_162", mod_consts.const_int_pos_162);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_int_pos_162) && "mod_consts.const_int_pos_162");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LCONTROL", mod_consts.const_str_plain_LCONTROL);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_plain_LCONTROL) && "mod_consts.const_str_plain_LCONTROL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_163", mod_consts.const_int_pos_163);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_int_pos_163) && "mod_consts.const_int_pos_163");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RCONTROL", mod_consts.const_str_plain_RCONTROL);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_plain_RCONTROL) && "mod_consts.const_str_plain_RCONTROL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_164", mod_consts.const_int_pos_164);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_int_pos_164) && "mod_consts.const_int_pos_164");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LMENU", mod_consts.const_str_plain_LMENU);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_plain_LMENU) && "mod_consts.const_str_plain_LMENU");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_165", mod_consts.const_int_pos_165);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_int_pos_165) && "mod_consts.const_int_pos_165");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RMENU", mod_consts.const_str_plain_RMENU);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_plain_RMENU) && "mod_consts.const_str_plain_RMENU");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_166", mod_consts.const_int_pos_166);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_int_pos_166) && "mod_consts.const_int_pos_166");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BROWSER_BACK", mod_consts.const_str_plain_BROWSER_BACK);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_plain_BROWSER_BACK) && "mod_consts.const_str_plain_BROWSER_BACK");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_167", mod_consts.const_int_pos_167);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_int_pos_167) && "mod_consts.const_int_pos_167");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BROWSER_FORWARD", mod_consts.const_str_plain_BROWSER_FORWARD);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_plain_BROWSER_FORWARD) && "mod_consts.const_str_plain_BROWSER_FORWARD");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_168", mod_consts.const_int_pos_168);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_int_pos_168) && "mod_consts.const_int_pos_168");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BROWSER_REFRESH", mod_consts.const_str_plain_BROWSER_REFRESH);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_plain_BROWSER_REFRESH) && "mod_consts.const_str_plain_BROWSER_REFRESH");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_169", mod_consts.const_int_pos_169);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_int_pos_169) && "mod_consts.const_int_pos_169");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BROWSER_STOP", mod_consts.const_str_plain_BROWSER_STOP);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_str_plain_BROWSER_STOP) && "mod_consts.const_str_plain_BROWSER_STOP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_170", mod_consts.const_int_pos_170);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_int_pos_170) && "mod_consts.const_int_pos_170");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BROWSER_SEARCH", mod_consts.const_str_plain_BROWSER_SEARCH);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_str_plain_BROWSER_SEARCH) && "mod_consts.const_str_plain_BROWSER_SEARCH");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_171", mod_consts.const_int_pos_171);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_int_pos_171) && "mod_consts.const_int_pos_171");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BROWSER_FAVORITES", mod_consts.const_str_plain_BROWSER_FAVORITES);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_str_plain_BROWSER_FAVORITES) && "mod_consts.const_str_plain_BROWSER_FAVORITES");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_172", mod_consts.const_int_pos_172);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_int_pos_172) && "mod_consts.const_int_pos_172");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BROWSER_HOME", mod_consts.const_str_plain_BROWSER_HOME);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_str_plain_BROWSER_HOME) && "mod_consts.const_str_plain_BROWSER_HOME");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_173", mod_consts.const_int_pos_173);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_int_pos_173) && "mod_consts.const_int_pos_173");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_VOLUME_MUTE", mod_consts.const_str_plain_VOLUME_MUTE);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_str_plain_VOLUME_MUTE) && "mod_consts.const_str_plain_VOLUME_MUTE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_174", mod_consts.const_int_pos_174);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_int_pos_174) && "mod_consts.const_int_pos_174");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_VOLUME_DOWN", mod_consts.const_str_plain_VOLUME_DOWN);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_str_plain_VOLUME_DOWN) && "mod_consts.const_str_plain_VOLUME_DOWN");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_175", mod_consts.const_int_pos_175);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_int_pos_175) && "mod_consts.const_int_pos_175");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_VOLUME_UP", mod_consts.const_str_plain_VOLUME_UP);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_str_plain_VOLUME_UP) && "mod_consts.const_str_plain_VOLUME_UP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_176", mod_consts.const_int_pos_176);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_int_pos_176) && "mod_consts.const_int_pos_176");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MEDIA_NEXT_TRACK", mod_consts.const_str_plain_MEDIA_NEXT_TRACK);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_str_plain_MEDIA_NEXT_TRACK) && "mod_consts.const_str_plain_MEDIA_NEXT_TRACK");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_177", mod_consts.const_int_pos_177);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_int_pos_177) && "mod_consts.const_int_pos_177");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MEDIA_PREV_TRACK", mod_consts.const_str_plain_MEDIA_PREV_TRACK);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_str_plain_MEDIA_PREV_TRACK) && "mod_consts.const_str_plain_MEDIA_PREV_TRACK");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_178", mod_consts.const_int_pos_178);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_int_pos_178) && "mod_consts.const_int_pos_178");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MEDIA_STOP", mod_consts.const_str_plain_MEDIA_STOP);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_str_plain_MEDIA_STOP) && "mod_consts.const_str_plain_MEDIA_STOP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_179", mod_consts.const_int_pos_179);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_int_pos_179) && "mod_consts.const_int_pos_179");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MEDIA_PLAY_PAUSE", mod_consts.const_str_plain_MEDIA_PLAY_PAUSE);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_str_plain_MEDIA_PLAY_PAUSE) && "mod_consts.const_str_plain_MEDIA_PLAY_PAUSE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_180", mod_consts.const_int_pos_180);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_int_pos_180) && "mod_consts.const_int_pos_180");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LAUNCH_MAIL", mod_consts.const_str_plain_LAUNCH_MAIL);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_str_plain_LAUNCH_MAIL) && "mod_consts.const_str_plain_LAUNCH_MAIL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_181", mod_consts.const_int_pos_181);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_int_pos_181) && "mod_consts.const_int_pos_181");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LAUNCH_MEDIA_SELECT", mod_consts.const_str_plain_LAUNCH_MEDIA_SELECT);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_str_plain_LAUNCH_MEDIA_SELECT) && "mod_consts.const_str_plain_LAUNCH_MEDIA_SELECT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_182", mod_consts.const_int_pos_182);
assert(mod_consts_hash[231] == DEEP_HASH(tstate, mod_consts.const_int_pos_182) && "mod_consts.const_int_pos_182");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LAUNCH_APP1", mod_consts.const_str_plain_LAUNCH_APP1);
assert(mod_consts_hash[232] == DEEP_HASH(tstate, mod_consts.const_str_plain_LAUNCH_APP1) && "mod_consts.const_str_plain_LAUNCH_APP1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_183", mod_consts.const_int_pos_183);
assert(mod_consts_hash[233] == DEEP_HASH(tstate, mod_consts.const_int_pos_183) && "mod_consts.const_int_pos_183");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LAUNCH_APP2", mod_consts.const_str_plain_LAUNCH_APP2);
assert(mod_consts_hash[234] == DEEP_HASH(tstate, mod_consts.const_str_plain_LAUNCH_APP2) && "mod_consts.const_str_plain_LAUNCH_APP2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_186", mod_consts.const_int_pos_186);
assert(mod_consts_hash[235] == DEEP_HASH(tstate, mod_consts.const_int_pos_186) && "mod_consts.const_int_pos_186");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_1", mod_consts.const_str_plain_OEM_1);
assert(mod_consts_hash[236] == DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_1) && "mod_consts.const_str_plain_OEM_1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_187", mod_consts.const_int_pos_187);
assert(mod_consts_hash[237] == DEEP_HASH(tstate, mod_consts.const_int_pos_187) && "mod_consts.const_int_pos_187");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_PLUS", mod_consts.const_str_plain_OEM_PLUS);
assert(mod_consts_hash[238] == DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_PLUS) && "mod_consts.const_str_plain_OEM_PLUS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_188", mod_consts.const_int_pos_188);
assert(mod_consts_hash[239] == DEEP_HASH(tstate, mod_consts.const_int_pos_188) && "mod_consts.const_int_pos_188");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_COMMA", mod_consts.const_str_plain_OEM_COMMA);
assert(mod_consts_hash[240] == DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_COMMA) && "mod_consts.const_str_plain_OEM_COMMA");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_189", mod_consts.const_int_pos_189);
assert(mod_consts_hash[241] == DEEP_HASH(tstate, mod_consts.const_int_pos_189) && "mod_consts.const_int_pos_189");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_MINUS", mod_consts.const_str_plain_OEM_MINUS);
assert(mod_consts_hash[242] == DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_MINUS) && "mod_consts.const_str_plain_OEM_MINUS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_190", mod_consts.const_int_pos_190);
assert(mod_consts_hash[243] == DEEP_HASH(tstate, mod_consts.const_int_pos_190) && "mod_consts.const_int_pos_190");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_PERIOD", mod_consts.const_str_plain_OEM_PERIOD);
assert(mod_consts_hash[244] == DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_PERIOD) && "mod_consts.const_str_plain_OEM_PERIOD");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_191", mod_consts.const_int_pos_191);
assert(mod_consts_hash[245] == DEEP_HASH(tstate, mod_consts.const_int_pos_191) && "mod_consts.const_int_pos_191");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_2", mod_consts.const_str_plain_OEM_2);
assert(mod_consts_hash[246] == DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_2) && "mod_consts.const_str_plain_OEM_2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_192", mod_consts.const_int_pos_192);
assert(mod_consts_hash[247] == DEEP_HASH(tstate, mod_consts.const_int_pos_192) && "mod_consts.const_int_pos_192");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_3", mod_consts.const_str_plain_OEM_3);
assert(mod_consts_hash[248] == DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_3) && "mod_consts.const_str_plain_OEM_3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_219", mod_consts.const_int_pos_219);
assert(mod_consts_hash[249] == DEEP_HASH(tstate, mod_consts.const_int_pos_219) && "mod_consts.const_int_pos_219");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_4", mod_consts.const_str_plain_OEM_4);
assert(mod_consts_hash[250] == DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_4) && "mod_consts.const_str_plain_OEM_4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_220", mod_consts.const_int_pos_220);
assert(mod_consts_hash[251] == DEEP_HASH(tstate, mod_consts.const_int_pos_220) && "mod_consts.const_int_pos_220");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_5", mod_consts.const_str_plain_OEM_5);
assert(mod_consts_hash[252] == DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_5) && "mod_consts.const_str_plain_OEM_5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_221", mod_consts.const_int_pos_221);
assert(mod_consts_hash[253] == DEEP_HASH(tstate, mod_consts.const_int_pos_221) && "mod_consts.const_int_pos_221");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_6", mod_consts.const_str_plain_OEM_6);
assert(mod_consts_hash[254] == DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_6) && "mod_consts.const_str_plain_OEM_6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_222", mod_consts.const_int_pos_222);
assert(mod_consts_hash[255] == DEEP_HASH(tstate, mod_consts.const_int_pos_222) && "mod_consts.const_int_pos_222");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_7", mod_consts.const_str_plain_OEM_7);
assert(mod_consts_hash[256] == DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_7) && "mod_consts.const_str_plain_OEM_7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_223", mod_consts.const_int_pos_223);
assert(mod_consts_hash[257] == DEEP_HASH(tstate, mod_consts.const_int_pos_223) && "mod_consts.const_int_pos_223");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_8", mod_consts.const_str_plain_OEM_8);
assert(mod_consts_hash[258] == DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_8) && "mod_consts.const_str_plain_OEM_8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_225", mod_consts.const_int_pos_225);
assert(mod_consts_hash[259] == DEEP_HASH(tstate, mod_consts.const_int_pos_225) && "mod_consts.const_int_pos_225");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_AX", mod_consts.const_str_plain_OEM_AX);
assert(mod_consts_hash[260] == DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_AX) && "mod_consts.const_str_plain_OEM_AX");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_226", mod_consts.const_int_pos_226);
assert(mod_consts_hash[261] == DEEP_HASH(tstate, mod_consts.const_int_pos_226) && "mod_consts.const_int_pos_226");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_102", mod_consts.const_str_plain_OEM_102);
assert(mod_consts_hash[262] == DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_102) && "mod_consts.const_str_plain_OEM_102");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_227", mod_consts.const_int_pos_227);
assert(mod_consts_hash[263] == DEEP_HASH(tstate, mod_consts.const_int_pos_227) && "mod_consts.const_int_pos_227");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ICO_HELP", mod_consts.const_str_plain_ICO_HELP);
assert(mod_consts_hash[264] == DEEP_HASH(tstate, mod_consts.const_str_plain_ICO_HELP) && "mod_consts.const_str_plain_ICO_HELP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_228", mod_consts.const_int_pos_228);
assert(mod_consts_hash[265] == DEEP_HASH(tstate, mod_consts.const_int_pos_228) && "mod_consts.const_int_pos_228");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ICO_00", mod_consts.const_str_plain_ICO_00);
assert(mod_consts_hash[266] == DEEP_HASH(tstate, mod_consts.const_str_plain_ICO_00) && "mod_consts.const_str_plain_ICO_00");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_229", mod_consts.const_int_pos_229);
assert(mod_consts_hash[267] == DEEP_HASH(tstate, mod_consts.const_int_pos_229) && "mod_consts.const_int_pos_229");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PROCESSKEY", mod_consts.const_str_plain_PROCESSKEY);
assert(mod_consts_hash[268] == DEEP_HASH(tstate, mod_consts.const_str_plain_PROCESSKEY) && "mod_consts.const_str_plain_PROCESSKEY");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_230", mod_consts.const_int_pos_230);
assert(mod_consts_hash[269] == DEEP_HASH(tstate, mod_consts.const_int_pos_230) && "mod_consts.const_int_pos_230");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ICO_CLEAR", mod_consts.const_str_plain_ICO_CLEAR);
assert(mod_consts_hash[270] == DEEP_HASH(tstate, mod_consts.const_str_plain_ICO_CLEAR) && "mod_consts.const_str_plain_ICO_CLEAR");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_231", mod_consts.const_int_pos_231);
assert(mod_consts_hash[271] == DEEP_HASH(tstate, mod_consts.const_int_pos_231) && "mod_consts.const_int_pos_231");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PACKET", mod_consts.const_str_plain_PACKET);
assert(mod_consts_hash[272] == DEEP_HASH(tstate, mod_consts.const_str_plain_PACKET) && "mod_consts.const_str_plain_PACKET");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_233", mod_consts.const_int_pos_233);
assert(mod_consts_hash[273] == DEEP_HASH(tstate, mod_consts.const_int_pos_233) && "mod_consts.const_int_pos_233");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_RESET", mod_consts.const_str_plain_OEM_RESET);
assert(mod_consts_hash[274] == DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_RESET) && "mod_consts.const_str_plain_OEM_RESET");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_234", mod_consts.const_int_pos_234);
assert(mod_consts_hash[275] == DEEP_HASH(tstate, mod_consts.const_int_pos_234) && "mod_consts.const_int_pos_234");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_JUMP", mod_consts.const_str_plain_OEM_JUMP);
assert(mod_consts_hash[276] == DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_JUMP) && "mod_consts.const_str_plain_OEM_JUMP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_235", mod_consts.const_int_pos_235);
assert(mod_consts_hash[277] == DEEP_HASH(tstate, mod_consts.const_int_pos_235) && "mod_consts.const_int_pos_235");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_PA1", mod_consts.const_str_plain_OEM_PA1);
assert(mod_consts_hash[278] == DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_PA1) && "mod_consts.const_str_plain_OEM_PA1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_236", mod_consts.const_int_pos_236);
assert(mod_consts_hash[279] == DEEP_HASH(tstate, mod_consts.const_int_pos_236) && "mod_consts.const_int_pos_236");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_PA2", mod_consts.const_str_plain_OEM_PA2);
assert(mod_consts_hash[280] == DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_PA2) && "mod_consts.const_str_plain_OEM_PA2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_237", mod_consts.const_int_pos_237);
assert(mod_consts_hash[281] == DEEP_HASH(tstate, mod_consts.const_int_pos_237) && "mod_consts.const_int_pos_237");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_PA3", mod_consts.const_str_plain_OEM_PA3);
assert(mod_consts_hash[282] == DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_PA3) && "mod_consts.const_str_plain_OEM_PA3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_238", mod_consts.const_int_pos_238);
assert(mod_consts_hash[283] == DEEP_HASH(tstate, mod_consts.const_int_pos_238) && "mod_consts.const_int_pos_238");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_WSCTRL", mod_consts.const_str_plain_OEM_WSCTRL);
assert(mod_consts_hash[284] == DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_WSCTRL) && "mod_consts.const_str_plain_OEM_WSCTRL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_239", mod_consts.const_int_pos_239);
assert(mod_consts_hash[285] == DEEP_HASH(tstate, mod_consts.const_int_pos_239) && "mod_consts.const_int_pos_239");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_CUSEL", mod_consts.const_str_plain_OEM_CUSEL);
assert(mod_consts_hash[286] == DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_CUSEL) && "mod_consts.const_str_plain_OEM_CUSEL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_240", mod_consts.const_int_pos_240);
assert(mod_consts_hash[287] == DEEP_HASH(tstate, mod_consts.const_int_pos_240) && "mod_consts.const_int_pos_240");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_ATTN", mod_consts.const_str_plain_OEM_ATTN);
assert(mod_consts_hash[288] == DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_ATTN) && "mod_consts.const_str_plain_OEM_ATTN");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_241", mod_consts.const_int_pos_241);
assert(mod_consts_hash[289] == DEEP_HASH(tstate, mod_consts.const_int_pos_241) && "mod_consts.const_int_pos_241");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_FINISH", mod_consts.const_str_plain_OEM_FINISH);
assert(mod_consts_hash[290] == DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_FINISH) && "mod_consts.const_str_plain_OEM_FINISH");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_242", mod_consts.const_int_pos_242);
assert(mod_consts_hash[291] == DEEP_HASH(tstate, mod_consts.const_int_pos_242) && "mod_consts.const_int_pos_242");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_COPY", mod_consts.const_str_plain_OEM_COPY);
assert(mod_consts_hash[292] == DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_COPY) && "mod_consts.const_str_plain_OEM_COPY");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_243", mod_consts.const_int_pos_243);
assert(mod_consts_hash[293] == DEEP_HASH(tstate, mod_consts.const_int_pos_243) && "mod_consts.const_int_pos_243");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_AUTO", mod_consts.const_str_plain_OEM_AUTO);
assert(mod_consts_hash[294] == DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_AUTO) && "mod_consts.const_str_plain_OEM_AUTO");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_244", mod_consts.const_int_pos_244);
assert(mod_consts_hash[295] == DEEP_HASH(tstate, mod_consts.const_int_pos_244) && "mod_consts.const_int_pos_244");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_ENLW", mod_consts.const_str_plain_OEM_ENLW);
assert(mod_consts_hash[296] == DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_ENLW) && "mod_consts.const_str_plain_OEM_ENLW");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_245", mod_consts.const_int_pos_245);
assert(mod_consts_hash[297] == DEEP_HASH(tstate, mod_consts.const_int_pos_245) && "mod_consts.const_int_pos_245");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_BACKTAB", mod_consts.const_str_plain_OEM_BACKTAB);
assert(mod_consts_hash[298] == DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_BACKTAB) && "mod_consts.const_str_plain_OEM_BACKTAB");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_246", mod_consts.const_int_pos_246);
assert(mod_consts_hash[299] == DEEP_HASH(tstate, mod_consts.const_int_pos_246) && "mod_consts.const_int_pos_246");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ATTN", mod_consts.const_str_plain_ATTN);
assert(mod_consts_hash[300] == DEEP_HASH(tstate, mod_consts.const_str_plain_ATTN) && "mod_consts.const_str_plain_ATTN");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_247", mod_consts.const_int_pos_247);
assert(mod_consts_hash[301] == DEEP_HASH(tstate, mod_consts.const_int_pos_247) && "mod_consts.const_int_pos_247");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CRSEL", mod_consts.const_str_plain_CRSEL);
assert(mod_consts_hash[302] == DEEP_HASH(tstate, mod_consts.const_str_plain_CRSEL) && "mod_consts.const_str_plain_CRSEL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_248", mod_consts.const_int_pos_248);
assert(mod_consts_hash[303] == DEEP_HASH(tstate, mod_consts.const_int_pos_248) && "mod_consts.const_int_pos_248");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EXSEL", mod_consts.const_str_plain_EXSEL);
assert(mod_consts_hash[304] == DEEP_HASH(tstate, mod_consts.const_str_plain_EXSEL) && "mod_consts.const_str_plain_EXSEL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_249", mod_consts.const_int_pos_249);
assert(mod_consts_hash[305] == DEEP_HASH(tstate, mod_consts.const_int_pos_249) && "mod_consts.const_int_pos_249");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EREOF", mod_consts.const_str_plain_EREOF);
assert(mod_consts_hash[306] == DEEP_HASH(tstate, mod_consts.const_str_plain_EREOF) && "mod_consts.const_str_plain_EREOF");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_250", mod_consts.const_int_pos_250);
assert(mod_consts_hash[307] == DEEP_HASH(tstate, mod_consts.const_int_pos_250) && "mod_consts.const_int_pos_250");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PLAY", mod_consts.const_str_plain_PLAY);
assert(mod_consts_hash[308] == DEEP_HASH(tstate, mod_consts.const_str_plain_PLAY) && "mod_consts.const_str_plain_PLAY");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_251", mod_consts.const_int_pos_251);
assert(mod_consts_hash[309] == DEEP_HASH(tstate, mod_consts.const_int_pos_251) && "mod_consts.const_int_pos_251");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ZOOM", mod_consts.const_str_plain_ZOOM);
assert(mod_consts_hash[310] == DEEP_HASH(tstate, mod_consts.const_str_plain_ZOOM) && "mod_consts.const_str_plain_ZOOM");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_252", mod_consts.const_int_pos_252);
assert(mod_consts_hash[311] == DEEP_HASH(tstate, mod_consts.const_int_pos_252) && "mod_consts.const_int_pos_252");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NONAME", mod_consts.const_str_plain_NONAME);
assert(mod_consts_hash[312] == DEEP_HASH(tstate, mod_consts.const_str_plain_NONAME) && "mod_consts.const_str_plain_NONAME");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_253", mod_consts.const_int_pos_253);
assert(mod_consts_hash[313] == DEEP_HASH(tstate, mod_consts.const_int_pos_253) && "mod_consts.const_int_pos_253");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PA1", mod_consts.const_str_plain_PA1);
assert(mod_consts_hash[314] == DEEP_HASH(tstate, mod_consts.const_str_plain_PA1) && "mod_consts.const_str_plain_PA1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_254", mod_consts.const_int_pos_254);
assert(mod_consts_hash[315] == DEEP_HASH(tstate, mod_consts.const_int_pos_254) && "mod_consts.const_int_pos_254");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OEM_CLEAR", mod_consts.const_str_plain_OEM_CLEAR);
assert(mod_consts_hash[316] == DEEP_HASH(tstate, mod_consts.const_str_plain_OEM_CLEAR) && "mod_consts.const_str_plain_OEM_CLEAR");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_78f9d7956c153c08453bbbf8ff77ceb7", mod_consts.const_str_digest_78f9d7956c153c08453bbbf8ff77ceb7);
assert(mod_consts_hash[317] == DEEP_HASH(tstate, mod_consts.const_str_digest_78f9d7956c153c08453bbbf8ff77ceb7) && "mod_consts.const_str_digest_78f9d7956c153c08453bbbf8ff77ceb7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bc8dd84fb88bd7ef0620e10d7ad95d5b", mod_consts.const_str_digest_bc8dd84fb88bd7ef0620e10d7ad95d5b);
assert(mod_consts_hash[318] == DEEP_HASH(tstate, mod_consts.const_str_digest_bc8dd84fb88bd7ef0620e10d7ad95d5b) && "mod_consts.const_str_digest_bc8dd84fb88bd7ef0620e10d7ad95d5b");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 1
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
static PyObject *module_var_accessor_pynput$_util$win32_vks$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$_util$win32_vks->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$_util$win32_vks->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$_util$win32_vks->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_eb3b727ae07e7f038d4a25737ea5c5b5;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_78f9d7956c153c08453bbbf8ff77ceb7); CHECK_OBJECT(module_filename_obj);
code_objects_eb3b727ae07e7f038d4a25737ea5c5b5 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_bc8dd84fb88bd7ef0620e10d7ad95d5b, mod_consts.const_str_digest_bc8dd84fb88bd7ef0620e10d7ad95d5b, NULL, NULL, 0, 0, 0);
}
#endif

// The module function declarations.


// The module function definitions.


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

static function_impl_code const function_table_pynput$_util$win32_vks[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_pynput$_util$win32_vks);
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
        module_pynput$_util$win32_vks,
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
        function_table_pynput$_util$win32_vks,
        sizeof(function_table_pynput$_util$win32_vks) / sizeof(function_impl_code)
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
static char const *module_full_name = "pynput._util.win32_vks";
#endif

// Internal entry point for module code.
PyObject *module_code_pynput$_util$win32_vks(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pynput$_util$win32_vks");

    // Store the module for future use.
    module_pynput$_util$win32_vks = module;

    moduledict_pynput$_util$win32_vks = MODULE_DICT(module_pynput$_util$win32_vks);

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
        PRINT_STRING("pynput$_util$win32_vks: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("pynput$_util$win32_vks: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pynput$_util$win32_vks: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "pynput._util.win32_vks" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initpynput$_util$win32_vks\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_pynput$_util$win32_vks,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pynput$_util$win32_vks,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pynput$_util$win32_vks,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pynput$_util$win32_vks,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pynput$_util$win32_vks,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pynput$_util$win32_vks);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pynput$_util$win32_vks);
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

        UPDATE_STRING_DICT1(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_pynput$_util$win32_vks;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_pynput$_util$win32_vks = MAKE_MODULE_FRAME(code_objects_eb3b727ae07e7f038d4a25737ea5c5b5, module_pynput$_util$win32_vks);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$_util$win32_vks);
assert(Py_REFCNT(frame_frame_pynput$_util$win32_vks) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_pynput$_util$win32_vks$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_pynput$_util$win32_vks$__spec__(tstate);
assert(!(tmp_ass_attr_target_2 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain_has_location, tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$_util$win32_vks, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$_util$win32_vks->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$_util$win32_vks, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_pynput$_util$win32_vks);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = Py_None;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = const_int_pos_1;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_LBUTTON, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = mod_consts.const_int_pos_2;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_RBUTTON, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = mod_consts.const_int_pos_3;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_CANCEL, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = mod_consts.const_int_pos_4;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_MBUTTON, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = mod_consts.const_int_pos_5;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_XBUTTON1, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = mod_consts.const_int_pos_6;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_XBUTTON2, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = mod_consts.const_int_pos_8;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_BACK, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = mod_consts.const_int_pos_9;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_TAB, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = mod_consts.const_int_pos_12;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_CLEAR, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = mod_consts.const_int_pos_13;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_RETURN, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = mod_consts.const_int_pos_16;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_SHIFT, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = mod_consts.const_int_pos_17;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_CONTROL, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = mod_consts.const_int_pos_18;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_MENU, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = mod_consts.const_int_pos_19;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_PAUSE, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = mod_consts.const_int_pos_20;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_CAPITAL, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = mod_consts.const_int_pos_21;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_KANA, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = mod_consts.const_int_pos_21;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_HANGEUL, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = mod_consts.const_int_pos_21;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_HANGUL, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = mod_consts.const_int_pos_23;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_JUNJA, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = mod_consts.const_int_pos_24;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_FINAL, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = mod_consts.const_int_pos_25;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_HANJA, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = mod_consts.const_int_pos_25;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_KANJI, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = mod_consts.const_int_pos_27;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_ESCAPE, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = mod_consts.const_int_pos_28;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_CONVERT, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = mod_consts.const_int_pos_29;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_NONCONVERT, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = mod_consts.const_int_pos_30;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_ACCEPT, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
tmp_assign_source_31 = mod_consts.const_int_pos_31;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_MODECHANGE, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
tmp_assign_source_32 = mod_consts.const_int_pos_32;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_SPACE, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
tmp_assign_source_33 = mod_consts.const_int_pos_33;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_PRIOR, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
tmp_assign_source_34 = mod_consts.const_int_pos_34;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_NEXT, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
tmp_assign_source_35 = mod_consts.const_int_pos_35;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_END, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
tmp_assign_source_36 = mod_consts.const_int_pos_36;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_HOME, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
tmp_assign_source_37 = mod_consts.const_int_pos_37;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_LEFT, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
tmp_assign_source_38 = mod_consts.const_int_pos_38;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_UP, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
tmp_assign_source_39 = mod_consts.const_int_pos_39;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_RIGHT, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
tmp_assign_source_40 = mod_consts.const_int_pos_40;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_DOWN, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = mod_consts.const_int_pos_41;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_SELECT, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
tmp_assign_source_42 = mod_consts.const_int_pos_42;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_PRINT, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
tmp_assign_source_43 = mod_consts.const_int_pos_43;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_EXECUTE, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
tmp_assign_source_44 = mod_consts.const_int_pos_44;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_SNAPSHOT, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
tmp_assign_source_45 = mod_consts.const_int_pos_45;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_INSERT, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
tmp_assign_source_46 = mod_consts.const_int_pos_46;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_DELETE, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
tmp_assign_source_47 = mod_consts.const_int_pos_47;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_HELP, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
tmp_assign_source_48 = mod_consts.const_int_pos_91;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_LWIN, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;
tmp_assign_source_49 = mod_consts.const_int_pos_92;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_RWIN, tmp_assign_source_49);
}
{
PyObject *tmp_assign_source_50;
tmp_assign_source_50 = mod_consts.const_int_pos_93;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_APPS, tmp_assign_source_50);
}
{
PyObject *tmp_assign_source_51;
tmp_assign_source_51 = mod_consts.const_int_pos_95;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_SLEEP, tmp_assign_source_51);
}
{
PyObject *tmp_assign_source_52;
tmp_assign_source_52 = mod_consts.const_int_pos_96;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_NUMPAD0, tmp_assign_source_52);
}
{
PyObject *tmp_assign_source_53;
tmp_assign_source_53 = mod_consts.const_int_pos_97;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_NUMPAD1, tmp_assign_source_53);
}
{
PyObject *tmp_assign_source_54;
tmp_assign_source_54 = mod_consts.const_int_pos_98;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_NUMPAD2, tmp_assign_source_54);
}
{
PyObject *tmp_assign_source_55;
tmp_assign_source_55 = mod_consts.const_int_pos_99;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_NUMPAD3, tmp_assign_source_55);
}
{
PyObject *tmp_assign_source_56;
tmp_assign_source_56 = mod_consts.const_int_pos_100;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_NUMPAD4, tmp_assign_source_56);
}
{
PyObject *tmp_assign_source_57;
tmp_assign_source_57 = mod_consts.const_int_pos_101;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_NUMPAD5, tmp_assign_source_57);
}
{
PyObject *tmp_assign_source_58;
tmp_assign_source_58 = mod_consts.const_int_pos_102;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_NUMPAD6, tmp_assign_source_58);
}
{
PyObject *tmp_assign_source_59;
tmp_assign_source_59 = mod_consts.const_int_pos_103;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_NUMPAD7, tmp_assign_source_59);
}
{
PyObject *tmp_assign_source_60;
tmp_assign_source_60 = mod_consts.const_int_pos_104;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_NUMPAD8, tmp_assign_source_60);
}
{
PyObject *tmp_assign_source_61;
tmp_assign_source_61 = mod_consts.const_int_pos_105;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_NUMPAD9, tmp_assign_source_61);
}
{
PyObject *tmp_assign_source_62;
tmp_assign_source_62 = mod_consts.const_int_pos_106;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_MULTIPLY, tmp_assign_source_62);
}
{
PyObject *tmp_assign_source_63;
tmp_assign_source_63 = mod_consts.const_int_pos_107;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_ADD, tmp_assign_source_63);
}
{
PyObject *tmp_assign_source_64;
tmp_assign_source_64 = mod_consts.const_int_pos_108;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_SEPARATOR, tmp_assign_source_64);
}
{
PyObject *tmp_assign_source_65;
tmp_assign_source_65 = mod_consts.const_int_pos_109;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_SUBTRACT, tmp_assign_source_65);
}
{
PyObject *tmp_assign_source_66;
tmp_assign_source_66 = mod_consts.const_int_pos_110;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_DECIMAL, tmp_assign_source_66);
}
{
PyObject *tmp_assign_source_67;
tmp_assign_source_67 = mod_consts.const_int_pos_111;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_DIVIDE, tmp_assign_source_67);
}
{
PyObject *tmp_assign_source_68;
tmp_assign_source_68 = mod_consts.const_int_pos_112;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_F1, tmp_assign_source_68);
}
{
PyObject *tmp_assign_source_69;
tmp_assign_source_69 = mod_consts.const_int_pos_113;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_F2, tmp_assign_source_69);
}
{
PyObject *tmp_assign_source_70;
tmp_assign_source_70 = mod_consts.const_int_pos_114;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_F3, tmp_assign_source_70);
}
{
PyObject *tmp_assign_source_71;
tmp_assign_source_71 = mod_consts.const_int_pos_115;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_F4, tmp_assign_source_71);
}
{
PyObject *tmp_assign_source_72;
tmp_assign_source_72 = mod_consts.const_int_pos_116;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_F5, tmp_assign_source_72);
}
{
PyObject *tmp_assign_source_73;
tmp_assign_source_73 = mod_consts.const_int_pos_117;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_F6, tmp_assign_source_73);
}
{
PyObject *tmp_assign_source_74;
tmp_assign_source_74 = mod_consts.const_int_pos_118;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_F7, tmp_assign_source_74);
}
{
PyObject *tmp_assign_source_75;
tmp_assign_source_75 = mod_consts.const_int_pos_119;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_F8, tmp_assign_source_75);
}
{
PyObject *tmp_assign_source_76;
tmp_assign_source_76 = mod_consts.const_int_pos_120;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_F9, tmp_assign_source_76);
}
{
PyObject *tmp_assign_source_77;
tmp_assign_source_77 = mod_consts.const_int_pos_121;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_F10, tmp_assign_source_77);
}
{
PyObject *tmp_assign_source_78;
tmp_assign_source_78 = mod_consts.const_int_pos_122;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_F11, tmp_assign_source_78);
}
{
PyObject *tmp_assign_source_79;
tmp_assign_source_79 = mod_consts.const_int_pos_123;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_F12, tmp_assign_source_79);
}
{
PyObject *tmp_assign_source_80;
tmp_assign_source_80 = mod_consts.const_int_pos_124;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_F13, tmp_assign_source_80);
}
{
PyObject *tmp_assign_source_81;
tmp_assign_source_81 = mod_consts.const_int_pos_125;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_F14, tmp_assign_source_81);
}
{
PyObject *tmp_assign_source_82;
tmp_assign_source_82 = mod_consts.const_int_pos_126;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_F15, tmp_assign_source_82);
}
{
PyObject *tmp_assign_source_83;
tmp_assign_source_83 = mod_consts.const_int_pos_127;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_F16, tmp_assign_source_83);
}
{
PyObject *tmp_assign_source_84;
tmp_assign_source_84 = mod_consts.const_int_pos_128;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_F17, tmp_assign_source_84);
}
{
PyObject *tmp_assign_source_85;
tmp_assign_source_85 = mod_consts.const_int_pos_129;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_F18, tmp_assign_source_85);
}
{
PyObject *tmp_assign_source_86;
tmp_assign_source_86 = mod_consts.const_int_pos_130;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_F19, tmp_assign_source_86);
}
{
PyObject *tmp_assign_source_87;
tmp_assign_source_87 = mod_consts.const_int_pos_131;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_F20, tmp_assign_source_87);
}
{
PyObject *tmp_assign_source_88;
tmp_assign_source_88 = mod_consts.const_int_pos_132;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_F21, tmp_assign_source_88);
}
{
PyObject *tmp_assign_source_89;
tmp_assign_source_89 = mod_consts.const_int_pos_133;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_F22, tmp_assign_source_89);
}
{
PyObject *tmp_assign_source_90;
tmp_assign_source_90 = mod_consts.const_int_pos_134;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_F23, tmp_assign_source_90);
}
{
PyObject *tmp_assign_source_91;
tmp_assign_source_91 = mod_consts.const_int_pos_135;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_F24, tmp_assign_source_91);
}
{
PyObject *tmp_assign_source_92;
tmp_assign_source_92 = mod_consts.const_int_pos_144;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_NUMLOCK, tmp_assign_source_92);
}
{
PyObject *tmp_assign_source_93;
tmp_assign_source_93 = mod_consts.const_int_pos_145;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_SCROLL, tmp_assign_source_93);
}
{
PyObject *tmp_assign_source_94;
tmp_assign_source_94 = mod_consts.const_int_pos_146;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_OEM_NEC_EQUAL, tmp_assign_source_94);
}
{
PyObject *tmp_assign_source_95;
tmp_assign_source_95 = mod_consts.const_int_pos_146;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_OEM_FJ_JISHO, tmp_assign_source_95);
}
{
PyObject *tmp_assign_source_96;
tmp_assign_source_96 = mod_consts.const_int_pos_147;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_OEM_FJ_MASSHOU, tmp_assign_source_96);
}
{
PyObject *tmp_assign_source_97;
tmp_assign_source_97 = mod_consts.const_int_pos_148;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_OEM_FJ_TOUROKU, tmp_assign_source_97);
}
{
PyObject *tmp_assign_source_98;
tmp_assign_source_98 = mod_consts.const_int_pos_149;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_OEM_FJ_LOYA, tmp_assign_source_98);
}
{
PyObject *tmp_assign_source_99;
tmp_assign_source_99 = mod_consts.const_int_pos_150;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_OEM_FJ_ROYA, tmp_assign_source_99);
}
{
PyObject *tmp_assign_source_100;
tmp_assign_source_100 = mod_consts.const_int_pos_160;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_LSHIFT, tmp_assign_source_100);
}
{
PyObject *tmp_assign_source_101;
tmp_assign_source_101 = mod_consts.const_int_pos_161;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_RSHIFT, tmp_assign_source_101);
}
{
PyObject *tmp_assign_source_102;
tmp_assign_source_102 = mod_consts.const_int_pos_162;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_LCONTROL, tmp_assign_source_102);
}
{
PyObject *tmp_assign_source_103;
tmp_assign_source_103 = mod_consts.const_int_pos_163;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_RCONTROL, tmp_assign_source_103);
}
{
PyObject *tmp_assign_source_104;
tmp_assign_source_104 = mod_consts.const_int_pos_164;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_LMENU, tmp_assign_source_104);
}
{
PyObject *tmp_assign_source_105;
tmp_assign_source_105 = mod_consts.const_int_pos_165;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_RMENU, tmp_assign_source_105);
}
{
PyObject *tmp_assign_source_106;
tmp_assign_source_106 = mod_consts.const_int_pos_166;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_BROWSER_BACK, tmp_assign_source_106);
}
{
PyObject *tmp_assign_source_107;
tmp_assign_source_107 = mod_consts.const_int_pos_167;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_BROWSER_FORWARD, tmp_assign_source_107);
}
{
PyObject *tmp_assign_source_108;
tmp_assign_source_108 = mod_consts.const_int_pos_168;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_BROWSER_REFRESH, tmp_assign_source_108);
}
{
PyObject *tmp_assign_source_109;
tmp_assign_source_109 = mod_consts.const_int_pos_169;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_BROWSER_STOP, tmp_assign_source_109);
}
{
PyObject *tmp_assign_source_110;
tmp_assign_source_110 = mod_consts.const_int_pos_170;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_BROWSER_SEARCH, tmp_assign_source_110);
}
{
PyObject *tmp_assign_source_111;
tmp_assign_source_111 = mod_consts.const_int_pos_171;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_BROWSER_FAVORITES, tmp_assign_source_111);
}
{
PyObject *tmp_assign_source_112;
tmp_assign_source_112 = mod_consts.const_int_pos_172;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_BROWSER_HOME, tmp_assign_source_112);
}
{
PyObject *tmp_assign_source_113;
tmp_assign_source_113 = mod_consts.const_int_pos_173;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_VOLUME_MUTE, tmp_assign_source_113);
}
{
PyObject *tmp_assign_source_114;
tmp_assign_source_114 = mod_consts.const_int_pos_174;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_VOLUME_DOWN, tmp_assign_source_114);
}
{
PyObject *tmp_assign_source_115;
tmp_assign_source_115 = mod_consts.const_int_pos_175;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_VOLUME_UP, tmp_assign_source_115);
}
{
PyObject *tmp_assign_source_116;
tmp_assign_source_116 = mod_consts.const_int_pos_176;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_MEDIA_NEXT_TRACK, tmp_assign_source_116);
}
{
PyObject *tmp_assign_source_117;
tmp_assign_source_117 = mod_consts.const_int_pos_177;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_MEDIA_PREV_TRACK, tmp_assign_source_117);
}
{
PyObject *tmp_assign_source_118;
tmp_assign_source_118 = mod_consts.const_int_pos_178;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_MEDIA_STOP, tmp_assign_source_118);
}
{
PyObject *tmp_assign_source_119;
tmp_assign_source_119 = mod_consts.const_int_pos_179;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_MEDIA_PLAY_PAUSE, tmp_assign_source_119);
}
{
PyObject *tmp_assign_source_120;
tmp_assign_source_120 = mod_consts.const_int_pos_180;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_LAUNCH_MAIL, tmp_assign_source_120);
}
{
PyObject *tmp_assign_source_121;
tmp_assign_source_121 = mod_consts.const_int_pos_181;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_LAUNCH_MEDIA_SELECT, tmp_assign_source_121);
}
{
PyObject *tmp_assign_source_122;
tmp_assign_source_122 = mod_consts.const_int_pos_182;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_LAUNCH_APP1, tmp_assign_source_122);
}
{
PyObject *tmp_assign_source_123;
tmp_assign_source_123 = mod_consts.const_int_pos_183;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_LAUNCH_APP2, tmp_assign_source_123);
}
{
PyObject *tmp_assign_source_124;
tmp_assign_source_124 = mod_consts.const_int_pos_186;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_OEM_1, tmp_assign_source_124);
}
{
PyObject *tmp_assign_source_125;
tmp_assign_source_125 = mod_consts.const_int_pos_187;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_OEM_PLUS, tmp_assign_source_125);
}
{
PyObject *tmp_assign_source_126;
tmp_assign_source_126 = mod_consts.const_int_pos_188;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_OEM_COMMA, tmp_assign_source_126);
}
{
PyObject *tmp_assign_source_127;
tmp_assign_source_127 = mod_consts.const_int_pos_189;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_OEM_MINUS, tmp_assign_source_127);
}
{
PyObject *tmp_assign_source_128;
tmp_assign_source_128 = mod_consts.const_int_pos_190;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_OEM_PERIOD, tmp_assign_source_128);
}
{
PyObject *tmp_assign_source_129;
tmp_assign_source_129 = mod_consts.const_int_pos_191;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_OEM_2, tmp_assign_source_129);
}
{
PyObject *tmp_assign_source_130;
tmp_assign_source_130 = mod_consts.const_int_pos_192;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_OEM_3, tmp_assign_source_130);
}
{
PyObject *tmp_assign_source_131;
tmp_assign_source_131 = mod_consts.const_int_pos_219;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_OEM_4, tmp_assign_source_131);
}
{
PyObject *tmp_assign_source_132;
tmp_assign_source_132 = mod_consts.const_int_pos_220;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_OEM_5, tmp_assign_source_132);
}
{
PyObject *tmp_assign_source_133;
tmp_assign_source_133 = mod_consts.const_int_pos_221;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_OEM_6, tmp_assign_source_133);
}
{
PyObject *tmp_assign_source_134;
tmp_assign_source_134 = mod_consts.const_int_pos_222;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_OEM_7, tmp_assign_source_134);
}
{
PyObject *tmp_assign_source_135;
tmp_assign_source_135 = mod_consts.const_int_pos_223;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_OEM_8, tmp_assign_source_135);
}
{
PyObject *tmp_assign_source_136;
tmp_assign_source_136 = mod_consts.const_int_pos_225;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_OEM_AX, tmp_assign_source_136);
}
{
PyObject *tmp_assign_source_137;
tmp_assign_source_137 = mod_consts.const_int_pos_226;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_OEM_102, tmp_assign_source_137);
}
{
PyObject *tmp_assign_source_138;
tmp_assign_source_138 = mod_consts.const_int_pos_227;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_ICO_HELP, tmp_assign_source_138);
}
{
PyObject *tmp_assign_source_139;
tmp_assign_source_139 = mod_consts.const_int_pos_228;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_ICO_00, tmp_assign_source_139);
}
{
PyObject *tmp_assign_source_140;
tmp_assign_source_140 = mod_consts.const_int_pos_229;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_PROCESSKEY, tmp_assign_source_140);
}
{
PyObject *tmp_assign_source_141;
tmp_assign_source_141 = mod_consts.const_int_pos_230;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_ICO_CLEAR, tmp_assign_source_141);
}
{
PyObject *tmp_assign_source_142;
tmp_assign_source_142 = mod_consts.const_int_pos_231;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_PACKET, tmp_assign_source_142);
}
{
PyObject *tmp_assign_source_143;
tmp_assign_source_143 = mod_consts.const_int_pos_233;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_OEM_RESET, tmp_assign_source_143);
}
{
PyObject *tmp_assign_source_144;
tmp_assign_source_144 = mod_consts.const_int_pos_234;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_OEM_JUMP, tmp_assign_source_144);
}
{
PyObject *tmp_assign_source_145;
tmp_assign_source_145 = mod_consts.const_int_pos_235;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_OEM_PA1, tmp_assign_source_145);
}
{
PyObject *tmp_assign_source_146;
tmp_assign_source_146 = mod_consts.const_int_pos_236;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_OEM_PA2, tmp_assign_source_146);
}
{
PyObject *tmp_assign_source_147;
tmp_assign_source_147 = mod_consts.const_int_pos_237;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_OEM_PA3, tmp_assign_source_147);
}
{
PyObject *tmp_assign_source_148;
tmp_assign_source_148 = mod_consts.const_int_pos_238;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_OEM_WSCTRL, tmp_assign_source_148);
}
{
PyObject *tmp_assign_source_149;
tmp_assign_source_149 = mod_consts.const_int_pos_239;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_OEM_CUSEL, tmp_assign_source_149);
}
{
PyObject *tmp_assign_source_150;
tmp_assign_source_150 = mod_consts.const_int_pos_240;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_OEM_ATTN, tmp_assign_source_150);
}
{
PyObject *tmp_assign_source_151;
tmp_assign_source_151 = mod_consts.const_int_pos_241;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_OEM_FINISH, tmp_assign_source_151);
}
{
PyObject *tmp_assign_source_152;
tmp_assign_source_152 = mod_consts.const_int_pos_242;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_OEM_COPY, tmp_assign_source_152);
}
{
PyObject *tmp_assign_source_153;
tmp_assign_source_153 = mod_consts.const_int_pos_243;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_OEM_AUTO, tmp_assign_source_153);
}
{
PyObject *tmp_assign_source_154;
tmp_assign_source_154 = mod_consts.const_int_pos_244;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_OEM_ENLW, tmp_assign_source_154);
}
{
PyObject *tmp_assign_source_155;
tmp_assign_source_155 = mod_consts.const_int_pos_245;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_OEM_BACKTAB, tmp_assign_source_155);
}
{
PyObject *tmp_assign_source_156;
tmp_assign_source_156 = mod_consts.const_int_pos_246;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_ATTN, tmp_assign_source_156);
}
{
PyObject *tmp_assign_source_157;
tmp_assign_source_157 = mod_consts.const_int_pos_247;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_CRSEL, tmp_assign_source_157);
}
{
PyObject *tmp_assign_source_158;
tmp_assign_source_158 = mod_consts.const_int_pos_248;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_EXSEL, tmp_assign_source_158);
}
{
PyObject *tmp_assign_source_159;
tmp_assign_source_159 = mod_consts.const_int_pos_249;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_EREOF, tmp_assign_source_159);
}
{
PyObject *tmp_assign_source_160;
tmp_assign_source_160 = mod_consts.const_int_pos_250;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_PLAY, tmp_assign_source_160);
}
{
PyObject *tmp_assign_source_161;
tmp_assign_source_161 = mod_consts.const_int_pos_251;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_ZOOM, tmp_assign_source_161);
}
{
PyObject *tmp_assign_source_162;
tmp_assign_source_162 = mod_consts.const_int_pos_252;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_NONAME, tmp_assign_source_162);
}
{
PyObject *tmp_assign_source_163;
tmp_assign_source_163 = mod_consts.const_int_pos_253;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_PA1, tmp_assign_source_163);
}
{
PyObject *tmp_assign_source_164;
tmp_assign_source_164 = mod_consts.const_int_pos_254;
UPDATE_STRING_DICT0(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)mod_consts.const_str_plain_OEM_CLEAR, tmp_assign_source_164);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pynput$_util$win32_vks", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "pynput._util.win32_vks" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_pynput$_util$win32_vks);
    return module_pynput$_util$win32_vks;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pynput$_util$win32_vks, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pynput$_util$win32_vks", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
