/* Generated code for Python module 'pynput$keyboard'
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



/* The "module_pynput$keyboard" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pynput$keyboard;
PyDictObject *moduledict_pynput$keyboard;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_key;
PyObject *const_str_plain_injected;
PyObject *const_str_plain_Events;
PyObject *const_str_plain_Press;
PyObject *const_str_plain_Release;
PyObject *const_tuple_str_plain_on_press_str_plain_on_release_tuple;
PyObject *const_str_plain__state;
PyObject *const_str_plain__keys;
PyObject *const_str_plain__on_activate;
PyObject *const_str_plain_parts;
PyObject *const_str_digest_301e13412e5ecd1d85143b73a1e84e83;
PyObject *const_str_plain_parse;
PyObject *const_str_digest_af3c64ec5ddbb3f63b1d340ec92d9223;
PyObject *const_str_digest_9ca495a892e11fbda146de12dc6ea009;
PyObject *const_str_chr_43;
PyObject *const_str_plain_start;
PyObject *const_str_plain_KeyCode;
PyObject *const_str_plain_from_char;
PyObject *const_tuple_str_chr_60_str_chr_62_tuple;
PyObject *const_slice_int_pos_1_int_neg_1_none;
PyObject *const_str_plain_Key;
PyObject *const_str_plain__NORMAL_MODIFIERS;
PyObject *const_str_plain_values;
PyObject *const_str_plain_from_vk;
PyObject *const_str_plain_value;
PyObject *const_str_plain_vk;
PyObject *const_str_plain_add;
PyObject *const_str_digest_1d4a1eaa09a27a77543e20c6a3f9a546;
PyObject *const_str_plain_remove;
PyObject *const_str_digest_50cb9cd4ebd6dd1d392e551054902633;
PyObject *const_str_plain_items;
PyObject *const_str_plain_HotKey;
PyObject *const_str_plain__hotkeys;
PyObject *const_str_plain_GlobalHotKeys;
PyObject *const_str_plain_on_press;
PyObject *const_str_plain__on_press;
PyObject *const_str_plain_on_release;
PyObject *const_str_plain__on_release;
PyObject *const_str_plain_press;
PyObject *const_str_plain_self;
PyObject *const_str_plain_canonical;
PyObject *const_str_digest_20773ff6f65d1bb317b95c45b4ebc6f4;
PyObject *const_str_plain_release;
PyObject *const_str_digest_366e59af16265a5581dd6d78c720381c;
PyObject *const_str_digest_c93b0a608490e24a420644a6643b359e;
PyObject *const_str_plain_join;
PyObject *const_str_plain_environ;
PyObject *const_tuple_b53c809d10a900dbf77302a1f04808fa_tuple;
PyObject *const_str_plain_keyboard;
PyObject *const_tuple_73a355f5a7e8b5ec81566aecd2f66eb7_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_submodule_search_locations;
PyObject *const_str_plain_itertools;
PyObject *const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745;
PyObject *const_tuple_str_plain_backend_str_plain_Events_tuple;
PyObject *const_str_plain_backend;
PyObject *const_tuple_str_digest_f4a9d444dae7988f006080c97c8628eb_tuple;
PyObject *const_str_plain_Controller;
PyObject *const_str_plain_Listener;
PyObject *const_str_plain_alt_gr;
PyObject *const_str_plain_alt;
PyObject *const_str_plain_alt_l;
PyObject *const_str_plain_alt_r;
PyObject *const_str_plain_cmd;
PyObject *const_str_plain_cmd_l;
PyObject *const_str_plain_cmd_r;
PyObject *const_str_plain_ctrl;
PyObject *const_str_plain_ctrl_l;
PyObject *const_str_plain_ctrl_r;
PyObject *const_str_plain_shift;
PyObject *const_str_plain_shift_l;
PyObject *const_str_plain_shift_r;
PyObject *const_str_plain__MODIFIER_KEYS;
PyObject *const_str_plain_cycle;
PyObject *const_str_newline;
PyObject *const_str_plain_enter;
PyObject *const_str_chr_13;
PyObject *const_str_chr_9;
PyObject *const_str_plain_tab;
PyObject *const_str_plain__CONTROL_CODES;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_f4a9d444dae7988f006080c97c8628eb;
PyObject *const_str_digest_5559baf839f0b59677a1e4bd61dec908;
PyObject *const_int_pos_62;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain__Listener;
PyObject *const_str_plain_Event;
PyObject *const_str_digest_68f69fd3214b4a23872ccc887d851fdf;
PyObject *const_str_digest_aa6f0cc7ec58ff680bc2685860b0be73;
PyObject *const_int_pos_77;
PyObject *const_str_digest_062188ba77a55b893f3f0b73644f46ce;
PyObject *const_tuple_str_plain_key_str_plain_injected_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_f11f63ad68743094fec316d34dc3651e;
PyObject *const_str_digest_db489a5baf91c8b2ff86b2e4852c2cba;
PyObject *const_int_pos_87;
PyObject *const_str_digest_b13727e8ccd9cd1890a24e6fb4b17c9c;
PyObject *const_str_digest_a50480f553ef08a71bb6c22458d2cfa3;
PyObject *const_tuple_type_object_tuple;
PyObject *const_str_digest_b97f691ef6a5eadd3dbf22b360e77798;
PyObject *const_int_pos_103;
PyObject *const_str_digest_be2d1876cc8b5e442e4e36bb0083f432;
PyObject *const_str_digest_52c9777f650d9746db37e853657dfda3;
PyObject *const_str_digest_6468314ba28d83b4ec15ad9d3245c4c9;
PyObject *const_str_digest_7f8859575d0b3a995f791936e7885f0a;
PyObject *const_tuple_str_plain__state_str_plain__keys_str_plain__on_activate_tuple;
PyObject *const_str_digest_e0bc8a0a270703ad4aca767a18953efd;
PyObject *const_int_pos_204;
PyObject *const_str_digest_4ad5cd702a021a977c4100cf17d7ae1d;
PyObject *const_str_digest_020394d034ace2b1321192c89ce7da2f;
PyObject *const_str_digest_4b8e36e6dbe122a5720ea2a8c5f4d110;
PyObject *const_tuple_str_plain__hotkeys_tuple;
PyObject *const_str_digest_9ce2c3f44a66f1f5d6512bbd72f7ebeb;
PyObject *const_str_digest_21a892e4e689ec7f3c1d519b2461833b;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_key_str_plain_injected_tuple;
PyObject *const_tuple_str_plain_self_str_plain___class___tuple;
PyObject *const_tuple_d2adefa6931e4d51a9f2ad88595cb26c_tuple;
PyObject *const_tuple_str_plain_self_str_plain_keys_str_plain_on_activate_tuple;
PyObject *const_tuple_168cd4e6ed29f8ffe5ae00075fea5ecd_tuple;
PyObject *const_tuple_b34e47be4709d6e83ec4794c2f398ffa_tuple;
PyObject *const_tuple_str_plain_s_str_plain_p_str_plain_key_tuple;
PyObject *const_tuple_str_plain_start_str_plain_i_str_plain_c_str_plain_keys_tuple;
PyObject *const_tuple_str_plain_keys_tuple;
PyObject *const_tuple_str_plain_self_str_plain_key_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[130];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("pynput.keyboard"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 130) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 130 values, got %d\n",
                    UN_TRANSLATE("pynput.keyboard"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key", mod_consts.const_str_plain_key);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_key);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_injected", mod_consts.const_str_plain_injected);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_injected);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Events", mod_consts.const_str_plain_Events);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_Events);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Press", mod_consts.const_str_plain_Press);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_Press);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Release", mod_consts.const_str_plain_Release);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_Release);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_on_press_str_plain_on_release_tuple", mod_consts.const_tuple_str_plain_on_press_str_plain_on_release_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_on_press_str_plain_on_release_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__state", mod_consts.const_str_plain__state);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain__state);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__keys", mod_consts.const_str_plain__keys);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain__keys);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__on_activate", mod_consts.const_str_plain__on_activate);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain__on_activate);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_parts", mod_consts.const_str_plain_parts);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_parts);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_301e13412e5ecd1d85143b73a1e84e83", mod_consts.const_str_digest_301e13412e5ecd1d85143b73a1e84e83);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_301e13412e5ecd1d85143b73a1e84e83);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_parse", mod_consts.const_str_plain_parse);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_af3c64ec5ddbb3f63b1d340ec92d9223", mod_consts.const_str_digest_af3c64ec5ddbb3f63b1d340ec92d9223);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_af3c64ec5ddbb3f63b1d340ec92d9223);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9ca495a892e11fbda146de12dc6ea009", mod_consts.const_str_digest_9ca495a892e11fbda146de12dc6ea009);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_9ca495a892e11fbda146de12dc6ea009);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_43", mod_consts.const_str_chr_43);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_chr_43);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_start", mod_consts.const_str_plain_start);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_start);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KeyCode", mod_consts.const_str_plain_KeyCode);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_KeyCode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_from_char", mod_consts.const_str_plain_from_char);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_char);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_chr_60_str_chr_62_tuple", mod_consts.const_tuple_str_chr_60_str_chr_62_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_60_str_chr_62_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_1_int_neg_1_none", mod_consts.const_slice_int_pos_1_int_neg_1_none);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_int_neg_1_none);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Key", mod_consts.const_str_plain_Key);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_Key);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__NORMAL_MODIFIERS", mod_consts.const_str_plain__NORMAL_MODIFIERS);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain__NORMAL_MODIFIERS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_values", mod_consts.const_str_plain_values);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_values);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_from_vk", mod_consts.const_str_plain_from_vk);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_value", mod_consts.const_str_plain_value);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_value);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_vk", mod_consts.const_str_plain_vk);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_vk);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_add", mod_consts.const_str_plain_add);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_add);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1d4a1eaa09a27a77543e20c6a3f9a546", mod_consts.const_str_digest_1d4a1eaa09a27a77543e20c6a3f9a546);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_1d4a1eaa09a27a77543e20c6a3f9a546);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_remove", mod_consts.const_str_plain_remove);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_remove);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_50cb9cd4ebd6dd1d392e551054902633", mod_consts.const_str_digest_50cb9cd4ebd6dd1d392e551054902633);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_50cb9cd4ebd6dd1d392e551054902633);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_items", mod_consts.const_str_plain_items);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HotKey", mod_consts.const_str_plain_HotKey);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_HotKey);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__hotkeys", mod_consts.const_str_plain__hotkeys);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain__hotkeys);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GlobalHotKeys", mod_consts.const_str_plain_GlobalHotKeys);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_GlobalHotKeys);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_on_press", mod_consts.const_str_plain_on_press);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_on_press);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__on_press", mod_consts.const_str_plain__on_press);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain__on_press);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_on_release", mod_consts.const_str_plain_on_release);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_on_release);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__on_release", mod_consts.const_str_plain__on_release);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain__on_release);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_press", mod_consts.const_str_plain_press);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_press);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_self", mod_consts.const_str_plain_self);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_canonical", mod_consts.const_str_plain_canonical);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_canonical);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_20773ff6f65d1bb317b95c45b4ebc6f4", mod_consts.const_str_digest_20773ff6f65d1bb317b95c45b4ebc6f4);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_20773ff6f65d1bb317b95c45b4ebc6f4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_release", mod_consts.const_str_plain_release);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_release);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_366e59af16265a5581dd6d78c720381c", mod_consts.const_str_digest_366e59af16265a5581dd6d78c720381c);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_366e59af16265a5581dd6d78c720381c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c93b0a608490e24a420644a6643b359e", mod_consts.const_str_digest_c93b0a608490e24a420644a6643b359e);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_c93b0a608490e24a420644a6643b359e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_join", mod_consts.const_str_plain_join);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_join);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_environ", mod_consts.const_str_plain_environ);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_b53c809d10a900dbf77302a1f04808fa_tuple", mod_consts.const_tuple_b53c809d10a900dbf77302a1f04808fa_tuple);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_b53c809d10a900dbf77302a1f04808fa_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_keyboard", mod_consts.const_str_plain_keyboard);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_keyboard);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_73a355f5a7e8b5ec81566aecd2f66eb7_tuple", mod_consts.const_tuple_73a355f5a7e8b5ec81566aecd2f66eb7_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_73a355f5a7e8b5ec81566aecd2f66eb7_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_submodule_search_locations", mod_consts.const_str_plain_submodule_search_locations);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_itertools", mod_consts.const_str_plain_itertools);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_itertools);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745", mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_backend_str_plain_Events_tuple", mod_consts.const_tuple_str_plain_backend_str_plain_Events_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_backend_str_plain_Events_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_backend", mod_consts.const_str_plain_backend);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_backend);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_f4a9d444dae7988f006080c97c8628eb_tuple", mod_consts.const_tuple_str_digest_f4a9d444dae7988f006080c97c8628eb_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_f4a9d444dae7988f006080c97c8628eb_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Controller", mod_consts.const_str_plain_Controller);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_Controller);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Listener", mod_consts.const_str_plain_Listener);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_Listener);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_alt_gr", mod_consts.const_str_plain_alt_gr);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_alt_gr);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_alt", mod_consts.const_str_plain_alt);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_alt);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_alt_l", mod_consts.const_str_plain_alt_l);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_alt_l);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_alt_r", mod_consts.const_str_plain_alt_r);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_alt_r);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cmd", mod_consts.const_str_plain_cmd);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_cmd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cmd_l", mod_consts.const_str_plain_cmd_l);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_cmd_l);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cmd_r", mod_consts.const_str_plain_cmd_r);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_cmd_r);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ctrl", mod_consts.const_str_plain_ctrl);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_ctrl);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ctrl_l", mod_consts.const_str_plain_ctrl_l);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_ctrl_l);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ctrl_r", mod_consts.const_str_plain_ctrl_r);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_ctrl_r);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_shift", mod_consts.const_str_plain_shift);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_shift);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_shift_l", mod_consts.const_str_plain_shift_l);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_shift_l);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_shift_r", mod_consts.const_str_plain_shift_r);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_shift_r);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__MODIFIER_KEYS", mod_consts.const_str_plain__MODIFIER_KEYS);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain__MODIFIER_KEYS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cycle", mod_consts.const_str_plain_cycle);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_cycle);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_newline", mod_consts.const_str_newline);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_newline);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_enter", mod_consts.const_str_plain_enter);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_enter);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_13", mod_consts.const_str_chr_13);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_chr_13);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_9", mod_consts.const_str_chr_9);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_chr_9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tab", mod_consts.const_str_plain_tab);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_tab);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__CONTROL_CODES", mod_consts.const_str_plain__CONTROL_CODES);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain__CONTROL_CODES);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f4a9d444dae7988f006080c97c8628eb", mod_consts.const_str_digest_f4a9d444dae7988f006080c97c8628eb);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_f4a9d444dae7988f006080c97c8628eb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5559baf839f0b59677a1e4bd61dec908", mod_consts.const_str_digest_5559baf839f0b59677a1e4bd61dec908);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_5559baf839f0b59677a1e4bd61dec908);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_62", mod_consts.const_int_pos_62);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_int_pos_62);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__Listener", mod_consts.const_str_plain__Listener);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain__Listener);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Event", mod_consts.const_str_plain_Event);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_Event);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_68f69fd3214b4a23872ccc887d851fdf", mod_consts.const_str_digest_68f69fd3214b4a23872ccc887d851fdf);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_digest_68f69fd3214b4a23872ccc887d851fdf);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_aa6f0cc7ec58ff680bc2685860b0be73", mod_consts.const_str_digest_aa6f0cc7ec58ff680bc2685860b0be73);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_aa6f0cc7ec58ff680bc2685860b0be73);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_77", mod_consts.const_int_pos_77);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_int_pos_77);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_062188ba77a55b893f3f0b73644f46ce", mod_consts.const_str_digest_062188ba77a55b893f3f0b73644f46ce);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_digest_062188ba77a55b893f3f0b73644f46ce);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_key_str_plain_injected_tuple", mod_consts.const_tuple_str_plain_key_str_plain_injected_tuple);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_str_plain_injected_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f11f63ad68743094fec316d34dc3651e", mod_consts.const_str_digest_f11f63ad68743094fec316d34dc3651e);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_digest_f11f63ad68743094fec316d34dc3651e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_db489a5baf91c8b2ff86b2e4852c2cba", mod_consts.const_str_digest_db489a5baf91c8b2ff86b2e4852c2cba);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_db489a5baf91c8b2ff86b2e4852c2cba);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_87", mod_consts.const_int_pos_87);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_int_pos_87);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b13727e8ccd9cd1890a24e6fb4b17c9c", mod_consts.const_str_digest_b13727e8ccd9cd1890a24e6fb4b17c9c);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_digest_b13727e8ccd9cd1890a24e6fb4b17c9c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a50480f553ef08a71bb6c22458d2cfa3", mod_consts.const_str_digest_a50480f553ef08a71bb6c22458d2cfa3);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_a50480f553ef08a71bb6c22458d2cfa3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_object_tuple", mod_consts.const_tuple_type_object_tuple);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_tuple_type_object_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b97f691ef6a5eadd3dbf22b360e77798", mod_consts.const_str_digest_b97f691ef6a5eadd3dbf22b360e77798);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_digest_b97f691ef6a5eadd3dbf22b360e77798);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_103", mod_consts.const_int_pos_103);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_int_pos_103);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_be2d1876cc8b5e442e4e36bb0083f432", mod_consts.const_str_digest_be2d1876cc8b5e442e4e36bb0083f432);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_digest_be2d1876cc8b5e442e4e36bb0083f432);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_52c9777f650d9746db37e853657dfda3", mod_consts.const_str_digest_52c9777f650d9746db37e853657dfda3);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_digest_52c9777f650d9746db37e853657dfda3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6468314ba28d83b4ec15ad9d3245c4c9", mod_consts.const_str_digest_6468314ba28d83b4ec15ad9d3245c4c9);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_6468314ba28d83b4ec15ad9d3245c4c9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7f8859575d0b3a995f791936e7885f0a", mod_consts.const_str_digest_7f8859575d0b3a995f791936e7885f0a);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_7f8859575d0b3a995f791936e7885f0a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__state_str_plain__keys_str_plain__on_activate_tuple", mod_consts.const_tuple_str_plain__state_str_plain__keys_str_plain__on_activate_tuple);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__state_str_plain__keys_str_plain__on_activate_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e0bc8a0a270703ad4aca767a18953efd", mod_consts.const_str_digest_e0bc8a0a270703ad4aca767a18953efd);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_digest_e0bc8a0a270703ad4aca767a18953efd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_204", mod_consts.const_int_pos_204);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_int_pos_204);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4ad5cd702a021a977c4100cf17d7ae1d", mod_consts.const_str_digest_4ad5cd702a021a977c4100cf17d7ae1d);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_digest_4ad5cd702a021a977c4100cf17d7ae1d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_020394d034ace2b1321192c89ce7da2f", mod_consts.const_str_digest_020394d034ace2b1321192c89ce7da2f);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_020394d034ace2b1321192c89ce7da2f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4b8e36e6dbe122a5720ea2a8c5f4d110", mod_consts.const_str_digest_4b8e36e6dbe122a5720ea2a8c5f4d110);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_4b8e36e6dbe122a5720ea2a8c5f4d110);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__hotkeys_tuple", mod_consts.const_tuple_str_plain__hotkeys_tuple);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__hotkeys_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9ce2c3f44a66f1f5d6512bbd72f7ebeb", mod_consts.const_str_digest_9ce2c3f44a66f1f5d6512bbd72f7ebeb);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_9ce2c3f44a66f1f5d6512bbd72f7ebeb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_21a892e4e689ec7f3c1d519b2461833b", mod_consts.const_str_digest_21a892e4e689ec7f3c1d519b2461833b);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_digest_21a892e4e689ec7f3c1d519b2461833b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_injected_tuple", mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_injected_tuple);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_injected_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain___class___tuple", mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_d2adefa6931e4d51a9f2ad88595cb26c_tuple", mod_consts.const_tuple_d2adefa6931e4d51a9f2ad88595cb26c_tuple);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_tuple_d2adefa6931e4d51a9f2ad88595cb26c_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_keys_str_plain_on_activate_tuple", mod_consts.const_tuple_str_plain_self_str_plain_keys_str_plain_on_activate_tuple);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_keys_str_plain_on_activate_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_168cd4e6ed29f8ffe5ae00075fea5ecd_tuple", mod_consts.const_tuple_168cd4e6ed29f8ffe5ae00075fea5ecd_tuple);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_168cd4e6ed29f8ffe5ae00075fea5ecd_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_b34e47be4709d6e83ec4794c2f398ffa_tuple", mod_consts.const_tuple_b34e47be4709d6e83ec4794c2f398ffa_tuple);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_tuple_b34e47be4709d6e83ec4794c2f398ffa_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_s_str_plain_p_str_plain_key_tuple", mod_consts.const_tuple_str_plain_s_str_plain_p_str_plain_key_tuple);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_s_str_plain_p_str_plain_key_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_start_str_plain_i_str_plain_c_str_plain_keys_tuple", mod_consts.const_tuple_str_plain_start_str_plain_i_str_plain_c_str_plain_keys_tuple);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_start_str_plain_i_str_plain_c_str_plain_keys_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_keys_tuple", mod_consts.const_tuple_str_plain_keys_tuple);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_keys_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_key_tuple", mod_consts.const_tuple_str_plain_self_str_plain_key_tuple);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_key_tuple);
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
void checkModuleConstants_pynput$keyboard(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key", mod_consts.const_str_plain_key);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_key) && "mod_consts.const_str_plain_key");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_injected", mod_consts.const_str_plain_injected);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_injected) && "mod_consts.const_str_plain_injected");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Events", mod_consts.const_str_plain_Events);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_Events) && "mod_consts.const_str_plain_Events");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Press", mod_consts.const_str_plain_Press);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_Press) && "mod_consts.const_str_plain_Press");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Release", mod_consts.const_str_plain_Release);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_Release) && "mod_consts.const_str_plain_Release");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_on_press_str_plain_on_release_tuple", mod_consts.const_tuple_str_plain_on_press_str_plain_on_release_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_on_press_str_plain_on_release_tuple) && "mod_consts.const_tuple_str_plain_on_press_str_plain_on_release_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__state", mod_consts.const_str_plain__state);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain__state) && "mod_consts.const_str_plain__state");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__keys", mod_consts.const_str_plain__keys);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain__keys) && "mod_consts.const_str_plain__keys");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__on_activate", mod_consts.const_str_plain__on_activate);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain__on_activate) && "mod_consts.const_str_plain__on_activate");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_parts", mod_consts.const_str_plain_parts);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_parts) && "mod_consts.const_str_plain_parts");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_301e13412e5ecd1d85143b73a1e84e83", mod_consts.const_str_digest_301e13412e5ecd1d85143b73a1e84e83);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_301e13412e5ecd1d85143b73a1e84e83) && "mod_consts.const_str_digest_301e13412e5ecd1d85143b73a1e84e83");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_parse", mod_consts.const_str_plain_parse);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse) && "mod_consts.const_str_plain_parse");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_af3c64ec5ddbb3f63b1d340ec92d9223", mod_consts.const_str_digest_af3c64ec5ddbb3f63b1d340ec92d9223);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_af3c64ec5ddbb3f63b1d340ec92d9223) && "mod_consts.const_str_digest_af3c64ec5ddbb3f63b1d340ec92d9223");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9ca495a892e11fbda146de12dc6ea009", mod_consts.const_str_digest_9ca495a892e11fbda146de12dc6ea009);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_9ca495a892e11fbda146de12dc6ea009) && "mod_consts.const_str_digest_9ca495a892e11fbda146de12dc6ea009");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_43", mod_consts.const_str_chr_43);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_chr_43) && "mod_consts.const_str_chr_43");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_start", mod_consts.const_str_plain_start);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_start) && "mod_consts.const_str_plain_start");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KeyCode", mod_consts.const_str_plain_KeyCode);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_KeyCode) && "mod_consts.const_str_plain_KeyCode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_from_char", mod_consts.const_str_plain_from_char);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_char) && "mod_consts.const_str_plain_from_char");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_chr_60_str_chr_62_tuple", mod_consts.const_tuple_str_chr_60_str_chr_62_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_60_str_chr_62_tuple) && "mod_consts.const_tuple_str_chr_60_str_chr_62_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_1_int_neg_1_none", mod_consts.const_slice_int_pos_1_int_neg_1_none);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_int_neg_1_none) && "mod_consts.const_slice_int_pos_1_int_neg_1_none");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Key", mod_consts.const_str_plain_Key);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_Key) && "mod_consts.const_str_plain_Key");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__NORMAL_MODIFIERS", mod_consts.const_str_plain__NORMAL_MODIFIERS);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain__NORMAL_MODIFIERS) && "mod_consts.const_str_plain__NORMAL_MODIFIERS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_values", mod_consts.const_str_plain_values);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_values) && "mod_consts.const_str_plain_values");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_from_vk", mod_consts.const_str_plain_from_vk);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_vk) && "mod_consts.const_str_plain_from_vk");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_value", mod_consts.const_str_plain_value);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_value) && "mod_consts.const_str_plain_value");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_vk", mod_consts.const_str_plain_vk);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_vk) && "mod_consts.const_str_plain_vk");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_add", mod_consts.const_str_plain_add);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_add) && "mod_consts.const_str_plain_add");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1d4a1eaa09a27a77543e20c6a3f9a546", mod_consts.const_str_digest_1d4a1eaa09a27a77543e20c6a3f9a546);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_1d4a1eaa09a27a77543e20c6a3f9a546) && "mod_consts.const_str_digest_1d4a1eaa09a27a77543e20c6a3f9a546");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_remove", mod_consts.const_str_plain_remove);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_remove) && "mod_consts.const_str_plain_remove");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_50cb9cd4ebd6dd1d392e551054902633", mod_consts.const_str_digest_50cb9cd4ebd6dd1d392e551054902633);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_50cb9cd4ebd6dd1d392e551054902633) && "mod_consts.const_str_digest_50cb9cd4ebd6dd1d392e551054902633");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_items", mod_consts.const_str_plain_items);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_items) && "mod_consts.const_str_plain_items");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HotKey", mod_consts.const_str_plain_HotKey);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_HotKey) && "mod_consts.const_str_plain_HotKey");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__hotkeys", mod_consts.const_str_plain__hotkeys);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain__hotkeys) && "mod_consts.const_str_plain__hotkeys");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GlobalHotKeys", mod_consts.const_str_plain_GlobalHotKeys);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_GlobalHotKeys) && "mod_consts.const_str_plain_GlobalHotKeys");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_on_press", mod_consts.const_str_plain_on_press);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_on_press) && "mod_consts.const_str_plain_on_press");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__on_press", mod_consts.const_str_plain__on_press);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain__on_press) && "mod_consts.const_str_plain__on_press");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_on_release", mod_consts.const_str_plain_on_release);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_on_release) && "mod_consts.const_str_plain_on_release");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__on_release", mod_consts.const_str_plain__on_release);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain__on_release) && "mod_consts.const_str_plain__on_release");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_press", mod_consts.const_str_plain_press);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_press) && "mod_consts.const_str_plain_press");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_self", mod_consts.const_str_plain_self);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_self) && "mod_consts.const_str_plain_self");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_canonical", mod_consts.const_str_plain_canonical);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_canonical) && "mod_consts.const_str_plain_canonical");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_20773ff6f65d1bb317b95c45b4ebc6f4", mod_consts.const_str_digest_20773ff6f65d1bb317b95c45b4ebc6f4);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_20773ff6f65d1bb317b95c45b4ebc6f4) && "mod_consts.const_str_digest_20773ff6f65d1bb317b95c45b4ebc6f4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_release", mod_consts.const_str_plain_release);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_release) && "mod_consts.const_str_plain_release");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_366e59af16265a5581dd6d78c720381c", mod_consts.const_str_digest_366e59af16265a5581dd6d78c720381c);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_366e59af16265a5581dd6d78c720381c) && "mod_consts.const_str_digest_366e59af16265a5581dd6d78c720381c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c93b0a608490e24a420644a6643b359e", mod_consts.const_str_digest_c93b0a608490e24a420644a6643b359e);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_c93b0a608490e24a420644a6643b359e) && "mod_consts.const_str_digest_c93b0a608490e24a420644a6643b359e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_join", mod_consts.const_str_plain_join);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_join) && "mod_consts.const_str_plain_join");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_environ", mod_consts.const_str_plain_environ);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ) && "mod_consts.const_str_plain_environ");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_b53c809d10a900dbf77302a1f04808fa_tuple", mod_consts.const_tuple_b53c809d10a900dbf77302a1f04808fa_tuple);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_b53c809d10a900dbf77302a1f04808fa_tuple) && "mod_consts.const_tuple_b53c809d10a900dbf77302a1f04808fa_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_keyboard", mod_consts.const_str_plain_keyboard);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_keyboard) && "mod_consts.const_str_plain_keyboard");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_73a355f5a7e8b5ec81566aecd2f66eb7_tuple", mod_consts.const_tuple_73a355f5a7e8b5ec81566aecd2f66eb7_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_73a355f5a7e8b5ec81566aecd2f66eb7_tuple) && "mod_consts.const_tuple_73a355f5a7e8b5ec81566aecd2f66eb7_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_submodule_search_locations", mod_consts.const_str_plain_submodule_search_locations);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations) && "mod_consts.const_str_plain_submodule_search_locations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_itertools", mod_consts.const_str_plain_itertools);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_itertools) && "mod_consts.const_str_plain_itertools");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745", mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745) && "mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_backend_str_plain_Events_tuple", mod_consts.const_tuple_str_plain_backend_str_plain_Events_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_backend_str_plain_Events_tuple) && "mod_consts.const_tuple_str_plain_backend_str_plain_Events_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_backend", mod_consts.const_str_plain_backend);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_backend) && "mod_consts.const_str_plain_backend");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_f4a9d444dae7988f006080c97c8628eb_tuple", mod_consts.const_tuple_str_digest_f4a9d444dae7988f006080c97c8628eb_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_f4a9d444dae7988f006080c97c8628eb_tuple) && "mod_consts.const_tuple_str_digest_f4a9d444dae7988f006080c97c8628eb_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Controller", mod_consts.const_str_plain_Controller);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_Controller) && "mod_consts.const_str_plain_Controller");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Listener", mod_consts.const_str_plain_Listener);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_Listener) && "mod_consts.const_str_plain_Listener");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_alt_gr", mod_consts.const_str_plain_alt_gr);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_alt_gr) && "mod_consts.const_str_plain_alt_gr");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_alt", mod_consts.const_str_plain_alt);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_alt) && "mod_consts.const_str_plain_alt");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_alt_l", mod_consts.const_str_plain_alt_l);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_alt_l) && "mod_consts.const_str_plain_alt_l");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_alt_r", mod_consts.const_str_plain_alt_r);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_alt_r) && "mod_consts.const_str_plain_alt_r");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cmd", mod_consts.const_str_plain_cmd);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_cmd) && "mod_consts.const_str_plain_cmd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cmd_l", mod_consts.const_str_plain_cmd_l);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_cmd_l) && "mod_consts.const_str_plain_cmd_l");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cmd_r", mod_consts.const_str_plain_cmd_r);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_cmd_r) && "mod_consts.const_str_plain_cmd_r");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ctrl", mod_consts.const_str_plain_ctrl);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_ctrl) && "mod_consts.const_str_plain_ctrl");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ctrl_l", mod_consts.const_str_plain_ctrl_l);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_ctrl_l) && "mod_consts.const_str_plain_ctrl_l");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ctrl_r", mod_consts.const_str_plain_ctrl_r);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_ctrl_r) && "mod_consts.const_str_plain_ctrl_r");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_shift", mod_consts.const_str_plain_shift);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_shift) && "mod_consts.const_str_plain_shift");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_shift_l", mod_consts.const_str_plain_shift_l);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_shift_l) && "mod_consts.const_str_plain_shift_l");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_shift_r", mod_consts.const_str_plain_shift_r);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_shift_r) && "mod_consts.const_str_plain_shift_r");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__MODIFIER_KEYS", mod_consts.const_str_plain__MODIFIER_KEYS);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain__MODIFIER_KEYS) && "mod_consts.const_str_plain__MODIFIER_KEYS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cycle", mod_consts.const_str_plain_cycle);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_cycle) && "mod_consts.const_str_plain_cycle");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_newline", mod_consts.const_str_newline);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_newline) && "mod_consts.const_str_newline");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_enter", mod_consts.const_str_plain_enter);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_enter) && "mod_consts.const_str_plain_enter");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_13", mod_consts.const_str_chr_13);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_chr_13) && "mod_consts.const_str_chr_13");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_9", mod_consts.const_str_chr_9);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_chr_9) && "mod_consts.const_str_chr_9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tab", mod_consts.const_str_plain_tab);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_tab) && "mod_consts.const_str_plain_tab");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__CONTROL_CODES", mod_consts.const_str_plain__CONTROL_CODES);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain__CONTROL_CODES) && "mod_consts.const_str_plain__CONTROL_CODES");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__) && "mod_consts.const_str_plain___prepare__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__) && "mod_consts.const_str_plain___getitem__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295) && "mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass) && "mod_consts.const_str_angle_metaclass");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f4a9d444dae7988f006080c97c8628eb", mod_consts.const_str_digest_f4a9d444dae7988f006080c97c8628eb);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_f4a9d444dae7988f006080c97c8628eb) && "mod_consts.const_str_digest_f4a9d444dae7988f006080c97c8628eb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5559baf839f0b59677a1e4bd61dec908", mod_consts.const_str_digest_5559baf839f0b59677a1e4bd61dec908);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_5559baf839f0b59677a1e4bd61dec908) && "mod_consts.const_str_digest_5559baf839f0b59677a1e4bd61dec908");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_62", mod_consts.const_int_pos_62);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_int_pos_62) && "mod_consts.const_int_pos_62");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__Listener", mod_consts.const_str_plain__Listener);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain__Listener) && "mod_consts.const_str_plain__Listener");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Event", mod_consts.const_str_plain_Event);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_Event) && "mod_consts.const_str_plain_Event");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_68f69fd3214b4a23872ccc887d851fdf", mod_consts.const_str_digest_68f69fd3214b4a23872ccc887d851fdf);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_digest_68f69fd3214b4a23872ccc887d851fdf) && "mod_consts.const_str_digest_68f69fd3214b4a23872ccc887d851fdf");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_aa6f0cc7ec58ff680bc2685860b0be73", mod_consts.const_str_digest_aa6f0cc7ec58ff680bc2685860b0be73);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_aa6f0cc7ec58ff680bc2685860b0be73) && "mod_consts.const_str_digest_aa6f0cc7ec58ff680bc2685860b0be73");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_77", mod_consts.const_int_pos_77);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_int_pos_77) && "mod_consts.const_int_pos_77");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_062188ba77a55b893f3f0b73644f46ce", mod_consts.const_str_digest_062188ba77a55b893f3f0b73644f46ce);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_digest_062188ba77a55b893f3f0b73644f46ce) && "mod_consts.const_str_digest_062188ba77a55b893f3f0b73644f46ce");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_key_str_plain_injected_tuple", mod_consts.const_tuple_str_plain_key_str_plain_injected_tuple);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_str_plain_injected_tuple) && "mod_consts.const_tuple_str_plain_key_str_plain_injected_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__) && "mod_consts.const_str_plain___orig_bases__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f11f63ad68743094fec316d34dc3651e", mod_consts.const_str_digest_f11f63ad68743094fec316d34dc3651e);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_digest_f11f63ad68743094fec316d34dc3651e) && "mod_consts.const_str_digest_f11f63ad68743094fec316d34dc3651e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_db489a5baf91c8b2ff86b2e4852c2cba", mod_consts.const_str_digest_db489a5baf91c8b2ff86b2e4852c2cba);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_db489a5baf91c8b2ff86b2e4852c2cba) && "mod_consts.const_str_digest_db489a5baf91c8b2ff86b2e4852c2cba");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_87", mod_consts.const_int_pos_87);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_int_pos_87) && "mod_consts.const_int_pos_87");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b13727e8ccd9cd1890a24e6fb4b17c9c", mod_consts.const_str_digest_b13727e8ccd9cd1890a24e6fb4b17c9c);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_digest_b13727e8ccd9cd1890a24e6fb4b17c9c) && "mod_consts.const_str_digest_b13727e8ccd9cd1890a24e6fb4b17c9c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a50480f553ef08a71bb6c22458d2cfa3", mod_consts.const_str_digest_a50480f553ef08a71bb6c22458d2cfa3);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_a50480f553ef08a71bb6c22458d2cfa3) && "mod_consts.const_str_digest_a50480f553ef08a71bb6c22458d2cfa3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_object_tuple", mod_consts.const_tuple_type_object_tuple);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_tuple_type_object_tuple) && "mod_consts.const_tuple_type_object_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b97f691ef6a5eadd3dbf22b360e77798", mod_consts.const_str_digest_b97f691ef6a5eadd3dbf22b360e77798);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_digest_b97f691ef6a5eadd3dbf22b360e77798) && "mod_consts.const_str_digest_b97f691ef6a5eadd3dbf22b360e77798");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_103", mod_consts.const_int_pos_103);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_int_pos_103) && "mod_consts.const_int_pos_103");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_be2d1876cc8b5e442e4e36bb0083f432", mod_consts.const_str_digest_be2d1876cc8b5e442e4e36bb0083f432);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_digest_be2d1876cc8b5e442e4e36bb0083f432) && "mod_consts.const_str_digest_be2d1876cc8b5e442e4e36bb0083f432");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_52c9777f650d9746db37e853657dfda3", mod_consts.const_str_digest_52c9777f650d9746db37e853657dfda3);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_digest_52c9777f650d9746db37e853657dfda3) && "mod_consts.const_str_digest_52c9777f650d9746db37e853657dfda3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6468314ba28d83b4ec15ad9d3245c4c9", mod_consts.const_str_digest_6468314ba28d83b4ec15ad9d3245c4c9);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_6468314ba28d83b4ec15ad9d3245c4c9) && "mod_consts.const_str_digest_6468314ba28d83b4ec15ad9d3245c4c9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7f8859575d0b3a995f791936e7885f0a", mod_consts.const_str_digest_7f8859575d0b3a995f791936e7885f0a);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_7f8859575d0b3a995f791936e7885f0a) && "mod_consts.const_str_digest_7f8859575d0b3a995f791936e7885f0a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__state_str_plain__keys_str_plain__on_activate_tuple", mod_consts.const_tuple_str_plain__state_str_plain__keys_str_plain__on_activate_tuple);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__state_str_plain__keys_str_plain__on_activate_tuple) && "mod_consts.const_tuple_str_plain__state_str_plain__keys_str_plain__on_activate_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e0bc8a0a270703ad4aca767a18953efd", mod_consts.const_str_digest_e0bc8a0a270703ad4aca767a18953efd);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_digest_e0bc8a0a270703ad4aca767a18953efd) && "mod_consts.const_str_digest_e0bc8a0a270703ad4aca767a18953efd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_204", mod_consts.const_int_pos_204);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_int_pos_204) && "mod_consts.const_int_pos_204");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4ad5cd702a021a977c4100cf17d7ae1d", mod_consts.const_str_digest_4ad5cd702a021a977c4100cf17d7ae1d);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_digest_4ad5cd702a021a977c4100cf17d7ae1d) && "mod_consts.const_str_digest_4ad5cd702a021a977c4100cf17d7ae1d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_020394d034ace2b1321192c89ce7da2f", mod_consts.const_str_digest_020394d034ace2b1321192c89ce7da2f);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_020394d034ace2b1321192c89ce7da2f) && "mod_consts.const_str_digest_020394d034ace2b1321192c89ce7da2f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4b8e36e6dbe122a5720ea2a8c5f4d110", mod_consts.const_str_digest_4b8e36e6dbe122a5720ea2a8c5f4d110);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_4b8e36e6dbe122a5720ea2a8c5f4d110) && "mod_consts.const_str_digest_4b8e36e6dbe122a5720ea2a8c5f4d110");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__hotkeys_tuple", mod_consts.const_tuple_str_plain__hotkeys_tuple);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__hotkeys_tuple) && "mod_consts.const_tuple_str_plain__hotkeys_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9ce2c3f44a66f1f5d6512bbd72f7ebeb", mod_consts.const_str_digest_9ce2c3f44a66f1f5d6512bbd72f7ebeb);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_9ce2c3f44a66f1f5d6512bbd72f7ebeb) && "mod_consts.const_str_digest_9ce2c3f44a66f1f5d6512bbd72f7ebeb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_21a892e4e689ec7f3c1d519b2461833b", mod_consts.const_str_digest_21a892e4e689ec7f3c1d519b2461833b);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_digest_21a892e4e689ec7f3c1d519b2461833b) && "mod_consts.const_str_digest_21a892e4e689ec7f3c1d519b2461833b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple) && "mod_consts.const_tuple_str_plain___class___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_injected_tuple", mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_injected_tuple);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_injected_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_injected_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain___class___tuple", mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple) && "mod_consts.const_tuple_str_plain_self_str_plain___class___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_d2adefa6931e4d51a9f2ad88595cb26c_tuple", mod_consts.const_tuple_d2adefa6931e4d51a9f2ad88595cb26c_tuple);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_tuple_d2adefa6931e4d51a9f2ad88595cb26c_tuple) && "mod_consts.const_tuple_d2adefa6931e4d51a9f2ad88595cb26c_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_keys_str_plain_on_activate_tuple", mod_consts.const_tuple_str_plain_self_str_plain_keys_str_plain_on_activate_tuple);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_keys_str_plain_on_activate_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_keys_str_plain_on_activate_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_168cd4e6ed29f8ffe5ae00075fea5ecd_tuple", mod_consts.const_tuple_168cd4e6ed29f8ffe5ae00075fea5ecd_tuple);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_168cd4e6ed29f8ffe5ae00075fea5ecd_tuple) && "mod_consts.const_tuple_168cd4e6ed29f8ffe5ae00075fea5ecd_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_b34e47be4709d6e83ec4794c2f398ffa_tuple", mod_consts.const_tuple_b34e47be4709d6e83ec4794c2f398ffa_tuple);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_tuple_b34e47be4709d6e83ec4794c2f398ffa_tuple) && "mod_consts.const_tuple_b34e47be4709d6e83ec4794c2f398ffa_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_s_str_plain_p_str_plain_key_tuple", mod_consts.const_tuple_str_plain_s_str_plain_p_str_plain_key_tuple);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_s_str_plain_p_str_plain_key_tuple) && "mod_consts.const_tuple_str_plain_s_str_plain_p_str_plain_key_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_start_str_plain_i_str_plain_c_str_plain_keys_tuple", mod_consts.const_tuple_str_plain_start_str_plain_i_str_plain_c_str_plain_keys_tuple);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_start_str_plain_i_str_plain_c_str_plain_keys_tuple) && "mod_consts.const_tuple_str_plain_start_str_plain_i_str_plain_c_str_plain_keys_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_keys_tuple", mod_consts.const_tuple_str_plain_keys_tuple);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_keys_tuple) && "mod_consts.const_tuple_str_plain_keys_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_key_tuple", mod_consts.const_tuple_str_plain_self_str_plain_key_tuple);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_key_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_key_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 12
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
static PyObject *module_var_accessor_pynput$keyboard$Events(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain_Events);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain_Events);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain_Events);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Events);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$GlobalHotKeys(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain_GlobalHotKeys);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GlobalHotKeys);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GlobalHotKeys, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GlobalHotKeys);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GlobalHotKeys, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain_GlobalHotKeys);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain_GlobalHotKeys);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_GlobalHotKeys);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$HotKey(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain_HotKey);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HotKey);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HotKey, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HotKey);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HotKey, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain_HotKey);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain_HotKey);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HotKey);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$Key(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain_Key);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain_Key);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain_Key);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Key);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$KeyCode(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain_KeyCode);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain_KeyCode);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain_KeyCode);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_KeyCode);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$Listener(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$_MODIFIER_KEYS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain__MODIFIER_KEYS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__MODIFIER_KEYS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__MODIFIER_KEYS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__MODIFIER_KEYS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__MODIFIER_KEYS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain__MODIFIER_KEYS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain__MODIFIER_KEYS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__MODIFIER_KEYS);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$_NORMAL_MODIFIERS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain__NORMAL_MODIFIERS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__NORMAL_MODIFIERS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__NORMAL_MODIFIERS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__NORMAL_MODIFIERS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__NORMAL_MODIFIERS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain__NORMAL_MODIFIERS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain__NORMAL_MODIFIERS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__NORMAL_MODIFIERS);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$__path__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)const_str_plain___path__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)const_str_plain___path__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)const_str_plain___path__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___path__);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$backend(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain_backend);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain_backend);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain_backend);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_backend);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$itertools(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain_itertools);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain_itertools);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain_itertools);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_itertools);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_59c05e2e106395c1fad04509e6428599;
static PyCodeObject *code_objects_27e230ecdfa3f690055086b2f2541cf4;
static PyCodeObject *code_objects_425e6f1367befe2b46c4c72b4fec1c4c;
static PyCodeObject *code_objects_033214654d6d05f4269f9cadbc5c37f9;
static PyCodeObject *code_objects_b272e871ac948a7ea396d8c42470015f;
static PyCodeObject *code_objects_263a53afda6eb23c9efdac631bfb2782;
static PyCodeObject *code_objects_2a1d2f8eef69d6a529026b55fba51560;
static PyCodeObject *code_objects_e2a2484383f63a8b2dc0b9568dcef0b0;
static PyCodeObject *code_objects_014b5258aa3cc2a873e675740c9df347;
static PyCodeObject *code_objects_d33d3f8a1b280bf1f2eee212f7a9acd7;
static PyCodeObject *code_objects_780b1f57b1abbdf5fec167fbeb961f9f;
static PyCodeObject *code_objects_d0c17ede0f2abe46673a05695ee1030f;
static PyCodeObject *code_objects_b68f62ddd9fde57a7b919d10ddd52559;
static PyCodeObject *code_objects_2f01988b48dcde01472e86209ff5a629;
static PyCodeObject *code_objects_0541b8245a4f729947f4072f4f92e6e3;
static PyCodeObject *code_objects_8f993d6d28d278762030f0a9e13850ad;
static PyCodeObject *code_objects_2cacf4c248e4883e84065ee5fb814824;
static PyCodeObject *code_objects_3d1efcf7fe8e4f2c5fb1ba24ec3f2213;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_9ce2c3f44a66f1f5d6512bbd72f7ebeb); CHECK_OBJECT(module_filename_obj);
code_objects_59c05e2e106395c1fad04509e6428599 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_21a892e4e689ec7f3c1d519b2461833b, mod_consts.const_str_digest_21a892e4e689ec7f3c1d519b2461833b, NULL, NULL, 0, 0, 0);
code_objects_27e230ecdfa3f690055086b2f2541cf4 = MAKE_CODE_OBJECT(module_filename_obj, 62, 0, mod_consts.const_str_plain_Events, mod_consts.const_str_plain_Events, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_425e6f1367befe2b46c4c72b4fec1c4c = MAKE_CODE_OBJECT(module_filename_obj, 204, 0, mod_consts.const_str_plain_GlobalHotKeys, mod_consts.const_str_plain_GlobalHotKeys, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_033214654d6d05f4269f9cadbc5c37f9 = MAKE_CODE_OBJECT(module_filename_obj, 103, 0, mod_consts.const_str_plain_HotKey, mod_consts.const_str_plain_HotKey, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_b272e871ac948a7ea396d8c42470015f = MAKE_CODE_OBJECT(module_filename_obj, 77, 0, mod_consts.const_str_plain_Press, mod_consts.const_str_digest_aa6f0cc7ec58ff680bc2685860b0be73, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_263a53afda6eb23c9efdac631bfb2782 = MAKE_CODE_OBJECT(module_filename_obj, 87, 0, mod_consts.const_str_plain_Release, mod_consts.const_str_digest_db489a5baf91c8b2ff86b2e4852c2cba, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_2a1d2f8eef69d6a529026b55fba51560 = MAKE_CODE_OBJECT(module_filename_obj, 80, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_062188ba77a55b893f3f0b73644f46ce, mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_injected_tuple, NULL, 3, 0, 0);
code_objects_e2a2484383f63a8b2dc0b9568dcef0b0 = MAKE_CODE_OBJECT(module_filename_obj, 90, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_b13727e8ccd9cd1890a24e6fb4b17c9c, mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_injected_tuple, NULL, 3, 0, 0);
code_objects_014b5258aa3cc2a873e675740c9df347 = MAKE_CODE_OBJECT(module_filename_obj, 97, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_a50480f553ef08a71bb6c22458d2cfa3, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple, NULL, 1, 0, 0);
code_objects_d33d3f8a1b280bf1f2eee212f7a9acd7 = MAKE_CODE_OBJECT(module_filename_obj, 216, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, const_str_plain___init__, mod_consts.const_str_digest_4ad5cd702a021a977c4100cf17d7ae1d, mod_consts.const_tuple_d2adefa6931e4d51a9f2ad88595cb26c_tuple, NULL, 2, 0, 0);
code_objects_780b1f57b1abbdf5fec167fbeb961f9f = MAKE_CODE_OBJECT(module_filename_obj, 116, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_be2d1876cc8b5e442e4e36bb0083f432, mod_consts.const_tuple_str_plain_self_str_plain_keys_str_plain_on_activate_tuple, NULL, 3, 0, 0);
code_objects_d0c17ede0f2abe46673a05695ee1030f = MAKE_CODE_OBJECT(module_filename_obj, 227, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__on_press, mod_consts.const_str_digest_020394d034ace2b1321192c89ce7da2f, mod_consts.const_tuple_168cd4e6ed29f8ffe5ae00075fea5ecd_tuple, NULL, 3, 0, 0);
code_objects_b68f62ddd9fde57a7b919d10ddd52559 = MAKE_CODE_OBJECT(module_filename_obj, 239, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__on_release, mod_consts.const_str_digest_4b8e36e6dbe122a5720ea2a8c5f4d110, mod_consts.const_tuple_168cd4e6ed29f8ffe5ae00075fea5ecd_tuple, NULL, 3, 0, 0);
code_objects_2f01988b48dcde01472e86209ff5a629 = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_parse, mod_consts.const_str_digest_52c9777f650d9746db37e853657dfda3, mod_consts.const_tuple_b34e47be4709d6e83ec4794c2f398ffa_tuple, NULL, 1, 0, 0);
code_objects_0541b8245a4f729947f4072f4f92e6e3 = MAKE_CODE_OBJECT(module_filename_obj, 147, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_parse, mod_consts.const_str_digest_af3c64ec5ddbb3f63b1d340ec92d9223, mod_consts.const_tuple_str_plain_s_str_plain_p_str_plain_key_tuple, NULL, 1, 0, 0);
code_objects_8f993d6d28d278762030f0a9e13850ad = MAKE_CODE_OBJECT(module_filename_obj, 136, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_parts, mod_consts.const_str_digest_301e13412e5ecd1d85143b73a1e84e83, mod_consts.const_tuple_str_plain_start_str_plain_i_str_plain_c_str_plain_keys_tuple, mod_consts.const_tuple_str_plain_keys_tuple, 0, 0, 0);
code_objects_2cacf4c248e4883e84065ee5fb814824 = MAKE_CODE_OBJECT(module_filename_obj, 178, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_press, mod_consts.const_str_digest_6468314ba28d83b4ec15ad9d3245c4c9, mod_consts.const_tuple_str_plain_self_str_plain_key_tuple, NULL, 2, 0, 0);
code_objects_3d1efcf7fe8e4f2c5fb1ba24ec3f2213 = MAKE_CODE_OBJECT(module_filename_obj, 194, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_release, mod_consts.const_str_digest_7f8859575d0b3a995f791936e7885f0a, mod_consts.const_tuple_str_plain_self_str_plain_key_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_pynput$keyboard$$$function__5_parse$$$function__1_parts$$$genobj__1_parts(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_keywords_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pynput$keyboard$$$function__10__on_release(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$$$function__1___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$$$function__2___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$$$function__3___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$$$function__4___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$$$function__5_parse(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$$$function__5_parse$$$function__1_parts(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pynput$keyboard$$$function__5_parse$$$function__2_parse(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$$$function__6_press(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$$$function__7_release(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$$$function__8___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$$$function__9__on_press(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_pynput$keyboard$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_key = python_pars[1];
PyObject *par_injected = python_pars[2];
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_2a1d2f8eef69d6a529026b55fba51560, module_pynput$keyboard, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$$$function__1___init__->m_type_description == NULL);
frame_frame_pynput$keyboard$$$function__1___init__ = cache_frame_frame_pynput$keyboard$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$$$function__1___init__);
assert(Py_REFCNT(frame_frame_pynput$keyboard$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(par_key);
tmp_ass_attr_value_1 = par_key;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_key, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_ass_attr_target_2;
CHECK_OBJECT(par_injected);
tmp_ass_attr_value_2 = par_injected;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain_injected, tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$$$function__1___init__,
    type_description_1,
    par_self,
    par_key,
    par_injected
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$$$function__1___init__ == cache_frame_frame_pynput$keyboard$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$$$function__1___init__);
    cache_frame_frame_pynput$keyboard$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$$$function__1___init__);

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
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
CHECK_OBJECT(par_injected);
Py_DECREF(par_injected);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
CHECK_OBJECT(par_injected);
Py_DECREF(par_injected);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$keyboard$$$function__2___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_key = python_pars[1];
PyObject *par_injected = python_pars[2];
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$$$function__2___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$$$function__2___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$$$function__2___init__)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$$$function__2___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$$$function__2___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$$$function__2___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_e2a2484383f63a8b2dc0b9568dcef0b0, module_pynput$keyboard, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$$$function__2___init__->m_type_description == NULL);
frame_frame_pynput$keyboard$$$function__2___init__ = cache_frame_frame_pynput$keyboard$$$function__2___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$$$function__2___init__);
assert(Py_REFCNT(frame_frame_pynput$keyboard$$$function__2___init__) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(par_key);
tmp_ass_attr_value_1 = par_key;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_key, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_ass_attr_target_2;
CHECK_OBJECT(par_injected);
tmp_ass_attr_value_2 = par_injected;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain_injected, tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$$$function__2___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$$$function__2___init__,
    type_description_1,
    par_self,
    par_key,
    par_injected
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$$$function__2___init__ == cache_frame_frame_pynput$keyboard$$$function__2___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$$$function__2___init__);
    cache_frame_frame_pynput$keyboard$$$function__2___init__ = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$$$function__2___init__);

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
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
CHECK_OBJECT(par_injected);
Py_DECREF(par_injected);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
CHECK_OBJECT(par_injected);
Py_DECREF(par_injected);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$keyboard$$$function__3___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$$$function__3___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$$$function__3___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$$$function__3___init__)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$$$function__3___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$$$function__3___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$$$function__3___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_014b5258aa3cc2a873e675740c9df347, module_pynput$keyboard, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$$$function__3___init__->m_type_description == NULL);
frame_frame_pynput$keyboard$$$function__3___init__ = cache_frame_frame_pynput$keyboard$$$function__3___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$$$function__3___init__);
assert(Py_REFCNT(frame_frame_pynput$keyboard$$$function__3___init__) == 2);

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
tmp_type_arg_value_1 = module_var_accessor_pynput$keyboard$Events(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Events);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 98;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER2(tstate, moduledict_pynput$keyboard, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_Press);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 99;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_Release);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 99;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
frame_frame_pynput$keyboard$$$function__3___init__->m_frame.f_lineno = 98;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_on_press_str_plain_on_release_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$$$function__3___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$$$function__3___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$$$function__3___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$$$function__3___init__,
    type_description_1,
    par_self,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$$$function__3___init__ == cache_frame_frame_pynput$keyboard$$$function__3___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$$$function__3___init__);
    cache_frame_frame_pynput$keyboard$$$function__3___init__ = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$$$function__3___init__);

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


static PyObject *impl_pynput$keyboard$$$function__4___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_keys = python_pars[1];
PyObject *par_on_activate = python_pars[2];
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$$$function__4___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$$$function__4___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$$$function__4___init__)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$$$function__4___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$$$function__4___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$$$function__4___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_780b1f57b1abbdf5fec167fbeb961f9f, module_pynput$keyboard, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$$$function__4___init__->m_type_description == NULL);
frame_frame_pynput$keyboard$$$function__4___init__ = cache_frame_frame_pynput$keyboard$$$function__4___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$$$function__4___init__);
assert(Py_REFCNT(frame_frame_pynput$keyboard$$$function__4___init__) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = PySet_New(NULL);
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__state, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_value_1);
Py_DECREF(tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_set_arg_1;
PyObject *tmp_ass_attr_target_2;
CHECK_OBJECT(par_keys);
tmp_set_arg_1 = par_keys;
tmp_ass_attr_value_2 = PySet_New(tmp_set_arg_1);
if (tmp_ass_attr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain__keys, tmp_ass_attr_value_2);
CHECK_OBJECT(tmp_ass_attr_value_2);
Py_DECREF(tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_ass_attr_target_3;
CHECK_OBJECT(par_on_activate);
tmp_ass_attr_value_3 = par_on_activate;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain__on_activate, tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$$$function__4___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$$$function__4___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$$$function__4___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$$$function__4___init__,
    type_description_1,
    par_self,
    par_keys,
    par_on_activate
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$$$function__4___init__ == cache_frame_frame_pynput$keyboard$$$function__4___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$$$function__4___init__);
    cache_frame_frame_pynput$keyboard$$$function__4___init__ = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$$$function__4___init__);

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
CHECK_OBJECT(par_keys);
Py_DECREF(par_keys);
CHECK_OBJECT(par_on_activate);
Py_DECREF(par_on_activate);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_keys);
Py_DECREF(par_keys);
CHECK_OBJECT(par_on_activate);
Py_DECREF(par_on_activate);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$keyboard$$$function__5_parse(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_keys = Nuitka_Cell_New1(python_pars[0]);
PyObject *var_parts = NULL;
PyObject *var_parse = NULL;
PyObject *var_raw_parts = NULL;
PyObject *var_parsed_parts = NULL;
PyObject *outline_0_var_s = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$$$function__5_parse;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$$$function__5_parse = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_keys;
Py_INCREF(tmp_closure_1[0]);
tmp_assign_source_1 = MAKE_FUNCTION_pynput$keyboard$$$function__5_parse$$$function__1_parts(tstate, tmp_closure_1);

{
    PyObject *old = var_parts;
    var_parts = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;

tmp_assign_source_2 = MAKE_FUNCTION_pynput$keyboard$$$function__5_parse$$$function__2_parse(tstate);

{
    PyObject *old = var_parse;
    var_parse = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
// Tried code:
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$$$function__5_parse)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$$$function__5_parse);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$$$function__5_parse == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$$$function__5_parse = MAKE_FUNCTION_FRAME(tstate, code_objects_2f01988b48dcde01472e86209ff5a629, module_pynput$keyboard, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$$$function__5_parse->m_type_description == NULL);
frame_frame_pynput$keyboard$$$function__5_parse = cache_frame_frame_pynput$keyboard$$$function__5_parse;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$$$function__5_parse);
assert(Py_REFCNT(frame_frame_pynput$keyboard$$$function__5_parse) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_arg_1;
PyObject *tmp_called_value_1;
CHECK_OBJECT(var_parts);
tmp_called_value_1 = var_parts;
frame_frame_pynput$keyboard$$$function__5_parse->m_frame.f_lineno = 169;
tmp_list_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "coooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "coooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_raw_parts;
    var_raw_parts = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_raw_parts);
tmp_iter_arg_1 = var_raw_parts;
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "coooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_listcomp_1__$0;
    tmp_listcomp_1__$0 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = tmp_listcomp_1__contraction;
    tmp_listcomp_1__contraction = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_7 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_7 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "coooo";
exception_lineno = 170;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_8 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_s;
    outline_0_var_s = tmp_assign_source_8;
    Py_INCREF(outline_0_var_s);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
if (var_parse == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_parse);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 170;
type_description_1 = "coooo";
    goto try_except_handler_3;
}

tmp_called_value_2 = var_parse;
CHECK_OBJECT(outline_0_var_s);
tmp_args_element_value_1 = outline_0_var_s;
frame_frame_pynput$keyboard$$$function__5_parse->m_frame.f_lineno = 170;
tmp_append_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "coooo";
    goto try_except_handler_3;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "coooo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "coooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_4 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_4);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
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
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
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

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
Py_XDECREF(outline_0_var_s);
outline_0_var_s = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_s);
outline_0_var_s = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 170;
goto frame_exception_exit_1;
outline_result_1:;
{
    PyObject *old = var_parsed_parts;
    var_parsed_parts = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_len_arg_2;
PyObject *tmp_set_arg_1;
CHECK_OBJECT(var_parsed_parts);
tmp_len_arg_1 = var_parsed_parts;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "coooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_parsed_parts);
tmp_set_arg_1 = var_parsed_parts;
tmp_len_arg_2 = PySet_New(tmp_set_arg_1);
if (tmp_len_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 173;
type_description_1 = "coooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = BUILTIN_LEN(tstate, tmp_len_arg_2);
CHECK_OBJECT(tmp_len_arg_2);
Py_DECREF(tmp_len_arg_2);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 173;
type_description_1 = "coooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = RICH_COMPARE_EQ_CBOOL_LONG_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
tmp_condition_result_1 = !tmp_condition_result_1;
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
CHECK_OBJECT(Nuitka_Cell_GET(par_keys));
tmp_make_exception_arg_1 = Nuitka_Cell_GET(par_keys);
frame_frame_pynput$keyboard$$$function__5_parse->m_frame.f_lineno = 174;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 174;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "coooo";
goto frame_exception_exit_1;
}
goto branch_end_1;
branch_no_1:;
CHECK_OBJECT(var_parsed_parts);
tmp_return_value = var_parsed_parts;
Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$$$function__5_parse, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$$$function__5_parse->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$$$function__5_parse, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$$$function__5_parse,
    type_description_1,
    par_keys,
    var_parts,
    var_parse,
    var_raw_parts,
    var_parsed_parts
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$$$function__5_parse == cache_frame_frame_pynput$keyboard$$$function__5_parse) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$$$function__5_parse);
    cache_frame_frame_pynput$keyboard$$$function__5_parse = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$$$function__5_parse);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_keys);
CHECK_OBJECT(par_keys);
Py_DECREF(par_keys);
par_keys = NULL;
CHECK_OBJECT(var_parts);
CHECK_OBJECT(var_parts);
Py_DECREF(var_parts);
var_parts = NULL;
Py_XDECREF(var_parse);
var_parse = NULL;
CHECK_OBJECT(var_raw_parts);
CHECK_OBJECT(var_raw_parts);
Py_DECREF(var_raw_parts);
var_raw_parts = NULL;
CHECK_OBJECT(var_parsed_parts);
CHECK_OBJECT(var_parsed_parts);
Py_DECREF(var_parsed_parts);
var_parsed_parts = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_keys);
CHECK_OBJECT(par_keys);
Py_DECREF(par_keys);
par_keys = NULL;
CHECK_OBJECT(var_parts);
CHECK_OBJECT(var_parts);
Py_DECREF(var_parts);
var_parts = NULL;
Py_XDECREF(var_parse);
var_parse = NULL;
Py_XDECREF(var_raw_parts);
var_raw_parts = NULL;
Py_XDECREF(var_parsed_parts);
var_parsed_parts = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

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


static PyObject *impl_pynput$keyboard$$$function__5_parse$$$function__1_parts(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = self->m_closure[0];
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_GENERATOR_pynput$keyboard$$$function__5_parse$$$function__1_parts$$$genobj__1_parts(tstate, tmp_closure_1);

goto function_return_exit;
}

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
struct pynput$keyboard$$$function__5_parse$$$function__1_parts$$$genobj__1_parts_locals {
PyObject *var_start;
PyObject *var_i;
PyObject *var_c;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
PyObject *tmp_tuple_unpack_1__element_1;
PyObject *tmp_tuple_unpack_1__element_2;
PyObject *tmp_tuple_unpack_1__source_iter;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
};
#endif

static PyObject *pynput$keyboard$$$function__5_parse$$$function__1_parts$$$genobj__1_parts_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct pynput$keyboard$$$function__5_parse$$$function__1_parts$$$genobj__1_parts_locals *generator_heap = (struct pynput$keyboard$$$function__5_parse$$$function__1_parts$$$genobj__1_parts_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_start = NULL;
generator_heap->var_i = NULL;
generator_heap->var_c = NULL;
generator_heap->tmp_for_loop_1__for_iterator = NULL;
generator_heap->tmp_for_loop_1__iter_value = NULL;
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
generator_heap->type_description_1 = NULL;
generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
generator_heap->exception_lineno = 0;

    // Actual generator function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = const_int_0;
{
    PyObject *old = generator_heap->var_start;
    generator_heap->var_start = tmp_assign_source_1;
    Py_INCREF(generator_heap->var_start);
    Py_XDECREF(old);
}

}
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_8f993d6d28d278762030f0a9e13850ad, module_pynput$keyboard, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = (PyObject *)&PyEnum_Type;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, const_str_plain_keys);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 138;
generator_heap->type_description_1 = "oooc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
generator->m_frame->m_frame.f_lineno = 138;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 138;
generator_heap->type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 138;
generator_heap->type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->tmp_for_loop_1__for_iterator;
    generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "oooc";
generator_heap->exception_lineno = 138;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
    generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = generator_heap->tmp_for_loop_1__iter_value;
tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 138;
generator_heap->type_description_1 = "oooc";
    goto try_except_handler_3;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
    generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 138;
generator_heap->type_description_1 = "oooc";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
    generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_2;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 138;
generator_heap->type_description_1 = "oooc";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
    generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
generator_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &generator_heap->exception_state, tmp_iterator_name_1, 2);
if (generator_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 138;
generator_heap->type_description_1 = "oooc";
    goto try_except_handler_4;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto try_except_handler_3;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_2:;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_7 = generator_heap->tmp_tuple_unpack_1__element_1;
{
    PyObject *old = generator_heap->var_i;
    generator_heap->var_i = tmp_assign_source_7;
    Py_INCREF(generator_heap->var_i);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_8 = generator_heap->tmp_tuple_unpack_1__element_2;
{
    PyObject *old = generator_heap->var_c;
    generator_heap->var_c = tmp_assign_source_8;
    Py_INCREF(generator_heap->var_c);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(generator_heap->var_c);
tmp_cmp_expr_left_1 = generator_heap->var_c;
tmp_cmp_expr_right_1 = mod_consts.const_str_chr_43;
tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 139;
generator_heap->type_description_1 = "oooc";
    goto try_except_handler_2;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 139;
generator_heap->type_description_1 = "oooc";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(generator_heap->var_i);
tmp_cmp_expr_left_2 = generator_heap->var_i;
if (generator_heap->var_start == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_start);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 139;
generator_heap->type_description_1 = "oooc";
    goto try_except_handler_2;
}

tmp_cmp_expr_right_2 = generator_heap->var_start;
tmp_and_right_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 139;
generator_heap->type_description_1 = "oooc";
    goto try_except_handler_2;
}
tmp_condition_result_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_1 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, const_str_plain_keys);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 140;
generator_heap->type_description_1 = "oooc";
    goto try_except_handler_2;
}

tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
if (generator_heap->var_start == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_start);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 140;
generator_heap->type_description_1 = "oooc";
    goto try_except_handler_2;
}

tmp_start_value_1 = generator_heap->var_start;
CHECK_OBJECT(generator_heap->var_i);
tmp_stop_value_1 = generator_heap->var_i;
tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 140;
generator_heap->type_description_1 = "oooc";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_subscript_value_1, sizeof(PyObject *), &tmp_start_value_1, sizeof(PyObject *), &tmp_stop_value_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_subscript_value_1, sizeof(PyObject *), &tmp_start_value_1, sizeof(PyObject *), &tmp_stop_value_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 140;
generator_heap->type_description_1 = "oooc";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(generator_heap->var_i);
tmp_add_expr_left_1 = generator_heap->var_i;
tmp_add_expr_right_1 = const_int_pos_1;
tmp_assign_source_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 141;
generator_heap->type_description_1 = "oooc";
    goto try_except_handler_2;
}
{
    PyObject *old = generator_heap->var_start;
    generator_heap->var_start = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 138;
generator_heap->type_description_1 = "oooc";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_len_arg_1;
if (generator_heap->var_start == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_start);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 142;
generator_heap->type_description_1 = "oooc";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_3 = generator_heap->var_start;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, const_str_plain_keys);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 142;
generator_heap->type_description_1 = "oooc";
    goto frame_exception_exit_1;
}

tmp_len_arg_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_cmp_expr_right_3 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 142;
generator_heap->type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 142;
generator_heap->type_description_1 = "oooc";
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
PyObject *tmp_make_exception_arg_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, const_str_plain_keys);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 143;
generator_heap->type_description_1 = "oooc";
    goto frame_exception_exit_1;
}

tmp_make_exception_arg_1 = Nuitka_Cell_GET(generator->m_closure[0]);
generator->m_frame->m_frame.f_lineno = 143;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
generator_heap->exception_state.exception_value = tmp_raise_type_1;
generator_heap->exception_lineno = 143;
RAISE_EXCEPTION_WITH_VALUE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "oooc";
goto frame_exception_exit_1;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
PyObject *tmp_start_value_2;
PyObject *tmp_stop_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, const_str_plain_keys);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 145;
generator_heap->type_description_1 = "oooc";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(generator->m_closure[0]);
if (generator_heap->var_start == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_start);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 145;
generator_heap->type_description_1 = "oooc";
    goto frame_exception_exit_1;
}

tmp_start_value_2 = generator_heap->var_start;
tmp_stop_value_2 = Py_None;
tmp_subscript_value_2 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_2, tmp_stop_value_2);
assert(!(tmp_subscript_value_2 == NULL));
tmp_expression_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 145;
generator_heap->type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_subscript_value_2, sizeof(PyObject *), &tmp_start_value_2, sizeof(PyObject *), &tmp_stop_value_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 2;
return tmp_expression_value_3;
yield_return_2:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_subscript_value_2, sizeof(PyObject *), &tmp_start_value_2, sizeof(PyObject *), &tmp_stop_value_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 145;
generator_heap->type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
}
branch_end_2:;

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
    generator_heap->var_start,
    generator_heap->var_i,
    generator_heap->var_c,
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
goto try_except_handler_1;
frame_no_exception_1:;
goto try_end_4;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_start);
generator_heap->var_start = NULL;
Py_XDECREF(generator_heap->var_i);
generator_heap->var_i = NULL;
Py_XDECREF(generator_heap->var_c);
generator_heap->var_c = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:
try_end_4:;
Py_XDECREF(generator_heap->var_start);
generator_heap->var_start = NULL;
Py_XDECREF(generator_heap->var_i);
generator_heap->var_i = NULL;
Py_XDECREF(generator_heap->var_c);
generator_heap->var_c = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_pynput$keyboard$$$function__5_parse$$$function__1_parts$$$genobj__1_parts(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        pynput$keyboard$$$function__5_parse$$$function__1_parts$$$genobj__1_parts_context,
        module_pynput$keyboard,
        mod_consts.const_str_plain_parts,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_301e13412e5ecd1d85143b73a1e84e83,
#endif
        code_objects_8f993d6d28d278762030f0a9e13850ad,
        closure,
        1,
#if 1
        sizeof(struct pynput$keyboard$$$function__5_parse$$$function__1_parts$$$genobj__1_parts_locals)
#else
        0
#endif
    );
}


static PyObject *impl_pynput$keyboard$$$function__5_parse$$$function__2_parse(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_s = python_pars[0];
PyObject *var_p = NULL;
PyObject *var_key = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$$$function__5_parse$$$function__2_parse;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$$$function__5_parse$$$function__2_parse = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$$$function__5_parse$$$function__2_parse)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$$$function__5_parse$$$function__2_parse);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$$$function__5_parse$$$function__2_parse == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$$$function__5_parse$$$function__2_parse = MAKE_FUNCTION_FRAME(tstate, code_objects_0541b8245a4f729947f4072f4f92e6e3, module_pynput$keyboard, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$$$function__5_parse$$$function__2_parse->m_type_description == NULL);
frame_frame_pynput$keyboard$$$function__5_parse$$$function__2_parse = cache_frame_frame_pynput$keyboard$$$function__5_parse$$$function__2_parse;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$$$function__5_parse$$$function__2_parse);
assert(Py_REFCNT(frame_frame_pynput$keyboard$$$function__5_parse$$$function__2_parse) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_s);
tmp_len_arg_1 = par_s;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = 1;
tmp_condition_result_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_pynput$keyboard$KeyCode(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 149;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_from_char);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_s);
tmp_expression_value_2 = par_s;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_lower);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 149;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$keyboard$$$function__5_parse$$$function__2_parse->m_frame.f_lineno = 149;
tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 149;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$keyboard$$$function__5_parse$$$function__2_parse->m_frame.f_lineno = 149;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_2;
nuitka_digit tmp_cmp_expr_right_2;
PyObject *tmp_len_arg_2;
bool tmp_tmp_and_left_value_1_cbool_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_s);
tmp_len_arg_2 = par_s;
tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = 2;
tmp_tmp_and_left_value_1_cbool_1 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
tmp_and_left_value_1 = tmp_tmp_and_left_value_1_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_s);
tmp_expression_value_3 = par_s;
tmp_subscript_value_1 = const_int_0;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 0);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
PyTuple_SET_ITEM(tmp_cmp_expr_left_3, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_s);
tmp_expression_value_4 = par_s;
tmp_subscript_value_2 = const_int_neg_1;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_2, -1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_cmp_expr_left_3, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_cmp_expr_left_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_cmp_expr_right_3 = mod_consts.const_tuple_str_chr_60_str_chr_62_tuple;
tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_TUPLE_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_2 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(par_s);
tmp_expression_value_5 = par_s;
tmp_subscript_value_3 = mod_consts.const_slice_int_pos_1_int_neg_1_none;
tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_3);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_p;
    var_p = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_4;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_7;
tmp_expression_value_6 = module_var_accessor_pynput$keyboard$Key(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Key);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 155;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_p);
tmp_expression_value_7 = var_p;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_lower);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
frame_frame_pynput$keyboard$$$function__5_parse$$$function__2_parse->m_frame.f_lineno = 155;
tmp_subscript_value_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_subscript_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_4);
CHECK_OBJECT(tmp_subscript_value_4);
Py_DECREF(tmp_subscript_value_4);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_key;
    var_key = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(var_key);
tmp_cmp_expr_left_4 = var_key;
tmp_expression_value_8 = module_var_accessor_pynput$keyboard$_NORMAL_MODIFIERS(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__NORMAL_MODIFIERS);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_values);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
frame_frame_pynput$keyboard$$$function__5_parse$$$function__2_parse->m_frame.f_lineno = 156;
tmp_cmp_expr_right_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_condition_result_3 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
CHECK_OBJECT(var_key);
tmp_return_value = var_key;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
tmp_expression_value_9 = module_var_accessor_pynput$keyboard$KeyCode(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 159;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_from_vk);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_key);
tmp_expression_value_11 = var_key;
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_value);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 159;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_vk);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 159;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
frame_frame_pynput$keyboard$$$function__5_parse$$$function__2_parse->m_frame.f_lineno = 159;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
goto frame_return_exit_1;
}
branch_end_3:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$$$function__5_parse$$$function__2_parse, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$$$function__5_parse$$$function__2_parse, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = EXC_TYPE(tstate);
tmp_cmp_expr_right_5 = PyExc_KeyError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
assert(!(tmp_res == -1));
tmp_condition_result_4 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
// Tried code:
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_element_value_3;
PyObject *tmp_int_arg_1;
tmp_expression_value_12 = module_var_accessor_pynput$keyboard$KeyCode(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 162;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_from_vk);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_p);
tmp_int_arg_1 = var_p;
tmp_args_element_value_3 = PyNumber_Int(tmp_int_arg_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 162;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
frame_frame_pynput$keyboard$$$function__5_parse$$$function__2_parse->m_frame.f_lineno = 162;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
goto try_return_handler_3;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$$$function__5_parse$$$function__2_parse, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$$$function__5_parse$$$function__2_parse, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_2);
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
tmp_cmp_expr_left_6 = EXC_TYPE(tstate);
tmp_cmp_expr_right_6 = PyExc_ValueError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
assert(!(tmp_res == -1));
tmp_condition_result_5 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
CHECK_OBJECT(par_s);
tmp_make_exception_arg_1 = par_s;
frame_frame_pynput$keyboard$$$function__5_parse$$$function__2_parse->m_frame.f_lineno = 164;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 164;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto try_except_handler_5;
}
goto branch_end_5;
branch_no_5:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 161;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pynput$keyboard$$$function__5_parse$$$function__2_parse->m_frame)) {
        frame_frame_pynput$keyboard$$$function__5_parse$$$function__2_parse->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_5;
branch_end_5:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_3;
// End of try:
// End of try:
goto branch_end_4;
branch_no_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 152;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pynput$keyboard$$$function__5_parse$$$function__2_parse->m_frame)) {
        frame_frame_pynput$keyboard$$$function__5_parse$$$function__2_parse->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_3;
branch_end_4:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto frame_return_exit_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
// End of try:
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
CHECK_OBJECT(par_s);
tmp_make_exception_arg_2 = par_s;
frame_frame_pynput$keyboard$$$function__5_parse$$$function__2_parse->m_frame.f_lineno = 166;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 166;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_end_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$$$function__5_parse$$$function__2_parse, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$$$function__5_parse$$$function__2_parse->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$$$function__5_parse$$$function__2_parse, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$$$function__5_parse$$$function__2_parse,
    type_description_1,
    par_s,
    var_p,
    var_key
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$$$function__5_parse$$$function__2_parse == cache_frame_frame_pynput$keyboard$$$function__5_parse$$$function__2_parse) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$$$function__5_parse$$$function__2_parse);
    cache_frame_frame_pynput$keyboard$$$function__5_parse$$$function__2_parse = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$$$function__5_parse$$$function__2_parse);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_p);
var_p = NULL;
Py_XDECREF(var_key);
var_key = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_p);
var_p = NULL;
Py_XDECREF(var_key);
var_key = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_s);
Py_DECREF(par_s);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_s);
Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$keyboard$$$function__6_press(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_key = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$$$function__6_press;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$$$function__6_press = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$$$function__6_press)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$$$function__6_press);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$$$function__6_press == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$$$function__6_press = MAKE_FUNCTION_FRAME(tstate, code_objects_2cacf4c248e4883e84065ee5fb814824, module_pynput$keyboard, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$$$function__6_press->m_type_description == NULL);
frame_frame_pynput$keyboard$$$function__6_press = cache_frame_frame_pynput$keyboard$$$function__6_press;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$$$function__6_press);
assert(Py_REFCNT(frame_frame_pynput$keyboard$$$function__6_press) == 2);

// Framed code:
{
bool tmp_condition_result_1;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_key);
tmp_cmp_expr_left_1 = par_key;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__keys);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res == 1) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_key);
tmp_cmp_expr_left_2 = par_key;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__state);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 0) ? true : false;
tmp_condition_result_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_1 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__state);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_key);
tmp_args_element_value_1 = par_key;
frame_frame_pynput$keyboard$$$function__6_press->m_frame.f_lineno = 190;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_add, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__state);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__keys);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 191;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "oo";
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
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_pynput$keyboard$$$function__6_press->m_frame.f_lineno = 192;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain__on_activate);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_2:;
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$$$function__6_press, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$$$function__6_press->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$$$function__6_press, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$$$function__6_press,
    type_description_1,
    par_self,
    par_key
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$$$function__6_press == cache_frame_frame_pynput$keyboard$$$function__6_press) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$$$function__6_press);
    cache_frame_frame_pynput$keyboard$$$function__6_press = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$$$function__6_press);

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


static PyObject *impl_pynput$keyboard$$$function__7_release(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_key = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$$$function__7_release;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$$$function__7_release = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$$$function__7_release)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$$$function__7_release);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$$$function__7_release == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$$$function__7_release = MAKE_FUNCTION_FRAME(tstate, code_objects_3d1efcf7fe8e4f2c5fb1ba24ec3f2213, module_pynput$keyboard, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$$$function__7_release->m_type_description == NULL);
frame_frame_pynput$keyboard$$$function__7_release = cache_frame_frame_pynput$keyboard$$$function__7_release;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$$$function__7_release);
assert(Py_REFCNT(frame_frame_pynput$keyboard$$$function__7_release) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_key);
tmp_cmp_expr_left_1 = par_key;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__state);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__state);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_remove);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_key);
tmp_args_element_value_1 = par_key;
frame_frame_pynput$keyboard$$$function__7_release->m_frame.f_lineno = 201;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$$$function__7_release, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$$$function__7_release->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$$$function__7_release, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$$$function__7_release,
    type_description_1,
    par_self,
    par_key
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$$$function__7_release == cache_frame_frame_pynput$keyboard$$$function__7_release) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$$$function__7_release);
    cache_frame_frame_pynput$keyboard$$$function__7_release = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$$$function__7_release);

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


static PyObject *impl_pynput$keyboard$$$function__8___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_hotkeys = python_pars[1];
PyObject *par_args = python_pars[2];
PyObject *par_kwargs = python_pars[3];
PyObject *outline_0_var_key = NULL;
PyObject *outline_0_var_value = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$$$function__8___init__;
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
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$$$function__8___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$$$function__8___init__)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$$$function__8___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$$$function__8___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$$$function__8___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_d33d3f8a1b280bf1f2eee212f7a9acd7, module_pynput$keyboard, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$$$function__8___init__->m_type_description == NULL);
frame_frame_pynput$keyboard$$$function__8___init__ = cache_frame_frame_pynput$keyboard$$$function__8___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$$$function__8___init__);
assert(Py_REFCNT(frame_frame_pynput$keyboard$$$function__8___init__) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_hotkeys);
tmp_expression_value_1 = par_hotkeys;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_items);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "ooooN";
    goto try_except_handler_1;
}
frame_frame_pynput$keyboard$$$function__8___init__->m_frame.f_lineno = 218;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "ooooN";
    goto try_except_handler_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "ooooN";
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
type_description_1 = "ooooN";
exception_lineno = 217;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_iter_arg_2 = tmp_listcomp_1__iter_value_0;
tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "ooooN";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
    tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 218;
type_description_1 = "ooooN";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
    tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 218;
type_description_1 = "ooooN";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
    tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 218;
type_description_1 = "ooooN";
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

CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_listcomp$tuple_unpack_1__source_iter = NULL;
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

Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
tmp_listcomp$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
tmp_listcomp$tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_listcomp$tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
tmp_assign_source_7 = tmp_listcomp$tuple_unpack_1__element_1;
{
    PyObject *old = outline_0_var_key;
    outline_0_var_key = tmp_assign_source_7;
    Py_INCREF(outline_0_var_key);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
tmp_listcomp$tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
tmp_assign_source_8 = tmp_listcomp$tuple_unpack_1__element_2;
{
    PyObject *old = outline_0_var_value;
    outline_0_var_value = tmp_assign_source_8;
    Py_INCREF(outline_0_var_value);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
tmp_listcomp$tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
tmp_called_value_2 = module_var_accessor_pynput$keyboard$HotKey(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HotKey);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 217;
type_description_1 = "ooooN";
    goto try_except_handler_2;
}
tmp_called_instance_1 = module_var_accessor_pynput$keyboard$HotKey(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HotKey);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 217;
type_description_1 = "ooooN";
    goto try_except_handler_2;
}
CHECK_OBJECT(outline_0_var_key);
tmp_args_element_value_2 = outline_0_var_key;
frame_frame_pynput$keyboard$$$function__8___init__->m_frame.f_lineno = 218;
tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_parse, tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "ooooN";
    goto try_except_handler_2;
}
CHECK_OBJECT(outline_0_var_value);
tmp_args_element_value_3 = outline_0_var_value;
frame_frame_pynput$keyboard$$$function__8___init__->m_frame.f_lineno = 218;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_3};
    tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "ooooN";
    goto try_except_handler_2;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "ooooN";
    goto try_except_handler_2;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "ooooN";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_ass_attr_value_1 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_ass_attr_value_1);
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
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
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
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_1;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(outline_0_var_key);
outline_0_var_key = NULL;
Py_XDECREF(outline_0_var_value);
outline_0_var_value = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_key);
outline_0_var_key = NULL;
Py_XDECREF(outline_0_var_value);
outline_0_var_value = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 217;
goto frame_exception_exit_1;
outline_result_1:;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__hotkeys, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_value_1);
Py_DECREF(tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_direct_call_arg4_1;
PyObject *tmp_call_result_1;
tmp_type_arg_value_1 = module_var_accessor_pynput$keyboard$GlobalHotKeys(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GlobalHotKeys);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 220;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_2 = BUILTIN_SUPER2(tstate, moduledict_pynput$keyboard, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_args);
tmp_direct_call_arg2_1 = par_args;
tmp_dict_key_1 = mod_consts.const_str_plain_on_press;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__on_press);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_1);

exception_lineno = 221;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg3_1 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_4;
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_on_release;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__on_release);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "ooooN";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_direct_call_arg1_1);
Py_DECREF(tmp_direct_call_arg3_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg4_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg2_1);
Py_INCREF(tmp_direct_call_arg4_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
    tmp_call_result_1 = impl___main__$$$helper_function_complex_call_helper_keywords_star_list_star_dict(tstate, dir_call_args);
}
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "ooooN";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$$$function__8___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$$$function__8___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$$$function__8___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$$$function__8___init__,
    type_description_1,
    par_self,
    par_hotkeys,
    par_args,
    par_kwargs,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$$$function__8___init__ == cache_frame_frame_pynput$keyboard$$$function__8___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$$$function__8___init__);
    cache_frame_frame_pynput$keyboard$$$function__8___init__ = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$$$function__8___init__);

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
CHECK_OBJECT(par_hotkeys);
Py_DECREF(par_hotkeys);
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
CHECK_OBJECT(par_hotkeys);
Py_DECREF(par_hotkeys);
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


static PyObject *impl_pynput$keyboard$$$function__9__on_press(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_key = python_pars[1];
PyObject *par_injected = python_pars[2];
PyObject *var_hotkey = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$$$function__9__on_press;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$$$function__9__on_press = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$$$function__9__on_press)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$$$function__9__on_press);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$$$function__9__on_press == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$$$function__9__on_press = MAKE_FUNCTION_FRAME(tstate, code_objects_d0c17ede0f2abe46673a05695ee1030f, module_pynput$keyboard, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$$$function__9__on_press->m_type_description == NULL);
frame_frame_pynput$keyboard$$$function__9__on_press = cache_frame_frame_pynput$keyboard$$$function__9__on_press;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$$$function__9__on_press);
assert(Py_REFCNT(frame_frame_pynput$keyboard$$$function__9__on_press) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_injected);
tmp_operand_value_1 = par_injected;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
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
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__hotkeys);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_2;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_2 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooo";
exception_lineno = 236;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_3 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_hotkey;
    var_hotkey = tmp_assign_source_3;
    Py_INCREF(var_hotkey);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var_hotkey);
tmp_expression_value_2 = var_hotkey;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_press);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
if (par_self == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 237;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_expression_value_3 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_canonical);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 237;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
if (par_key == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_key);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 237;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_args_element_value_2 = par_key;
frame_frame_pynput$keyboard$$$function__9__on_press->m_frame.f_lineno = 237;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 237;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_pynput$keyboard$$$function__9__on_press->m_frame.f_lineno = 237;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
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
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$$$function__9__on_press, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$$$function__9__on_press->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$$$function__9__on_press, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$$$function__9__on_press,
    type_description_1,
    par_self,
    par_key,
    par_injected,
    var_hotkey
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$$$function__9__on_press == cache_frame_frame_pynput$keyboard$$$function__9__on_press) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$$$function__9__on_press);
    cache_frame_frame_pynput$keyboard$$$function__9__on_press = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$$$function__9__on_press);

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
Py_XDECREF(var_hotkey);
var_hotkey = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_hotkey);
var_hotkey = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
CHECK_OBJECT(par_injected);
Py_DECREF(par_injected);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
CHECK_OBJECT(par_injected);
Py_DECREF(par_injected);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$keyboard$$$function__10__on_release(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_key = python_pars[1];
PyObject *par_injected = python_pars[2];
PyObject *var_hotkey = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$$$function__10__on_release;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$$$function__10__on_release = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$$$function__10__on_release)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$$$function__10__on_release);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$$$function__10__on_release == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$$$function__10__on_release = MAKE_FUNCTION_FRAME(tstate, code_objects_b68f62ddd9fde57a7b919d10ddd52559, module_pynput$keyboard, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$$$function__10__on_release->m_type_description == NULL);
frame_frame_pynput$keyboard$$$function__10__on_release = cache_frame_frame_pynput$keyboard$$$function__10__on_release;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$$$function__10__on_release);
assert(Py_REFCNT(frame_frame_pynput$keyboard$$$function__10__on_release) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_injected);
tmp_operand_value_1 = par_injected;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
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
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__hotkeys);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_2;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_2 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooo";
exception_lineno = 248;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_3 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_hotkey;
    var_hotkey = tmp_assign_source_3;
    Py_INCREF(var_hotkey);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var_hotkey);
tmp_expression_value_2 = var_hotkey;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_release);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
if (par_self == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 249;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_expression_value_3 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_canonical);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 249;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
if (par_key == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_key);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 249;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_args_element_value_2 = par_key;
frame_frame_pynput$keyboard$$$function__10__on_release->m_frame.f_lineno = 249;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 249;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_pynput$keyboard$$$function__10__on_release->m_frame.f_lineno = 249;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
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
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$$$function__10__on_release, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$$$function__10__on_release->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$$$function__10__on_release, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$$$function__10__on_release,
    type_description_1,
    par_self,
    par_key,
    par_injected,
    var_hotkey
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$$$function__10__on_release == cache_frame_frame_pynput$keyboard$$$function__10__on_release) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$$$function__10__on_release);
    cache_frame_frame_pynput$keyboard$$$function__10__on_release = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$$$function__10__on_release);

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
Py_XDECREF(var_hotkey);
var_hotkey = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_hotkey);
var_hotkey = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
CHECK_OBJECT(par_injected);
Py_DECREF(par_injected);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
CHECK_OBJECT(par_injected);
Py_DECREF(par_injected);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$$$function__10__on_release(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$$$function__10__on_release,
        mod_consts.const_str_plain__on_release,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4b8e36e6dbe122a5720ea2a8c5f4d110,
#endif
        code_objects_b68f62ddd9fde57a7b919d10ddd52559,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard,
        mod_consts.const_str_digest_366e59af16265a5581dd6d78c720381c,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$$$function__1___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_062188ba77a55b893f3f0b73644f46ce,
#endif
        code_objects_2a1d2f8eef69d6a529026b55fba51560,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$$$function__2___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$$$function__2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b13727e8ccd9cd1890a24e6fb4b17c9c,
#endif
        code_objects_e2a2484383f63a8b2dc0b9568dcef0b0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$$$function__3___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$$$function__3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a50480f553ef08a71bb6c22458d2cfa3,
#endif
        code_objects_014b5258aa3cc2a873e675740c9df347,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$$$function__4___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$$$function__4___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_be2d1876cc8b5e442e4e36bb0083f432,
#endif
        code_objects_780b1f57b1abbdf5fec167fbeb961f9f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$$$function__5_parse(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$$$function__5_parse,
        mod_consts.const_str_plain_parse,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_52c9777f650d9746db37e853657dfda3,
#endif
        code_objects_2f01988b48dcde01472e86209ff5a629,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard,
        mod_consts.const_str_digest_9ca495a892e11fbda146de12dc6ea009,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$$$function__5_parse$$$function__1_parts(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$$$function__5_parse$$$function__1_parts,
        mod_consts.const_str_plain_parts,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_301e13412e5ecd1d85143b73a1e84e83,
#endif
        code_objects_8f993d6d28d278762030f0a9e13850ad,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard,
        NULL,
        closure,
        1
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$$$function__5_parse$$$function__2_parse(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$$$function__5_parse$$$function__2_parse,
        mod_consts.const_str_plain_parse,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_af3c64ec5ddbb3f63b1d340ec92d9223,
#endif
        code_objects_0541b8245a4f729947f4072f4f92e6e3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$$$function__6_press(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$$$function__6_press,
        mod_consts.const_str_plain_press,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6468314ba28d83b4ec15ad9d3245c4c9,
#endif
        code_objects_2cacf4c248e4883e84065ee5fb814824,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard,
        mod_consts.const_str_digest_1d4a1eaa09a27a77543e20c6a3f9a546,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$$$function__7_release(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$$$function__7_release,
        mod_consts.const_str_plain_release,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7f8859575d0b3a995f791936e7885f0a,
#endif
        code_objects_3d1efcf7fe8e4f2c5fb1ba24ec3f2213,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard,
        mod_consts.const_str_digest_50cb9cd4ebd6dd1d392e551054902633,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$$$function__8___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$$$function__8___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4ad5cd702a021a977c4100cf17d7ae1d,
#endif
        code_objects_d33d3f8a1b280bf1f2eee212f7a9acd7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$$$function__9__on_press(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$$$function__9__on_press,
        mod_consts.const_str_plain__on_press,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_020394d034ace2b1321192c89ce7da2f,
#endif
        code_objects_d0c17ede0f2abe46673a05695ee1030f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard,
        mod_consts.const_str_digest_20773ff6f65d1bb317b95c45b4ebc6f4,
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

static function_impl_code const function_table_pynput$keyboard[] = {
impl_pynput$keyboard$$$function__5_parse$$$function__1_parts,
impl_pynput$keyboard$$$function__5_parse$$$function__2_parse,
impl_pynput$keyboard$$$function__1___init__,
impl_pynput$keyboard$$$function__2___init__,
impl_pynput$keyboard$$$function__3___init__,
impl_pynput$keyboard$$$function__4___init__,
impl_pynput$keyboard$$$function__5_parse,
impl_pynput$keyboard$$$function__6_press,
impl_pynput$keyboard$$$function__7_release,
impl_pynput$keyboard$$$function__8___init__,
impl_pynput$keyboard$$$function__9__on_press,
impl_pynput$keyboard$$$function__10__on_release,
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

    return Nuitka_Function_GetFunctionState(function, function_table_pynput$keyboard);
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
        module_pynput$keyboard,
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
        function_table_pynput$keyboard,
        sizeof(function_table_pynput$keyboard) / sizeof(function_impl_code)
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
static char const *module_full_name = "pynput.keyboard";
#endif

// Internal entry point for module code.
PyObject *module_code_pynput$keyboard(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pynput$keyboard");

    // Store the module for future use.
    module_pynput$keyboard = module;

    moduledict_pynput$keyboard = MODULE_DICT(module_pynput$keyboard);

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
        PRINT_STRING("pynput$keyboard: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("pynput$keyboard: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pynput$keyboard: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "pynput.keyboard" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initpynput$keyboard\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_pynput$keyboard,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pynput$keyboard,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pynput$keyboard,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pynput$keyboard,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pynput$keyboard,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pynput$keyboard);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pynput$keyboard, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_pynput$keyboard, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pynput$keyboard, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pynput$keyboard);
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

        UPDATE_STRING_DICT1(moduledict_pynput$keyboard, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var_combination = NULL;
PyObject *outline_0_var_key = NULL;
PyObject *outline_0_var_value = NULL;
PyCellObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
PyObject *outline_4_var___class__ = NULL;
PyCellObject *outline_5_var___class__ = NULL;
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
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__bases = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__metaclass = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_class_container$class_creation_3__bases = NULL;
PyObject *tmp_class_container$class_creation_3__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_3__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_3__metaclass = NULL;
PyObject *tmp_class_container$class_creation_3__prepared = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_dictcontraction_1__$0 = NULL;
PyObject *tmp_dictcontraction_1__contraction = NULL;
PyObject *tmp_dictcontraction_1__contraction_iter_0 = NULL;
PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
PyObject *tmp_dictcontraction_1__iter_value_1 = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard;
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
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_pynput$keyboard$$$class__1_Events_62 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$$$class__1_Events_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
PyObject *locals_pynput$keyboard$$$class__2_Press_77 = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$$$class__2_Press_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
PyObject *locals_pynput$keyboard$$$class__3_Release_87 = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$$$class__3_Release_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
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
PyObject *locals_pynput$keyboard$$$class__4_HotKey_103 = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$$$class__4_HotKey_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
PyObject *locals_pynput$keyboard$$$class__5_GlobalHotKeys_204 = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$$$class__5_GlobalHotKeys_6;
NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_c93b0a608490e24a420644a6643b359e;
UPDATE_STRING_DICT0(moduledict_pynput$keyboard, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_pynput$keyboard, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_pynput$keyboard = MAKE_MODULE_FRAME(code_objects_59c05e2e106395c1fad04509e6428599, module_pynput$keyboard);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard);
assert(Py_REFCNT(frame_frame_pynput$keyboard) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
frame_frame_pynput$keyboard->m_frame.f_lineno = 1;
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
frame_frame_pynput$keyboard->m_frame.f_lineno = 1;
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
frame_frame_pynput$keyboard->m_frame.f_lineno = 1;
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
frame_frame_pynput$keyboard->m_frame.f_lineno = 1;
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
frame_frame_pynput$keyboard->m_frame.f_lineno = 1;
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
tmp_args_element_value_3 = mod_consts.const_str_plain_keyboard;
frame_frame_pynput$keyboard->m_frame.f_lineno = 1;
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
frame_frame_pynput$keyboard->m_frame.f_lineno = 1;
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
frame_frame_pynput$keyboard->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_4, mod_consts.const_tuple_73a355f5a7e8b5ec81566aecd2f66eb7_tuple);

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
UPDATE_STRING_DICT1(moduledict_pynput$keyboard, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
}
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_pynput$keyboard$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_pynput$keyboard$__spec__(tstate);
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
tmp_ass_attr_value_3 = module_var_accessor_pynput$keyboard$__path__(tstate);
if (unlikely(tmp_ass_attr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___path__);
}

if (tmp_ass_attr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_ass_attr_target_3 = module_var_accessor_pynput$keyboard$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_pynput$keyboard, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_pynput$keyboard, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_itertools;
tmp_globals_arg_value_1 = (PyObject *)moduledict_pynput$keyboard;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_pynput$keyboard->m_frame.f_lineno = 26;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain_itertools, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745;
tmp_globals_arg_value_2 = (PyObject *)moduledict_pynput$keyboard;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_backend_str_plain_Events_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_pynput$keyboard->m_frame.f_lineno = 28;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

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
        (PyObject *)moduledict_pynput$keyboard,
        mod_consts.const_str_plain_backend,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_backend);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain_backend, tmp_assign_source_8);
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
        (PyObject *)moduledict_pynput$keyboard,
        mod_consts.const_str_plain_Events,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Events);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain_Events, tmp_assign_source_9);
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
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_5;
tmp_called_value_5 = module_var_accessor_pynput$keyboard$backend(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_backend);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 31;

    goto frame_exception_exit_1;
}
frame_frame_pynput$keyboard->m_frame.f_lineno = 31;
tmp_assign_source_10 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_digest_f4a9d444dae7988f006080c97c8628eb_tuple);

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain_backend, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_expression_value_5;
tmp_expression_value_5 = module_var_accessor_pynput$keyboard$backend(tstate);
assert(!(tmp_expression_value_5 == NULL));
tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_KeyCode);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain_KeyCode, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_expression_value_6;
tmp_expression_value_6 = module_var_accessor_pynput$keyboard$backend(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_backend);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;

    goto frame_exception_exit_1;
}
tmp_assign_source_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_Key);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain_Key, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_expression_value_7;
tmp_expression_value_7 = module_var_accessor_pynput$keyboard$backend(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_backend);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 34;

    goto frame_exception_exit_1;
}
tmp_assign_source_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_Controller);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain_Controller, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_expression_value_8;
tmp_expression_value_8 = module_var_accessor_pynput$keyboard$backend(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_backend);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 35;

    goto frame_exception_exit_1;
}
tmp_assign_source_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_Listener);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener, tmp_assign_source_14);
}
tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_pynput$keyboard, mod_consts.const_str_plain_backend);
if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

if (unlikely(tmp_result == false)) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_backend);

exception_lineno = 36;

    goto frame_exception_exit_1;
}

{
PyObject *tmp_assign_source_15;
PyObject *tmp_tuple_element_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_9;
tmp_expression_value_9 = module_var_accessor_pynput$keyboard$Key(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Key);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;

    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_alt_gr);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyTuple_SET_ITEM(tmp_tuple_element_1, 0, tmp_tuple_element_2);
tmp_expression_value_11 = module_var_accessor_pynput$keyboard$Key(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Key);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;

    goto tuple_build_exception_1;
}
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_alt_gr);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto tuple_build_exception_1;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_value);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto tuple_build_exception_1;
}
tmp_tuple_element_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_tuple_element_2, 0, tmp_tuple_element_3);
PyTuple_SET_ITEM(tmp_tuple_element_1, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_tuple_element_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_15 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_12;
PyObject *tmp_tuple_element_6;
PyObject *tmp_expression_value_19;
PyObject *tmp_tuple_element_8;
PyObject *tmp_expression_value_26;
PyObject *tmp_tuple_element_10;
PyObject *tmp_expression_value_33;
PyTuple_SET_ITEM(tmp_assign_source_15, 0, tmp_tuple_element_1);
tmp_expression_value_12 = module_var_accessor_pynput$keyboard$Key(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Key);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 44;

    goto tuple_build_exception_2;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_alt);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto tuple_build_exception_2;
}
tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyTuple_SET_ITEM(tmp_tuple_element_1, 0, tmp_tuple_element_4);
tmp_expression_value_14 = module_var_accessor_pynput$keyboard$Key(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Key);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 44;

    goto tuple_build_exception_3;
}
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_alt);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto tuple_build_exception_3;
}
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_value);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto tuple_build_exception_3;
}
tmp_tuple_element_4 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
PyObject *tmp_expression_value_18;
PyTuple_SET_ITEM(tmp_tuple_element_4, 0, tmp_tuple_element_5);
tmp_expression_value_16 = module_var_accessor_pynput$keyboard$Key(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Key);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 44;

    goto tuple_build_exception_4;
}
tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_alt_l);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto tuple_build_exception_4;
}
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_value);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_tuple_element_4, 1, tmp_tuple_element_5);
tmp_expression_value_18 = module_var_accessor_pynput$keyboard$Key(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Key);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 44;

    goto tuple_build_exception_4;
}
tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_alt_r);
if (tmp_expression_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto tuple_build_exception_4;
}
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_value);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_tuple_element_4, 2, tmp_tuple_element_5);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_tuple_element_4);
goto tuple_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
PyTuple_SET_ITEM(tmp_tuple_element_1, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_tuple_element_1);
goto tuple_build_exception_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
PyTuple_SET_ITEM(tmp_assign_source_15, 1, tmp_tuple_element_1);
tmp_expression_value_19 = module_var_accessor_pynput$keyboard$Key(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Key);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 45;

    goto tuple_build_exception_2;
}
tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_cmd);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto tuple_build_exception_2;
}
tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_20;
PyObject *tmp_expression_value_21;
PyTuple_SET_ITEM(tmp_tuple_element_1, 0, tmp_tuple_element_6);
tmp_expression_value_21 = module_var_accessor_pynput$keyboard$Key(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Key);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 45;

    goto tuple_build_exception_5;
}
tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_cmd);
if (tmp_expression_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto tuple_build_exception_5;
}
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_value);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto tuple_build_exception_5;
}
tmp_tuple_element_6 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_22;
PyObject *tmp_expression_value_23;
PyObject *tmp_expression_value_24;
PyObject *tmp_expression_value_25;
PyTuple_SET_ITEM(tmp_tuple_element_6, 0, tmp_tuple_element_7);
tmp_expression_value_23 = module_var_accessor_pynput$keyboard$Key(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Key);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 45;

    goto tuple_build_exception_6;
}
tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_cmd_l);
if (tmp_expression_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto tuple_build_exception_6;
}
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_value);
CHECK_OBJECT(tmp_expression_value_22);
Py_DECREF(tmp_expression_value_22);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_tuple_element_6, 1, tmp_tuple_element_7);
tmp_expression_value_25 = module_var_accessor_pynput$keyboard$Key(tstate);
if (unlikely(tmp_expression_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Key);
}

if (tmp_expression_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 45;

    goto tuple_build_exception_6;
}
tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_cmd_r);
if (tmp_expression_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto tuple_build_exception_6;
}
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_value);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_tuple_element_6, 2, tmp_tuple_element_7);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_tuple_element_6);
goto tuple_build_exception_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
PyTuple_SET_ITEM(tmp_tuple_element_1, 1, tmp_tuple_element_6);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_tuple_element_1);
goto tuple_build_exception_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
PyTuple_SET_ITEM(tmp_assign_source_15, 2, tmp_tuple_element_1);
tmp_expression_value_26 = module_var_accessor_pynput$keyboard$Key(tstate);
if (unlikely(tmp_expression_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Key);
}

if (tmp_expression_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;

    goto tuple_build_exception_2;
}
tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_ctrl);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto tuple_build_exception_2;
}
tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_tuple_element_9;
PyObject *tmp_expression_value_27;
PyObject *tmp_expression_value_28;
PyTuple_SET_ITEM(tmp_tuple_element_1, 0, tmp_tuple_element_8);
tmp_expression_value_28 = module_var_accessor_pynput$keyboard$Key(tstate);
if (unlikely(tmp_expression_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Key);
}

if (tmp_expression_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;

    goto tuple_build_exception_7;
}
tmp_expression_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_ctrl);
if (tmp_expression_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto tuple_build_exception_7;
}
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_value);
CHECK_OBJECT(tmp_expression_value_27);
Py_DECREF(tmp_expression_value_27);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto tuple_build_exception_7;
}
tmp_tuple_element_8 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_29;
PyObject *tmp_expression_value_30;
PyObject *tmp_expression_value_31;
PyObject *tmp_expression_value_32;
PyTuple_SET_ITEM(tmp_tuple_element_8, 0, tmp_tuple_element_9);
tmp_expression_value_30 = module_var_accessor_pynput$keyboard$Key(tstate);
if (unlikely(tmp_expression_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Key);
}

if (tmp_expression_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;

    goto tuple_build_exception_8;
}
tmp_expression_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_ctrl_l);
if (tmp_expression_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto tuple_build_exception_8;
}
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_value);
CHECK_OBJECT(tmp_expression_value_29);
Py_DECREF(tmp_expression_value_29);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_tuple_element_8, 1, tmp_tuple_element_9);
tmp_expression_value_32 = module_var_accessor_pynput$keyboard$Key(tstate);
if (unlikely(tmp_expression_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Key);
}

if (tmp_expression_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;

    goto tuple_build_exception_8;
}
tmp_expression_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_ctrl_r);
if (tmp_expression_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto tuple_build_exception_8;
}
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_value);
CHECK_OBJECT(tmp_expression_value_31);
Py_DECREF(tmp_expression_value_31);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_tuple_element_8, 2, tmp_tuple_element_9);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_tuple_element_8);
goto tuple_build_exception_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
PyTuple_SET_ITEM(tmp_tuple_element_1, 1, tmp_tuple_element_8);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_tuple_element_1);
goto tuple_build_exception_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
PyTuple_SET_ITEM(tmp_assign_source_15, 3, tmp_tuple_element_1);
tmp_expression_value_33 = module_var_accessor_pynput$keyboard$Key(tstate);
if (unlikely(tmp_expression_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Key);
}

if (tmp_expression_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;

    goto tuple_build_exception_2;
}
tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_shift);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto tuple_build_exception_2;
}
tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_tuple_element_11;
PyObject *tmp_expression_value_34;
PyObject *tmp_expression_value_35;
PyTuple_SET_ITEM(tmp_tuple_element_1, 0, tmp_tuple_element_10);
tmp_expression_value_35 = module_var_accessor_pynput$keyboard$Key(tstate);
if (unlikely(tmp_expression_value_35 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Key);
}

if (tmp_expression_value_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;

    goto tuple_build_exception_9;
}
tmp_expression_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_shift);
if (tmp_expression_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto tuple_build_exception_9;
}
tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_value);
CHECK_OBJECT(tmp_expression_value_34);
Py_DECREF(tmp_expression_value_34);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto tuple_build_exception_9;
}
tmp_tuple_element_10 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_36;
PyObject *tmp_expression_value_37;
PyObject *tmp_expression_value_38;
PyObject *tmp_expression_value_39;
PyTuple_SET_ITEM(tmp_tuple_element_10, 0, tmp_tuple_element_11);
tmp_expression_value_37 = module_var_accessor_pynput$keyboard$Key(tstate);
if (unlikely(tmp_expression_value_37 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Key);
}

if (tmp_expression_value_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;

    goto tuple_build_exception_10;
}
tmp_expression_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain_shift_l);
if (tmp_expression_value_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto tuple_build_exception_10;
}
tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain_value);
CHECK_OBJECT(tmp_expression_value_36);
Py_DECREF(tmp_expression_value_36);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM(tmp_tuple_element_10, 1, tmp_tuple_element_11);
tmp_expression_value_39 = module_var_accessor_pynput$keyboard$Key(tstate);
if (unlikely(tmp_expression_value_39 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Key);
}

if (tmp_expression_value_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;

    goto tuple_build_exception_10;
}
tmp_expression_value_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_shift_r);
if (tmp_expression_value_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto tuple_build_exception_10;
}
tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts.const_str_plain_value);
CHECK_OBJECT(tmp_expression_value_38);
Py_DECREF(tmp_expression_value_38);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM(tmp_tuple_element_10, 2, tmp_tuple_element_11);
}
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_tuple_element_10);
goto tuple_build_exception_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
PyTuple_SET_ITEM(tmp_tuple_element_1, 1, tmp_tuple_element_10);
}
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_tuple_element_1);
goto tuple_build_exception_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
PyTuple_SET_ITEM(tmp_assign_source_15, 4, tmp_tuple_element_1);
}
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_assign_source_15);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
UPDATE_STRING_DICT1(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain__MODIFIER_KEYS, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = module_var_accessor_pynput$keyboard$_MODIFIER_KEYS(tstate);
assert(!(tmp_iter_arg_1 == NULL));
tmp_assign_source_17 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_2;
}
{
    PyObject *old = tmp_dictcontraction_1__$0;
    tmp_dictcontraction_1__$0 = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = tmp_dictcontraction_1__contraction;
    tmp_dictcontraction_1__contraction = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_19;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
tmp_next_source_1 = tmp_dictcontraction_1__$0;
tmp_assign_source_19 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_19 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 51;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_dictcontraction_1__iter_value_1;
    tmp_dictcontraction_1__iter_value_1 = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_20;
CHECK_OBJECT(tmp_dictcontraction_1__iter_value_1);
tmp_assign_source_20 = tmp_dictcontraction_1__iter_value_1;
{
    PyObject *old = outline_0_var_combination;
    outline_0_var_combination = tmp_assign_source_20;
    Py_INCREF(outline_0_var_combination);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_40;
PyObject *tmp_args_element_value_5;
PyObject *tmp_tuple_element_12;
PyObject *tmp_expression_value_41;
PyObject *tmp_subscript_value_1;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_42;
PyObject *tmp_subscript_value_2;
tmp_called_value_6 = (PyObject *)&PyZip_Type;
tmp_expression_value_40 = module_var_accessor_pynput$keyboard$itertools(tstate);
if (unlikely(tmp_expression_value_40 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_itertools);
}

if (tmp_expression_value_40 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;

    goto try_except_handler_3;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain_cycle);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_3;
}
CHECK_OBJECT(outline_0_var_combination);
tmp_expression_value_41 = outline_0_var_combination;
tmp_subscript_value_1 = const_int_0;
tmp_tuple_element_12 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_41, tmp_subscript_value_1, 0);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 54;

    goto try_except_handler_3;
}
tmp_args_element_value_5 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_element_value_5, 0, tmp_tuple_element_12);
frame_frame_pynput$keyboard->m_frame.f_lineno = 54;
tmp_args_element_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_3;
}
CHECK_OBJECT(outline_0_var_combination);
tmp_expression_value_42 = outline_0_var_combination;
tmp_subscript_value_2 = const_int_pos_1;
tmp_args_element_value_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_42, tmp_subscript_value_2, 1);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 54;

    goto try_except_handler_3;
}
frame_frame_pynput$keyboard->m_frame.f_lineno = 54;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_6};
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_3;
}
tmp_assign_source_21 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_3;
}
{
    PyObject *old = tmp_dictcontraction_1__contraction_iter_0;
    tmp_dictcontraction_1__contraction_iter_0 = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_22;
CHECK_OBJECT(tmp_dictcontraction_1__contraction_iter_0);
tmp_next_source_2 = tmp_dictcontraction_1__contraction_iter_0;
tmp_assign_source_22 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_22 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 51;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_dictcontraction_1__iter_value_0;
    tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_22;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_23;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
tmp_iter_arg_3 = tmp_dictcontraction_1__iter_value_0;
tmp_assign_source_23 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_4;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
    tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_24 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;

    goto try_except_handler_5;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
    tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_24;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_25 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;

    goto try_except_handler_5;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
    tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;

    goto try_except_handler_5;
}
}
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_4;
// End of try:
try_end_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_3;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_26;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_assign_source_26 = tmp_dictcontraction$tuple_unpack_1__element_1;
{
    PyObject *old = outline_0_var_key;
    outline_0_var_key = tmp_assign_source_26;
    Py_INCREF(outline_0_var_key);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_27;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_assign_source_27 = tmp_dictcontraction$tuple_unpack_1__element_2;
{
    PyObject *old = outline_0_var_value;
    outline_0_var_value = tmp_assign_source_27;
    Py_INCREF(outline_0_var_value);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_dictset38_key_1;
PyObject *tmp_dictset38_value_1;
PyObject *tmp_dictset38_dict_1;
CHECK_OBJECT(outline_0_var_value);
tmp_dictset38_key_1 = outline_0_var_value;
CHECK_OBJECT(outline_0_var_key);
tmp_dictset38_value_1 = outline_0_var_key;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
assert(PyDict_CheckExact(tmp_dictset38_dict_1));
tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_3;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_dictcontraction_1__contraction_iter_0);
CHECK_OBJECT(tmp_dictcontraction_1__contraction_iter_0);
Py_DECREF(tmp_dictcontraction_1__contraction_iter_0);
tmp_dictcontraction_1__contraction_iter_0 = NULL;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_assign_source_16 = tmp_dictcontraction_1__contraction;
Py_INCREF(tmp_assign_source_16);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
CHECK_OBJECT(tmp_dictcontraction_1__$0);
Py_DECREF(tmp_dictcontraction_1__$0);
tmp_dictcontraction_1__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
Py_DECREF(tmp_dictcontraction_1__contraction);
tmp_dictcontraction_1__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
tmp_dictcontraction_1__iter_value_0 = NULL;
Py_XDECREF(tmp_dictcontraction_1__contraction_iter_0);
tmp_dictcontraction_1__contraction_iter_0 = NULL;
Py_XDECREF(tmp_dictcontraction_1__iter_value_1);
tmp_dictcontraction_1__iter_value_1 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction_1__$0);
CHECK_OBJECT(tmp_dictcontraction_1__$0);
Py_DECREF(tmp_dictcontraction_1__$0);
tmp_dictcontraction_1__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
Py_DECREF(tmp_dictcontraction_1__contraction);
tmp_dictcontraction_1__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
tmp_dictcontraction_1__iter_value_0 = NULL;
Py_XDECREF(tmp_dictcontraction_1__contraction_iter_0);
tmp_dictcontraction_1__contraction_iter_0 = NULL;
Py_XDECREF(tmp_dictcontraction_1__iter_value_1);
tmp_dictcontraction_1__iter_value_1 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
Py_XDECREF(outline_0_var_combination);
outline_0_var_combination = NULL;
Py_XDECREF(outline_0_var_key);
outline_0_var_key = NULL;
Py_XDECREF(outline_0_var_value);
outline_0_var_value = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_combination);
outline_0_var_combination = NULL;
Py_XDECREF(outline_0_var_key);
outline_0_var_key = NULL;
Py_XDECREF(outline_0_var_value);
outline_0_var_value = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 51;
goto frame_exception_exit_1;
outline_result_1:;
UPDATE_STRING_DICT1(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain__NORMAL_MODIFIERS, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_43;
tmp_dict_key_1 = mod_consts.const_str_newline;
tmp_expression_value_43 = module_var_accessor_pynput$keyboard$Key(tstate);
if (unlikely(tmp_expression_value_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Key);
}

if (tmp_expression_value_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;

    goto frame_exception_exit_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts.const_str_plain_enter);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto frame_exception_exit_1;
}
tmp_assign_source_28 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_44;
PyObject *tmp_expression_value_45;
tmp_res = PyDict_SetItem(tmp_assign_source_28, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_chr_13;
tmp_expression_value_44 = module_var_accessor_pynput$keyboard$Key(tstate);
if (unlikely(tmp_expression_value_44 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Key);
}

if (tmp_expression_value_44 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts.const_str_plain_enter);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_28, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_chr_9;
tmp_expression_value_45 = module_var_accessor_pynput$keyboard$Key(tstate);
if (unlikely(tmp_expression_value_45 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Key);
}

if (tmp_expression_value_45 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts.const_str_plain_tab);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_28, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_28);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain__CONTROL_CODES, tmp_assign_source_28);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_29;
PyObject *tmp_tuple_element_13;
tmp_tuple_element_13 = module_var_accessor_pynput$keyboard$Events(tstate);
if (unlikely(tmp_tuple_element_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Events);
}

if (tmp_tuple_element_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 62;

    goto try_except_handler_6;
}
tmp_assign_source_29 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_29, 0, tmp_tuple_element_13);
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

    goto try_except_handler_6;
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
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_46;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_6;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_46 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_46, tmp_subscript_value_3, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_6;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_6;
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

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_32;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_47;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_47 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_47, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_6;
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
PyObject *tmp_assign_source_33;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_48;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_14;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_48 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_6;
}
tmp_tuple_element_14 = mod_consts.const_str_plain_Events;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_14 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_pynput$keyboard->m_frame.f_lineno = 62;
tmp_assign_source_33 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_33;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_49;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_49 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_49, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_6;
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
PyObject *tmp_tuple_element_15;
PyObject *tmp_expression_value_50;
PyObject *tmp_name_value_3;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_50 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_3 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_15 = BUILTIN_GETATTR(tstate, tmp_expression_value_50, tmp_name_value_3, tmp_default_value_1);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_6;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_51;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_51 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_51 == NULL));
tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_51);
Py_DECREF(tmp_expression_value_51);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto tuple_build_exception_11;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_15);
}
goto tuple_build_no_exception_11;
// Exception handling pass through code for tuple_build:
tuple_build_exception_11:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_11:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_6;
}
frame_frame_pynput$keyboard->m_frame.f_lineno = 62;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 62;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_6;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_34;
tmp_assign_source_34 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_34;
}
branch_end_1:;
{
PyObject *tmp_assign_source_35;
outline_1_var___class__ = (PyCellObject *)PyCell_New(NULL);
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_pynput$keyboard$$$class__1_Events_62 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_f4a9d444dae7988f006080c97c8628eb;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__1_Events_62, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_digest_5559baf839f0b59677a1e4bd61dec908;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__1_Events_62, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_plain_Events;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__1_Events_62, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_int_pos_62;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__1_Events_62, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_8;
}
frame_frame_pynput$keyboard$$$class__1_Events_2 = MAKE_CLASS_FRAME(tstate, code_objects_27e230ecdfa3f690055086b2f2541cf4, module_pynput$keyboard, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pynput$keyboard$$$class__1_Events_2, locals_pynput$keyboard$$$class__1_Events_62);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$$$class__1_Events_2);
assert(Py_REFCNT(frame_frame_pynput$keyboard$$$class__1_Events_2) == 2);

// Framed code:
tmp_dictset_value = PyObject_GetItem(locals_pynput$keyboard$$$class__1_Events_62, mod_consts.const_str_plain_Listener);

if (tmp_dictset_value == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dictset_value = module_var_accessor_pynput$keyboard$Listener(tstate);
if (unlikely(tmp_dictset_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Listener);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_dictset_value);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__1_Events_62, mod_consts.const_str_plain__Listener, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_36;
PyObject *tmp_tuple_element_16;
PyObject *tmp_expression_value_52;
tmp_expression_value_52 = PyObject_GetItem(locals_pynput$keyboard$$$class__1_Events_62, mod_consts.const_str_plain_Events);

if (tmp_expression_value_52 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_52 = module_var_accessor_pynput$keyboard$Events(tstate);
if (unlikely(tmp_expression_value_52 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Events);
}

if (tmp_expression_value_52 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 77;
type_description_2 = "c";
    goto try_except_handler_9;
}
        Py_INCREF(tmp_expression_value_52);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto try_except_handler_9;
    }
}

tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts.const_str_plain_Event);
CHECK_OBJECT(tmp_expression_value_52);
Py_DECREF(tmp_expression_value_52);
if (tmp_tuple_element_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "c";
    goto try_except_handler_9;
}
tmp_assign_source_36 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_36, 0, tmp_tuple_element_16);
{
    PyObject *old = tmp_Events$class_container$class_creation_1__bases_orig;
    tmp_Events$class_container$class_creation_1__bases_orig = tmp_assign_source_36;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_2 = tmp_Events$class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_37 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "c";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_Events$class_container$class_creation_1__bases;
    tmp_Events$class_container$class_creation_1__bases = tmp_assign_source_37;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_38;
tmp_assign_source_38 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = tmp_Events$class_container$class_creation_1__class_decl_dict;
    tmp_Events$class_container$class_creation_1__class_decl_dict = tmp_assign_source_38;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_53;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_Events$class_container$class_creation_1__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "c";
    goto try_except_handler_9;
}
tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__bases);
tmp_expression_value_53 = tmp_Events$class_container$class_creation_1__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_53, tmp_subscript_value_4, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "c";
    goto try_except_handler_9;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "c";
    goto try_except_handler_9;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__bases);
tmp_bases_value_2 = tmp_Events$class_container$class_creation_1__bases;
tmp_assign_source_39 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "c";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_Events$class_container$class_creation_1__metaclass;
    tmp_Events$class_container$class_creation_1__metaclass = tmp_assign_source_39;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_5;
PyObject *tmp_expression_value_54;
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__metaclass);
tmp_expression_value_54 = tmp_Events$class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_54, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "c";
    goto try_except_handler_9;
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
PyObject *tmp_assign_source_40;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_55;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_17;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__metaclass);
tmp_expression_value_55 = tmp_Events$class_container$class_creation_1__metaclass;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "c";
    goto try_except_handler_9;
}
tmp_tuple_element_17 = mod_consts.const_str_plain_Press;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_17);
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__bases);
tmp_tuple_element_17 = tmp_Events$class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_17);
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_Events$class_container$class_creation_1__class_decl_dict;
frame_frame_pynput$keyboard$$$class__1_Events_2->m_frame.f_lineno = 77;
tmp_assign_source_40 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "c";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_Events$class_container$class_creation_1__prepared;
    tmp_Events$class_container$class_creation_1__prepared = tmp_assign_source_40;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_56;
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__prepared);
tmp_expression_value_56 = tmp_Events$class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_56, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "c";
    goto try_except_handler_9;
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
PyObject *tmp_tuple_element_18;
PyObject *tmp_expression_value_57;
PyObject *tmp_name_value_4;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__metaclass);
tmp_expression_value_57 = tmp_Events$class_container$class_creation_1__metaclass;
tmp_name_value_4 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_18 = BUILTIN_GETATTR(tstate, tmp_expression_value_57, tmp_name_value_4, tmp_default_value_2);
if (tmp_tuple_element_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "c";
    goto try_except_handler_9;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_58;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_18);
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__prepared);
tmp_type_arg_4 = tmp_Events$class_container$class_creation_1__prepared;
tmp_expression_value_58 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_58 == NULL));
tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_58);
Py_DECREF(tmp_expression_value_58);
if (tmp_tuple_element_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "c";
    goto tuple_build_exception_12;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_18);
}
goto tuple_build_no_exception_12;
// Exception handling pass through code for tuple_build:
tuple_build_exception_12:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_12:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "c";
    goto try_except_handler_9;
}
frame_frame_pynput$keyboard$$$class__1_Events_2->m_frame.f_lineno = 77;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 77;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_2 = "c";
goto try_except_handler_9;
}
branch_no_4:;
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = tmp_Events$class_container$class_creation_1__prepared;
    tmp_Events$class_container$class_creation_1__prepared = tmp_assign_source_41;
    Py_XDECREF(old);
}

}
branch_end_3:;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__prepared);
tmp_set_locals_2 = tmp_Events$class_container$class_creation_1__prepared;
locals_pynput$keyboard$$$class__2_Press_77 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_f4a9d444dae7988f006080c97c8628eb;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__2_Press_77, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "c";
    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_digest_68f69fd3214b4a23872ccc887d851fdf;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__2_Press_77, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "c";
    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_digest_aa6f0cc7ec58ff680bc2685860b0be73;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__2_Press_77, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "c";
    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_int_pos_77;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__2_Press_77, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "c";
    goto try_except_handler_11;
}
frame_frame_pynput$keyboard$$$class__2_Press_3 = MAKE_CLASS_FRAME(tstate, code_objects_b272e871ac948a7ea396d8c42470015f, module_pynput$keyboard, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pynput$keyboard$$$class__2_Press_3, locals_pynput$keyboard$$$class__2_Press_77);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$$$class__2_Press_3);
assert(Py_REFCNT(frame_frame_pynput$keyboard$$$class__2_Press_3) == 2);

// Framed code:

tmp_dictset_value = MAKE_FUNCTION_pynput$keyboard$$$function__1___init__(tstate);

tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__2_Press_77, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_3 = "o";
    goto frame_exception_exit_3;
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$keyboard$$$class__2_Press_3);


goto frame_no_exception_1;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$$$class__2_Press_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$$$class__2_Press_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$$$class__2_Press_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$$$class__2_Press_3,
    type_description_3,
    outline_2_var___class__
);



assertFrameObject(frame_frame_pynput$keyboard$$$class__2_Press_3);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$keyboard$$$class__2_Press_3);


// Return the error.
goto nested_frame_exit_2;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_2:;
type_description_2 = "c";
goto try_except_handler_11;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_key_str_plain_injected_tuple;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__2_Press_77, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "c";
    goto try_except_handler_11;
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


exception_lineno = 77;
type_description_2 = "c";
    goto try_except_handler_11;
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
tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__2_Press_77, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "c";
    goto try_except_handler_11;
}
branch_no_5:;
{
PyObject *tmp_assign_source_42;
PyObject *tmp_metaclass_value_3;
PyObject *tmp_name_value_5;
PyObject *tmp_bases_value_3;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__metaclass);
tmp_metaclass_value_3 = tmp_Events$class_container$class_creation_1__metaclass;
tmp_name_value_5 = mod_consts.const_str_plain_Press;
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__bases);
tmp_bases_value_3 = tmp_Events$class_container$class_creation_1__bases;
tmp_dict_arg_value_1 = locals_pynput$keyboard$$$class__2_Press_77;
CHECK_OBJECT(tmp_Events$class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_Events$class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_5, tmp_bases_value_3, tmp_dict_arg_value_1);
tmp_assign_source_42 = CALL_FUNCTION(tstate, tmp_metaclass_value_3, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "c";
    goto try_except_handler_11;
}
{
    PyObject *old = outline_2_var___class__;
    outline_2_var___class__ = tmp_assign_source_42;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_2_var___class__);
tmp_dictset_value = outline_2_var___class__;
Py_INCREF(tmp_dictset_value);
goto try_return_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
Py_DECREF(locals_pynput$keyboard$$$class__2_Press_77);
locals_pynput$keyboard$$$class__2_Press_77 = NULL;
goto try_return_handler_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pynput$keyboard$$$class__2_Press_77);
locals_pynput$keyboard$$$class__2_Press_77 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

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
goto outline_result_5;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 77;
goto try_except_handler_9;
outline_result_5:;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__1_Events_62, mod_consts.const_str_plain_Press, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "c";
    goto try_except_handler_9;
}
goto try_end_4;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
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
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_2;
// End of try:
try_end_4:;
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
goto outline_result_4;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_4:;
CHECK_OBJECT(tmp_outline_return_value_2);
Py_DECREF(tmp_outline_return_value_2);
}
{
PyObject *tmp_outline_return_value_3;
// Tried code:
{
PyObject *tmp_assign_source_43;
PyObject *tmp_tuple_element_19;
PyObject *tmp_expression_value_59;
tmp_expression_value_59 = PyObject_GetItem(locals_pynput$keyboard$$$class__1_Events_62, mod_consts.const_str_plain_Events);

if (tmp_expression_value_59 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_59 = module_var_accessor_pynput$keyboard$Events(tstate);
if (unlikely(tmp_expression_value_59 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Events);
}

if (tmp_expression_value_59 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;
type_description_2 = "c";
    goto try_except_handler_12;
}
        Py_INCREF(tmp_expression_value_59);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto try_except_handler_12;
    }
}

tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts.const_str_plain_Event);
CHECK_OBJECT(tmp_expression_value_59);
Py_DECREF(tmp_expression_value_59);
if (tmp_tuple_element_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "c";
    goto try_except_handler_12;
}
tmp_assign_source_43 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_43, 0, tmp_tuple_element_19);
{
    PyObject *old = tmp_Events$class_container$class_creation_2__bases_orig;
    tmp_Events$class_container$class_creation_2__bases_orig = tmp_assign_source_43;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_3 = tmp_Events$class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_44 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "c";
    goto try_except_handler_12;
}
{
    PyObject *old = tmp_Events$class_container$class_creation_2__bases;
    tmp_Events$class_container$class_creation_2__bases = tmp_assign_source_44;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_45;
tmp_assign_source_45 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = tmp_Events$class_container$class_creation_2__class_decl_dict;
    tmp_Events$class_container$class_creation_2__class_decl_dict = tmp_assign_source_45;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_metaclass_value_4;
nuitka_bool tmp_condition_result_8;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_60;
PyObject *tmp_subscript_value_5;
PyObject *tmp_bases_value_4;
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_Events$class_container$class_creation_2__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "c";
    goto try_except_handler_12;
}
tmp_condition_result_8 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__bases);
tmp_expression_value_60 = tmp_Events$class_container$class_creation_2__bases;
tmp_subscript_value_5 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_60, tmp_subscript_value_5, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "c";
    goto try_except_handler_12;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "c";
    goto try_except_handler_12;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_3:;
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__bases);
tmp_bases_value_4 = tmp_Events$class_container$class_creation_2__bases;
tmp_assign_source_46 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "c";
    goto try_except_handler_12;
}
{
    PyObject *old = tmp_Events$class_container$class_creation_2__metaclass;
    tmp_Events$class_container$class_creation_2__metaclass = tmp_assign_source_46;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_9;
PyObject *tmp_expression_value_61;
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__metaclass);
tmp_expression_value_61 = tmp_Events$class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_61, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "c";
    goto try_except_handler_12;
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
PyObject *tmp_assign_source_47;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_62;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_20;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__metaclass);
tmp_expression_value_62 = tmp_Events$class_container$class_creation_2__metaclass;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "c";
    goto try_except_handler_12;
}
tmp_tuple_element_20 = mod_consts.const_str_plain_Release;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_20);
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__bases);
tmp_tuple_element_20 = tmp_Events$class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_20);
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_Events$class_container$class_creation_2__class_decl_dict;
frame_frame_pynput$keyboard$$$class__1_Events_2->m_frame.f_lineno = 87;
tmp_assign_source_47 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "c";
    goto try_except_handler_12;
}
{
    PyObject *old = tmp_Events$class_container$class_creation_2__prepared;
    tmp_Events$class_container$class_creation_2__prepared = tmp_assign_source_47;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_10;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_63;
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__prepared);
tmp_expression_value_63 = tmp_Events$class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_63, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "c";
    goto try_except_handler_12;
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
PyObject *tmp_tuple_element_21;
PyObject *tmp_expression_value_64;
PyObject *tmp_name_value_6;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__metaclass);
tmp_expression_value_64 = tmp_Events$class_container$class_creation_2__metaclass;
tmp_name_value_6 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_21 = BUILTIN_GETATTR(tstate, tmp_expression_value_64, tmp_name_value_6, tmp_default_value_3);
if (tmp_tuple_element_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "c";
    goto try_except_handler_12;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_65;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_21);
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__prepared);
tmp_type_arg_6 = tmp_Events$class_container$class_creation_2__prepared;
tmp_expression_value_65 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_65 == NULL));
tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_65);
Py_DECREF(tmp_expression_value_65);
if (tmp_tuple_element_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "c";
    goto tuple_build_exception_13;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_21);
}
goto tuple_build_no_exception_13;
// Exception handling pass through code for tuple_build:
tuple_build_exception_13:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_12;
// Finished with no exception for tuple_build:
tuple_build_no_exception_13:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "c";
    goto try_except_handler_12;
}
frame_frame_pynput$keyboard$$$class__1_Events_2->m_frame.f_lineno = 87;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 87;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_2 = "c";
goto try_except_handler_12;
}
branch_no_7:;
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assign_source_48;
tmp_assign_source_48 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = tmp_Events$class_container$class_creation_2__prepared;
    tmp_Events$class_container$class_creation_2__prepared = tmp_assign_source_48;
    Py_XDECREF(old);
}

}
branch_end_6:;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__prepared);
tmp_set_locals_3 = tmp_Events$class_container$class_creation_2__prepared;
locals_pynput$keyboard$$$class__3_Release_87 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_f4a9d444dae7988f006080c97c8628eb;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__3_Release_87, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "c";
    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_str_digest_f11f63ad68743094fec316d34dc3651e;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__3_Release_87, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "c";
    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_str_digest_db489a5baf91c8b2ff86b2e4852c2cba;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__3_Release_87, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "c";
    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_int_pos_87;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__3_Release_87, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "c";
    goto try_except_handler_14;
}
frame_frame_pynput$keyboard$$$class__3_Release_4 = MAKE_CLASS_FRAME(tstate, code_objects_263a53afda6eb23c9efdac631bfb2782, module_pynput$keyboard, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pynput$keyboard$$$class__3_Release_4, locals_pynput$keyboard$$$class__3_Release_87);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$$$class__3_Release_4);
assert(Py_REFCNT(frame_frame_pynput$keyboard$$$class__3_Release_4) == 2);

// Framed code:

tmp_dictset_value = MAKE_FUNCTION_pynput$keyboard$$$function__2___init__(tstate);

tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__3_Release_87, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_3 = "o";
    goto frame_exception_exit_4;
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$keyboard$$$class__3_Release_4);


goto frame_no_exception_2;
frame_exception_exit_4:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$$$class__3_Release_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$$$class__3_Release_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$$$class__3_Release_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$$$class__3_Release_4,
    type_description_3,
    outline_3_var___class__
);



assertFrameObject(frame_frame_pynput$keyboard$$$class__3_Release_4);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$keyboard$$$class__3_Release_4);


// Return the error.
goto nested_frame_exit_3;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_3:;
type_description_2 = "c";
goto try_except_handler_14;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_key_str_plain_injected_tuple;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__3_Release_87, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "c";
    goto try_except_handler_14;
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


exception_lineno = 87;
type_description_2 = "c";
    goto try_except_handler_14;
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
tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__3_Release_87, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "c";
    goto try_except_handler_14;
}
branch_no_8:;
{
PyObject *tmp_assign_source_49;
PyObject *tmp_metaclass_value_5;
PyObject *tmp_name_value_7;
PyObject *tmp_bases_value_5;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_class_decl_dict_value_2;
PyObject *tmp_metaclass_args_2;
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__metaclass);
tmp_metaclass_value_5 = tmp_Events$class_container$class_creation_2__metaclass;
tmp_name_value_7 = mod_consts.const_str_plain_Release;
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__bases);
tmp_bases_value_5 = tmp_Events$class_container$class_creation_2__bases;
tmp_dict_arg_value_2 = locals_pynput$keyboard$$$class__3_Release_87;
CHECK_OBJECT(tmp_Events$class_container$class_creation_2__class_decl_dict);
tmp_class_decl_dict_value_2 = tmp_Events$class_container$class_creation_2__class_decl_dict;
tmp_metaclass_args_2 = MAKE_TUPLE3(tstate, tmp_name_value_7, tmp_bases_value_5, tmp_dict_arg_value_2);
tmp_assign_source_49 = CALL_FUNCTION(tstate, tmp_metaclass_value_5, tmp_metaclass_args_2, tmp_class_decl_dict_value_2);
CHECK_OBJECT(tmp_metaclass_args_2);
Py_DECREF(tmp_metaclass_args_2);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
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
Py_DECREF(locals_pynput$keyboard$$$class__3_Release_87);
locals_pynput$keyboard$$$class__3_Release_87 = NULL;
goto try_return_handler_13;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pynput$keyboard$$$class__3_Release_87);
locals_pynput$keyboard$$$class__3_Release_87 = NULL;
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
goto outline_result_7;
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
exception_lineno = 87;
goto try_except_handler_12;
outline_result_7:;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__1_Events_62, mod_consts.const_str_plain_Release, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
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
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto frame_exception_exit_2;
// End of try:
try_end_5:;
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
goto outline_result_6;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_6:;
CHECK_OBJECT(tmp_outline_return_value_3);
Py_DECREF(tmp_outline_return_value_3);
}

tmp_dictset_value = MAKE_FUNCTION_pynput$keyboard$$$function__3___init__(tstate);

tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__1_Events_62, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_2 = "c";
    goto frame_exception_exit_2;
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$keyboard$$$class__1_Events_2);


goto frame_no_exception_3;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$$$class__1_Events_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$$$class__1_Events_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$$$class__1_Events_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$$$class__1_Events_2,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_pynput$keyboard$$$class__1_Events_2);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$keyboard$$$class__1_Events_2);


// Return the error.
goto nested_frame_exit_1;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_1:;

goto try_except_handler_8;
skip_nested_handling_3:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__1_Events_62, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_8;
}
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_1__bases_orig;
tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_8;
}
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__1_Events_62, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_8;
}
branch_no_9:;
{
PyObject *tmp_assign_source_50;
PyObject *tmp_metaclass_value_6;
PyObject *tmp_name_value_8;
PyObject *tmp_bases_value_6;
PyObject *tmp_dict_arg_value_3;
PyObject *tmp_class_decl_dict_value_3;
PyObject *tmp_metaclass_args_3;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_metaclass_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_8 = mod_consts.const_str_plain_Events;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_6 = tmp_class_container$class_creation_1__bases;
tmp_dict_arg_value_3 = locals_pynput$keyboard$$$class__1_Events_62;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_3 = tmp_class_container$class_creation_1__class_decl_dict;
DICT_SET_ITEM(tmp_dict_arg_value_3, const_str_plain___classcell__, (PyObject *)outline_1_var___class__);
tmp_metaclass_args_3 = MAKE_TUPLE3(tstate, tmp_name_value_8, tmp_bases_value_6, tmp_dict_arg_value_3);
tmp_assign_source_50 = CALL_FUNCTION(tstate, tmp_metaclass_value_6, tmp_metaclass_args_3, tmp_class_decl_dict_value_3);
CHECK_OBJECT(tmp_metaclass_args_3);
Py_DECREF(tmp_metaclass_args_3);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_8;
}
{
    PyObject *old = PyCell_GET((PyObject *)outline_1_var___class__);
    PyCell_SET((PyObject *)outline_1_var___class__, tmp_assign_source_50);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(PyCell_GET((PyObject *)outline_1_var___class__));
tmp_assign_source_35 = PyCell_GET((PyObject *)outline_1_var___class__);
Py_INCREF(tmp_assign_source_35);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_DECREF(locals_pynput$keyboard$$$class__1_Events_62);
locals_pynput$keyboard$$$class__1_Events_62 = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pynput$keyboard$$$class__1_Events_62);
locals_pynput$keyboard$$$class__1_Events_62 = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

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
goto outline_result_3;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 62;
goto try_except_handler_6;
outline_result_3:;
UPDATE_STRING_DICT1(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain_Events, tmp_assign_source_35);
}
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
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
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
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
goto outline_result_2;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
}
{
PyObject *tmp_outline_return_value_4;
// Tried code:
{
PyObject *tmp_assign_source_51;
PyObject *tmp_direct_call_arg1_4;
tmp_direct_call_arg1_4 = mod_consts.const_tuple_type_object_tuple;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_51 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_51;
}
{
PyObject *tmp_assign_source_52;
tmp_assign_source_52 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_52;
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_metaclass_value_7;
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_66;
PyObject *tmp_subscript_value_6;
PyObject *tmp_bases_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_15;
}
tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_66 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_6 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_66, tmp_subscript_value_6, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_15;
}
tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_15;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_7);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_7 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_53 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
CHECK_OBJECT(tmp_metaclass_value_7);
Py_DECREF(tmp_metaclass_value_7);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_53;
}
{
bool tmp_condition_result_14;
PyObject *tmp_expression_value_67;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_67 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_67, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_15;
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
PyObject *tmp_assign_source_54;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_68;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_22;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_68 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_15;
}
tmp_tuple_element_22 = mod_consts.const_str_plain_HotKey;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_22 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_pynput$keyboard->m_frame.f_lineno = 103;
tmp_assign_source_54 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_54;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_69;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_69 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_69, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_15;
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
PyObject *tmp_tuple_element_23;
PyObject *tmp_expression_value_70;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_70 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_23 = BUILTIN_GETATTR(tstate, tmp_expression_value_70, tmp_name_value_9, tmp_default_value_4);
if (tmp_tuple_element_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_15;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_71;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_23);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_71 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_71 == NULL));
tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_71);
Py_DECREF(tmp_expression_value_71);
if (tmp_tuple_element_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto tuple_build_exception_14;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_23);
}
goto tuple_build_no_exception_14;
// Exception handling pass through code for tuple_build:
tuple_build_exception_14:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_15;
// Finished with no exception for tuple_build:
tuple_build_no_exception_14:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_15;
}
frame_frame_pynput$keyboard->m_frame.f_lineno = 103;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 103;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_15;
}
branch_no_11:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_55;
tmp_assign_source_55 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_55;
}
branch_end_10:;
{
PyObject *tmp_assign_source_56;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_2__prepared;
locals_pynput$keyboard$$$class__4_HotKey_103 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_f4a9d444dae7988f006080c97c8628eb;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__4_HotKey_103, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_str_digest_b97f691ef6a5eadd3dbf22b360e77798;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__4_HotKey_103, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_str_plain_HotKey;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__4_HotKey_103, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_int_pos_103;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__4_HotKey_103, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_17;
}
frame_frame_pynput$keyboard$$$class__4_HotKey_5 = MAKE_CLASS_FRAME(tstate, code_objects_033214654d6d05f4269f9cadbc5c37f9, module_pynput$keyboard, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pynput$keyboard$$$class__4_HotKey_5, locals_pynput$keyboard$$$class__4_HotKey_103);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$$$class__4_HotKey_5);
assert(Py_REFCNT(frame_frame_pynput$keyboard$$$class__4_HotKey_5) == 2);

// Framed code:

tmp_dictset_value = MAKE_FUNCTION_pynput$keyboard$$$function__4___init__(tstate);

tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__4_HotKey_103, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
{
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_7;
tmp_called_value_12 = PyObject_GetItem(locals_pynput$keyboard$$$class__4_HotKey_103, const_str_plain_staticmethod);

if (tmp_called_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_12 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}


tmp_args_element_value_7 = MAKE_FUNCTION_pynput$keyboard$$$function__5_parse(tstate);

frame_frame_pynput$keyboard$$$class__4_HotKey_5->m_frame.f_lineno = 121;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__4_HotKey_103, mod_consts.const_str_plain_parse, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}

tmp_dictset_value = MAKE_FUNCTION_pynput$keyboard$$$function__6_press(tstate);

tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__4_HotKey_103, mod_consts.const_str_plain_press, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$keyboard$$$function__7_release(tstate);

tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__4_HotKey_103, mod_consts.const_str_plain_release, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_2 = "o";
    goto frame_exception_exit_5;
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$keyboard$$$class__4_HotKey_5);


goto frame_no_exception_4;
frame_exception_exit_5:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$$$class__4_HotKey_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$$$class__4_HotKey_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$$$class__4_HotKey_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$$$class__4_HotKey_5,
    type_description_2,
    outline_4_var___class__
);



assertFrameObject(frame_frame_pynput$keyboard$$$class__4_HotKey_5);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$keyboard$$$class__4_HotKey_5);


// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_17;
skip_nested_handling_4:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__state_str_plain__keys_str_plain__on_activate_tuple;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__4_HotKey_103, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_17;
}
{
nuitka_bool tmp_condition_result_16;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_4 = tmp_class_container$class_creation_2__bases;
tmp_cmp_expr_right_4 = mod_consts.const_tuple_type_object_tuple;
tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_17;
}
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
tmp_dictset_value = mod_consts.const_tuple_type_object_tuple;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__4_HotKey_103, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_17;
}
branch_no_12:;
{
PyObject *tmp_assign_source_57;
PyObject *tmp_metaclass_value_8;
PyObject *tmp_name_value_10;
PyObject *tmp_bases_value_8;
PyObject *tmp_dict_arg_value_4;
PyObject *tmp_class_decl_dict_value_4;
PyObject *tmp_metaclass_args_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_metaclass_value_8 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_10 = mod_consts.const_str_plain_HotKey;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_8 = tmp_class_container$class_creation_2__bases;
tmp_dict_arg_value_4 = locals_pynput$keyboard$$$class__4_HotKey_103;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_decl_dict_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_metaclass_args_4 = MAKE_TUPLE3(tstate, tmp_name_value_10, tmp_bases_value_8, tmp_dict_arg_value_4);
tmp_assign_source_57 = CALL_FUNCTION(tstate, tmp_metaclass_value_8, tmp_metaclass_args_4, tmp_class_decl_dict_value_4);
CHECK_OBJECT(tmp_metaclass_args_4);
Py_DECREF(tmp_metaclass_args_4);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_17;
}
{
    PyObject *old = outline_4_var___class__;
    outline_4_var___class__ = tmp_assign_source_57;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_4_var___class__);
tmp_assign_source_56 = outline_4_var___class__;
Py_INCREF(tmp_assign_source_56);
goto try_return_handler_17;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_17:;
Py_DECREF(locals_pynput$keyboard$$$class__4_HotKey_103);
locals_pynput$keyboard$$$class__4_HotKey_103 = NULL;
goto try_return_handler_16;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pynput$keyboard$$$class__4_HotKey_103);
locals_pynput$keyboard$$$class__4_HotKey_103 = NULL;
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
goto outline_result_9;
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
exception_lineno = 103;
goto try_except_handler_15;
outline_result_9:;
UPDATE_STRING_DICT1(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain_HotKey, tmp_assign_source_56);
}
goto try_end_7;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_2__bases);
tmp_class_container$class_creation_2__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__metaclass);
tmp_class_container$class_creation_2__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__prepared);
tmp_class_container$class_creation_2__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
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
tmp_outline_return_value_4 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_4);
goto outline_result_8;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_8:;
CHECK_OBJECT(tmp_outline_return_value_4);
Py_DECREF(tmp_outline_return_value_4);
}
{
PyObject *tmp_outline_return_value_5;
// Tried code:
{
PyObject *tmp_assign_source_58;
PyObject *tmp_tuple_element_24;
tmp_tuple_element_24 = module_var_accessor_pynput$keyboard$Listener(tstate);
if (unlikely(tmp_tuple_element_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Listener);
}

if (tmp_tuple_element_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 204;

    goto try_except_handler_18;
}
tmp_assign_source_58 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_58, 0, tmp_tuple_element_24);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_58;
}
{
PyObject *tmp_assign_source_59;
PyObject *tmp_direct_call_arg1_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_5 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5};
    tmp_assign_source_59 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_59;
}
{
PyObject *tmp_assign_source_60;
tmp_assign_source_60 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_60;
}
{
PyObject *tmp_assign_source_61;
PyObject *tmp_metaclass_value_9;
nuitka_bool tmp_condition_result_17;
int tmp_truth_name_5;
PyObject *tmp_type_arg_9;
PyObject *tmp_expression_value_72;
PyObject *tmp_subscript_value_7;
PyObject *tmp_bases_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_18;
}
tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_5;
} else {
    goto condexpr_false_5;
}
condexpr_true_5:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_72 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_7 = const_int_0;
tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_72, tmp_subscript_value_7, 0);
if (tmp_type_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_18;
}
tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_9);
CHECK_OBJECT(tmp_type_arg_9);
Py_DECREF(tmp_type_arg_9);
if (tmp_metaclass_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_18;
}
goto condexpr_end_5;
condexpr_false_5:;
tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_9);
condexpr_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_9 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_61 = SELECT_METACLASS(tstate, tmp_metaclass_value_9, tmp_bases_value_9);
CHECK_OBJECT(tmp_metaclass_value_9);
Py_DECREF(tmp_metaclass_value_9);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_61;
}
{
bool tmp_condition_result_18;
PyObject *tmp_expression_value_73;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_73 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_73, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_18;
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
PyObject *tmp_assign_source_62;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_74;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_25;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_74 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_18;
}
tmp_tuple_element_25 = mod_consts.const_str_plain_GlobalHotKeys;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_25);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_25 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_25);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_pynput$keyboard->m_frame.f_lineno = 204;
tmp_assign_source_62 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_62;
}
{
bool tmp_condition_result_19;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_75;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_75 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_75, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_18;
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
PyObject *tmp_tuple_element_26;
PyObject *tmp_expression_value_76;
PyObject *tmp_name_value_11;
PyObject *tmp_default_value_5;
tmp_mod_expr_left_5 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_76 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_11 = const_str_plain___name__;
tmp_default_value_5 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_26 = BUILTIN_GETATTR(tstate, tmp_expression_value_76, tmp_name_value_11, tmp_default_value_5);
if (tmp_tuple_element_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_18;
}
tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_77;
PyObject *tmp_type_arg_10;
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_26);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_10 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_77 = BUILTIN_TYPE1(tmp_type_arg_10);
assert(!(tmp_expression_value_77 == NULL));
tmp_tuple_element_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_77);
Py_DECREF(tmp_expression_value_77);
if (tmp_tuple_element_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto tuple_build_exception_15;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_26);
}
goto tuple_build_no_exception_15;
// Exception handling pass through code for tuple_build:
tuple_build_exception_15:;
Py_DECREF(tmp_mod_expr_right_5);
goto try_except_handler_18;
// Finished with no exception for tuple_build:
tuple_build_no_exception_15:;
tmp_make_exception_arg_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
CHECK_OBJECT(tmp_mod_expr_right_5);
Py_DECREF(tmp_mod_expr_right_5);
if (tmp_make_exception_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_18;
}
frame_frame_pynput$keyboard->m_frame.f_lineno = 204;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 204;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_18;
}
branch_no_14:;
goto branch_end_13;
branch_no_13:;
{
PyObject *tmp_assign_source_63;
tmp_assign_source_63 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_63;
}
branch_end_13:;
{
PyObject *tmp_assign_source_64;
outline_5_var___class__ = (PyCellObject *)PyCell_New(NULL);
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_3__prepared;
locals_pynput$keyboard$$$class__5_GlobalHotKeys_204 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_f4a9d444dae7988f006080c97c8628eb;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__5_GlobalHotKeys_204, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_20;
}
tmp_dictset_value = mod_consts.const_str_digest_e0bc8a0a270703ad4aca767a18953efd;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__5_GlobalHotKeys_204, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_20;
}
tmp_dictset_value = mod_consts.const_str_plain_GlobalHotKeys;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__5_GlobalHotKeys_204, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_20;
}
tmp_dictset_value = mod_consts.const_int_pos_204;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__5_GlobalHotKeys_204, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_20;
}
frame_frame_pynput$keyboard$$$class__5_GlobalHotKeys_6 = MAKE_CLASS_FRAME(tstate, code_objects_425e6f1367befe2b46c4c72b4fec1c4c, module_pynput$keyboard, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pynput$keyboard$$$class__5_GlobalHotKeys_6, locals_pynput$keyboard$$$class__5_GlobalHotKeys_204);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$$$class__5_GlobalHotKeys_6);
assert(Py_REFCNT(frame_frame_pynput$keyboard$$$class__5_GlobalHotKeys_6) == 2);

// Framed code:

tmp_dictset_value = MAKE_FUNCTION_pynput$keyboard$$$function__8___init__(tstate);

tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__5_GlobalHotKeys_204, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_2 = "c";
    goto frame_exception_exit_6;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$keyboard$$$function__9__on_press(tstate);

tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__5_GlobalHotKeys_204, mod_consts.const_str_plain__on_press, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_2 = "c";
    goto frame_exception_exit_6;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$keyboard$$$function__10__on_release(tstate);

tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__5_GlobalHotKeys_204, mod_consts.const_str_plain__on_release, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_2 = "c";
    goto frame_exception_exit_6;
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$keyboard$$$class__5_GlobalHotKeys_6);


goto frame_no_exception_5;
frame_exception_exit_6:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$$$class__5_GlobalHotKeys_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$$$class__5_GlobalHotKeys_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$$$class__5_GlobalHotKeys_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$$$class__5_GlobalHotKeys_6,
    type_description_2,
    outline_5_var___class__
);



assertFrameObject(frame_frame_pynput$keyboard$$$class__5_GlobalHotKeys_6);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$keyboard$$$class__5_GlobalHotKeys_6);


// Return the error.
goto nested_frame_exit_5;
frame_no_exception_5:;
goto skip_nested_handling_5;
nested_frame_exit_5:;

goto try_except_handler_20;
skip_nested_handling_5:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__hotkeys_tuple;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__5_GlobalHotKeys_204, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_20;
}
{
nuitka_bool tmp_condition_result_20;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_5 = tmp_class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_5 = tmp_class_container$class_creation_3__bases_orig;
tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_20;
}
if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_3__bases_orig;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$$$class__5_GlobalHotKeys_204, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_20;
}
branch_no_15:;
{
PyObject *tmp_assign_source_65;
PyObject *tmp_metaclass_value_10;
PyObject *tmp_name_value_12;
PyObject *tmp_bases_value_10;
PyObject *tmp_dict_arg_value_5;
PyObject *tmp_class_decl_dict_value_5;
PyObject *tmp_metaclass_args_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_metaclass_value_10 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_12 = mod_consts.const_str_plain_GlobalHotKeys;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_10 = tmp_class_container$class_creation_3__bases;
tmp_dict_arg_value_5 = locals_pynput$keyboard$$$class__5_GlobalHotKeys_204;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_decl_dict_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
DICT_SET_ITEM(tmp_dict_arg_value_5, const_str_plain___classcell__, (PyObject *)outline_5_var___class__);
tmp_metaclass_args_5 = MAKE_TUPLE3(tstate, tmp_name_value_12, tmp_bases_value_10, tmp_dict_arg_value_5);
tmp_assign_source_65 = CALL_FUNCTION(tstate, tmp_metaclass_value_10, tmp_metaclass_args_5, tmp_class_decl_dict_value_5);
CHECK_OBJECT(tmp_metaclass_args_5);
Py_DECREF(tmp_metaclass_args_5);
if (tmp_assign_source_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_20;
}
{
    PyObject *old = PyCell_GET((PyObject *)outline_5_var___class__);
    PyCell_SET((PyObject *)outline_5_var___class__, tmp_assign_source_65);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(PyCell_GET((PyObject *)outline_5_var___class__));
tmp_assign_source_64 = PyCell_GET((PyObject *)outline_5_var___class__);
Py_INCREF(tmp_assign_source_64);
goto try_return_handler_20;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_20:;
Py_DECREF(locals_pynput$keyboard$$$class__5_GlobalHotKeys_204);
locals_pynput$keyboard$$$class__5_GlobalHotKeys_204 = NULL;
goto try_return_handler_19;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pynput$keyboard$$$class__5_GlobalHotKeys_204);
locals_pynput$keyboard$$$class__5_GlobalHotKeys_204 = NULL;
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
assert(PyCell_Check((PyObject *)outline_5_var___class__));
CHECK_OBJECT(outline_5_var___class__);
Py_DECREF(outline_5_var___class__);
outline_5_var___class__ = NULL;
goto outline_result_11;
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
exception_lineno = 204;
goto try_except_handler_18;
outline_result_11:;
UPDATE_STRING_DICT1(moduledict_pynput$keyboard, (Nuitka_StringObject *)mod_consts.const_str_plain_GlobalHotKeys, tmp_assign_source_64);
}
goto try_end_8;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
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
exception_state = exception_keeper_name_20;
exception_lineno = exception_keeper_lineno_20;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
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
tmp_outline_return_value_5 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_5);
goto outline_result_10;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_10:;
CHECK_OBJECT(tmp_outline_return_value_5);
Py_DECREF(tmp_outline_return_value_5);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_6;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_pynput$keyboard);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_6:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pynput$keyboard", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "pynput.keyboard" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_pynput$keyboard);
    return module_pynput$keyboard;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pynput$keyboard", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
