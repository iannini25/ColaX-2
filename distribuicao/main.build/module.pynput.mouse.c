/* Generated code for Python module 'pynput$mouse'
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



/* The "module_pynput$mouse" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pynput$mouse;
PyDictObject *moduledict_pynput$mouse;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_x;
PyObject *const_str_plain_y;
PyObject *const_str_plain_injected;
PyObject *const_str_plain_button;
PyObject *const_str_plain_pressed;
PyObject *const_str_plain_dx;
PyObject *const_str_plain_dy;
PyObject *const_str_plain_Events;
PyObject *const_str_plain_Move;
PyObject *const_str_plain_Click;
PyObject *const_str_plain_Scroll;
PyObject *const_tuple_str_plain_on_move_str_plain_on_click_str_plain_on_scroll_tuple;
PyObject *const_str_digest_d93f71cff51e1710a7b029030a43ded0;
PyObject *const_str_plain_join;
PyObject *const_str_plain_environ;
PyObject *const_tuple_b53c809d10a900dbf77302a1f04808fa_tuple;
PyObject *const_str_plain_mouse;
PyObject *const_tuple_da979c6eaa37b74655bb3711b716ee2f_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_submodule_search_locations;
PyObject *const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745;
PyObject *const_tuple_str_plain_backend_str_plain_Events_tuple;
PyObject *const_str_plain_backend;
PyObject *const_tuple_str_digest_ab37e9e84cce0adb6011202fa0255cbd_tuple;
PyObject *const_str_plain_Button;
PyObject *const_str_plain_Controller;
PyObject *const_str_plain_Listener;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_ab37e9e84cce0adb6011202fa0255cbd;
PyObject *const_str_digest_268637f417c9e6d3910d59a610093ed9;
PyObject *const_int_pos_36;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain__Listener;
PyObject *const_str_plain_Event;
PyObject *const_str_digest_d5b429e7208b4d59ee7f18ff5d2d2f86;
PyObject *const_str_digest_3c9a969002959e479d376b964dee6a7e;
PyObject *const_int_pos_53;
PyObject *const_str_digest_400e1e619b44d7521c732522824d50b2;
PyObject *const_tuple_str_plain_x_str_plain_y_str_plain_injected_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_2cbb2fe63c611f50a809b29270f30eec;
PyObject *const_str_digest_0af4ca492881ec515bebb99566ed473c;
PyObject *const_int_pos_66;
PyObject *const_str_digest_8fd219947a44e7b7e6cd6eb7899ee2df;
PyObject *const_tuple_c6da74750c1fc3b661fa4ae0ad25f5b9_tuple;
PyObject *const_str_digest_7eb1943a685023b47ced9c028ef5b81a;
PyObject *const_str_digest_4764fb6c64fee76817dc63d55dbb1085;
PyObject *const_int_pos_85;
PyObject *const_str_digest_c34035de2417ea0fa9e41540af8b5d96;
PyObject *const_tuple_cdc194066bfd406208554d8c3507a347_tuple;
PyObject *const_str_digest_a50480f553ef08a71bb6c22458d2cfa3;
PyObject *const_str_digest_84dc4a9ef73c435b8fdbc36d4fe0e897;
PyObject *const_str_digest_13eda1dfccedb50f70d80226edb8e5ee;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_377341a961043e645c8f0b23af720c70_tuple;
PyObject *const_tuple_str_plain_self_str_plain_x_str_plain_y_str_plain_injected_tuple;
PyObject *const_tuple_b145b8f36cb57e554cc3ef0900cdfc30_tuple;
PyObject *const_tuple_str_plain_self_str_plain___class___tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[63];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("pynput.mouse"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 63) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 63 values, got %d\n",
                    UN_TRANSLATE("pynput.mouse"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_x", mod_consts.const_str_plain_x);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_x);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_y", mod_consts.const_str_plain_y);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_y);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_injected", mod_consts.const_str_plain_injected);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_injected);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_button", mod_consts.const_str_plain_button);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_button);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pressed", mod_consts.const_str_plain_pressed);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_pressed);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dx", mod_consts.const_str_plain_dx);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_dx);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dy", mod_consts.const_str_plain_dy);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_dy);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Events", mod_consts.const_str_plain_Events);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_Events);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Move", mod_consts.const_str_plain_Move);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_Move);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Click", mod_consts.const_str_plain_Click);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_Click);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Scroll", mod_consts.const_str_plain_Scroll);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_Scroll);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_on_move_str_plain_on_click_str_plain_on_scroll_tuple", mod_consts.const_tuple_str_plain_on_move_str_plain_on_click_str_plain_on_scroll_tuple);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_on_move_str_plain_on_click_str_plain_on_scroll_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d93f71cff51e1710a7b029030a43ded0", mod_consts.const_str_digest_d93f71cff51e1710a7b029030a43ded0);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_d93f71cff51e1710a7b029030a43ded0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_join", mod_consts.const_str_plain_join);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_join);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_environ", mod_consts.const_str_plain_environ);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_b53c809d10a900dbf77302a1f04808fa_tuple", mod_consts.const_tuple_b53c809d10a900dbf77302a1f04808fa_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_b53c809d10a900dbf77302a1f04808fa_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mouse", mod_consts.const_str_plain_mouse);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_mouse);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_da979c6eaa37b74655bb3711b716ee2f_tuple", mod_consts.const_tuple_da979c6eaa37b74655bb3711b716ee2f_tuple);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_da979c6eaa37b74655bb3711b716ee2f_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_submodule_search_locations", mod_consts.const_str_plain_submodule_search_locations);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745", mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_backend_str_plain_Events_tuple", mod_consts.const_tuple_str_plain_backend_str_plain_Events_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_backend_str_plain_Events_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_backend", mod_consts.const_str_plain_backend);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_backend);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_ab37e9e84cce0adb6011202fa0255cbd_tuple", mod_consts.const_tuple_str_digest_ab37e9e84cce0adb6011202fa0255cbd_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ab37e9e84cce0adb6011202fa0255cbd_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Button", mod_consts.const_str_plain_Button);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_Button);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Controller", mod_consts.const_str_plain_Controller);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_Controller);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Listener", mod_consts.const_str_plain_Listener);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_Listener);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ab37e9e84cce0adb6011202fa0255cbd", mod_consts.const_str_digest_ab37e9e84cce0adb6011202fa0255cbd);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_ab37e9e84cce0adb6011202fa0255cbd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_268637f417c9e6d3910d59a610093ed9", mod_consts.const_str_digest_268637f417c9e6d3910d59a610093ed9);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_268637f417c9e6d3910d59a610093ed9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_36", mod_consts.const_int_pos_36);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_int_pos_36);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__Listener", mod_consts.const_str_plain__Listener);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain__Listener);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Event", mod_consts.const_str_plain_Event);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_Event);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d5b429e7208b4d59ee7f18ff5d2d2f86", mod_consts.const_str_digest_d5b429e7208b4d59ee7f18ff5d2d2f86);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_d5b429e7208b4d59ee7f18ff5d2d2f86);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3c9a969002959e479d376b964dee6a7e", mod_consts.const_str_digest_3c9a969002959e479d376b964dee6a7e);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_3c9a969002959e479d376b964dee6a7e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_53", mod_consts.const_int_pos_53);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_int_pos_53);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_400e1e619b44d7521c732522824d50b2", mod_consts.const_str_digest_400e1e619b44d7521c732522824d50b2);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_400e1e619b44d7521c732522824d50b2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_injected_tuple", mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_injected_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_injected_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2cbb2fe63c611f50a809b29270f30eec", mod_consts.const_str_digest_2cbb2fe63c611f50a809b29270f30eec);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_2cbb2fe63c611f50a809b29270f30eec);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0af4ca492881ec515bebb99566ed473c", mod_consts.const_str_digest_0af4ca492881ec515bebb99566ed473c);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_0af4ca492881ec515bebb99566ed473c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_66", mod_consts.const_int_pos_66);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_int_pos_66);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8fd219947a44e7b7e6cd6eb7899ee2df", mod_consts.const_str_digest_8fd219947a44e7b7e6cd6eb7899ee2df);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_8fd219947a44e7b7e6cd6eb7899ee2df);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_c6da74750c1fc3b661fa4ae0ad25f5b9_tuple", mod_consts.const_tuple_c6da74750c1fc3b661fa4ae0ad25f5b9_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_c6da74750c1fc3b661fa4ae0ad25f5b9_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7eb1943a685023b47ced9c028ef5b81a", mod_consts.const_str_digest_7eb1943a685023b47ced9c028ef5b81a);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_7eb1943a685023b47ced9c028ef5b81a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4764fb6c64fee76817dc63d55dbb1085", mod_consts.const_str_digest_4764fb6c64fee76817dc63d55dbb1085);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_4764fb6c64fee76817dc63d55dbb1085);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_85", mod_consts.const_int_pos_85);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_int_pos_85);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c34035de2417ea0fa9e41540af8b5d96", mod_consts.const_str_digest_c34035de2417ea0fa9e41540af8b5d96);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_c34035de2417ea0fa9e41540af8b5d96);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_cdc194066bfd406208554d8c3507a347_tuple", mod_consts.const_tuple_cdc194066bfd406208554d8c3507a347_tuple);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_cdc194066bfd406208554d8c3507a347_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a50480f553ef08a71bb6c22458d2cfa3", mod_consts.const_str_digest_a50480f553ef08a71bb6c22458d2cfa3);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_a50480f553ef08a71bb6c22458d2cfa3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_84dc4a9ef73c435b8fdbc36d4fe0e897", mod_consts.const_str_digest_84dc4a9ef73c435b8fdbc36d4fe0e897);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_84dc4a9ef73c435b8fdbc36d4fe0e897);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_13eda1dfccedb50f70d80226edb8e5ee", mod_consts.const_str_digest_13eda1dfccedb50f70d80226edb8e5ee);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_13eda1dfccedb50f70d80226edb8e5ee);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_377341a961043e645c8f0b23af720c70_tuple", mod_consts.const_tuple_377341a961043e645c8f0b23af720c70_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_tuple_377341a961043e645c8f0b23af720c70_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_x_str_plain_y_str_plain_injected_tuple", mod_consts.const_tuple_str_plain_self_str_plain_x_str_plain_y_str_plain_injected_tuple);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_x_str_plain_y_str_plain_injected_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_b145b8f36cb57e554cc3ef0900cdfc30_tuple", mod_consts.const_tuple_b145b8f36cb57e554cc3ef0900cdfc30_tuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_b145b8f36cb57e554cc3ef0900cdfc30_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain___class___tuple", mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
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
void checkModuleConstants_pynput$mouse(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_x", mod_consts.const_str_plain_x);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_x) && "mod_consts.const_str_plain_x");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_y", mod_consts.const_str_plain_y);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_y) && "mod_consts.const_str_plain_y");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_injected", mod_consts.const_str_plain_injected);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_injected) && "mod_consts.const_str_plain_injected");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_button", mod_consts.const_str_plain_button);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_button) && "mod_consts.const_str_plain_button");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pressed", mod_consts.const_str_plain_pressed);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_pressed) && "mod_consts.const_str_plain_pressed");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dx", mod_consts.const_str_plain_dx);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_dx) && "mod_consts.const_str_plain_dx");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dy", mod_consts.const_str_plain_dy);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_dy) && "mod_consts.const_str_plain_dy");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Events", mod_consts.const_str_plain_Events);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_Events) && "mod_consts.const_str_plain_Events");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Move", mod_consts.const_str_plain_Move);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_Move) && "mod_consts.const_str_plain_Move");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Click", mod_consts.const_str_plain_Click);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_Click) && "mod_consts.const_str_plain_Click");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Scroll", mod_consts.const_str_plain_Scroll);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_Scroll) && "mod_consts.const_str_plain_Scroll");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_on_move_str_plain_on_click_str_plain_on_scroll_tuple", mod_consts.const_tuple_str_plain_on_move_str_plain_on_click_str_plain_on_scroll_tuple);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_on_move_str_plain_on_click_str_plain_on_scroll_tuple) && "mod_consts.const_tuple_str_plain_on_move_str_plain_on_click_str_plain_on_scroll_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d93f71cff51e1710a7b029030a43ded0", mod_consts.const_str_digest_d93f71cff51e1710a7b029030a43ded0);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_d93f71cff51e1710a7b029030a43ded0) && "mod_consts.const_str_digest_d93f71cff51e1710a7b029030a43ded0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_join", mod_consts.const_str_plain_join);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_join) && "mod_consts.const_str_plain_join");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_environ", mod_consts.const_str_plain_environ);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ) && "mod_consts.const_str_plain_environ");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_b53c809d10a900dbf77302a1f04808fa_tuple", mod_consts.const_tuple_b53c809d10a900dbf77302a1f04808fa_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_b53c809d10a900dbf77302a1f04808fa_tuple) && "mod_consts.const_tuple_b53c809d10a900dbf77302a1f04808fa_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mouse", mod_consts.const_str_plain_mouse);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_mouse) && "mod_consts.const_str_plain_mouse");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_da979c6eaa37b74655bb3711b716ee2f_tuple", mod_consts.const_tuple_da979c6eaa37b74655bb3711b716ee2f_tuple);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_da979c6eaa37b74655bb3711b716ee2f_tuple) && "mod_consts.const_tuple_da979c6eaa37b74655bb3711b716ee2f_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_submodule_search_locations", mod_consts.const_str_plain_submodule_search_locations);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations) && "mod_consts.const_str_plain_submodule_search_locations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745", mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745) && "mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_backend_str_plain_Events_tuple", mod_consts.const_tuple_str_plain_backend_str_plain_Events_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_backend_str_plain_Events_tuple) && "mod_consts.const_tuple_str_plain_backend_str_plain_Events_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_backend", mod_consts.const_str_plain_backend);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_backend) && "mod_consts.const_str_plain_backend");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_ab37e9e84cce0adb6011202fa0255cbd_tuple", mod_consts.const_tuple_str_digest_ab37e9e84cce0adb6011202fa0255cbd_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ab37e9e84cce0adb6011202fa0255cbd_tuple) && "mod_consts.const_tuple_str_digest_ab37e9e84cce0adb6011202fa0255cbd_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Button", mod_consts.const_str_plain_Button);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_Button) && "mod_consts.const_str_plain_Button");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Controller", mod_consts.const_str_plain_Controller);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_Controller) && "mod_consts.const_str_plain_Controller");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Listener", mod_consts.const_str_plain_Listener);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_Listener) && "mod_consts.const_str_plain_Listener");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__) && "mod_consts.const_str_plain___prepare__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__) && "mod_consts.const_str_plain___getitem__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295) && "mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass) && "mod_consts.const_str_angle_metaclass");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ab37e9e84cce0adb6011202fa0255cbd", mod_consts.const_str_digest_ab37e9e84cce0adb6011202fa0255cbd);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_ab37e9e84cce0adb6011202fa0255cbd) && "mod_consts.const_str_digest_ab37e9e84cce0adb6011202fa0255cbd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_268637f417c9e6d3910d59a610093ed9", mod_consts.const_str_digest_268637f417c9e6d3910d59a610093ed9);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_268637f417c9e6d3910d59a610093ed9) && "mod_consts.const_str_digest_268637f417c9e6d3910d59a610093ed9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_36", mod_consts.const_int_pos_36);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_int_pos_36) && "mod_consts.const_int_pos_36");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__Listener", mod_consts.const_str_plain__Listener);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain__Listener) && "mod_consts.const_str_plain__Listener");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Event", mod_consts.const_str_plain_Event);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_Event) && "mod_consts.const_str_plain_Event");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d5b429e7208b4d59ee7f18ff5d2d2f86", mod_consts.const_str_digest_d5b429e7208b4d59ee7f18ff5d2d2f86);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_d5b429e7208b4d59ee7f18ff5d2d2f86) && "mod_consts.const_str_digest_d5b429e7208b4d59ee7f18ff5d2d2f86");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3c9a969002959e479d376b964dee6a7e", mod_consts.const_str_digest_3c9a969002959e479d376b964dee6a7e);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_3c9a969002959e479d376b964dee6a7e) && "mod_consts.const_str_digest_3c9a969002959e479d376b964dee6a7e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_53", mod_consts.const_int_pos_53);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_int_pos_53) && "mod_consts.const_int_pos_53");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_400e1e619b44d7521c732522824d50b2", mod_consts.const_str_digest_400e1e619b44d7521c732522824d50b2);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_400e1e619b44d7521c732522824d50b2) && "mod_consts.const_str_digest_400e1e619b44d7521c732522824d50b2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_injected_tuple", mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_injected_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_injected_tuple) && "mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_injected_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__) && "mod_consts.const_str_plain___orig_bases__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2cbb2fe63c611f50a809b29270f30eec", mod_consts.const_str_digest_2cbb2fe63c611f50a809b29270f30eec);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_2cbb2fe63c611f50a809b29270f30eec) && "mod_consts.const_str_digest_2cbb2fe63c611f50a809b29270f30eec");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0af4ca492881ec515bebb99566ed473c", mod_consts.const_str_digest_0af4ca492881ec515bebb99566ed473c);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_0af4ca492881ec515bebb99566ed473c) && "mod_consts.const_str_digest_0af4ca492881ec515bebb99566ed473c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_66", mod_consts.const_int_pos_66);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_int_pos_66) && "mod_consts.const_int_pos_66");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8fd219947a44e7b7e6cd6eb7899ee2df", mod_consts.const_str_digest_8fd219947a44e7b7e6cd6eb7899ee2df);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_8fd219947a44e7b7e6cd6eb7899ee2df) && "mod_consts.const_str_digest_8fd219947a44e7b7e6cd6eb7899ee2df");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_c6da74750c1fc3b661fa4ae0ad25f5b9_tuple", mod_consts.const_tuple_c6da74750c1fc3b661fa4ae0ad25f5b9_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_c6da74750c1fc3b661fa4ae0ad25f5b9_tuple) && "mod_consts.const_tuple_c6da74750c1fc3b661fa4ae0ad25f5b9_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7eb1943a685023b47ced9c028ef5b81a", mod_consts.const_str_digest_7eb1943a685023b47ced9c028ef5b81a);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_7eb1943a685023b47ced9c028ef5b81a) && "mod_consts.const_str_digest_7eb1943a685023b47ced9c028ef5b81a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4764fb6c64fee76817dc63d55dbb1085", mod_consts.const_str_digest_4764fb6c64fee76817dc63d55dbb1085);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_4764fb6c64fee76817dc63d55dbb1085) && "mod_consts.const_str_digest_4764fb6c64fee76817dc63d55dbb1085");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_85", mod_consts.const_int_pos_85);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_int_pos_85) && "mod_consts.const_int_pos_85");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c34035de2417ea0fa9e41540af8b5d96", mod_consts.const_str_digest_c34035de2417ea0fa9e41540af8b5d96);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_c34035de2417ea0fa9e41540af8b5d96) && "mod_consts.const_str_digest_c34035de2417ea0fa9e41540af8b5d96");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_cdc194066bfd406208554d8c3507a347_tuple", mod_consts.const_tuple_cdc194066bfd406208554d8c3507a347_tuple);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_cdc194066bfd406208554d8c3507a347_tuple) && "mod_consts.const_tuple_cdc194066bfd406208554d8c3507a347_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a50480f553ef08a71bb6c22458d2cfa3", mod_consts.const_str_digest_a50480f553ef08a71bb6c22458d2cfa3);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_a50480f553ef08a71bb6c22458d2cfa3) && "mod_consts.const_str_digest_a50480f553ef08a71bb6c22458d2cfa3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_84dc4a9ef73c435b8fdbc36d4fe0e897", mod_consts.const_str_digest_84dc4a9ef73c435b8fdbc36d4fe0e897);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_84dc4a9ef73c435b8fdbc36d4fe0e897) && "mod_consts.const_str_digest_84dc4a9ef73c435b8fdbc36d4fe0e897");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_13eda1dfccedb50f70d80226edb8e5ee", mod_consts.const_str_digest_13eda1dfccedb50f70d80226edb8e5ee);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_13eda1dfccedb50f70d80226edb8e5ee) && "mod_consts.const_str_digest_13eda1dfccedb50f70d80226edb8e5ee");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple) && "mod_consts.const_tuple_str_plain___class___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_377341a961043e645c8f0b23af720c70_tuple", mod_consts.const_tuple_377341a961043e645c8f0b23af720c70_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_tuple_377341a961043e645c8f0b23af720c70_tuple) && "mod_consts.const_tuple_377341a961043e645c8f0b23af720c70_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_x_str_plain_y_str_plain_injected_tuple", mod_consts.const_tuple_str_plain_self_str_plain_x_str_plain_y_str_plain_injected_tuple);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_x_str_plain_y_str_plain_injected_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_x_str_plain_y_str_plain_injected_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_b145b8f36cb57e554cc3ef0900cdfc30_tuple", mod_consts.const_tuple_b145b8f36cb57e554cc3ef0900cdfc30_tuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_b145b8f36cb57e554cc3ef0900cdfc30_tuple) && "mod_consts.const_tuple_b145b8f36cb57e554cc3ef0900cdfc30_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain___class___tuple", mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple) && "mod_consts.const_tuple_str_plain_self_str_plain___class___tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 5
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
static PyObject *module_var_accessor_pynput$mouse$Events(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$mouse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$mouse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse, (Nuitka_StringObject *)mod_consts.const_str_plain_Events);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$mouse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Events);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Events, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Events);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Events, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse, (Nuitka_StringObject *)mod_consts.const_str_plain_Events);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse, (Nuitka_StringObject *)mod_consts.const_str_plain_Events);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Events);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$mouse$Listener(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$mouse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$mouse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$mouse->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$mouse$__path__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$mouse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$mouse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse, (Nuitka_StringObject *)const_str_plain___path__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$mouse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___path__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___path__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___path__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___path__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse, (Nuitka_StringObject *)const_str_plain___path__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse, (Nuitka_StringObject *)const_str_plain___path__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___path__);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$mouse$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$mouse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$mouse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$mouse->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$mouse$backend(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$mouse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$mouse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse, (Nuitka_StringObject *)mod_consts.const_str_plain_backend);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$mouse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_backend);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_backend, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_backend);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_backend, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse, (Nuitka_StringObject *)mod_consts.const_str_plain_backend);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$mouse, (Nuitka_StringObject *)mod_consts.const_str_plain_backend);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_backend);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_dfaf1aabdc5a52fc098c44fdcb334537;
static PyCodeObject *code_objects_44b5e7810e4c957c097f54035bc1bbe4;
static PyCodeObject *code_objects_f91168f025d20cb40adb1df731ed6be9;
static PyCodeObject *code_objects_7274c6a7ce02bc13e6b505aa68d51fff;
static PyCodeObject *code_objects_f2d024c1fb15ef77614cde05ccf7f10c;
static PyCodeObject *code_objects_9d2cc8bb65a014c2e41db3e870a5693d;
static PyCodeObject *code_objects_47272c8f0d3c997283c45931bf8ec86f;
static PyCodeObject *code_objects_d41aecec2c093d83b47814c9fb39d0e1;
static PyCodeObject *code_objects_21d2b0096fad40125b4f53b7ae99d443;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_84dc4a9ef73c435b8fdbc36d4fe0e897); CHECK_OBJECT(module_filename_obj);
code_objects_dfaf1aabdc5a52fc098c44fdcb334537 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_13eda1dfccedb50f70d80226edb8e5ee, mod_consts.const_str_digest_13eda1dfccedb50f70d80226edb8e5ee, NULL, NULL, 0, 0, 0);
code_objects_44b5e7810e4c957c097f54035bc1bbe4 = MAKE_CODE_OBJECT(module_filename_obj, 66, 0, mod_consts.const_str_plain_Click, mod_consts.const_str_digest_0af4ca492881ec515bebb99566ed473c, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_f91168f025d20cb40adb1df731ed6be9 = MAKE_CODE_OBJECT(module_filename_obj, 36, 0, mod_consts.const_str_plain_Events, mod_consts.const_str_plain_Events, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_7274c6a7ce02bc13e6b505aa68d51fff = MAKE_CODE_OBJECT(module_filename_obj, 53, 0, mod_consts.const_str_plain_Move, mod_consts.const_str_digest_3c9a969002959e479d376b964dee6a7e, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_f2d024c1fb15ef77614cde05ccf7f10c = MAKE_CODE_OBJECT(module_filename_obj, 85, 0, mod_consts.const_str_plain_Scroll, mod_consts.const_str_digest_4764fb6c64fee76817dc63d55dbb1085, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_9d2cc8bb65a014c2e41db3e870a5693d = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_8fd219947a44e7b7e6cd6eb7899ee2df, mod_consts.const_tuple_377341a961043e645c8f0b23af720c70_tuple, NULL, 6, 0, 0);
code_objects_47272c8f0d3c997283c45931bf8ec86f = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_400e1e619b44d7521c732522824d50b2, mod_consts.const_tuple_str_plain_self_str_plain_x_str_plain_y_str_plain_injected_tuple, NULL, 4, 0, 0);
code_objects_d41aecec2c093d83b47814c9fb39d0e1 = MAKE_CODE_OBJECT(module_filename_obj, 88, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_c34035de2417ea0fa9e41540af8b5d96, mod_consts.const_tuple_b145b8f36cb57e554cc3ef0900cdfc30_tuple, NULL, 6, 0, 0);
code_objects_21d2b0096fad40125b4f53b7ae99d443 = MAKE_CODE_OBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_a50480f553ef08a71bb6c22458d2cfa3, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pynput$mouse$$$function__1___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$mouse$$$function__2___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$mouse$$$function__3___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$mouse$$$function__4___init__(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_pynput$mouse$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_x = python_pars[1];
PyObject *par_y = python_pars[2];
PyObject *par_injected = python_pars[3];
struct Nuitka_FrameObject *frame_frame_pynput$mouse$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$mouse$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$mouse$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_pynput$mouse$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$mouse$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$mouse$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_47272c8f0d3c997283c45931bf8ec86f, module_pynput$mouse, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$mouse$$$function__1___init__->m_type_description == NULL);
frame_frame_pynput$mouse$$$function__1___init__ = cache_frame_frame_pynput$mouse$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$mouse$$$function__1___init__);
assert(Py_REFCNT(frame_frame_pynput$mouse$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(par_x);
tmp_ass_attr_value_1 = par_x;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_x, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_ass_attr_target_2;
CHECK_OBJECT(par_y);
tmp_ass_attr_value_2 = par_y;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain_y, tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_ass_attr_target_3;
CHECK_OBJECT(par_injected);
tmp_ass_attr_value_3 = par_injected;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain_injected, tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$mouse$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$mouse$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$mouse$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$mouse$$$function__1___init__,
    type_description_1,
    par_self,
    par_x,
    par_y,
    par_injected
);


// Release cached frame if used for exception.
if (frame_frame_pynput$mouse$$$function__1___init__ == cache_frame_frame_pynput$mouse$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$mouse$$$function__1___init__);
    cache_frame_frame_pynput$mouse$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_pynput$mouse$$$function__1___init__);

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
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
CHECK_OBJECT(par_injected);
Py_DECREF(par_injected);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
CHECK_OBJECT(par_injected);
Py_DECREF(par_injected);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$mouse$$$function__2___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_x = python_pars[1];
PyObject *par_y = python_pars[2];
PyObject *par_button = python_pars[3];
PyObject *par_pressed = python_pars[4];
PyObject *par_injected = python_pars[5];
struct Nuitka_FrameObject *frame_frame_pynput$mouse$$$function__2___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$mouse$$$function__2___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$mouse$$$function__2___init__)) {
    Py_XDECREF(cache_frame_frame_pynput$mouse$$$function__2___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$mouse$$$function__2___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$mouse$$$function__2___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_9d2cc8bb65a014c2e41db3e870a5693d, module_pynput$mouse, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$mouse$$$function__2___init__->m_type_description == NULL);
frame_frame_pynput$mouse$$$function__2___init__ = cache_frame_frame_pynput$mouse$$$function__2___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$mouse$$$function__2___init__);
assert(Py_REFCNT(frame_frame_pynput$mouse$$$function__2___init__) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(par_x);
tmp_ass_attr_value_1 = par_x;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_x, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_ass_attr_target_2;
CHECK_OBJECT(par_y);
tmp_ass_attr_value_2 = par_y;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain_y, tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_ass_attr_target_3;
CHECK_OBJECT(par_button);
tmp_ass_attr_value_3 = par_button;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain_button, tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_4;
PyObject *tmp_ass_attr_target_4;
CHECK_OBJECT(par_pressed);
tmp_ass_attr_value_4 = par_pressed;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_4, mod_consts.const_str_plain_pressed, tmp_ass_attr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_5;
PyObject *tmp_ass_attr_target_5;
CHECK_OBJECT(par_injected);
tmp_ass_attr_value_5 = par_injected;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_5, mod_consts.const_str_plain_injected, tmp_ass_attr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$mouse$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$mouse$$$function__2___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$mouse$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$mouse$$$function__2___init__,
    type_description_1,
    par_self,
    par_x,
    par_y,
    par_button,
    par_pressed,
    par_injected
);


// Release cached frame if used for exception.
if (frame_frame_pynput$mouse$$$function__2___init__ == cache_frame_frame_pynput$mouse$$$function__2___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$mouse$$$function__2___init__);
    cache_frame_frame_pynput$mouse$$$function__2___init__ = NULL;
}

assertFrameObject(frame_frame_pynput$mouse$$$function__2___init__);

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
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
CHECK_OBJECT(par_button);
Py_DECREF(par_button);
CHECK_OBJECT(par_pressed);
Py_DECREF(par_pressed);
CHECK_OBJECT(par_injected);
Py_DECREF(par_injected);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
CHECK_OBJECT(par_button);
Py_DECREF(par_button);
CHECK_OBJECT(par_pressed);
Py_DECREF(par_pressed);
CHECK_OBJECT(par_injected);
Py_DECREF(par_injected);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$mouse$$$function__3___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_x = python_pars[1];
PyObject *par_y = python_pars[2];
PyObject *par_dx = python_pars[3];
PyObject *par_dy = python_pars[4];
PyObject *par_injected = python_pars[5];
struct Nuitka_FrameObject *frame_frame_pynput$mouse$$$function__3___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$mouse$$$function__3___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$mouse$$$function__3___init__)) {
    Py_XDECREF(cache_frame_frame_pynput$mouse$$$function__3___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$mouse$$$function__3___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$mouse$$$function__3___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_d41aecec2c093d83b47814c9fb39d0e1, module_pynput$mouse, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$mouse$$$function__3___init__->m_type_description == NULL);
frame_frame_pynput$mouse$$$function__3___init__ = cache_frame_frame_pynput$mouse$$$function__3___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$mouse$$$function__3___init__);
assert(Py_REFCNT(frame_frame_pynput$mouse$$$function__3___init__) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(par_x);
tmp_ass_attr_value_1 = par_x;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_x, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_ass_attr_target_2;
CHECK_OBJECT(par_y);
tmp_ass_attr_value_2 = par_y;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain_y, tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_ass_attr_target_3;
CHECK_OBJECT(par_dx);
tmp_ass_attr_value_3 = par_dx;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain_dx, tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_4;
PyObject *tmp_ass_attr_target_4;
CHECK_OBJECT(par_dy);
tmp_ass_attr_value_4 = par_dy;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_4, mod_consts.const_str_plain_dy, tmp_ass_attr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_5;
PyObject *tmp_ass_attr_target_5;
CHECK_OBJECT(par_injected);
tmp_ass_attr_value_5 = par_injected;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_5, mod_consts.const_str_plain_injected, tmp_ass_attr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$mouse$$$function__3___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$mouse$$$function__3___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$mouse$$$function__3___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$mouse$$$function__3___init__,
    type_description_1,
    par_self,
    par_x,
    par_y,
    par_dx,
    par_dy,
    par_injected
);


// Release cached frame if used for exception.
if (frame_frame_pynput$mouse$$$function__3___init__ == cache_frame_frame_pynput$mouse$$$function__3___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$mouse$$$function__3___init__);
    cache_frame_frame_pynput$mouse$$$function__3___init__ = NULL;
}

assertFrameObject(frame_frame_pynput$mouse$$$function__3___init__);

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
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
CHECK_OBJECT(par_dx);
Py_DECREF(par_dx);
CHECK_OBJECT(par_dy);
Py_DECREF(par_dy);
CHECK_OBJECT(par_injected);
Py_DECREF(par_injected);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
CHECK_OBJECT(par_dx);
Py_DECREF(par_dx);
CHECK_OBJECT(par_dy);
Py_DECREF(par_dy);
CHECK_OBJECT(par_injected);
Py_DECREF(par_injected);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$mouse$$$function__4___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pynput$mouse$$$function__4___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$mouse$$$function__4___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$mouse$$$function__4___init__)) {
    Py_XDECREF(cache_frame_frame_pynput$mouse$$$function__4___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$mouse$$$function__4___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$mouse$$$function__4___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_21d2b0096fad40125b4f53b7ae99d443, module_pynput$mouse, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$mouse$$$function__4___init__->m_type_description == NULL);
frame_frame_pynput$mouse$$$function__4___init__ = cache_frame_frame_pynput$mouse$$$function__4___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$mouse$$$function__4___init__);
assert(Py_REFCNT(frame_frame_pynput$mouse$$$function__4___init__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_expression_value_4;
tmp_type_arg_value_1 = module_var_accessor_pynput$mouse$Events(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Events);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 105;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER2(tstate, moduledict_pynput$mouse, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_Move);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 106;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_Click);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 106;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_Scroll);
if (tmp_kw_call_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);

exception_lineno = 106;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
frame_frame_pynput$mouse$$$function__4___init__->m_frame.f_lineno = 105;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

    tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_on_move_str_plain_on_click_str_plain_on_scroll_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
CHECK_OBJECT(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_2_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oN";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$mouse$$$function__4___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$mouse$$$function__4___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$mouse$$$function__4___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$mouse$$$function__4___init__,
    type_description_1,
    par_self,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_pynput$mouse$$$function__4___init__ == cache_frame_frame_pynput$mouse$$$function__4___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$mouse$$$function__4___init__);
    cache_frame_frame_pynput$mouse$$$function__4___init__ = NULL;
}

assertFrameObject(frame_frame_pynput$mouse$$$function__4___init__);

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



static PyObject *MAKE_FUNCTION_pynput$mouse$$$function__1___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$mouse$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_400e1e619b44d7521c732522824d50b2,
#endif
        code_objects_47272c8f0d3c997283c45931bf8ec86f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$mouse,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$mouse$$$function__2___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$mouse$$$function__2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8fd219947a44e7b7e6cd6eb7899ee2df,
#endif
        code_objects_9d2cc8bb65a014c2e41db3e870a5693d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$mouse,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$mouse$$$function__3___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$mouse$$$function__3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c34035de2417ea0fa9e41540af8b5d96,
#endif
        code_objects_d41aecec2c093d83b47814c9fb39d0e1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$mouse,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$mouse$$$function__4___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$mouse$$$function__4___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a50480f553ef08a71bb6c22458d2cfa3,
#endif
        code_objects_21d2b0096fad40125b4f53b7ae99d443,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$mouse,
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

static function_impl_code const function_table_pynput$mouse[] = {
impl_pynput$mouse$$$function__1___init__,
impl_pynput$mouse$$$function__2___init__,
impl_pynput$mouse$$$function__3___init__,
impl_pynput$mouse$$$function__4___init__,
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

    return Nuitka_Function_GetFunctionState(function, function_table_pynput$mouse);
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
        module_pynput$mouse,
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
        function_table_pynput$mouse,
        sizeof(function_table_pynput$mouse) / sizeof(function_impl_code)
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
static char const *module_full_name = "pynput.mouse";
#endif

// Internal entry point for module code.
PyObject *module_code_pynput$mouse(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pynput$mouse");

    // Store the module for future use.
    module_pynput$mouse = module;

    moduledict_pynput$mouse = MODULE_DICT(module_pynput$mouse);

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
        PRINT_STRING("pynput$mouse: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("pynput$mouse: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pynput$mouse: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "pynput.mouse" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initpynput$mouse\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pynput$mouse, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // For Python 3.11 standalone modules, package "__path__" is inserted by the
    // loader before module code runs. Pre-seed "__compiled__" for non-packages
    // to keep their dangerous dict slots aligned with packages.
#if PYTHON_VERSION >= 0x3b0 && PYTHON_VERSION < 0x3c0 && _NUITKA_STANDALONE_MODE && !1
    UPDATE_STRING_DICT0(
        moduledict_pynput$mouse,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pynput$mouse,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pynput$mouse, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pynput$mouse,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pynput$mouse, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pynput$mouse,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pynput$mouse, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pynput$mouse,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pynput$mouse);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pynput$mouse, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pynput$mouse, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_pynput$mouse, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pynput$mouse, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pynput$mouse);
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

        UPDATE_STRING_DICT1(moduledict_pynput$mouse, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyCellObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
PyObject *tmp_Events$class_container$class_creation_1__bases = NULL;
PyObject *tmp_Events$class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_Events$class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_Events$class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_Events$class_container$class_creation_1__prepared = NULL;
PyObject *tmp_Events$class_container$class_creation_2__bases = NULL;
PyObject *tmp_Events$class_container$class_creation_2__bases_orig = NULL;
PyObject *tmp_Events$class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_Events$class_container$class_creation_2__metaclass = NULL;
PyObject *tmp_Events$class_container$class_creation_2__prepared = NULL;
PyObject *tmp_Events$class_container$class_creation_3__bases = NULL;
PyObject *tmp_Events$class_container$class_creation_3__bases_orig = NULL;
PyObject *tmp_Events$class_container$class_creation_3__class_decl_dict = NULL;
PyObject *tmp_Events$class_container$class_creation_3__metaclass = NULL;
PyObject *tmp_Events$class_container$class_creation_3__prepared = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$mouse;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_pynput$mouse$$$class__1_Events_36 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_pynput$mouse$$$class__1_Events_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
PyObject *locals_pynput$mouse$$$class__2_Move_53 = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$mouse$$$class__2_Move_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *locals_pynput$mouse$$$class__3_Click_66 = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$mouse$$$class__3_Click_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
PyObject *locals_pynput$mouse$$$class__4_Scroll_85 = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$mouse$$$class__4_Scroll_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
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

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_d93f71cff51e1710a7b029030a43ded0;
UPDATE_STRING_DICT0(moduledict_pynput$mouse, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_pynput$mouse, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_pynput$mouse = MAKE_MODULE_FRAME(code_objects_dfaf1aabdc5a52fc098c44fdcb334537, module_pynput$mouse);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$mouse);
assert(Py_REFCNT(frame_frame_pynput$mouse) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
frame_frame_pynput$mouse->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, const_str_plain_path);


    } else {
        tmp_expression_value_1 = NULL;
    }
}
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_dirname);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_filename_obj;
frame_frame_pynput$mouse->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 3);
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
frame_frame_pynput$mouse->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, const_str_plain_path);


    } else {
        tmp_expression_value_2 = NULL;
    }
}
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_join);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_pynput$mouse->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


    } else {
        tmp_expression_value_3 = NULL;
    }
}
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_pynput$mouse->m_frame.f_lineno = 1;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_3, mod_consts.const_tuple_b53c809d10a900dbf77302a1f04808fa_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_args_element_value_3 = mod_consts.const_str_plain_mouse;
frame_frame_pynput$mouse->m_frame.f_lineno = 1;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
frame_frame_pynput$mouse->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


    } else {
        tmp_expression_value_4 = NULL;
    }
}
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_pynput$mouse->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_4, mod_consts.const_tuple_da979c6eaa37b74655bb3711b716ee2f_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 2, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_assign_source_3);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_pynput$mouse, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
}
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_pynput$mouse$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_pynput$mouse$__spec__(tstate);
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
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_ass_attr_target_3;
tmp_ass_attr_value_3 = module_var_accessor_pynput$mouse$__path__(tstate);
if (unlikely(tmp_ass_attr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___path__);
}

if (tmp_ass_attr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_ass_attr_target_3 = module_var_accessor_pynput$mouse$__spec__(tstate);
assert(!(tmp_ass_attr_target_3 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain_submodule_search_locations, tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Py_None;
UPDATE_STRING_DICT0(moduledict_pynput$mouse, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_pynput$mouse, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745;
tmp_globals_arg_value_1 = (PyObject *)moduledict_pynput$mouse;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_backend_str_plain_Events_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_pynput$mouse->m_frame.f_lineno = 26;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_6;
}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_pynput$mouse,
        mod_consts.const_str_plain_backend,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_backend);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$mouse, (Nuitka_StringObject *)mod_consts.const_str_plain_backend, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_pynput$mouse,
        mod_consts.const_str_plain_Events,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Events);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$mouse, (Nuitka_StringObject *)mod_consts.const_str_plain_Events, tmp_assign_source_8);
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
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_5;
tmp_called_value_5 = module_var_accessor_pynput$mouse$backend(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_backend);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;

    goto frame_exception_exit_1;
}
frame_frame_pynput$mouse->m_frame.f_lineno = 29;
tmp_assign_source_9 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_digest_ab37e9e84cce0adb6011202fa0255cbd_tuple);

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$mouse, (Nuitka_StringObject *)mod_consts.const_str_plain_backend, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_expression_value_5;
tmp_expression_value_5 = module_var_accessor_pynput$mouse$backend(tstate);
assert(!(tmp_expression_value_5 == NULL));
tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_Button);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$mouse, (Nuitka_StringObject *)mod_consts.const_str_plain_Button, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_expression_value_6;
tmp_expression_value_6 = module_var_accessor_pynput$mouse$backend(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_backend);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 31;

    goto frame_exception_exit_1;
}
tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_Controller);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$mouse, (Nuitka_StringObject *)mod_consts.const_str_plain_Controller, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_expression_value_7;
tmp_expression_value_7 = module_var_accessor_pynput$mouse$backend(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_backend);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 32;

    goto frame_exception_exit_1;
}
tmp_assign_source_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_Listener);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$mouse, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener, tmp_assign_source_12);
}
tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_pynput$mouse, mod_consts.const_str_plain_backend);
if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

if (unlikely(tmp_result == false)) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_backend);

exception_lineno = 33;

    goto frame_exception_exit_1;
}

{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_pynput$mouse$Events(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Events);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;

    goto try_except_handler_2;
}
tmp_assign_source_13 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_13, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_14 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

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
tmp_expression_value_8 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_2;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_16 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_16;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

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
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_10 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_2;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_Events;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_pynput$mouse->m_frame.f_lineno = 36;
tmp_assign_source_17 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_17;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_11 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_11, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

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
PyObject *tmp_expression_value_12;
PyObject *tmp_name_value_2;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_12 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_2 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_12, tmp_name_value_2, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_2;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_13;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_13 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_13 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

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


exception_lineno = 36;

    goto try_except_handler_2;
}
frame_frame_pynput$mouse->m_frame.f_lineno = 36;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 36;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_18;
}
branch_end_1:;
{
PyObject *tmp_assign_source_19;
outline_0_var___class__ = (PyCellObject *)PyCell_New(NULL);
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_pynput$mouse$$$class__1_Events_36 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_ab37e9e84cce0adb6011202fa0255cbd;
tmp_res = PyObject_SetItem(locals_pynput$mouse$$$class__1_Events_36, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_digest_268637f417c9e6d3910d59a610093ed9;
tmp_res = PyObject_SetItem(locals_pynput$mouse$$$class__1_Events_36, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain_Events;
tmp_res = PyObject_SetItem(locals_pynput$mouse$$$class__1_Events_36, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_36;
tmp_res = PyObject_SetItem(locals_pynput$mouse$$$class__1_Events_36, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_4;
}
frame_frame_pynput$mouse$$$class__1_Events_2 = MAKE_CLASS_FRAME(tstate, code_objects_f91168f025d20cb40adb1df731ed6be9, module_pynput$mouse, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pynput$mouse$$$class__1_Events_2, locals_pynput$mouse$$$class__1_Events_36);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$mouse$$$class__1_Events_2);
assert(Py_REFCNT(frame_frame_pynput$mouse$$$class__1_Events_2) == 2);

// Framed code:
tmp_dictset_value = PyObject_GetItem(locals_pynput$mouse$$$class__1_Events_36, mod_consts.const_str_plain_Listener);

if (tmp_dictset_value == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dictset_value = module_var_accessor_pynput$mouse$Listener(tstate);
if (unlikely(tmp_dictset_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Listener);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_dictset_value);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_res = PyObject_SetItem(locals_pynput$mouse$$$class__1_Events_36, mod_consts.const_str_plain__Listener, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_20;
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_14;
tmp_expression_value_14 = PyObject_GetItem(locals_pynput$mouse$$$class__1_Events_36, mod_consts.const_str_plain_Events);

if (tmp_expression_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_14 = module_var_accessor_pynput$mouse$Events(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Events);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;
type_description_2 = "c";
    goto try_except_handler_5;
}
        Py_INCREF(tmp_expression_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto try_except_handler_5;
    }
}

tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_Event);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "c";
    goto try_except_handler_5;
}
tmp_assign_source_20 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_20, 0, tmp_tuple_element_4);
{
    PyObject *old = tmp_Events$class_container$class_creation_1__bases_orig;
    tmp_Events$class_container$class_creation_1__bases_orig = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_2 = tmp_Events$class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_21 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "c";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_Events$class_container$class_creation_1__bases;
    tmp_Events$class_container$class_creation_1__bases = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = tmp_Events$class_container$class_creation_1__class_decl_dict;
    tmp_Events$class_container$class_creation_1__class_decl_dict = tmp_assign_source_22;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_Events$class_container$class_creation_1__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "c";
    goto try_except_handler_5;
}
tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__bases);
tmp_expression_value_15 = tmp_Events$class_container$class_creation_1__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_15, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "c";
    goto try_except_handler_5;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "c";
    goto try_except_handler_5;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__bases);
tmp_bases_value_2 = tmp_Events$class_container$class_creation_1__bases;
tmp_assign_source_23 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "c";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_Events$class_container$class_creation_1__metaclass;
    tmp_Events$class_container$class_creation_1__metaclass = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_5;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__metaclass);
tmp_expression_value_16 = tmp_Events$class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "c";
    goto try_except_handler_5;
}
tmp_condition_result_5 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_24;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_17;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__metaclass);
tmp_expression_value_17 = tmp_Events$class_container$class_creation_1__metaclass;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "c";
    goto try_except_handler_5;
}
tmp_tuple_element_5 = mod_consts.const_str_plain_Move;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__bases);
tmp_tuple_element_5 = tmp_Events$class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_Events$class_container$class_creation_1__class_decl_dict;
frame_frame_pynput$mouse$$$class__1_Events_2->m_frame.f_lineno = 53;
tmp_assign_source_24 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "c";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_Events$class_container$class_creation_1__prepared;
    tmp_Events$class_container$class_creation_1__prepared = tmp_assign_source_24;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__prepared);
tmp_expression_value_18 = tmp_Events$class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_18, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "c";
    goto try_except_handler_5;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
assert(!(tmp_res == -1));
tmp_condition_result_6 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_6;
PyObject *tmp_expression_value_19;
PyObject *tmp_name_value_3;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__metaclass);
tmp_expression_value_19 = tmp_Events$class_container$class_creation_1__metaclass;
tmp_name_value_3 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_6 = BUILTIN_GETATTR(tstate, tmp_expression_value_19, tmp_name_value_3, tmp_default_value_2);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "c";
    goto try_except_handler_5;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_20;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__prepared);
tmp_type_arg_4 = tmp_Events$class_container$class_creation_1__prepared;
tmp_expression_value_20 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_20 == NULL));
tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "c";
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


exception_lineno = 53;
type_description_2 = "c";
    goto try_except_handler_5;
}
frame_frame_pynput$mouse$$$class__1_Events_2->m_frame.f_lineno = 53;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 53;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_2 = "c";
goto try_except_handler_5;
}
branch_no_4:;
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = tmp_Events$class_container$class_creation_1__prepared;
    tmp_Events$class_container$class_creation_1__prepared = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
branch_end_3:;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__prepared);
tmp_set_locals_2 = tmp_Events$class_container$class_creation_1__prepared;
locals_pynput$mouse$$$class__2_Move_53 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_ab37e9e84cce0adb6011202fa0255cbd;
tmp_res = PyObject_SetItem(locals_pynput$mouse$$$class__2_Move_53, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "c";
    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_digest_d5b429e7208b4d59ee7f18ff5d2d2f86;
tmp_res = PyObject_SetItem(locals_pynput$mouse$$$class__2_Move_53, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "c";
    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_digest_3c9a969002959e479d376b964dee6a7e;
tmp_res = PyObject_SetItem(locals_pynput$mouse$$$class__2_Move_53, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "c";
    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_int_pos_53;
tmp_res = PyObject_SetItem(locals_pynput$mouse$$$class__2_Move_53, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "c";
    goto try_except_handler_7;
}
frame_frame_pynput$mouse$$$class__2_Move_3 = MAKE_CLASS_FRAME(tstate, code_objects_7274c6a7ce02bc13e6b505aa68d51fff, module_pynput$mouse, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pynput$mouse$$$class__2_Move_3, locals_pynput$mouse$$$class__2_Move_53);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$mouse$$$class__2_Move_3);
assert(Py_REFCNT(frame_frame_pynput$mouse$$$class__2_Move_3) == 2);

// Framed code:

tmp_dictset_value = MAKE_FUNCTION_pynput$mouse$$$function__1___init__(tstate);

tmp_res = PyObject_SetItem(locals_pynput$mouse$$$class__2_Move_53, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_3 = "o";
    goto frame_exception_exit_3;
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$mouse$$$class__2_Move_3);


goto frame_no_exception_1;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$mouse$$$class__2_Move_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$mouse$$$class__2_Move_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$mouse$$$class__2_Move_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$mouse$$$class__2_Move_3,
    type_description_3,
    outline_1_var___class__
);



assertFrameObject(frame_frame_pynput$mouse$$$class__2_Move_3);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$mouse$$$class__2_Move_3);


// Return the error.
goto nested_frame_exit_2;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_2:;
type_description_2 = "c";
goto try_except_handler_7;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_x_str_plain_y_str_plain_injected_tuple;
tmp_res = PyObject_SetItem(locals_pynput$mouse$$$class__2_Move_53, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "c";
    goto try_except_handler_7;
}
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__bases);
tmp_cmp_expr_left_1 = tmp_Events$class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_1 = tmp_Events$class_container$class_creation_1__bases_orig;
tmp_condition_result_7 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "c";
    goto try_except_handler_7;
}
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_Events$class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_pynput$mouse$$$class__2_Move_53, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "c";
    goto try_except_handler_7;
}
branch_no_5:;
{
PyObject *tmp_assign_source_26;
PyObject *tmp_metaclass_value_3;
PyObject *tmp_name_value_4;
PyObject *tmp_bases_value_3;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__metaclass);
tmp_metaclass_value_3 = tmp_Events$class_container$class_creation_1__metaclass;
tmp_name_value_4 = mod_consts.const_str_plain_Move;
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__bases);
tmp_bases_value_3 = tmp_Events$class_container$class_creation_1__bases;
tmp_dict_arg_value_1 = locals_pynput$mouse$$$class__2_Move_53;
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_Events$class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_4, tmp_bases_value_3, tmp_dict_arg_value_1);
tmp_assign_source_26 = CALL_FUNCTION(tstate, tmp_metaclass_value_3, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "c";
    goto try_except_handler_7;
}
{
    PyObject *old = outline_1_var___class__;
    outline_1_var___class__ = tmp_assign_source_26;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_1_var___class__);
tmp_dictset_value = outline_1_var___class__;
Py_INCREF(tmp_dictset_value);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_pynput$mouse$$$class__2_Move_53);
locals_pynput$mouse$$$class__2_Move_53 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pynput$mouse$$$class__2_Move_53);
locals_pynput$mouse$$$class__2_Move_53 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

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
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 53;
goto try_except_handler_5;
outline_result_4:;
tmp_res = PyObject_SetItem(locals_pynput$mouse$$$class__1_Events_36, mod_consts.const_str_plain_Move, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "c";
    goto try_except_handler_5;
}
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_Events$class_container$class_creation_1__bases_orig);
tmp_Events$class_container$class_creation_1__bases_orig = NULL;
Py_XDECREF(tmp_Events$class_container$class_creation_1__bases);
tmp_Events$class_container$class_creation_1__bases = NULL;
Py_XDECREF(tmp_Events$class_container$class_creation_1__class_decl_dict);
tmp_Events$class_container$class_creation_1__class_decl_dict = NULL;
Py_XDECREF(tmp_Events$class_container$class_creation_1__metaclass);
tmp_Events$class_container$class_creation_1__metaclass = NULL;
Py_XDECREF(tmp_Events$class_container$class_creation_1__prepared);
tmp_Events$class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_2;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__bases_orig);
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__bases_orig);
Py_DECREF(tmp_Events$class_container$class_creation_1__bases_orig);
tmp_Events$class_container$class_creation_1__bases_orig = NULL;
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__bases);
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__bases);
Py_DECREF(tmp_Events$class_container$class_creation_1__bases);
tmp_Events$class_container$class_creation_1__bases = NULL;
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_Events$class_container$class_creation_1__class_decl_dict);
tmp_Events$class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__metaclass);
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__metaclass);
Py_DECREF(tmp_Events$class_container$class_creation_1__metaclass);
tmp_Events$class_container$class_creation_1__metaclass = NULL;
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__prepared);
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__prepared);
Py_DECREF(tmp_Events$class_container$class_creation_1__prepared);
tmp_Events$class_container$class_creation_1__prepared = NULL;
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
PyObject *tmp_assign_source_27;
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_21;
tmp_expression_value_21 = PyObject_GetItem(locals_pynput$mouse$$$class__1_Events_36, mod_consts.const_str_plain_Events);

if (tmp_expression_value_21 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_21 = module_var_accessor_pynput$mouse$Events(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Events);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 66;
type_description_2 = "c";
    goto try_except_handler_8;
}
        Py_INCREF(tmp_expression_value_21);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto try_except_handler_8;
    }
}

tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_Event);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_2 = "c";
    goto try_except_handler_8;
}
tmp_assign_source_27 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_27, 0, tmp_tuple_element_7);
{
    PyObject *old = tmp_Events$class_container$class_creation_2__bases_orig;
    tmp_Events$class_container$class_creation_2__bases_orig = tmp_assign_source_27;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_3 = tmp_Events$class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_28 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_2 = "c";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_Events$class_container$class_creation_2__bases;
    tmp_Events$class_container$class_creation_2__bases = tmp_assign_source_28;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = tmp_Events$class_container$class_creation_2__class_decl_dict;
    tmp_Events$class_container$class_creation_2__class_decl_dict = tmp_assign_source_29;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_metaclass_value_4;
nuitka_bool tmp_condition_result_8;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_4;
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_Events$class_container$class_creation_2__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_2 = "c";
    goto try_except_handler_8;
}
tmp_condition_result_8 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__bases);
tmp_expression_value_22 = tmp_Events$class_container$class_creation_2__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_22, tmp_subscript_value_3, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_2 = "c";
    goto try_except_handler_8;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_2 = "c";
    goto try_except_handler_8;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_3:;
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__bases);
tmp_bases_value_4 = tmp_Events$class_container$class_creation_2__bases;
tmp_assign_source_30 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_2 = "c";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_Events$class_container$class_creation_2__metaclass;
    tmp_Events$class_container$class_creation_2__metaclass = tmp_assign_source_30;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_9;
PyObject *tmp_expression_value_23;
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__metaclass);
tmp_expression_value_23 = tmp_Events$class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_23, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_2 = "c";
    goto try_except_handler_8;
}
tmp_condition_result_9 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_31;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_24;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__metaclass);
tmp_expression_value_24 = tmp_Events$class_container$class_creation_2__metaclass;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_2 = "c";
    goto try_except_handler_8;
}
tmp_tuple_element_8 = mod_consts.const_str_plain_Click;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_Events$class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_8);
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_Events$class_container$class_creation_2__class_decl_dict;
frame_frame_pynput$mouse$$$class__1_Events_2->m_frame.f_lineno = 66;
tmp_assign_source_31 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_2 = "c";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_Events$class_container$class_creation_2__prepared;
    tmp_Events$class_container$class_creation_2__prepared = tmp_assign_source_31;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_10;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_25;
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__prepared);
tmp_expression_value_25 = tmp_Events$class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_25, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_2 = "c";
    goto try_except_handler_8;
}
tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
assert(!(tmp_res == -1));
tmp_condition_result_10 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_tuple_element_9;
PyObject *tmp_expression_value_26;
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__metaclass);
tmp_expression_value_26 = tmp_Events$class_container$class_creation_2__metaclass;
tmp_name_value_5 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_9 = BUILTIN_GETATTR(tstate, tmp_expression_value_26, tmp_name_value_5, tmp_default_value_3);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_2 = "c";
    goto try_except_handler_8;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_27;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__prepared);
tmp_type_arg_6 = tmp_Events$class_container$class_creation_2__prepared;
tmp_expression_value_27 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_27 == NULL));
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_27);
Py_DECREF(tmp_expression_value_27);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_2 = "c";
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


exception_lineno = 66;
type_description_2 = "c";
    goto try_except_handler_8;
}
frame_frame_pynput$mouse$$$class__1_Events_2->m_frame.f_lineno = 66;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 66;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_2 = "c";
goto try_except_handler_8;
}
branch_no_7:;
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assign_source_32;
tmp_assign_source_32 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = tmp_Events$class_container$class_creation_2__prepared;
    tmp_Events$class_container$class_creation_2__prepared = tmp_assign_source_32;
    Py_XDECREF(old);
}

}
branch_end_6:;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__prepared);
tmp_set_locals_3 = tmp_Events$class_container$class_creation_2__prepared;
locals_pynput$mouse$$$class__3_Click_66 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_ab37e9e84cce0adb6011202fa0255cbd;
tmp_res = PyObject_SetItem(locals_pynput$mouse$$$class__3_Click_66, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_2 = "c";
    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_digest_2cbb2fe63c611f50a809b29270f30eec;
tmp_res = PyObject_SetItem(locals_pynput$mouse$$$class__3_Click_66, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_2 = "c";
    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_digest_0af4ca492881ec515bebb99566ed473c;
tmp_res = PyObject_SetItem(locals_pynput$mouse$$$class__3_Click_66, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_2 = "c";
    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_int_pos_66;
tmp_res = PyObject_SetItem(locals_pynput$mouse$$$class__3_Click_66, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_2 = "c";
    goto try_except_handler_10;
}
frame_frame_pynput$mouse$$$class__3_Click_4 = MAKE_CLASS_FRAME(tstate, code_objects_44b5e7810e4c957c097f54035bc1bbe4, module_pynput$mouse, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pynput$mouse$$$class__3_Click_4, locals_pynput$mouse$$$class__3_Click_66);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$mouse$$$class__3_Click_4);
assert(Py_REFCNT(frame_frame_pynput$mouse$$$class__3_Click_4) == 2);

// Framed code:

tmp_dictset_value = MAKE_FUNCTION_pynput$mouse$$$function__2___init__(tstate);

tmp_res = PyObject_SetItem(locals_pynput$mouse$$$class__3_Click_66, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_3 = "o";
    goto frame_exception_exit_4;
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$mouse$$$class__3_Click_4);


goto frame_no_exception_2;
frame_exception_exit_4:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$mouse$$$class__3_Click_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$mouse$$$class__3_Click_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$mouse$$$class__3_Click_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$mouse$$$class__3_Click_4,
    type_description_3,
    outline_2_var___class__
);



assertFrameObject(frame_frame_pynput$mouse$$$class__3_Click_4);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$mouse$$$class__3_Click_4);


// Return the error.
goto nested_frame_exit_3;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_3:;
type_description_2 = "c";
goto try_except_handler_10;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_c6da74750c1fc3b661fa4ae0ad25f5b9_tuple;
tmp_res = PyObject_SetItem(locals_pynput$mouse$$$class__3_Click_66, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_2 = "c";
    goto try_except_handler_10;
}
{
nuitka_bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__bases);
tmp_cmp_expr_left_2 = tmp_Events$class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_2 = tmp_Events$class_container$class_creation_2__bases_orig;
tmp_condition_result_11 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_2 = "c";
    goto try_except_handler_10;
}
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_Events$class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_pynput$mouse$$$class__3_Click_66, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_2 = "c";
    goto try_except_handler_10;
}
branch_no_8:;
{
PyObject *tmp_assign_source_33;
PyObject *tmp_metaclass_value_5;
PyObject *tmp_name_value_6;
PyObject *tmp_bases_value_5;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_class_decl_dict_value_2;
PyObject *tmp_metaclass_args_2;
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__metaclass);
tmp_metaclass_value_5 = tmp_Events$class_container$class_creation_2__metaclass;
tmp_name_value_6 = mod_consts.const_str_plain_Click;
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__bases);
tmp_bases_value_5 = tmp_Events$class_container$class_creation_2__bases;
tmp_dict_arg_value_2 = locals_pynput$mouse$$$class__3_Click_66;
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__class_decl_dict);
tmp_class_decl_dict_value_2 = tmp_Events$class_container$class_creation_2__class_decl_dict;
tmp_metaclass_args_2 = MAKE_TUPLE3(tstate, tmp_name_value_6, tmp_bases_value_5, tmp_dict_arg_value_2);
tmp_assign_source_33 = CALL_FUNCTION(tstate, tmp_metaclass_value_5, tmp_metaclass_args_2, tmp_class_decl_dict_value_2);
CHECK_OBJECT(tmp_metaclass_args_2);
Py_DECREF(tmp_metaclass_args_2);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_2 = "c";
    goto try_except_handler_10;
}
{
    PyObject *old = outline_2_var___class__;
    outline_2_var___class__ = tmp_assign_source_33;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_2_var___class__);
tmp_dictset_value = outline_2_var___class__;
Py_INCREF(tmp_dictset_value);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
Py_DECREF(locals_pynput$mouse$$$class__3_Click_66);
locals_pynput$mouse$$$class__3_Click_66 = NULL;
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pynput$mouse$$$class__3_Click_66);
locals_pynput$mouse$$$class__3_Click_66 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

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
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 66;
goto try_except_handler_8;
outline_result_6:;
tmp_res = PyObject_SetItem(locals_pynput$mouse$$$class__1_Events_36, mod_consts.const_str_plain_Click, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_2 = "c";
    goto try_except_handler_8;
}
goto try_end_3;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_Events$class_container$class_creation_2__bases_orig);
tmp_Events$class_container$class_creation_2__bases_orig = NULL;
Py_XDECREF(tmp_Events$class_container$class_creation_2__bases);
tmp_Events$class_container$class_creation_2__bases = NULL;
Py_XDECREF(tmp_Events$class_container$class_creation_2__class_decl_dict);
tmp_Events$class_container$class_creation_2__class_decl_dict = NULL;
Py_XDECREF(tmp_Events$class_container$class_creation_2__metaclass);
tmp_Events$class_container$class_creation_2__metaclass = NULL;
Py_XDECREF(tmp_Events$class_container$class_creation_2__prepared);
tmp_Events$class_container$class_creation_2__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_2;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__bases_orig);
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__bases_orig);
Py_DECREF(tmp_Events$class_container$class_creation_2__bases_orig);
tmp_Events$class_container$class_creation_2__bases_orig = NULL;
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__bases);
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__bases);
Py_DECREF(tmp_Events$class_container$class_creation_2__bases);
tmp_Events$class_container$class_creation_2__bases = NULL;
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_Events$class_container$class_creation_2__class_decl_dict);
tmp_Events$class_container$class_creation_2__class_decl_dict = NULL;
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__metaclass);
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__metaclass);
Py_DECREF(tmp_Events$class_container$class_creation_2__metaclass);
tmp_Events$class_container$class_creation_2__metaclass = NULL;
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__prepared);
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__prepared);
Py_DECREF(tmp_Events$class_container$class_creation_2__prepared);
tmp_Events$class_container$class_creation_2__prepared = NULL;
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
PyObject *tmp_assign_source_34;
PyObject *tmp_tuple_element_10;
PyObject *tmp_expression_value_28;
tmp_expression_value_28 = PyObject_GetItem(locals_pynput$mouse$$$class__1_Events_36, mod_consts.const_str_plain_Events);

if (tmp_expression_value_28 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_28 = module_var_accessor_pynput$mouse$Events(tstate);
if (unlikely(tmp_expression_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Events);
}

if (tmp_expression_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;
type_description_2 = "c";
    goto try_except_handler_11;
}
        Py_INCREF(tmp_expression_value_28);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto try_except_handler_11;
    }
}

tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_Event);
CHECK_OBJECT(tmp_expression_value_28);
Py_DECREF(tmp_expression_value_28);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "c";
    goto try_except_handler_11;
}
tmp_assign_source_34 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_34, 0, tmp_tuple_element_10);
{
    PyObject *old = tmp_Events$class_container$class_creation_3__bases_orig;
    tmp_Events$class_container$class_creation_3__bases_orig = tmp_assign_source_34;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_Events$class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_4 = tmp_Events$class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_35 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "c";
    goto try_except_handler_11;
}
{
    PyObject *old = tmp_Events$class_container$class_creation_3__bases;
    tmp_Events$class_container$class_creation_3__bases = tmp_assign_source_35;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_36;
tmp_assign_source_36 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = tmp_Events$class_container$class_creation_3__class_decl_dict;
    tmp_Events$class_container$class_creation_3__class_decl_dict = tmp_assign_source_36;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_metaclass_value_6;
nuitka_bool tmp_condition_result_12;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_29;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_6;
CHECK_OBJECT(tmp_Events$class_container$class_creation_3__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_Events$class_container$class_creation_3__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "c";
    goto try_except_handler_11;
}
tmp_condition_result_12 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_Events$class_container$class_creation_3__bases);
tmp_expression_value_29 = tmp_Events$class_container$class_creation_3__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_29, tmp_subscript_value_4, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "c";
    goto try_except_handler_11;
}
tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "c";
    goto try_except_handler_11;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_6);
condexpr_end_4:;
CHECK_OBJECT(tmp_Events$class_container$class_creation_3__bases);
tmp_bases_value_6 = tmp_Events$class_container$class_creation_3__bases;
tmp_assign_source_37 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
CHECK_OBJECT(tmp_metaclass_value_6);
Py_DECREF(tmp_metaclass_value_6);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "c";
    goto try_except_handler_11;
}
{
    PyObject *old = tmp_Events$class_container$class_creation_3__metaclass;
    tmp_Events$class_container$class_creation_3__metaclass = tmp_assign_source_37;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_13;
PyObject *tmp_expression_value_30;
CHECK_OBJECT(tmp_Events$class_container$class_creation_3__metaclass);
tmp_expression_value_30 = tmp_Events$class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_30, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "c";
    goto try_except_handler_11;
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
PyObject *tmp_assign_source_38;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_31;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_11;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_Events$class_container$class_creation_3__metaclass);
tmp_expression_value_31 = tmp_Events$class_container$class_creation_3__metaclass;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "c";
    goto try_except_handler_11;
}
tmp_tuple_element_11 = mod_consts.const_str_plain_Scroll;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_Events$class_container$class_creation_3__bases);
tmp_tuple_element_11 = tmp_Events$class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_11);
CHECK_OBJECT(tmp_Events$class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_4 = tmp_Events$class_container$class_creation_3__class_decl_dict;
frame_frame_pynput$mouse$$$class__1_Events_2->m_frame.f_lineno = 85;
tmp_assign_source_38 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "c";
    goto try_except_handler_11;
}
{
    PyObject *old = tmp_Events$class_container$class_creation_3__prepared;
    tmp_Events$class_container$class_creation_3__prepared = tmp_assign_source_38;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_14;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_32;
CHECK_OBJECT(tmp_Events$class_container$class_creation_3__prepared);
tmp_expression_value_32 = tmp_Events$class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_32, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "c";
    goto try_except_handler_11;
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
PyObject *tmp_tuple_element_12;
PyObject *tmp_expression_value_33;
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_Events$class_container$class_creation_3__metaclass);
tmp_expression_value_33 = tmp_Events$class_container$class_creation_3__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_12 = BUILTIN_GETATTR(tstate, tmp_expression_value_33, tmp_name_value_7, tmp_default_value_4);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "c";
    goto try_except_handler_11;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_34;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_Events$class_container$class_creation_3__prepared);
tmp_type_arg_8 = tmp_Events$class_container$class_creation_3__prepared;
tmp_expression_value_34 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_34 == NULL));
tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_34);
Py_DECREF(tmp_expression_value_34);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "c";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_12);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_11;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "c";
    goto try_except_handler_11;
}
frame_frame_pynput$mouse$$$class__1_Events_2->m_frame.f_lineno = 85;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 85;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_2 = "c";
goto try_except_handler_11;
}
branch_no_10:;
goto branch_end_9;
branch_no_9:;
{
PyObject *tmp_assign_source_39;
tmp_assign_source_39 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = tmp_Events$class_container$class_creation_3__prepared;
    tmp_Events$class_container$class_creation_3__prepared = tmp_assign_source_39;
    Py_XDECREF(old);
}

}
branch_end_9:;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_Events$class_container$class_creation_3__prepared);
tmp_set_locals_4 = tmp_Events$class_container$class_creation_3__prepared;
locals_pynput$mouse$$$class__4_Scroll_85 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_ab37e9e84cce0adb6011202fa0255cbd;
tmp_res = PyObject_SetItem(locals_pynput$mouse$$$class__4_Scroll_85, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "c";
    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_str_digest_7eb1943a685023b47ced9c028ef5b81a;
tmp_res = PyObject_SetItem(locals_pynput$mouse$$$class__4_Scroll_85, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "c";
    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_str_digest_4764fb6c64fee76817dc63d55dbb1085;
tmp_res = PyObject_SetItem(locals_pynput$mouse$$$class__4_Scroll_85, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "c";
    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_int_pos_85;
tmp_res = PyObject_SetItem(locals_pynput$mouse$$$class__4_Scroll_85, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "c";
    goto try_except_handler_13;
}
frame_frame_pynput$mouse$$$class__4_Scroll_5 = MAKE_CLASS_FRAME(tstate, code_objects_f2d024c1fb15ef77614cde05ccf7f10c, module_pynput$mouse, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pynput$mouse$$$class__4_Scroll_5, locals_pynput$mouse$$$class__4_Scroll_85);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$mouse$$$class__4_Scroll_5);
assert(Py_REFCNT(frame_frame_pynput$mouse$$$class__4_Scroll_5) == 2);

// Framed code:

tmp_dictset_value = MAKE_FUNCTION_pynput$mouse$$$function__3___init__(tstate);

tmp_res = PyObject_SetItem(locals_pynput$mouse$$$class__4_Scroll_85, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_3 = "o";
    goto frame_exception_exit_5;
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$mouse$$$class__4_Scroll_5);


goto frame_no_exception_3;
frame_exception_exit_5:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$mouse$$$class__4_Scroll_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$mouse$$$class__4_Scroll_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$mouse$$$class__4_Scroll_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$mouse$$$class__4_Scroll_5,
    type_description_3,
    outline_3_var___class__
);



assertFrameObject(frame_frame_pynput$mouse$$$class__4_Scroll_5);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$mouse$$$class__4_Scroll_5);


// Return the error.
goto nested_frame_exit_4;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_4:;
type_description_2 = "c";
goto try_except_handler_13;
skip_nested_handling_3:;
tmp_dictset_value = mod_consts.const_tuple_cdc194066bfd406208554d8c3507a347_tuple;
tmp_res = PyObject_SetItem(locals_pynput$mouse$$$class__4_Scroll_85, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "c";
    goto try_except_handler_13;
}
{
nuitka_bool tmp_condition_result_15;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_Events$class_container$class_creation_3__bases);
tmp_cmp_expr_left_3 = tmp_Events$class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_Events$class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_3 = tmp_Events$class_container$class_creation_3__bases_orig;
tmp_condition_result_15 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "c";
    goto try_except_handler_13;
}
if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
CHECK_OBJECT(tmp_Events$class_container$class_creation_3__bases_orig);
tmp_dictset_value = tmp_Events$class_container$class_creation_3__bases_orig;
tmp_res = PyObject_SetItem(locals_pynput$mouse$$$class__4_Scroll_85, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "c";
    goto try_except_handler_13;
}
branch_no_11:;
{
PyObject *tmp_assign_source_40;
PyObject *tmp_metaclass_value_7;
PyObject *tmp_name_value_8;
PyObject *tmp_bases_value_7;
PyObject *tmp_dict_arg_value_3;
PyObject *tmp_class_decl_dict_value_3;
PyObject *tmp_metaclass_args_3;
CHECK_OBJECT(tmp_Events$class_container$class_creation_3__metaclass);
tmp_metaclass_value_7 = tmp_Events$class_container$class_creation_3__metaclass;
tmp_name_value_8 = mod_consts.const_str_plain_Scroll;
CHECK_OBJECT(tmp_Events$class_container$class_creation_3__bases);
tmp_bases_value_7 = tmp_Events$class_container$class_creation_3__bases;
tmp_dict_arg_value_3 = locals_pynput$mouse$$$class__4_Scroll_85;
CHECK_OBJECT(tmp_Events$class_container$class_creation_3__class_decl_dict);
tmp_class_decl_dict_value_3 = tmp_Events$class_container$class_creation_3__class_decl_dict;
tmp_metaclass_args_3 = MAKE_TUPLE3(tstate, tmp_name_value_8, tmp_bases_value_7, tmp_dict_arg_value_3);
tmp_assign_source_40 = CALL_FUNCTION(tstate, tmp_metaclass_value_7, tmp_metaclass_args_3, tmp_class_decl_dict_value_3);
CHECK_OBJECT(tmp_metaclass_args_3);
Py_DECREF(tmp_metaclass_args_3);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "c";
    goto try_except_handler_13;
}
{
    PyObject *old = outline_3_var___class__;
    outline_3_var___class__ = tmp_assign_source_40;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_3_var___class__);
tmp_dictset_value = outline_3_var___class__;
Py_INCREF(tmp_dictset_value);
goto try_return_handler_13;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
Py_DECREF(locals_pynput$mouse$$$class__4_Scroll_85);
locals_pynput$mouse$$$class__4_Scroll_85 = NULL;
goto try_return_handler_12;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pynput$mouse$$$class__4_Scroll_85);
locals_pynput$mouse$$$class__4_Scroll_85 = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_12;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 85;
goto try_except_handler_11;
outline_result_8:;
tmp_res = PyObject_SetItem(locals_pynput$mouse$$$class__1_Events_36, mod_consts.const_str_plain_Scroll, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "c";
    goto try_except_handler_11;
}
goto try_end_4;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_Events$class_container$class_creation_3__bases_orig);
tmp_Events$class_container$class_creation_3__bases_orig = NULL;
Py_XDECREF(tmp_Events$class_container$class_creation_3__bases);
tmp_Events$class_container$class_creation_3__bases = NULL;
Py_XDECREF(tmp_Events$class_container$class_creation_3__class_decl_dict);
tmp_Events$class_container$class_creation_3__class_decl_dict = NULL;
Py_XDECREF(tmp_Events$class_container$class_creation_3__metaclass);
tmp_Events$class_container$class_creation_3__metaclass = NULL;
Py_XDECREF(tmp_Events$class_container$class_creation_3__prepared);
tmp_Events$class_container$class_creation_3__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_2;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_Events$class_container$class_creation_3__bases_orig);
CHECK_OBJECT(tmp_Events$class_container$class_creation_3__bases_orig);
Py_DECREF(tmp_Events$class_container$class_creation_3__bases_orig);
tmp_Events$class_container$class_creation_3__bases_orig = NULL;
CHECK_OBJECT(tmp_Events$class_container$class_creation_3__bases);
CHECK_OBJECT(tmp_Events$class_container$class_creation_3__bases);
Py_DECREF(tmp_Events$class_container$class_creation_3__bases);
tmp_Events$class_container$class_creation_3__bases = NULL;
CHECK_OBJECT(tmp_Events$class_container$class_creation_3__class_decl_dict);
CHECK_OBJECT(tmp_Events$class_container$class_creation_3__class_decl_dict);
Py_DECREF(tmp_Events$class_container$class_creation_3__class_decl_dict);
tmp_Events$class_container$class_creation_3__class_decl_dict = NULL;
CHECK_OBJECT(tmp_Events$class_container$class_creation_3__metaclass);
CHECK_OBJECT(tmp_Events$class_container$class_creation_3__metaclass);
Py_DECREF(tmp_Events$class_container$class_creation_3__metaclass);
tmp_Events$class_container$class_creation_3__metaclass = NULL;
CHECK_OBJECT(tmp_Events$class_container$class_creation_3__prepared);
CHECK_OBJECT(tmp_Events$class_container$class_creation_3__prepared);
Py_DECREF(tmp_Events$class_container$class_creation_3__prepared);
tmp_Events$class_container$class_creation_3__prepared = NULL;
tmp_outline_return_value_4 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_4);
goto outline_result_7;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_7:;
CHECK_OBJECT(tmp_outline_return_value_4);
Py_DECREF(tmp_outline_return_value_4);
}

tmp_dictset_value = MAKE_FUNCTION_pynput$mouse$$$function__4___init__(tstate);

tmp_res = PyObject_SetItem(locals_pynput$mouse$$$class__1_Events_36, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_2 = "c";
    goto frame_exception_exit_2;
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$mouse$$$class__1_Events_2);


goto frame_no_exception_4;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$mouse$$$class__1_Events_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$mouse$$$class__1_Events_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$mouse$$$class__1_Events_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$mouse$$$class__1_Events_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_pynput$mouse$$$class__1_Events_2);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$mouse$$$class__1_Events_2);


// Return the error.
goto nested_frame_exit_1;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_1:;

goto try_except_handler_4;
skip_nested_handling_4:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_pynput$mouse$$$class__1_Events_36, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_4;
}
{
nuitka_bool tmp_condition_result_16;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_4 = tmp_class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_4 = tmp_class_container$class_creation_1__bases_orig;
tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_4;
}
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_pynput$mouse$$$class__1_Events_36, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_4;
}
branch_no_12:;
{
PyObject *tmp_assign_source_41;
PyObject *tmp_metaclass_value_8;
PyObject *tmp_name_value_9;
PyObject *tmp_bases_value_8;
PyObject *tmp_dict_arg_value_4;
PyObject *tmp_class_decl_dict_value_4;
PyObject *tmp_metaclass_args_4;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_metaclass_value_8 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_9 = mod_consts.const_str_plain_Events;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_8 = tmp_class_container$class_creation_1__bases;
tmp_dict_arg_value_4 = locals_pynput$mouse$$$class__1_Events_36;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_4 = tmp_class_container$class_creation_1__class_decl_dict;
DICT_SET_ITEM(tmp_dict_arg_value_4, const_str_plain___classcell__, (PyObject *)outline_0_var___class__);
tmp_metaclass_args_4 = MAKE_TUPLE3(tstate, tmp_name_value_9, tmp_bases_value_8, tmp_dict_arg_value_4);
tmp_assign_source_41 = CALL_FUNCTION(tstate, tmp_metaclass_value_8, tmp_metaclass_args_4, tmp_class_decl_dict_value_4);
CHECK_OBJECT(tmp_metaclass_args_4);
Py_DECREF(tmp_metaclass_args_4);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_4;
}
{
    PyObject *old = PyCell_GET((PyObject *)outline_0_var___class__);
    PyCell_SET((PyObject *)outline_0_var___class__, tmp_assign_source_41);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(PyCell_GET((PyObject *)outline_0_var___class__));
tmp_assign_source_19 = PyCell_GET((PyObject *)outline_0_var___class__);
Py_INCREF(tmp_assign_source_19);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_pynput$mouse$$$class__1_Events_36);
locals_pynput$mouse$$$class__1_Events_36 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pynput$mouse$$$class__1_Events_36);
locals_pynput$mouse$$$class__1_Events_36 = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_3;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(outline_0_var___class__);
assert(PyCell_Check((PyObject *)outline_0_var___class__));
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 36;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_pynput$mouse, (Nuitka_StringObject *)mod_consts.const_str_plain_Events, tmp_assign_source_19);
}
goto try_end_5;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
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
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_5;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$mouse, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$mouse->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$mouse, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_pynput$mouse);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_5:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pynput$mouse", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "pynput.mouse" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_pynput$mouse);
    return module_pynput$mouse;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pynput$mouse, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pynput$mouse", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
