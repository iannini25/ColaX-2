/* Generated code for Python module 'pynput$keyboard$_base'
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



/* The "module_pynput$keyboard$_base" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pynput$keyboard$_base;
PyDictObject *moduledict_pynput$keyboard$_base;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_vk;
PyObject *const_str_plain_six;
PyObject *const_str_plain_text_type;
PyObject *const_str_plain_char;
PyObject *const_str_plain_is_dead;
PyObject *const_str_plain_unicodedata;
PyObject *const_str_plain_lookup;
PyObject *const_str_digest_664c92baca1dab8f8d502053c77bc434;
PyObject *const_str_plain_combining;
PyObject *const_str_plain__PLATFORM_EXTENSIONS;
PyObject *const_str_plain_kwargs;
PyObject *const_str_digest_0674107b2d3e86aecfffb00b3395ae4a;
PyObject *const_str_digest_d5bb7ae0d709503fba26a489623672b9;
PyObject *const_str_plain_self;
PyObject *const_str_plain_other;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_7c942789fdb7952816d14acc47044e1c;
PyObject *const_str_space;
PyObject *const_str_plain_from_char;
PyObject *const_str_plain_normalize;
PyObject *const_str_plain_NFC;
PyObject *const_str_digest_e60a8c1d7b3184c881b61ba89c681c5a;
PyObject *const_str_digest_d794b56377271672b7f19e862167c5b4;
PyObject *const_str_digest_1e669dfefa7390902cf9eedb3efa23dc;
PyObject *const_str_digest_5b6abc36e5e17eb22c40e871534892d7;
PyObject *const_str_plain__logger;
PyObject *const_str_plain__log;
PyObject *const_str_plain_threading;
PyObject *const_str_plain_RLock;
PyObject *const_str_plain__modifiers_lock;
PyObject *const_str_plain__modifiers;
PyObject *const_str_plain__caps_lock;
PyObject *const_str_plain__dead_key;
PyObject *const_str_plain__resolve;
PyObject *const_str_plain_InvalidKeyException;
PyObject *const_str_plain__update_modifiers;
PyObject *const_str_plain__Key;
PyObject *const_str_plain_caps_lock;
PyObject *const_str_plain_value;
PyObject *const_str_plain_join;
PyObject *const_str_plain__handle;
PyObject *const_str_plain_resolved;
PyObject *const_str_digest_5357d86fdb528f369bb4cbf536afc75f;
PyObject *const_str_digest_4d5c44f1715c738ab1477c1104b4dc72;
PyObject *const_str_plain_press;
PyObject *const_str_plain_release;
PyObject *const_str_digest_f5f1371004fd2c03864a121c881eac70;
PyObject *const_str_digest_ff8be095bf80f0e27c0770ec6d5536e7;
PyObject *const_str_digest_8f733b5107c7c1418b3d02ca4063735a;
PyObject *const_str_plain_pressed;
PyObject *const_str_digest_7a654b074c875cd7fa4e884a9ee3305d;
PyObject *const_tuple_str_plain__CONTROL_CODES_tuple;
PyObject *const_str_plain__CONTROL_CODES;
PyObject *const_str_plain_InvalidCharacterException;
PyObject *const_str_digest_4b5429c6ae493bbbf1f31b16dba63ce7;
PyObject *const_str_digest_411c33fbbf064714d13e4ead8e55648e;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_modifiers;
PyObject *const_str_digest_0f69ada8c0fd8406fc679dca9d5b7efb;
PyObject *const_str_plain__as_modifier;
PyObject *const_str_digest_b162aace11bc6f3e47e689774886e22d;
PyObject *const_str_plain_alt;
PyObject *const_str_digest_581e2c5b206a1667b97e60d00f588914;
PyObject *const_str_plain_alt_gr;
PyObject *const_str_digest_7a44fc0705a1785d7fa3a3e0b5a89543;
PyObject *const_str_plain_ctrl;
PyObject *const_str_digest_a089a8fcca43f085bf0996470ee9aaee;
PyObject *const_str_plain_shift;
PyObject *const_str_digest_778bf2157220734f3e1ca49144aea923;
PyObject *const_str_plain_string_types;
PyObject *const_str_plain__KeyCode;
PyObject *const_str_plain_shift_pressed;
PyObject *const_str_plain_upper;
PyObject *const_tuple_str_plain_vk_str_plain_char_tuple;
PyObject *const_str_digest_d5f2b65fc1620a169f17429bf47cdc16;
PyObject *const_str_digest_dedd3afef694a9bbd9f6a8f92417d2fa;
PyObject *const_str_plain_add;
PyObject *const_str_plain_remove;
PyObject *const_str_digest_30c59fa0df14a05e2ca88490b7a7c72e;
PyObject *const_tuple_str_plain__NORMAL_MODIFIERS_tuple;
PyObject *const_str_plain__NORMAL_MODIFIERS;
PyObject *const_str_digest_ff49492fb98ce321aecc5b366aaf2d18;
PyObject *const_str_digest_df9c473e3d718724b66a1fb733b46820;
PyObject *const_str_plain_prefix;
PyObject *const_str_plain_Listener;
PyObject *const_str_plain_startswith;
PyObject *const_str_plain_option_prefix;
PyObject *const_str_plain__options;
PyObject *const_str_plain__wrap;
PyObject *const_int_pos_2;
PyObject *const_tuple_str_plain_on_press_str_plain_on_release_str_plain_suppress_tuple;
PyObject *const_str_digest_f4a9d444dae7988f006080c97c8628eb;
PyObject *const_tuple_str_plain_Key_str_plain_KeyCode_str_plain__NORMAL_MODIFIERS_tuple;
PyObject *const_str_plain_Key;
PyObject *const_str_plain_KeyCode;
PyObject *const_str_plain_from_vk;
PyObject *const_str_digest_3b7ebd82fde0d8bbc5e465f9323ea066;
PyObject *const_str_digest_b91c90bc7081e6515f7d674b43042a01;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_contextlib;
PyObject *const_str_plain_enum;
PyObject *const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745;
PyObject *const_tuple_str_plain_AbstractListener_str_plain_prefix_tuple;
PyObject *const_str_plain_AbstractListener;
PyObject *const_str_plain_pynput;
PyObject *const_tuple_str_plain__logger_tuple;
PyObject *const_tuple_type_object_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_5787da84b9f9e63f3d3b20cb4f6f6bde;
PyObject *const_str_digest_e40a7b8edf385bb36bda7d1f44c68efc;
PyObject *const_int_pos_38;
PyObject *const_str_plain___firstlineno__;
PyObject *const_tuple_none_none_false_tuple;
PyObject *const_str_digest_5b96c739e714ad7ce446e8f89a7125f4;
PyObject *const_str_plain___repr__;
PyObject *const_str_digest_4990e54b6d9d2f293acf1c6ba0630d20;
PyObject *const_str_plain___str__;
PyObject *const_str_digest_ea307985ee68d878d543c5fcbebb08f8;
PyObject *const_str_plain___eq__;
PyObject *const_str_digest_19056f6749f39c06071a6dd90d630f38;
PyObject *const_str_plain___hash__;
PyObject *const_str_digest_214b436c27d90ac99d3294a5f7b1fc8e;
PyObject *const_str_digest_b622b1fd9b26c6abd752385387f10fe5;
PyObject *const_str_digest_cc5e6419872a0d9594b7fc0de36e47bb;
PyObject *const_str_digest_b4241f7130092b60ff602941137f7702;
PyObject *const_str_plain_from_dead;
PyObject *const_str_digest_12f83a24556f36989c9d41a30e36331d;
PyObject *const_tuple_cb0d5ff9fc24ca5ae15b245cda58ae71_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_Enum;
PyObject *const_str_digest_5882b9822b7e2f13a7f6ac17c2401754;
PyObject *const_int_pos_162;
PyObject *const_tuple_int_0_tuple;
PyObject *const_str_plain_alt_l;
PyObject *const_str_plain_alt_r;
PyObject *const_str_plain_backspace;
PyObject *const_str_plain_cmd;
PyObject *const_str_plain_cmd_l;
PyObject *const_str_plain_cmd_r;
PyObject *const_str_plain_ctrl_l;
PyObject *const_str_plain_ctrl_r;
PyObject *const_str_plain_delete;
PyObject *const_str_plain_down;
PyObject *const_str_plain_enter;
PyObject *const_str_plain_esc;
PyObject *const_str_plain_f1;
PyObject *const_str_plain_f2;
PyObject *const_str_plain_f3;
PyObject *const_str_plain_f4;
PyObject *const_str_plain_f5;
PyObject *const_str_plain_f6;
PyObject *const_str_plain_f7;
PyObject *const_str_plain_f8;
PyObject *const_str_plain_f9;
PyObject *const_str_plain_f10;
PyObject *const_str_plain_f11;
PyObject *const_str_plain_f12;
PyObject *const_str_plain_f13;
PyObject *const_str_plain_f14;
PyObject *const_str_plain_f15;
PyObject *const_str_plain_f16;
PyObject *const_str_plain_f17;
PyObject *const_str_plain_f18;
PyObject *const_str_plain_f19;
PyObject *const_str_plain_f20;
PyObject *const_str_plain_home;
PyObject *const_str_plain_left;
PyObject *const_str_plain_page_down;
PyObject *const_str_plain_page_up;
PyObject *const_str_plain_right;
PyObject *const_str_plain_shift_l;
PyObject *const_str_plain_shift_r;
PyObject *const_str_plain_space;
PyObject *const_str_plain_tab;
PyObject *const_str_plain_up;
PyObject *const_str_plain_media_play_pause;
PyObject *const_str_plain_media_volume_mute;
PyObject *const_str_plain_media_volume_down;
PyObject *const_str_plain_media_volume_up;
PyObject *const_str_plain_media_previous;
PyObject *const_str_plain_media_next;
PyObject *const_str_plain_insert;
PyObject *const_str_plain_menu;
PyObject *const_str_plain_num_lock;
PyObject *const_str_plain_pause;
PyObject *const_str_plain_print_screen;
PyObject *const_str_plain_scroll_lock;
PyObject *const_str_plain_Controller;
PyObject *const_str_digest_50cc9985bc6fd6a67382b9788508749d;
PyObject *const_int_pos_320;
PyObject *const_str_plain_Exception;
PyObject *const_str_digest_dd5f2c78f9b1f0a773678e0062f1aae7;
PyObject *const_str_digest_b0bb594e9022feb274ad8395ca4df024;
PyObject *const_int_pos_329;
PyObject *const_str_digest_d4143e58bd5d85dd37446aabfdb9d16f;
PyObject *const_str_digest_268e74f17db3493c34a7dc97045c9a1e;
PyObject *const_int_pos_338;
PyObject *const_str_digest_b927199d85c7cd7a86dce88997eeb880;
PyObject *const_str_digest_6a3d06875a0ae874cc49505612b8c38a;
PyObject *const_str_digest_0614c73af5837b862271dc29da9f4ae2;
PyObject *const_str_plain_tap;
PyObject *const_str_digest_e908f0b6b690801b1f88ea5b8dcd8a9a;
PyObject *const_str_plain_touch;
PyObject *const_str_digest_1a77c8df5a5cb2c0fbe808cc0ced8231;
PyObject *const_str_plain_contextmanager;
PyObject *const_str_digest_292adef0d5bb49269aff45e42b5df1f9;
PyObject *const_str_plain_property;
PyObject *const_str_plain_alt_pressed;
PyObject *const_str_digest_a1d752b8925dc206ef93154d07a4136a;
PyObject *const_str_plain_alt_gr_pressed;
PyObject *const_str_digest_96c669989794fc4c7dc951847f3aeba1;
PyObject *const_str_plain_ctrl_pressed;
PyObject *const_str_digest_33c989cadf517202a443ea2ad90911c3;
PyObject *const_str_digest_07e820da1d45207ad830389e59de8fc1;
PyObject *const_str_digest_18c025eec62fdadb628360c312bb5efd;
PyObject *const_str_digest_934ffbc715f089b2d637e813cd7b8a9e;
PyObject *const_str_digest_dd6b2f333bf54db48d767dcaf29e4e11;
PyObject *const_str_digest_d2e5724cf7b5fadd38e435af2aefd902;
PyObject *const_tuple_572bc12affa7b0858b9dc76ded5a1708_tuple;
PyObject *const_str_digest_48a46ef00f3fe282a279bcd5909ee5f3;
PyObject *const_int_pos_644;
PyObject *const_str_digest_8e366a1ab068a492ddad2c2681ebc3cc;
PyObject *const_str_plain_canonical;
PyObject *const_str_digest_59de3149ee5e955c4900936673b5a8c3;
PyObject *const_tuple_str_plain__log_str_plain__options_tuple;
PyObject *const_str_digest_beb15ee8b27c65a02fe685f71368a3a1;
PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_k_tuple;
PyObject *const_tuple_d6d853009248cbc49008f3c6e5c8bd8a_tuple;
PyObject *const_tuple_7cdbba4988a35653a3ca9e7eb3aefe63_tuple;
PyObject *const_str_digest_72ca23c2f9fe53917b15a7e3bfa4261d;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_other_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_53417d5589a249b8093571daabb15480_tuple;
PyObject *const_tuple_a27069ec99b0a2f63d3118fe2585bb7d_tuple;
PyObject *const_tuple_str_plain_self_str_plain_key_str_plain__NORMAL_MODIFIERS_tuple;
PyObject *const_tuple_str_plain_self_str_plain_key_str_plain_is_press_tuple;
PyObject *const_tuple_str_plain_self_str_plain_key_tuple;
PyObject *const_tuple_str_plain_self_str_plain_modifiers_tuple;
PyObject *const_tuple_777dde957bdef1caabf641f2a848b80a_tuple;
PyObject *const_tuple_str_plain_cls_str_plain_char_str_plain_kwargs_tuple;
PyObject *const_tuple_str_plain_cls_str_plain_vk_str_plain_kwargs_tuple;
PyObject *const_tuple_str_plain_self_str_plain_key_str_plain_combined_tuple;
PyObject *const_tuple_a044ea7684c8aa5e5abc51edf71ec0de_tuple;
PyObject *const_tuple_str_plain_self_str_plain_args_str_plain_key_tuple;
PyObject *const_tuple_str_plain_self_str_plain_key_str_plain_resolved_tuple;
PyObject *const_tuple_7c5932b999f10b0b8b03370404e065ec_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[252];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("pynput.keyboard._base"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 252) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 252 values, got %d\n",
                    UN_TRANSLATE("pynput.keyboard._base"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_vk", mod_consts.const_str_plain_vk);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_vk);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_six", mod_consts.const_str_plain_six);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_six);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_text_type", mod_consts.const_str_plain_text_type);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_text_type);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_char", mod_consts.const_str_plain_char);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_char);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_dead", mod_consts.const_str_plain_is_dead);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_dead);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unicodedata", mod_consts.const_str_plain_unicodedata);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_unicodedata);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_lookup", mod_consts.const_str_plain_lookup);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_lookup);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_664c92baca1dab8f8d502053c77bc434", mod_consts.const_str_digest_664c92baca1dab8f8d502053c77bc434);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_664c92baca1dab8f8d502053c77bc434);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_combining", mod_consts.const_str_plain_combining);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_combining);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__PLATFORM_EXTENSIONS", mod_consts.const_str_plain__PLATFORM_EXTENSIONS);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain__PLATFORM_EXTENSIONS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_kwargs", mod_consts.const_str_plain_kwargs);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_kwargs);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0674107b2d3e86aecfffb00b3395ae4a", mod_consts.const_str_digest_0674107b2d3e86aecfffb00b3395ae4a);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_0674107b2d3e86aecfffb00b3395ae4a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d5bb7ae0d709503fba26a489623672b9", mod_consts.const_str_digest_d5bb7ae0d709503fba26a489623672b9);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_d5bb7ae0d709503fba26a489623672b9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_self", mod_consts.const_str_plain_self);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_other", mod_consts.const_str_plain_other);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_other);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_genexpr", mod_consts.const_str_angle_genexpr);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7c942789fdb7952816d14acc47044e1c", mod_consts.const_str_digest_7c942789fdb7952816d14acc47044e1c);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_7c942789fdb7952816d14acc47044e1c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_space", mod_consts.const_str_space);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_space);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_from_char", mod_consts.const_str_plain_from_char);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_char);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_normalize", mod_consts.const_str_plain_normalize);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_normalize);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NFC", mod_consts.const_str_plain_NFC);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_NFC);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e60a8c1d7b3184c881b61ba89c681c5a", mod_consts.const_str_digest_e60a8c1d7b3184c881b61ba89c681c5a);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_e60a8c1d7b3184c881b61ba89c681c5a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d794b56377271672b7f19e862167c5b4", mod_consts.const_str_digest_d794b56377271672b7f19e862167c5b4);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_d794b56377271672b7f19e862167c5b4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1e669dfefa7390902cf9eedb3efa23dc", mod_consts.const_str_digest_1e669dfefa7390902cf9eedb3efa23dc);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_1e669dfefa7390902cf9eedb3efa23dc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5b6abc36e5e17eb22c40e871534892d7", mod_consts.const_str_digest_5b6abc36e5e17eb22c40e871534892d7);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_5b6abc36e5e17eb22c40e871534892d7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__logger", mod_consts.const_str_plain__logger);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain__logger);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__log", mod_consts.const_str_plain__log);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain__log);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_threading", mod_consts.const_str_plain_threading);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_threading);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RLock", mod_consts.const_str_plain_RLock);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_RLock);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__modifiers_lock", mod_consts.const_str_plain__modifiers_lock);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain__modifiers_lock);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__modifiers", mod_consts.const_str_plain__modifiers);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain__modifiers);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__caps_lock", mod_consts.const_str_plain__caps_lock);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain__caps_lock);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__dead_key", mod_consts.const_str_plain__dead_key);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain__dead_key);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__resolve", mod_consts.const_str_plain__resolve);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain__resolve);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InvalidKeyException", mod_consts.const_str_plain_InvalidKeyException);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidKeyException);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__update_modifiers", mod_consts.const_str_plain__update_modifiers);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain__update_modifiers);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__Key", mod_consts.const_str_plain__Key);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain__Key);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_caps_lock", mod_consts.const_str_plain_caps_lock);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_caps_lock);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_value", mod_consts.const_str_plain_value);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_value);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_join", mod_consts.const_str_plain_join);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_join);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__handle", mod_consts.const_str_plain__handle);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain__handle);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_resolved", mod_consts.const_str_plain_resolved);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_resolved);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5357d86fdb528f369bb4cbf536afc75f", mod_consts.const_str_digest_5357d86fdb528f369bb4cbf536afc75f);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_5357d86fdb528f369bb4cbf536afc75f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4d5c44f1715c738ab1477c1104b4dc72", mod_consts.const_str_digest_4d5c44f1715c738ab1477c1104b4dc72);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_4d5c44f1715c738ab1477c1104b4dc72);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_press", mod_consts.const_str_plain_press);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_press);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_release", mod_consts.const_str_plain_release);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_release);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f5f1371004fd2c03864a121c881eac70", mod_consts.const_str_digest_f5f1371004fd2c03864a121c881eac70);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_f5f1371004fd2c03864a121c881eac70);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ff8be095bf80f0e27c0770ec6d5536e7", mod_consts.const_str_digest_ff8be095bf80f0e27c0770ec6d5536e7);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_ff8be095bf80f0e27c0770ec6d5536e7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8f733b5107c7c1418b3d02ca4063735a", mod_consts.const_str_digest_8f733b5107c7c1418b3d02ca4063735a);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_8f733b5107c7c1418b3d02ca4063735a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pressed", mod_consts.const_str_plain_pressed);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_pressed);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7a654b074c875cd7fa4e884a9ee3305d", mod_consts.const_str_digest_7a654b074c875cd7fa4e884a9ee3305d);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_7a654b074c875cd7fa4e884a9ee3305d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__CONTROL_CODES_tuple", mod_consts.const_tuple_str_plain__CONTROL_CODES_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__CONTROL_CODES_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__CONTROL_CODES", mod_consts.const_str_plain__CONTROL_CODES);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain__CONTROL_CODES);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InvalidCharacterException", mod_consts.const_str_plain_InvalidCharacterException);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidCharacterException);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4b5429c6ae493bbbf1f31b16dba63ce7", mod_consts.const_str_digest_4b5429c6ae493bbbf1f31b16dba63ce7);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_4b5429c6ae493bbbf1f31b16dba63ce7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_411c33fbbf064714d13e4ead8e55648e", mod_consts.const_str_digest_411c33fbbf064714d13e4ead8e55648e);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_411c33fbbf064714d13e4ead8e55648e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_none_tuple", mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_modifiers", mod_consts.const_str_plain_modifiers);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_modifiers);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0f69ada8c0fd8406fc679dca9d5b7efb", mod_consts.const_str_digest_0f69ada8c0fd8406fc679dca9d5b7efb);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_0f69ada8c0fd8406fc679dca9d5b7efb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__as_modifier", mod_consts.const_str_plain__as_modifier);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain__as_modifier);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b162aace11bc6f3e47e689774886e22d", mod_consts.const_str_digest_b162aace11bc6f3e47e689774886e22d);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_b162aace11bc6f3e47e689774886e22d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_alt", mod_consts.const_str_plain_alt);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_alt);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_581e2c5b206a1667b97e60d00f588914", mod_consts.const_str_digest_581e2c5b206a1667b97e60d00f588914);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_581e2c5b206a1667b97e60d00f588914);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_alt_gr", mod_consts.const_str_plain_alt_gr);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_alt_gr);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7a44fc0705a1785d7fa3a3e0b5a89543", mod_consts.const_str_digest_7a44fc0705a1785d7fa3a3e0b5a89543);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_7a44fc0705a1785d7fa3a3e0b5a89543);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ctrl", mod_consts.const_str_plain_ctrl);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_ctrl);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a089a8fcca43f085bf0996470ee9aaee", mod_consts.const_str_digest_a089a8fcca43f085bf0996470ee9aaee);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_a089a8fcca43f085bf0996470ee9aaee);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_shift", mod_consts.const_str_plain_shift);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_shift);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_778bf2157220734f3e1ca49144aea923", mod_consts.const_str_digest_778bf2157220734f3e1ca49144aea923);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_778bf2157220734f3e1ca49144aea923);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_string_types", mod_consts.const_str_plain_string_types);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_string_types);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__KeyCode", mod_consts.const_str_plain__KeyCode);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain__KeyCode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_shift_pressed", mod_consts.const_str_plain_shift_pressed);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_shift_pressed);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_upper", mod_consts.const_str_plain_upper);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_upper);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_vk_str_plain_char_tuple", mod_consts.const_tuple_str_plain_vk_str_plain_char_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_vk_str_plain_char_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d5f2b65fc1620a169f17429bf47cdc16", mod_consts.const_str_digest_d5f2b65fc1620a169f17429bf47cdc16);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_d5f2b65fc1620a169f17429bf47cdc16);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dedd3afef694a9bbd9f6a8f92417d2fa", mod_consts.const_str_digest_dedd3afef694a9bbd9f6a8f92417d2fa);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_dedd3afef694a9bbd9f6a8f92417d2fa);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_add", mod_consts.const_str_plain_add);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_add);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_remove", mod_consts.const_str_plain_remove);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_remove);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_30c59fa0df14a05e2ca88490b7a7c72e", mod_consts.const_str_digest_30c59fa0df14a05e2ca88490b7a7c72e);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_30c59fa0df14a05e2ca88490b7a7c72e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__NORMAL_MODIFIERS_tuple", mod_consts.const_tuple_str_plain__NORMAL_MODIFIERS_tuple);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__NORMAL_MODIFIERS_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__NORMAL_MODIFIERS", mod_consts.const_str_plain__NORMAL_MODIFIERS);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain__NORMAL_MODIFIERS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ff49492fb98ce321aecc5b366aaf2d18", mod_consts.const_str_digest_ff49492fb98ce321aecc5b366aaf2d18);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_ff49492fb98ce321aecc5b366aaf2d18);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_df9c473e3d718724b66a1fb733b46820", mod_consts.const_str_digest_df9c473e3d718724b66a1fb733b46820);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_df9c473e3d718724b66a1fb733b46820);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_prefix", mod_consts.const_str_plain_prefix);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_prefix);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Listener", mod_consts.const_str_plain_Listener);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_Listener);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_startswith", mod_consts.const_str_plain_startswith);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_startswith);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_option_prefix", mod_consts.const_str_plain_option_prefix);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_option_prefix);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__options", mod_consts.const_str_plain__options);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain__options);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__wrap", mod_consts.const_str_plain__wrap);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain__wrap);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_on_press_str_plain_on_release_str_plain_suppress_tuple", mod_consts.const_tuple_str_plain_on_press_str_plain_on_release_str_plain_suppress_tuple);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_on_press_str_plain_on_release_str_plain_suppress_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f4a9d444dae7988f006080c97c8628eb", mod_consts.const_str_digest_f4a9d444dae7988f006080c97c8628eb);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_digest_f4a9d444dae7988f006080c97c8628eb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Key_str_plain_KeyCode_str_plain__NORMAL_MODIFIERS_tuple", mod_consts.const_tuple_str_plain_Key_str_plain_KeyCode_str_plain__NORMAL_MODIFIERS_tuple);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Key_str_plain_KeyCode_str_plain__NORMAL_MODIFIERS_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Key", mod_consts.const_str_plain_Key);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_Key);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KeyCode", mod_consts.const_str_plain_KeyCode);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_KeyCode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_from_vk", mod_consts.const_str_plain_from_vk);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_vk);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3b7ebd82fde0d8bbc5e465f9323ea066", mod_consts.const_str_digest_3b7ebd82fde0d8bbc5e465f9323ea066);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_3b7ebd82fde0d8bbc5e465f9323ea066);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b91c90bc7081e6515f7d674b43042a01", mod_consts.const_str_digest_b91c90bc7081e6515f7d674b43042a01);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_b91c90bc7081e6515f7d674b43042a01);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_contextlib", mod_consts.const_str_plain_contextlib);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_enum", mod_consts.const_str_plain_enum);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_enum);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745", mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_AbstractListener_str_plain_prefix_tuple", mod_consts.const_tuple_str_plain_AbstractListener_str_plain_prefix_tuple);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AbstractListener_str_plain_prefix_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AbstractListener", mod_consts.const_str_plain_AbstractListener);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_AbstractListener);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pynput", mod_consts.const_str_plain_pynput);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_pynput);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__logger_tuple", mod_consts.const_tuple_str_plain__logger_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__logger_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_object_tuple", mod_consts.const_tuple_type_object_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_tuple_type_object_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5787da84b9f9e63f3d3b20cb4f6f6bde", mod_consts.const_str_digest_5787da84b9f9e63f3d3b20cb4f6f6bde);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_5787da84b9f9e63f3d3b20cb4f6f6bde);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e40a7b8edf385bb36bda7d1f44c68efc", mod_consts.const_str_digest_e40a7b8edf385bb36bda7d1f44c68efc);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_digest_e40a7b8edf385bb36bda7d1f44c68efc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_38", mod_consts.const_int_pos_38);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_int_pos_38);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_false_tuple", mod_consts.const_tuple_none_none_false_tuple);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_false_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5b96c739e714ad7ce446e8f89a7125f4", mod_consts.const_str_digest_5b96c739e714ad7ce446e8f89a7125f4);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_5b96c739e714ad7ce446e8f89a7125f4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___repr__", mod_consts.const_str_plain___repr__);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain___repr__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4990e54b6d9d2f293acf1c6ba0630d20", mod_consts.const_str_digest_4990e54b6d9d2f293acf1c6ba0630d20);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_digest_4990e54b6d9d2f293acf1c6ba0630d20);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___str__", mod_consts.const_str_plain___str__);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain___str__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ea307985ee68d878d543c5fcbebb08f8", mod_consts.const_str_digest_ea307985ee68d878d543c5fcbebb08f8);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_digest_ea307985ee68d878d543c5fcbebb08f8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___eq__", mod_consts.const_str_plain___eq__);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain___eq__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_19056f6749f39c06071a6dd90d630f38", mod_consts.const_str_digest_19056f6749f39c06071a6dd90d630f38);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_digest_19056f6749f39c06071a6dd90d630f38);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___hash__", mod_consts.const_str_plain___hash__);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain___hash__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_214b436c27d90ac99d3294a5f7b1fc8e", mod_consts.const_str_digest_214b436c27d90ac99d3294a5f7b1fc8e);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_digest_214b436c27d90ac99d3294a5f7b1fc8e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b622b1fd9b26c6abd752385387f10fe5", mod_consts.const_str_digest_b622b1fd9b26c6abd752385387f10fe5);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_digest_b622b1fd9b26c6abd752385387f10fe5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cc5e6419872a0d9594b7fc0de36e47bb", mod_consts.const_str_digest_cc5e6419872a0d9594b7fc0de36e47bb);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_cc5e6419872a0d9594b7fc0de36e47bb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b4241f7130092b60ff602941137f7702", mod_consts.const_str_digest_b4241f7130092b60ff602941137f7702);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_digest_b4241f7130092b60ff602941137f7702);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_from_dead", mod_consts.const_str_plain_from_dead);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_dead);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_12f83a24556f36989c9d41a30e36331d", mod_consts.const_str_digest_12f83a24556f36989c9d41a30e36331d);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_digest_12f83a24556f36989c9d41a30e36331d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_cb0d5ff9fc24ca5ae15b245cda58ae71_tuple", mod_consts.const_tuple_cb0d5ff9fc24ca5ae15b245cda58ae71_tuple);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_tuple_cb0d5ff9fc24ca5ae15b245cda58ae71_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Enum", mod_consts.const_str_plain_Enum);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_Enum);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5882b9822b7e2f13a7f6ac17c2401754", mod_consts.const_str_digest_5882b9822b7e2f13a7f6ac17c2401754);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_5882b9822b7e2f13a7f6ac17c2401754);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_162", mod_consts.const_int_pos_162);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_int_pos_162);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_tuple", mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_alt_l", mod_consts.const_str_plain_alt_l);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_alt_l);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_alt_r", mod_consts.const_str_plain_alt_r);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_alt_r);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_backspace", mod_consts.const_str_plain_backspace);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_backspace);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cmd", mod_consts.const_str_plain_cmd);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_cmd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cmd_l", mod_consts.const_str_plain_cmd_l);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_cmd_l);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cmd_r", mod_consts.const_str_plain_cmd_r);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_cmd_r);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ctrl_l", mod_consts.const_str_plain_ctrl_l);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_ctrl_l);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ctrl_r", mod_consts.const_str_plain_ctrl_r);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_ctrl_r);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_delete", mod_consts.const_str_plain_delete);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_delete);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_down", mod_consts.const_str_plain_down);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_down);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_enter", mod_consts.const_str_plain_enter);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_enter);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_esc", mod_consts.const_str_plain_esc);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_esc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f1", mod_consts.const_str_plain_f1);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_f1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f2", mod_consts.const_str_plain_f2);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_f2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f3", mod_consts.const_str_plain_f3);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_f3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f4", mod_consts.const_str_plain_f4);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_f4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f5", mod_consts.const_str_plain_f5);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_f5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f6", mod_consts.const_str_plain_f6);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_f6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f7", mod_consts.const_str_plain_f7);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain_f7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f8", mod_consts.const_str_plain_f8);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_f8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f9", mod_consts.const_str_plain_f9);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain_f9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f10", mod_consts.const_str_plain_f10);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_f10);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f11", mod_consts.const_str_plain_f11);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain_f11);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f12", mod_consts.const_str_plain_f12);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_f12);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f13", mod_consts.const_str_plain_f13);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain_f13);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f14", mod_consts.const_str_plain_f14);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain_f14);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f15", mod_consts.const_str_plain_f15);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain_f15);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f16", mod_consts.const_str_plain_f16);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_f16);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f17", mod_consts.const_str_plain_f17);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain_f17);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f18", mod_consts.const_str_plain_f18);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain_f18);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f19", mod_consts.const_str_plain_f19);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_plain_f19);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f20", mod_consts.const_str_plain_f20);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_f20);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_home", mod_consts.const_str_plain_home);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain_home);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_left", mod_consts.const_str_plain_left);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_left);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_page_down", mod_consts.const_str_plain_page_down);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain_page_down);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_page_up", mod_consts.const_str_plain_page_up);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain_page_up);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_right", mod_consts.const_str_plain_right);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain_right);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_shift_l", mod_consts.const_str_plain_shift_l);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_plain_shift_l);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_shift_r", mod_consts.const_str_plain_shift_r);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_plain_shift_r);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_space", mod_consts.const_str_plain_space);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain_space);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tab", mod_consts.const_str_plain_tab);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain_tab);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_up", mod_consts.const_str_plain_up);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_plain_up);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_media_play_pause", mod_consts.const_str_plain_media_play_pause);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_plain_media_play_pause);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_media_volume_mute", mod_consts.const_str_plain_media_volume_mute);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain_media_volume_mute);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_media_volume_down", mod_consts.const_str_plain_media_volume_down);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_plain_media_volume_down);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_media_volume_up", mod_consts.const_str_plain_media_volume_up);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_plain_media_volume_up);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_media_previous", mod_consts.const_str_plain_media_previous);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_plain_media_previous);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_media_next", mod_consts.const_str_plain_media_next);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain_media_next);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_insert", mod_consts.const_str_plain_insert);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_plain_insert);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_menu", mod_consts.const_str_plain_menu);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_plain_menu);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_num_lock", mod_consts.const_str_plain_num_lock);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_plain_num_lock);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pause", mod_consts.const_str_plain_pause);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_plain_pause);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_print_screen", mod_consts.const_str_plain_print_screen);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_plain_print_screen);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_scroll_lock", mod_consts.const_str_plain_scroll_lock);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_plain_scroll_lock);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Controller", mod_consts.const_str_plain_Controller);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_plain_Controller);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_50cc9985bc6fd6a67382b9788508749d", mod_consts.const_str_digest_50cc9985bc6fd6a67382b9788508749d);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_digest_50cc9985bc6fd6a67382b9788508749d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_320", mod_consts.const_int_pos_320);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_int_pos_320);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Exception", mod_consts.const_str_plain_Exception);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_plain_Exception);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dd5f2c78f9b1f0a773678e0062f1aae7", mod_consts.const_str_digest_dd5f2c78f9b1f0a773678e0062f1aae7);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_digest_dd5f2c78f9b1f0a773678e0062f1aae7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b0bb594e9022feb274ad8395ca4df024", mod_consts.const_str_digest_b0bb594e9022feb274ad8395ca4df024);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_digest_b0bb594e9022feb274ad8395ca4df024);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_329", mod_consts.const_int_pos_329);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_int_pos_329);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d4143e58bd5d85dd37446aabfdb9d16f", mod_consts.const_str_digest_d4143e58bd5d85dd37446aabfdb9d16f);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_digest_d4143e58bd5d85dd37446aabfdb9d16f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_268e74f17db3493c34a7dc97045c9a1e", mod_consts.const_str_digest_268e74f17db3493c34a7dc97045c9a1e);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_digest_268e74f17db3493c34a7dc97045c9a1e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_338", mod_consts.const_int_pos_338);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_int_pos_338);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b927199d85c7cd7a86dce88997eeb880", mod_consts.const_str_digest_b927199d85c7cd7a86dce88997eeb880);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_digest_b927199d85c7cd7a86dce88997eeb880);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6a3d06875a0ae874cc49505612b8c38a", mod_consts.const_str_digest_6a3d06875a0ae874cc49505612b8c38a);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_digest_6a3d06875a0ae874cc49505612b8c38a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0614c73af5837b862271dc29da9f4ae2", mod_consts.const_str_digest_0614c73af5837b862271dc29da9f4ae2);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_digest_0614c73af5837b862271dc29da9f4ae2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tap", mod_consts.const_str_plain_tap);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_plain_tap);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e908f0b6b690801b1f88ea5b8dcd8a9a", mod_consts.const_str_digest_e908f0b6b690801b1f88ea5b8dcd8a9a);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_str_digest_e908f0b6b690801b1f88ea5b8dcd8a9a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_touch", mod_consts.const_str_plain_touch);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_str_plain_touch);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1a77c8df5a5cb2c0fbe808cc0ced8231", mod_consts.const_str_digest_1a77c8df5a5cb2c0fbe808cc0ced8231);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_str_digest_1a77c8df5a5cb2c0fbe808cc0ced8231);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_contextmanager", mod_consts.const_str_plain_contextmanager);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextmanager);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_292adef0d5bb49269aff45e42b5df1f9", mod_consts.const_str_digest_292adef0d5bb49269aff45e42b5df1f9);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_str_digest_292adef0d5bb49269aff45e42b5df1f9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_property", mod_consts.const_str_plain_property);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_alt_pressed", mod_consts.const_str_plain_alt_pressed);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_str_plain_alt_pressed);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a1d752b8925dc206ef93154d07a4136a", mod_consts.const_str_digest_a1d752b8925dc206ef93154d07a4136a);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_str_digest_a1d752b8925dc206ef93154d07a4136a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_alt_gr_pressed", mod_consts.const_str_plain_alt_gr_pressed);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_str_plain_alt_gr_pressed);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_96c669989794fc4c7dc951847f3aeba1", mod_consts.const_str_digest_96c669989794fc4c7dc951847f3aeba1);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_str_digest_96c669989794fc4c7dc951847f3aeba1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ctrl_pressed", mod_consts.const_str_plain_ctrl_pressed);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_str_plain_ctrl_pressed);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_33c989cadf517202a443ea2ad90911c3", mod_consts.const_str_digest_33c989cadf517202a443ea2ad90911c3);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_str_digest_33c989cadf517202a443ea2ad90911c3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_07e820da1d45207ad830389e59de8fc1", mod_consts.const_str_digest_07e820da1d45207ad830389e59de8fc1);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_str_digest_07e820da1d45207ad830389e59de8fc1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_18c025eec62fdadb628360c312bb5efd", mod_consts.const_str_digest_18c025eec62fdadb628360c312bb5efd);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_str_digest_18c025eec62fdadb628360c312bb5efd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_934ffbc715f089b2d637e813cd7b8a9e", mod_consts.const_str_digest_934ffbc715f089b2d637e813cd7b8a9e);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_str_digest_934ffbc715f089b2d637e813cd7b8a9e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dd6b2f333bf54db48d767dcaf29e4e11", mod_consts.const_str_digest_dd6b2f333bf54db48d767dcaf29e4e11);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_str_digest_dd6b2f333bf54db48d767dcaf29e4e11);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d2e5724cf7b5fadd38e435af2aefd902", mod_consts.const_str_digest_d2e5724cf7b5fadd38e435af2aefd902);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_str_digest_d2e5724cf7b5fadd38e435af2aefd902);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_572bc12affa7b0858b9dc76ded5a1708_tuple", mod_consts.const_tuple_572bc12affa7b0858b9dc76ded5a1708_tuple);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_tuple_572bc12affa7b0858b9dc76ded5a1708_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_48a46ef00f3fe282a279bcd5909ee5f3", mod_consts.const_str_digest_48a46ef00f3fe282a279bcd5909ee5f3);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_str_digest_48a46ef00f3fe282a279bcd5909ee5f3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_644", mod_consts.const_int_pos_644);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_int_pos_644);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8e366a1ab068a492ddad2c2681ebc3cc", mod_consts.const_str_digest_8e366a1ab068a492ddad2c2681ebc3cc);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_str_digest_8e366a1ab068a492ddad2c2681ebc3cc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_canonical", mod_consts.const_str_plain_canonical);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_str_plain_canonical);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_59de3149ee5e955c4900936673b5a8c3", mod_consts.const_str_digest_59de3149ee5e955c4900936673b5a8c3);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_str_digest_59de3149ee5e955c4900936673b5a8c3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__log_str_plain__options_tuple", mod_consts.const_tuple_str_plain__log_str_plain__options_tuple);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__log_str_plain__options_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_beb15ee8b27c65a02fe685f71368a3a1", mod_consts.const_str_digest_beb15ee8b27c65a02fe685f71368a3a1);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_str_digest_beb15ee8b27c65a02fe685f71368a3a1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_k_tuple", mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_k_tuple);
mod_consts_hash[231] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_k_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_d6d853009248cbc49008f3c6e5c8bd8a_tuple", mod_consts.const_tuple_d6d853009248cbc49008f3c6e5c8bd8a_tuple);
mod_consts_hash[232] = DEEP_HASH(tstate, mod_consts.const_tuple_d6d853009248cbc49008f3c6e5c8bd8a_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_7cdbba4988a35653a3ca9e7eb3aefe63_tuple", mod_consts.const_tuple_7cdbba4988a35653a3ca9e7eb3aefe63_tuple);
mod_consts_hash[233] = DEEP_HASH(tstate, mod_consts.const_tuple_7cdbba4988a35653a3ca9e7eb3aefe63_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_72ca23c2f9fe53917b15a7e3bfa4261d", mod_consts.const_str_digest_72ca23c2f9fe53917b15a7e3bfa4261d);
mod_consts_hash[234] = DEEP_HASH(tstate, mod_consts.const_str_digest_72ca23c2f9fe53917b15a7e3bfa4261d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[235] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_other_tuple", mod_consts.const_tuple_str_plain_self_str_plain_other_tuple);
mod_consts_hash[236] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[237] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_53417d5589a249b8093571daabb15480_tuple", mod_consts.const_tuple_53417d5589a249b8093571daabb15480_tuple);
mod_consts_hash[238] = DEEP_HASH(tstate, mod_consts.const_tuple_53417d5589a249b8093571daabb15480_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a27069ec99b0a2f63d3118fe2585bb7d_tuple", mod_consts.const_tuple_a27069ec99b0a2f63d3118fe2585bb7d_tuple);
mod_consts_hash[239] = DEEP_HASH(tstate, mod_consts.const_tuple_a27069ec99b0a2f63d3118fe2585bb7d_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain__NORMAL_MODIFIERS_tuple", mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain__NORMAL_MODIFIERS_tuple);
mod_consts_hash[240] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain__NORMAL_MODIFIERS_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_is_press_tuple", mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_is_press_tuple);
mod_consts_hash[241] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_is_press_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_key_tuple", mod_consts.const_tuple_str_plain_self_str_plain_key_tuple);
mod_consts_hash[242] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_key_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_modifiers_tuple", mod_consts.const_tuple_str_plain_self_str_plain_modifiers_tuple);
mod_consts_hash[243] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_modifiers_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_777dde957bdef1caabf641f2a848b80a_tuple", mod_consts.const_tuple_777dde957bdef1caabf641f2a848b80a_tuple);
mod_consts_hash[244] = DEEP_HASH(tstate, mod_consts.const_tuple_777dde957bdef1caabf641f2a848b80a_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_cls_str_plain_char_str_plain_kwargs_tuple", mod_consts.const_tuple_str_plain_cls_str_plain_char_str_plain_kwargs_tuple);
mod_consts_hash[245] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_char_str_plain_kwargs_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_cls_str_plain_vk_str_plain_kwargs_tuple", mod_consts.const_tuple_str_plain_cls_str_plain_vk_str_plain_kwargs_tuple);
mod_consts_hash[246] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_vk_str_plain_kwargs_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_combined_tuple", mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_combined_tuple);
mod_consts_hash[247] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_combined_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a044ea7684c8aa5e5abc51edf71ec0de_tuple", mod_consts.const_tuple_a044ea7684c8aa5e5abc51edf71ec0de_tuple);
mod_consts_hash[248] = DEEP_HASH(tstate, mod_consts.const_tuple_a044ea7684c8aa5e5abc51edf71ec0de_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_args_str_plain_key_tuple", mod_consts.const_tuple_str_plain_self_str_plain_args_str_plain_key_tuple);
mod_consts_hash[249] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_args_str_plain_key_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_resolved_tuple", mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_resolved_tuple);
mod_consts_hash[250] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_resolved_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_7c5932b999f10b0b8b03370404e065ec_tuple", mod_consts.const_tuple_7c5932b999f10b0b8b03370404e065ec_tuple);
mod_consts_hash[251] = DEEP_HASH(tstate, mod_consts.const_tuple_7c5932b999f10b0b8b03370404e065ec_tuple);
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
void checkModuleConstants_pynput$keyboard$_base(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_vk", mod_consts.const_str_plain_vk);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_vk) && "mod_consts.const_str_plain_vk");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_six", mod_consts.const_str_plain_six);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_six) && "mod_consts.const_str_plain_six");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_text_type", mod_consts.const_str_plain_text_type);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_text_type) && "mod_consts.const_str_plain_text_type");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_char", mod_consts.const_str_plain_char);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_char) && "mod_consts.const_str_plain_char");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_dead", mod_consts.const_str_plain_is_dead);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_dead) && "mod_consts.const_str_plain_is_dead");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unicodedata", mod_consts.const_str_plain_unicodedata);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_unicodedata) && "mod_consts.const_str_plain_unicodedata");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_lookup", mod_consts.const_str_plain_lookup);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_lookup) && "mod_consts.const_str_plain_lookup");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_664c92baca1dab8f8d502053c77bc434", mod_consts.const_str_digest_664c92baca1dab8f8d502053c77bc434);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_664c92baca1dab8f8d502053c77bc434) && "mod_consts.const_str_digest_664c92baca1dab8f8d502053c77bc434");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_combining", mod_consts.const_str_plain_combining);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_combining) && "mod_consts.const_str_plain_combining");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__PLATFORM_EXTENSIONS", mod_consts.const_str_plain__PLATFORM_EXTENSIONS);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain__PLATFORM_EXTENSIONS) && "mod_consts.const_str_plain__PLATFORM_EXTENSIONS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_kwargs", mod_consts.const_str_plain_kwargs);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_kwargs) && "mod_consts.const_str_plain_kwargs");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0674107b2d3e86aecfffb00b3395ae4a", mod_consts.const_str_digest_0674107b2d3e86aecfffb00b3395ae4a);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_0674107b2d3e86aecfffb00b3395ae4a) && "mod_consts.const_str_digest_0674107b2d3e86aecfffb00b3395ae4a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d5bb7ae0d709503fba26a489623672b9", mod_consts.const_str_digest_d5bb7ae0d709503fba26a489623672b9);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_d5bb7ae0d709503fba26a489623672b9) && "mod_consts.const_str_digest_d5bb7ae0d709503fba26a489623672b9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_self", mod_consts.const_str_plain_self);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_self) && "mod_consts.const_str_plain_self");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_other", mod_consts.const_str_plain_other);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_other) && "mod_consts.const_str_plain_other");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_genexpr", mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr) && "mod_consts.const_str_angle_genexpr");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7c942789fdb7952816d14acc47044e1c", mod_consts.const_str_digest_7c942789fdb7952816d14acc47044e1c);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_7c942789fdb7952816d14acc47044e1c) && "mod_consts.const_str_digest_7c942789fdb7952816d14acc47044e1c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_space", mod_consts.const_str_space);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_space) && "mod_consts.const_str_space");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_from_char", mod_consts.const_str_plain_from_char);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_char) && "mod_consts.const_str_plain_from_char");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_normalize", mod_consts.const_str_plain_normalize);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_normalize) && "mod_consts.const_str_plain_normalize");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NFC", mod_consts.const_str_plain_NFC);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_NFC) && "mod_consts.const_str_plain_NFC");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e60a8c1d7b3184c881b61ba89c681c5a", mod_consts.const_str_digest_e60a8c1d7b3184c881b61ba89c681c5a);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_e60a8c1d7b3184c881b61ba89c681c5a) && "mod_consts.const_str_digest_e60a8c1d7b3184c881b61ba89c681c5a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d794b56377271672b7f19e862167c5b4", mod_consts.const_str_digest_d794b56377271672b7f19e862167c5b4);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_d794b56377271672b7f19e862167c5b4) && "mod_consts.const_str_digest_d794b56377271672b7f19e862167c5b4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1e669dfefa7390902cf9eedb3efa23dc", mod_consts.const_str_digest_1e669dfefa7390902cf9eedb3efa23dc);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_1e669dfefa7390902cf9eedb3efa23dc) && "mod_consts.const_str_digest_1e669dfefa7390902cf9eedb3efa23dc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5b6abc36e5e17eb22c40e871534892d7", mod_consts.const_str_digest_5b6abc36e5e17eb22c40e871534892d7);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_5b6abc36e5e17eb22c40e871534892d7) && "mod_consts.const_str_digest_5b6abc36e5e17eb22c40e871534892d7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__logger", mod_consts.const_str_plain__logger);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain__logger) && "mod_consts.const_str_plain__logger");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__log", mod_consts.const_str_plain__log);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain__log) && "mod_consts.const_str_plain__log");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_threading", mod_consts.const_str_plain_threading);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_threading) && "mod_consts.const_str_plain_threading");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RLock", mod_consts.const_str_plain_RLock);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_RLock) && "mod_consts.const_str_plain_RLock");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__modifiers_lock", mod_consts.const_str_plain__modifiers_lock);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain__modifiers_lock) && "mod_consts.const_str_plain__modifiers_lock");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__modifiers", mod_consts.const_str_plain__modifiers);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain__modifiers) && "mod_consts.const_str_plain__modifiers");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__caps_lock", mod_consts.const_str_plain__caps_lock);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain__caps_lock) && "mod_consts.const_str_plain__caps_lock");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__dead_key", mod_consts.const_str_plain__dead_key);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain__dead_key) && "mod_consts.const_str_plain__dead_key");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__resolve", mod_consts.const_str_plain__resolve);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain__resolve) && "mod_consts.const_str_plain__resolve");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InvalidKeyException", mod_consts.const_str_plain_InvalidKeyException);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidKeyException) && "mod_consts.const_str_plain_InvalidKeyException");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__update_modifiers", mod_consts.const_str_plain__update_modifiers);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain__update_modifiers) && "mod_consts.const_str_plain__update_modifiers");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__Key", mod_consts.const_str_plain__Key);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain__Key) && "mod_consts.const_str_plain__Key");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_caps_lock", mod_consts.const_str_plain_caps_lock);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_caps_lock) && "mod_consts.const_str_plain_caps_lock");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_value", mod_consts.const_str_plain_value);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_value) && "mod_consts.const_str_plain_value");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_join", mod_consts.const_str_plain_join);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_join) && "mod_consts.const_str_plain_join");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__handle", mod_consts.const_str_plain__handle);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain__handle) && "mod_consts.const_str_plain__handle");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_resolved", mod_consts.const_str_plain_resolved);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_resolved) && "mod_consts.const_str_plain_resolved");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5357d86fdb528f369bb4cbf536afc75f", mod_consts.const_str_digest_5357d86fdb528f369bb4cbf536afc75f);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_5357d86fdb528f369bb4cbf536afc75f) && "mod_consts.const_str_digest_5357d86fdb528f369bb4cbf536afc75f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4d5c44f1715c738ab1477c1104b4dc72", mod_consts.const_str_digest_4d5c44f1715c738ab1477c1104b4dc72);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_4d5c44f1715c738ab1477c1104b4dc72) && "mod_consts.const_str_digest_4d5c44f1715c738ab1477c1104b4dc72");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_press", mod_consts.const_str_plain_press);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_press) && "mod_consts.const_str_plain_press");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_release", mod_consts.const_str_plain_release);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_release) && "mod_consts.const_str_plain_release");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f5f1371004fd2c03864a121c881eac70", mod_consts.const_str_digest_f5f1371004fd2c03864a121c881eac70);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_f5f1371004fd2c03864a121c881eac70) && "mod_consts.const_str_digest_f5f1371004fd2c03864a121c881eac70");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ff8be095bf80f0e27c0770ec6d5536e7", mod_consts.const_str_digest_ff8be095bf80f0e27c0770ec6d5536e7);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_ff8be095bf80f0e27c0770ec6d5536e7) && "mod_consts.const_str_digest_ff8be095bf80f0e27c0770ec6d5536e7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8f733b5107c7c1418b3d02ca4063735a", mod_consts.const_str_digest_8f733b5107c7c1418b3d02ca4063735a);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_8f733b5107c7c1418b3d02ca4063735a) && "mod_consts.const_str_digest_8f733b5107c7c1418b3d02ca4063735a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pressed", mod_consts.const_str_plain_pressed);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_pressed) && "mod_consts.const_str_plain_pressed");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7a654b074c875cd7fa4e884a9ee3305d", mod_consts.const_str_digest_7a654b074c875cd7fa4e884a9ee3305d);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_7a654b074c875cd7fa4e884a9ee3305d) && "mod_consts.const_str_digest_7a654b074c875cd7fa4e884a9ee3305d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__CONTROL_CODES_tuple", mod_consts.const_tuple_str_plain__CONTROL_CODES_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__CONTROL_CODES_tuple) && "mod_consts.const_tuple_str_plain__CONTROL_CODES_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__CONTROL_CODES", mod_consts.const_str_plain__CONTROL_CODES);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain__CONTROL_CODES) && "mod_consts.const_str_plain__CONTROL_CODES");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InvalidCharacterException", mod_consts.const_str_plain_InvalidCharacterException);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidCharacterException) && "mod_consts.const_str_plain_InvalidCharacterException");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4b5429c6ae493bbbf1f31b16dba63ce7", mod_consts.const_str_digest_4b5429c6ae493bbbf1f31b16dba63ce7);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_4b5429c6ae493bbbf1f31b16dba63ce7) && "mod_consts.const_str_digest_4b5429c6ae493bbbf1f31b16dba63ce7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_411c33fbbf064714d13e4ead8e55648e", mod_consts.const_str_digest_411c33fbbf064714d13e4ead8e55648e);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_411c33fbbf064714d13e4ead8e55648e) && "mod_consts.const_str_digest_411c33fbbf064714d13e4ead8e55648e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_none_tuple", mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple) && "mod_consts.const_tuple_none_none_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_modifiers", mod_consts.const_str_plain_modifiers);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_modifiers) && "mod_consts.const_str_plain_modifiers");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0f69ada8c0fd8406fc679dca9d5b7efb", mod_consts.const_str_digest_0f69ada8c0fd8406fc679dca9d5b7efb);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_0f69ada8c0fd8406fc679dca9d5b7efb) && "mod_consts.const_str_digest_0f69ada8c0fd8406fc679dca9d5b7efb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__as_modifier", mod_consts.const_str_plain__as_modifier);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain__as_modifier) && "mod_consts.const_str_plain__as_modifier");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b162aace11bc6f3e47e689774886e22d", mod_consts.const_str_digest_b162aace11bc6f3e47e689774886e22d);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_b162aace11bc6f3e47e689774886e22d) && "mod_consts.const_str_digest_b162aace11bc6f3e47e689774886e22d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_alt", mod_consts.const_str_plain_alt);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_alt) && "mod_consts.const_str_plain_alt");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_581e2c5b206a1667b97e60d00f588914", mod_consts.const_str_digest_581e2c5b206a1667b97e60d00f588914);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_581e2c5b206a1667b97e60d00f588914) && "mod_consts.const_str_digest_581e2c5b206a1667b97e60d00f588914");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_alt_gr", mod_consts.const_str_plain_alt_gr);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_alt_gr) && "mod_consts.const_str_plain_alt_gr");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7a44fc0705a1785d7fa3a3e0b5a89543", mod_consts.const_str_digest_7a44fc0705a1785d7fa3a3e0b5a89543);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_7a44fc0705a1785d7fa3a3e0b5a89543) && "mod_consts.const_str_digest_7a44fc0705a1785d7fa3a3e0b5a89543");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ctrl", mod_consts.const_str_plain_ctrl);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_ctrl) && "mod_consts.const_str_plain_ctrl");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a089a8fcca43f085bf0996470ee9aaee", mod_consts.const_str_digest_a089a8fcca43f085bf0996470ee9aaee);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_a089a8fcca43f085bf0996470ee9aaee) && "mod_consts.const_str_digest_a089a8fcca43f085bf0996470ee9aaee");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_shift", mod_consts.const_str_plain_shift);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_shift) && "mod_consts.const_str_plain_shift");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_778bf2157220734f3e1ca49144aea923", mod_consts.const_str_digest_778bf2157220734f3e1ca49144aea923);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_778bf2157220734f3e1ca49144aea923) && "mod_consts.const_str_digest_778bf2157220734f3e1ca49144aea923");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_string_types", mod_consts.const_str_plain_string_types);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_string_types) && "mod_consts.const_str_plain_string_types");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__KeyCode", mod_consts.const_str_plain__KeyCode);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain__KeyCode) && "mod_consts.const_str_plain__KeyCode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_shift_pressed", mod_consts.const_str_plain_shift_pressed);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_shift_pressed) && "mod_consts.const_str_plain_shift_pressed");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_upper", mod_consts.const_str_plain_upper);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_upper) && "mod_consts.const_str_plain_upper");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_vk_str_plain_char_tuple", mod_consts.const_tuple_str_plain_vk_str_plain_char_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_vk_str_plain_char_tuple) && "mod_consts.const_tuple_str_plain_vk_str_plain_char_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d5f2b65fc1620a169f17429bf47cdc16", mod_consts.const_str_digest_d5f2b65fc1620a169f17429bf47cdc16);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_d5f2b65fc1620a169f17429bf47cdc16) && "mod_consts.const_str_digest_d5f2b65fc1620a169f17429bf47cdc16");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dedd3afef694a9bbd9f6a8f92417d2fa", mod_consts.const_str_digest_dedd3afef694a9bbd9f6a8f92417d2fa);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_dedd3afef694a9bbd9f6a8f92417d2fa) && "mod_consts.const_str_digest_dedd3afef694a9bbd9f6a8f92417d2fa");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_add", mod_consts.const_str_plain_add);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_add) && "mod_consts.const_str_plain_add");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_remove", mod_consts.const_str_plain_remove);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_remove) && "mod_consts.const_str_plain_remove");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_30c59fa0df14a05e2ca88490b7a7c72e", mod_consts.const_str_digest_30c59fa0df14a05e2ca88490b7a7c72e);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_30c59fa0df14a05e2ca88490b7a7c72e) && "mod_consts.const_str_digest_30c59fa0df14a05e2ca88490b7a7c72e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__NORMAL_MODIFIERS_tuple", mod_consts.const_tuple_str_plain__NORMAL_MODIFIERS_tuple);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__NORMAL_MODIFIERS_tuple) && "mod_consts.const_tuple_str_plain__NORMAL_MODIFIERS_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__NORMAL_MODIFIERS", mod_consts.const_str_plain__NORMAL_MODIFIERS);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain__NORMAL_MODIFIERS) && "mod_consts.const_str_plain__NORMAL_MODIFIERS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ff49492fb98ce321aecc5b366aaf2d18", mod_consts.const_str_digest_ff49492fb98ce321aecc5b366aaf2d18);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_ff49492fb98ce321aecc5b366aaf2d18) && "mod_consts.const_str_digest_ff49492fb98ce321aecc5b366aaf2d18");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_df9c473e3d718724b66a1fb733b46820", mod_consts.const_str_digest_df9c473e3d718724b66a1fb733b46820);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_df9c473e3d718724b66a1fb733b46820) && "mod_consts.const_str_digest_df9c473e3d718724b66a1fb733b46820");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_prefix", mod_consts.const_str_plain_prefix);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_prefix) && "mod_consts.const_str_plain_prefix");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Listener", mod_consts.const_str_plain_Listener);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_Listener) && "mod_consts.const_str_plain_Listener");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_startswith", mod_consts.const_str_plain_startswith);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_startswith) && "mod_consts.const_str_plain_startswith");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_option_prefix", mod_consts.const_str_plain_option_prefix);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_option_prefix) && "mod_consts.const_str_plain_option_prefix");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__options", mod_consts.const_str_plain__options);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain__options) && "mod_consts.const_str_plain__options");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__wrap", mod_consts.const_str_plain__wrap);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain__wrap) && "mod_consts.const_str_plain__wrap");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_int_pos_2) && "mod_consts.const_int_pos_2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_on_press_str_plain_on_release_str_plain_suppress_tuple", mod_consts.const_tuple_str_plain_on_press_str_plain_on_release_str_plain_suppress_tuple);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_on_press_str_plain_on_release_str_plain_suppress_tuple) && "mod_consts.const_tuple_str_plain_on_press_str_plain_on_release_str_plain_suppress_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f4a9d444dae7988f006080c97c8628eb", mod_consts.const_str_digest_f4a9d444dae7988f006080c97c8628eb);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_digest_f4a9d444dae7988f006080c97c8628eb) && "mod_consts.const_str_digest_f4a9d444dae7988f006080c97c8628eb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Key_str_plain_KeyCode_str_plain__NORMAL_MODIFIERS_tuple", mod_consts.const_tuple_str_plain_Key_str_plain_KeyCode_str_plain__NORMAL_MODIFIERS_tuple);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Key_str_plain_KeyCode_str_plain__NORMAL_MODIFIERS_tuple) && "mod_consts.const_tuple_str_plain_Key_str_plain_KeyCode_str_plain__NORMAL_MODIFIERS_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Key", mod_consts.const_str_plain_Key);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_Key) && "mod_consts.const_str_plain_Key");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KeyCode", mod_consts.const_str_plain_KeyCode);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_KeyCode) && "mod_consts.const_str_plain_KeyCode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_from_vk", mod_consts.const_str_plain_from_vk);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_vk) && "mod_consts.const_str_plain_from_vk");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3b7ebd82fde0d8bbc5e465f9323ea066", mod_consts.const_str_digest_3b7ebd82fde0d8bbc5e465f9323ea066);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_3b7ebd82fde0d8bbc5e465f9323ea066) && "mod_consts.const_str_digest_3b7ebd82fde0d8bbc5e465f9323ea066");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b91c90bc7081e6515f7d674b43042a01", mod_consts.const_str_digest_b91c90bc7081e6515f7d674b43042a01);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_b91c90bc7081e6515f7d674b43042a01) && "mod_consts.const_str_digest_b91c90bc7081e6515f7d674b43042a01");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_contextlib", mod_consts.const_str_plain_contextlib);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib) && "mod_consts.const_str_plain_contextlib");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_enum", mod_consts.const_str_plain_enum);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_enum) && "mod_consts.const_str_plain_enum");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745", mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745) && "mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_AbstractListener_str_plain_prefix_tuple", mod_consts.const_tuple_str_plain_AbstractListener_str_plain_prefix_tuple);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AbstractListener_str_plain_prefix_tuple) && "mod_consts.const_tuple_str_plain_AbstractListener_str_plain_prefix_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AbstractListener", mod_consts.const_str_plain_AbstractListener);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_AbstractListener) && "mod_consts.const_str_plain_AbstractListener");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pynput", mod_consts.const_str_plain_pynput);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_pynput) && "mod_consts.const_str_plain_pynput");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__logger_tuple", mod_consts.const_tuple_str_plain__logger_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__logger_tuple) && "mod_consts.const_tuple_str_plain__logger_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_object_tuple", mod_consts.const_tuple_type_object_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_tuple_type_object_tuple) && "mod_consts.const_tuple_type_object_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__) && "mod_consts.const_str_plain___prepare__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__) && "mod_consts.const_str_plain___getitem__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295) && "mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass) && "mod_consts.const_str_angle_metaclass");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5787da84b9f9e63f3d3b20cb4f6f6bde", mod_consts.const_str_digest_5787da84b9f9e63f3d3b20cb4f6f6bde);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_5787da84b9f9e63f3d3b20cb4f6f6bde) && "mod_consts.const_str_digest_5787da84b9f9e63f3d3b20cb4f6f6bde");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e40a7b8edf385bb36bda7d1f44c68efc", mod_consts.const_str_digest_e40a7b8edf385bb36bda7d1f44c68efc);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_digest_e40a7b8edf385bb36bda7d1f44c68efc) && "mod_consts.const_str_digest_e40a7b8edf385bb36bda7d1f44c68efc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_38", mod_consts.const_int_pos_38);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_int_pos_38) && "mod_consts.const_int_pos_38");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_false_tuple", mod_consts.const_tuple_none_none_false_tuple);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_false_tuple) && "mod_consts.const_tuple_none_none_false_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5b96c739e714ad7ce446e8f89a7125f4", mod_consts.const_str_digest_5b96c739e714ad7ce446e8f89a7125f4);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_5b96c739e714ad7ce446e8f89a7125f4) && "mod_consts.const_str_digest_5b96c739e714ad7ce446e8f89a7125f4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___repr__", mod_consts.const_str_plain___repr__);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain___repr__) && "mod_consts.const_str_plain___repr__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4990e54b6d9d2f293acf1c6ba0630d20", mod_consts.const_str_digest_4990e54b6d9d2f293acf1c6ba0630d20);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_digest_4990e54b6d9d2f293acf1c6ba0630d20) && "mod_consts.const_str_digest_4990e54b6d9d2f293acf1c6ba0630d20");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___str__", mod_consts.const_str_plain___str__);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain___str__) && "mod_consts.const_str_plain___str__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ea307985ee68d878d543c5fcbebb08f8", mod_consts.const_str_digest_ea307985ee68d878d543c5fcbebb08f8);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_digest_ea307985ee68d878d543c5fcbebb08f8) && "mod_consts.const_str_digest_ea307985ee68d878d543c5fcbebb08f8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___eq__", mod_consts.const_str_plain___eq__);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain___eq__) && "mod_consts.const_str_plain___eq__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_19056f6749f39c06071a6dd90d630f38", mod_consts.const_str_digest_19056f6749f39c06071a6dd90d630f38);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_digest_19056f6749f39c06071a6dd90d630f38) && "mod_consts.const_str_digest_19056f6749f39c06071a6dd90d630f38");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___hash__", mod_consts.const_str_plain___hash__);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain___hash__) && "mod_consts.const_str_plain___hash__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_214b436c27d90ac99d3294a5f7b1fc8e", mod_consts.const_str_digest_214b436c27d90ac99d3294a5f7b1fc8e);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_digest_214b436c27d90ac99d3294a5f7b1fc8e) && "mod_consts.const_str_digest_214b436c27d90ac99d3294a5f7b1fc8e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b622b1fd9b26c6abd752385387f10fe5", mod_consts.const_str_digest_b622b1fd9b26c6abd752385387f10fe5);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_digest_b622b1fd9b26c6abd752385387f10fe5) && "mod_consts.const_str_digest_b622b1fd9b26c6abd752385387f10fe5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cc5e6419872a0d9594b7fc0de36e47bb", mod_consts.const_str_digest_cc5e6419872a0d9594b7fc0de36e47bb);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_cc5e6419872a0d9594b7fc0de36e47bb) && "mod_consts.const_str_digest_cc5e6419872a0d9594b7fc0de36e47bb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b4241f7130092b60ff602941137f7702", mod_consts.const_str_digest_b4241f7130092b60ff602941137f7702);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_digest_b4241f7130092b60ff602941137f7702) && "mod_consts.const_str_digest_b4241f7130092b60ff602941137f7702");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_from_dead", mod_consts.const_str_plain_from_dead);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_dead) && "mod_consts.const_str_plain_from_dead");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_12f83a24556f36989c9d41a30e36331d", mod_consts.const_str_digest_12f83a24556f36989c9d41a30e36331d);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_digest_12f83a24556f36989c9d41a30e36331d) && "mod_consts.const_str_digest_12f83a24556f36989c9d41a30e36331d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_cb0d5ff9fc24ca5ae15b245cda58ae71_tuple", mod_consts.const_tuple_cb0d5ff9fc24ca5ae15b245cda58ae71_tuple);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_tuple_cb0d5ff9fc24ca5ae15b245cda58ae71_tuple) && "mod_consts.const_tuple_cb0d5ff9fc24ca5ae15b245cda58ae71_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__) && "mod_consts.const_str_plain___orig_bases__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Enum", mod_consts.const_str_plain_Enum);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_Enum) && "mod_consts.const_str_plain_Enum");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5882b9822b7e2f13a7f6ac17c2401754", mod_consts.const_str_digest_5882b9822b7e2f13a7f6ac17c2401754);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_digest_5882b9822b7e2f13a7f6ac17c2401754) && "mod_consts.const_str_digest_5882b9822b7e2f13a7f6ac17c2401754");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_162", mod_consts.const_int_pos_162);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_int_pos_162) && "mod_consts.const_int_pos_162");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_tuple", mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple) && "mod_consts.const_tuple_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_alt_l", mod_consts.const_str_plain_alt_l);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_alt_l) && "mod_consts.const_str_plain_alt_l");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_alt_r", mod_consts.const_str_plain_alt_r);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_alt_r) && "mod_consts.const_str_plain_alt_r");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_backspace", mod_consts.const_str_plain_backspace);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_backspace) && "mod_consts.const_str_plain_backspace");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cmd", mod_consts.const_str_plain_cmd);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_cmd) && "mod_consts.const_str_plain_cmd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cmd_l", mod_consts.const_str_plain_cmd_l);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_cmd_l) && "mod_consts.const_str_plain_cmd_l");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cmd_r", mod_consts.const_str_plain_cmd_r);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_cmd_r) && "mod_consts.const_str_plain_cmd_r");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ctrl_l", mod_consts.const_str_plain_ctrl_l);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_ctrl_l) && "mod_consts.const_str_plain_ctrl_l");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ctrl_r", mod_consts.const_str_plain_ctrl_r);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_ctrl_r) && "mod_consts.const_str_plain_ctrl_r");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_delete", mod_consts.const_str_plain_delete);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_delete) && "mod_consts.const_str_plain_delete");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_down", mod_consts.const_str_plain_down);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_down) && "mod_consts.const_str_plain_down");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_enter", mod_consts.const_str_plain_enter);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_enter) && "mod_consts.const_str_plain_enter");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_esc", mod_consts.const_str_plain_esc);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_esc) && "mod_consts.const_str_plain_esc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f1", mod_consts.const_str_plain_f1);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_f1) && "mod_consts.const_str_plain_f1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f2", mod_consts.const_str_plain_f2);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_f2) && "mod_consts.const_str_plain_f2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f3", mod_consts.const_str_plain_f3);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_f3) && "mod_consts.const_str_plain_f3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f4", mod_consts.const_str_plain_f4);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_f4) && "mod_consts.const_str_plain_f4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f5", mod_consts.const_str_plain_f5);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_f5) && "mod_consts.const_str_plain_f5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f6", mod_consts.const_str_plain_f6);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_f6) && "mod_consts.const_str_plain_f6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f7", mod_consts.const_str_plain_f7);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain_f7) && "mod_consts.const_str_plain_f7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f8", mod_consts.const_str_plain_f8);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_f8) && "mod_consts.const_str_plain_f8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f9", mod_consts.const_str_plain_f9);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain_f9) && "mod_consts.const_str_plain_f9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f10", mod_consts.const_str_plain_f10);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_f10) && "mod_consts.const_str_plain_f10");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f11", mod_consts.const_str_plain_f11);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain_f11) && "mod_consts.const_str_plain_f11");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f12", mod_consts.const_str_plain_f12);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_f12) && "mod_consts.const_str_plain_f12");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f13", mod_consts.const_str_plain_f13);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain_f13) && "mod_consts.const_str_plain_f13");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f14", mod_consts.const_str_plain_f14);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain_f14) && "mod_consts.const_str_plain_f14");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f15", mod_consts.const_str_plain_f15);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain_f15) && "mod_consts.const_str_plain_f15");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f16", mod_consts.const_str_plain_f16);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_f16) && "mod_consts.const_str_plain_f16");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f17", mod_consts.const_str_plain_f17);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain_f17) && "mod_consts.const_str_plain_f17");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f18", mod_consts.const_str_plain_f18);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain_f18) && "mod_consts.const_str_plain_f18");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f19", mod_consts.const_str_plain_f19);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_plain_f19) && "mod_consts.const_str_plain_f19");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_f20", mod_consts.const_str_plain_f20);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_f20) && "mod_consts.const_str_plain_f20");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_home", mod_consts.const_str_plain_home);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain_home) && "mod_consts.const_str_plain_home");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_left", mod_consts.const_str_plain_left);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_left) && "mod_consts.const_str_plain_left");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_page_down", mod_consts.const_str_plain_page_down);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain_page_down) && "mod_consts.const_str_plain_page_down");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_page_up", mod_consts.const_str_plain_page_up);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain_page_up) && "mod_consts.const_str_plain_page_up");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_right", mod_consts.const_str_plain_right);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain_right) && "mod_consts.const_str_plain_right");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_shift_l", mod_consts.const_str_plain_shift_l);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_plain_shift_l) && "mod_consts.const_str_plain_shift_l");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_shift_r", mod_consts.const_str_plain_shift_r);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_plain_shift_r) && "mod_consts.const_str_plain_shift_r");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_space", mod_consts.const_str_plain_space);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain_space) && "mod_consts.const_str_plain_space");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tab", mod_consts.const_str_plain_tab);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain_tab) && "mod_consts.const_str_plain_tab");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_up", mod_consts.const_str_plain_up);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_plain_up) && "mod_consts.const_str_plain_up");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_media_play_pause", mod_consts.const_str_plain_media_play_pause);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_plain_media_play_pause) && "mod_consts.const_str_plain_media_play_pause");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_media_volume_mute", mod_consts.const_str_plain_media_volume_mute);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain_media_volume_mute) && "mod_consts.const_str_plain_media_volume_mute");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_media_volume_down", mod_consts.const_str_plain_media_volume_down);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_plain_media_volume_down) && "mod_consts.const_str_plain_media_volume_down");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_media_volume_up", mod_consts.const_str_plain_media_volume_up);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_plain_media_volume_up) && "mod_consts.const_str_plain_media_volume_up");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_media_previous", mod_consts.const_str_plain_media_previous);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_plain_media_previous) && "mod_consts.const_str_plain_media_previous");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_media_next", mod_consts.const_str_plain_media_next);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain_media_next) && "mod_consts.const_str_plain_media_next");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_insert", mod_consts.const_str_plain_insert);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_plain_insert) && "mod_consts.const_str_plain_insert");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_menu", mod_consts.const_str_plain_menu);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_plain_menu) && "mod_consts.const_str_plain_menu");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_num_lock", mod_consts.const_str_plain_num_lock);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_plain_num_lock) && "mod_consts.const_str_plain_num_lock");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pause", mod_consts.const_str_plain_pause);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_plain_pause) && "mod_consts.const_str_plain_pause");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_print_screen", mod_consts.const_str_plain_print_screen);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_plain_print_screen) && "mod_consts.const_str_plain_print_screen");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_scroll_lock", mod_consts.const_str_plain_scroll_lock);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_plain_scroll_lock) && "mod_consts.const_str_plain_scroll_lock");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Controller", mod_consts.const_str_plain_Controller);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_plain_Controller) && "mod_consts.const_str_plain_Controller");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_50cc9985bc6fd6a67382b9788508749d", mod_consts.const_str_digest_50cc9985bc6fd6a67382b9788508749d);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_digest_50cc9985bc6fd6a67382b9788508749d) && "mod_consts.const_str_digest_50cc9985bc6fd6a67382b9788508749d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_320", mod_consts.const_int_pos_320);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_int_pos_320) && "mod_consts.const_int_pos_320");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Exception", mod_consts.const_str_plain_Exception);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_plain_Exception) && "mod_consts.const_str_plain_Exception");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dd5f2c78f9b1f0a773678e0062f1aae7", mod_consts.const_str_digest_dd5f2c78f9b1f0a773678e0062f1aae7);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_digest_dd5f2c78f9b1f0a773678e0062f1aae7) && "mod_consts.const_str_digest_dd5f2c78f9b1f0a773678e0062f1aae7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b0bb594e9022feb274ad8395ca4df024", mod_consts.const_str_digest_b0bb594e9022feb274ad8395ca4df024);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_digest_b0bb594e9022feb274ad8395ca4df024) && "mod_consts.const_str_digest_b0bb594e9022feb274ad8395ca4df024");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_329", mod_consts.const_int_pos_329);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_int_pos_329) && "mod_consts.const_int_pos_329");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d4143e58bd5d85dd37446aabfdb9d16f", mod_consts.const_str_digest_d4143e58bd5d85dd37446aabfdb9d16f);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_digest_d4143e58bd5d85dd37446aabfdb9d16f) && "mod_consts.const_str_digest_d4143e58bd5d85dd37446aabfdb9d16f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_268e74f17db3493c34a7dc97045c9a1e", mod_consts.const_str_digest_268e74f17db3493c34a7dc97045c9a1e);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_digest_268e74f17db3493c34a7dc97045c9a1e) && "mod_consts.const_str_digest_268e74f17db3493c34a7dc97045c9a1e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_338", mod_consts.const_int_pos_338);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_int_pos_338) && "mod_consts.const_int_pos_338");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b927199d85c7cd7a86dce88997eeb880", mod_consts.const_str_digest_b927199d85c7cd7a86dce88997eeb880);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_digest_b927199d85c7cd7a86dce88997eeb880) && "mod_consts.const_str_digest_b927199d85c7cd7a86dce88997eeb880");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6a3d06875a0ae874cc49505612b8c38a", mod_consts.const_str_digest_6a3d06875a0ae874cc49505612b8c38a);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_digest_6a3d06875a0ae874cc49505612b8c38a) && "mod_consts.const_str_digest_6a3d06875a0ae874cc49505612b8c38a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0614c73af5837b862271dc29da9f4ae2", mod_consts.const_str_digest_0614c73af5837b862271dc29da9f4ae2);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_digest_0614c73af5837b862271dc29da9f4ae2) && "mod_consts.const_str_digest_0614c73af5837b862271dc29da9f4ae2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tap", mod_consts.const_str_plain_tap);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_plain_tap) && "mod_consts.const_str_plain_tap");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e908f0b6b690801b1f88ea5b8dcd8a9a", mod_consts.const_str_digest_e908f0b6b690801b1f88ea5b8dcd8a9a);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_str_digest_e908f0b6b690801b1f88ea5b8dcd8a9a) && "mod_consts.const_str_digest_e908f0b6b690801b1f88ea5b8dcd8a9a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_touch", mod_consts.const_str_plain_touch);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_str_plain_touch) && "mod_consts.const_str_plain_touch");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1a77c8df5a5cb2c0fbe808cc0ced8231", mod_consts.const_str_digest_1a77c8df5a5cb2c0fbe808cc0ced8231);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_str_digest_1a77c8df5a5cb2c0fbe808cc0ced8231) && "mod_consts.const_str_digest_1a77c8df5a5cb2c0fbe808cc0ced8231");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_contextmanager", mod_consts.const_str_plain_contextmanager);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextmanager) && "mod_consts.const_str_plain_contextmanager");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_292adef0d5bb49269aff45e42b5df1f9", mod_consts.const_str_digest_292adef0d5bb49269aff45e42b5df1f9);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_str_digest_292adef0d5bb49269aff45e42b5df1f9) && "mod_consts.const_str_digest_292adef0d5bb49269aff45e42b5df1f9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_property", mod_consts.const_str_plain_property);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_str_plain_property) && "mod_consts.const_str_plain_property");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_alt_pressed", mod_consts.const_str_plain_alt_pressed);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_str_plain_alt_pressed) && "mod_consts.const_str_plain_alt_pressed");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a1d752b8925dc206ef93154d07a4136a", mod_consts.const_str_digest_a1d752b8925dc206ef93154d07a4136a);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_str_digest_a1d752b8925dc206ef93154d07a4136a) && "mod_consts.const_str_digest_a1d752b8925dc206ef93154d07a4136a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_alt_gr_pressed", mod_consts.const_str_plain_alt_gr_pressed);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_str_plain_alt_gr_pressed) && "mod_consts.const_str_plain_alt_gr_pressed");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_96c669989794fc4c7dc951847f3aeba1", mod_consts.const_str_digest_96c669989794fc4c7dc951847f3aeba1);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_str_digest_96c669989794fc4c7dc951847f3aeba1) && "mod_consts.const_str_digest_96c669989794fc4c7dc951847f3aeba1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ctrl_pressed", mod_consts.const_str_plain_ctrl_pressed);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_str_plain_ctrl_pressed) && "mod_consts.const_str_plain_ctrl_pressed");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_33c989cadf517202a443ea2ad90911c3", mod_consts.const_str_digest_33c989cadf517202a443ea2ad90911c3);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_str_digest_33c989cadf517202a443ea2ad90911c3) && "mod_consts.const_str_digest_33c989cadf517202a443ea2ad90911c3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_07e820da1d45207ad830389e59de8fc1", mod_consts.const_str_digest_07e820da1d45207ad830389e59de8fc1);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_str_digest_07e820da1d45207ad830389e59de8fc1) && "mod_consts.const_str_digest_07e820da1d45207ad830389e59de8fc1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_18c025eec62fdadb628360c312bb5efd", mod_consts.const_str_digest_18c025eec62fdadb628360c312bb5efd);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_str_digest_18c025eec62fdadb628360c312bb5efd) && "mod_consts.const_str_digest_18c025eec62fdadb628360c312bb5efd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_934ffbc715f089b2d637e813cd7b8a9e", mod_consts.const_str_digest_934ffbc715f089b2d637e813cd7b8a9e);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_str_digest_934ffbc715f089b2d637e813cd7b8a9e) && "mod_consts.const_str_digest_934ffbc715f089b2d637e813cd7b8a9e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dd6b2f333bf54db48d767dcaf29e4e11", mod_consts.const_str_digest_dd6b2f333bf54db48d767dcaf29e4e11);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_str_digest_dd6b2f333bf54db48d767dcaf29e4e11) && "mod_consts.const_str_digest_dd6b2f333bf54db48d767dcaf29e4e11");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d2e5724cf7b5fadd38e435af2aefd902", mod_consts.const_str_digest_d2e5724cf7b5fadd38e435af2aefd902);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_str_digest_d2e5724cf7b5fadd38e435af2aefd902) && "mod_consts.const_str_digest_d2e5724cf7b5fadd38e435af2aefd902");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_572bc12affa7b0858b9dc76ded5a1708_tuple", mod_consts.const_tuple_572bc12affa7b0858b9dc76ded5a1708_tuple);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_tuple_572bc12affa7b0858b9dc76ded5a1708_tuple) && "mod_consts.const_tuple_572bc12affa7b0858b9dc76ded5a1708_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_48a46ef00f3fe282a279bcd5909ee5f3", mod_consts.const_str_digest_48a46ef00f3fe282a279bcd5909ee5f3);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_str_digest_48a46ef00f3fe282a279bcd5909ee5f3) && "mod_consts.const_str_digest_48a46ef00f3fe282a279bcd5909ee5f3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_644", mod_consts.const_int_pos_644);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_int_pos_644) && "mod_consts.const_int_pos_644");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8e366a1ab068a492ddad2c2681ebc3cc", mod_consts.const_str_digest_8e366a1ab068a492ddad2c2681ebc3cc);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_str_digest_8e366a1ab068a492ddad2c2681ebc3cc) && "mod_consts.const_str_digest_8e366a1ab068a492ddad2c2681ebc3cc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_canonical", mod_consts.const_str_plain_canonical);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_str_plain_canonical) && "mod_consts.const_str_plain_canonical");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_59de3149ee5e955c4900936673b5a8c3", mod_consts.const_str_digest_59de3149ee5e955c4900936673b5a8c3);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_str_digest_59de3149ee5e955c4900936673b5a8c3) && "mod_consts.const_str_digest_59de3149ee5e955c4900936673b5a8c3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__log_str_plain__options_tuple", mod_consts.const_tuple_str_plain__log_str_plain__options_tuple);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__log_str_plain__options_tuple) && "mod_consts.const_tuple_str_plain__log_str_plain__options_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_beb15ee8b27c65a02fe685f71368a3a1", mod_consts.const_str_digest_beb15ee8b27c65a02fe685f71368a3a1);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_str_digest_beb15ee8b27c65a02fe685f71368a3a1) && "mod_consts.const_str_digest_beb15ee8b27c65a02fe685f71368a3a1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_k_tuple", mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_k_tuple);
assert(mod_consts_hash[231] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_k_tuple) && "mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_k_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_d6d853009248cbc49008f3c6e5c8bd8a_tuple", mod_consts.const_tuple_d6d853009248cbc49008f3c6e5c8bd8a_tuple);
assert(mod_consts_hash[232] == DEEP_HASH(tstate, mod_consts.const_tuple_d6d853009248cbc49008f3c6e5c8bd8a_tuple) && "mod_consts.const_tuple_d6d853009248cbc49008f3c6e5c8bd8a_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_7cdbba4988a35653a3ca9e7eb3aefe63_tuple", mod_consts.const_tuple_7cdbba4988a35653a3ca9e7eb3aefe63_tuple);
assert(mod_consts_hash[233] == DEEP_HASH(tstate, mod_consts.const_tuple_7cdbba4988a35653a3ca9e7eb3aefe63_tuple) && "mod_consts.const_tuple_7cdbba4988a35653a3ca9e7eb3aefe63_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_72ca23c2f9fe53917b15a7e3bfa4261d", mod_consts.const_str_digest_72ca23c2f9fe53917b15a7e3bfa4261d);
assert(mod_consts_hash[234] == DEEP_HASH(tstate, mod_consts.const_str_digest_72ca23c2f9fe53917b15a7e3bfa4261d) && "mod_consts.const_str_digest_72ca23c2f9fe53917b15a7e3bfa4261d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[235] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple) && "mod_consts.const_tuple_str_plain___class___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_other_tuple", mod_consts.const_tuple_str_plain_self_str_plain_other_tuple);
assert(mod_consts_hash[236] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_other_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[237] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple) && "mod_consts.const_tuple_str_plain_self_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_53417d5589a249b8093571daabb15480_tuple", mod_consts.const_tuple_53417d5589a249b8093571daabb15480_tuple);
assert(mod_consts_hash[238] == DEEP_HASH(tstate, mod_consts.const_tuple_53417d5589a249b8093571daabb15480_tuple) && "mod_consts.const_tuple_53417d5589a249b8093571daabb15480_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a27069ec99b0a2f63d3118fe2585bb7d_tuple", mod_consts.const_tuple_a27069ec99b0a2f63d3118fe2585bb7d_tuple);
assert(mod_consts_hash[239] == DEEP_HASH(tstate, mod_consts.const_tuple_a27069ec99b0a2f63d3118fe2585bb7d_tuple) && "mod_consts.const_tuple_a27069ec99b0a2f63d3118fe2585bb7d_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain__NORMAL_MODIFIERS_tuple", mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain__NORMAL_MODIFIERS_tuple);
assert(mod_consts_hash[240] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain__NORMAL_MODIFIERS_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain__NORMAL_MODIFIERS_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_is_press_tuple", mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_is_press_tuple);
assert(mod_consts_hash[241] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_is_press_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_is_press_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_key_tuple", mod_consts.const_tuple_str_plain_self_str_plain_key_tuple);
assert(mod_consts_hash[242] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_key_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_key_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_modifiers_tuple", mod_consts.const_tuple_str_plain_self_str_plain_modifiers_tuple);
assert(mod_consts_hash[243] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_modifiers_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_modifiers_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_777dde957bdef1caabf641f2a848b80a_tuple", mod_consts.const_tuple_777dde957bdef1caabf641f2a848b80a_tuple);
assert(mod_consts_hash[244] == DEEP_HASH(tstate, mod_consts.const_tuple_777dde957bdef1caabf641f2a848b80a_tuple) && "mod_consts.const_tuple_777dde957bdef1caabf641f2a848b80a_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_cls_str_plain_char_str_plain_kwargs_tuple", mod_consts.const_tuple_str_plain_cls_str_plain_char_str_plain_kwargs_tuple);
assert(mod_consts_hash[245] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_char_str_plain_kwargs_tuple) && "mod_consts.const_tuple_str_plain_cls_str_plain_char_str_plain_kwargs_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_cls_str_plain_vk_str_plain_kwargs_tuple", mod_consts.const_tuple_str_plain_cls_str_plain_vk_str_plain_kwargs_tuple);
assert(mod_consts_hash[246] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_vk_str_plain_kwargs_tuple) && "mod_consts.const_tuple_str_plain_cls_str_plain_vk_str_plain_kwargs_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_combined_tuple", mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_combined_tuple);
assert(mod_consts_hash[247] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_combined_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_combined_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a044ea7684c8aa5e5abc51edf71ec0de_tuple", mod_consts.const_tuple_a044ea7684c8aa5e5abc51edf71ec0de_tuple);
assert(mod_consts_hash[248] == DEEP_HASH(tstate, mod_consts.const_tuple_a044ea7684c8aa5e5abc51edf71ec0de_tuple) && "mod_consts.const_tuple_a044ea7684c8aa5e5abc51edf71ec0de_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_args_str_plain_key_tuple", mod_consts.const_tuple_str_plain_self_str_plain_args_str_plain_key_tuple);
assert(mod_consts_hash[249] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_args_str_plain_key_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_args_str_plain_key_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_resolved_tuple", mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_resolved_tuple);
assert(mod_consts_hash[250] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_resolved_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_resolved_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_7c5932b999f10b0b8b03370404e065ec_tuple", mod_consts.const_tuple_7c5932b999f10b0b8b03370404e065ec_tuple);
assert(mod_consts_hash[251] == DEEP_HASH(tstate, mod_consts.const_tuple_7c5932b999f10b0b8b03370404e065ec_tuple) && "mod_consts.const_tuple_7c5932b999f10b0b8b03370404e065ec_tuple");
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
static PyObject *module_var_accessor_pynput$keyboard$_base$AbstractListener(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard$_base->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard$_base->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_AbstractListener);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard$_base->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_AbstractListener);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_AbstractListener);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AbstractListener);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$_base$Key(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard$_base->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard$_base->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_Key);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard$_base->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_Key);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_Key);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Key);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$_base$KeyCode(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard$_base->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard$_base->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_KeyCode);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard$_base->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_KeyCode);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_KeyCode);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_KeyCode);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$_base$Listener(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard$_base->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard$_base->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard$_base->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$_base$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard$_base->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard$_base->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard$_base->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$_base$_logger(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard$_base->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard$_base->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain__logger);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard$_base->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__logger);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__logger, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__logger);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__logger, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain__logger);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain__logger);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__logger);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$_base$contextlib(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard$_base->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard$_base->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard$_base->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$_base$enum(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard$_base->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard$_base->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_enum);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard$_base->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_enum);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_enum);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_enum);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$_base$prefix(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard$_base->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard$_base->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_prefix);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard$_base->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_prefix);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_prefix, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_prefix);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_prefix, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_prefix);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_prefix);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_prefix);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$_base$six(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard$_base->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard$_base->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_six);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard$_base->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_six);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_six);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_six);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$_base$threading(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard$_base->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard$_base->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard$_base->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
    }

    return result;
}

static PyObject *module_var_accessor_pynput$keyboard$_base$unicodedata(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pynput$keyboard$_base->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pynput$keyboard$_base->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_unicodedata);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pynput$keyboard$_base->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_unicodedata);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_unicodedata, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_unicodedata);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_unicodedata, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_unicodedata);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_unicodedata);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_unicodedata);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_2d5336fcc8445846fc378348355355cb;
static PyCodeObject *code_objects_49bbcd316069b0637810e8c84fae03be;
static PyCodeObject *code_objects_08c1f854af1bf42a87eef830033d5e2b;
static PyCodeObject *code_objects_7bbeffcca071b86d478b232afa35daa2;
static PyCodeObject *code_objects_6faf2e2a2df09bf602f08554e735a9d6;
static PyCodeObject *code_objects_45744ecff63b6a4f3ab6f190c89a1c9b;
static PyCodeObject *code_objects_27a86cbefe381a9442eebd09c1c78ab9;
static PyCodeObject *code_objects_695be71fb1d8a3e8f335f8da35c4ca9a;
static PyCodeObject *code_objects_680955316a129f6233f3f1b0e6673b31;
static PyCodeObject *code_objects_77b4251d3eddd035311566610978c24e;
static PyCodeObject *code_objects_1284d76c3d46af0ed7a6d5122fa346d8;
static PyCodeObject *code_objects_46e1da89c974af8917e92e8076324d34;
static PyCodeObject *code_objects_5b1f0458ba8eb95ee47d151443b6625c;
static PyCodeObject *code_objects_3e93b89ecb4a6adb4cca62f59c32131c;
static PyCodeObject *code_objects_783b8696b722508bf39a28833d0183a1;
static PyCodeObject *code_objects_00e6d5492578cbebcddfa68246a2914c;
static PyCodeObject *code_objects_3ec2c891b97bd04a277ba04ebf853cb6;
static PyCodeObject *code_objects_bbb7c228841b2ecf437f301de333af9a;
static PyCodeObject *code_objects_e1e524cee66482896185c9e8b60012c0;
static PyCodeObject *code_objects_8b8ed972ed7120bdd26f059e72138c1a;
static PyCodeObject *code_objects_23a5f8271f2c60c2133eb1c3da3b13fb;
static PyCodeObject *code_objects_20d6b6e858f1bbce7207320377452abe;
static PyCodeObject *code_objects_eb80d8221a0eb8273d8f2d1892e97369;
static PyCodeObject *code_objects_6d731dd7bee0e6a5ee797df793ab5781;
static PyCodeObject *code_objects_7343a8d002c39b36df98480ce88869f5;
static PyCodeObject *code_objects_12642493d8875b3a12bab55fe364c8ec;
static PyCodeObject *code_objects_722c54987a3acde1e1982372c8aab89a;
static PyCodeObject *code_objects_eb1ff990ec0725518c6c78a0ebf00264;
static PyCodeObject *code_objects_b3c5c8a466f25b32503a1a272a2705e1;
static PyCodeObject *code_objects_4d64d12aeb27aff10d585f221e64f7dc;
static PyCodeObject *code_objects_45b38bb0f17e4c46216bf515841bb085;
static PyCodeObject *code_objects_65f3a7ddae70457892607938a4b91552;
static PyCodeObject *code_objects_d1569303188a3e44397b139c2e1cb508;
static PyCodeObject *code_objects_9f3833606e00dd44cd3ec63905ee886a;
static PyCodeObject *code_objects_e256aacdcf5df3d6985f444687d7f581;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_beb15ee8b27c65a02fe685f71368a3a1); CHECK_OBJECT(module_filename_obj);
code_objects_2d5336fcc8445846fc378348355355cb = MAKE_CODE_OBJECT(module_filename_obj, 581, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_dedd3afef694a9bbd9f6a8f92417d2fa, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_k_tuple, NULL, 1, 0, 0);
code_objects_49bbcd316069b0637810e8c84fae03be = MAKE_CODE_OBJECT(module_filename_obj, 523, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_b162aace11bc6f3e47e689774886e22d, mod_consts.const_tuple_d6d853009248cbc49008f3c6e5c8bd8a_tuple, NULL, 1, 0, 0);
code_objects_08c1f854af1bf42a87eef830033d5e2b = MAKE_CODE_OBJECT(module_filename_obj, 87, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_7c942789fdb7952816d14acc47044e1c, mod_consts.const_tuple_7cdbba4988a35653a3ca9e7eb3aefe63_tuple, NULL, 1, 0, 0);
code_objects_7bbeffcca071b86d478b232afa35daa2 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_72ca23c2f9fe53917b15a7e3bfa4261d, mod_consts.const_str_digest_72ca23c2f9fe53917b15a7e3bfa4261d, NULL, NULL, 0, 0, 0);
code_objects_6faf2e2a2df09bf602f08554e735a9d6 = MAKE_CODE_OBJECT(module_filename_obj, 320, 0, mod_consts.const_str_plain_Controller, mod_consts.const_str_plain_Controller, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_45744ecff63b6a4f3ab6f190c89a1c9b = MAKE_CODE_OBJECT(module_filename_obj, 162, 0, mod_consts.const_str_plain_Key, mod_consts.const_str_plain_Key, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_27a86cbefe381a9442eebd09c1c78ab9 = MAKE_CODE_OBJECT(module_filename_obj, 38, 0, mod_consts.const_str_plain_KeyCode, mod_consts.const_str_plain_KeyCode, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_695be71fb1d8a3e8f335f8da35c4ca9a = MAKE_CODE_OBJECT(module_filename_obj, 644, 0, mod_consts.const_str_plain_Listener, mod_consts.const_str_plain_Listener, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_680955316a129f6233f3f1b0e6673b31 = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___eq__, mod_consts.const_str_digest_19056f6749f39c06071a6dd90d630f38, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_77b4251d3eddd035311566610978c24e = MAKE_CODE_OBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___hash__, mod_consts.const_str_digest_214b436c27d90ac99d3294a5f7b1fc8e, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_1284d76c3d46af0ed7a6d5122fa346d8 = MAKE_CODE_OBJECT(module_filename_obj, 348, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_b927199d85c7cd7a86dce88997eeb880, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_46e1da89c974af8917e92e8076324d34 = MAKE_CODE_OBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, const_str_plain___init__, mod_consts.const_str_digest_5b96c739e714ad7ce446e8f89a7125f4, mod_consts.const_tuple_53417d5589a249b8093571daabb15480_tuple, NULL, 4, 0, 0);
code_objects_5b1f0458ba8eb95ee47d151443b6625c = MAKE_CODE_OBJECT(module_filename_obj, 722, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, const_str_plain___init__, mod_consts.const_str_digest_8e366a1ab068a492ddad2c2681ebc3cc, mod_consts.const_tuple_a27069ec99b0a2f63d3118fe2585bb7d_tuple, NULL, 4, 0, 0);
code_objects_3e93b89ecb4a6adb4cca62f59c32131c = MAKE_CODE_OBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_4990e54b6d9d2f293acf1c6ba0630d20, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_783b8696b722508bf39a28833d0183a1 = MAKE_CODE_OBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___str__, mod_consts.const_str_digest_ea307985ee68d878d543c5fcbebb08f8, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_00e6d5492578cbebcddfa68246a2914c = MAKE_CODE_OBJECT(module_filename_obj, 615, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__as_modifier, mod_consts.const_str_digest_dd6b2f333bf54db48d767dcaf29e4e11, mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain__NORMAL_MODIFIERS_tuple, NULL, 2, 0, 0);
code_objects_3ec2c891b97bd04a277ba04ebf853cb6 = MAKE_CODE_OBJECT(module_filename_obj, 630, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__handle, mod_consts.const_str_digest_d2e5724cf7b5fadd38e435af2aefd902, mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_is_press_tuple, NULL, 3, 0, 0);
code_objects_bbb7c228841b2ecf437f301de333af9a = MAKE_CODE_OBJECT(module_filename_obj, 570, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__resolve, mod_consts.const_str_digest_18c025eec62fdadb628360c312bb5efd, mod_consts.const_tuple_str_plain_self_str_plain_key_tuple, NULL, 2, 0, 0);
code_objects_e1e524cee66482896185c9e8b60012c0 = MAKE_CODE_OBJECT(module_filename_obj, 597, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__update_modifiers, mod_consts.const_str_digest_934ffbc715f089b2d637e813cd7b8a9e, mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_is_press_tuple, NULL, 3, 0, 0);
code_objects_8b8ed972ed7120bdd26f059e72138c1a = MAKE_CODE_OBJECT(module_filename_obj, 538, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_alt_gr_pressed, mod_consts.const_str_digest_96c669989794fc4c7dc951847f3aeba1, mod_consts.const_tuple_str_plain_self_str_plain_modifiers_tuple, NULL, 1, 0, 0);
code_objects_23a5f8271f2c60c2133eb1c3da3b13fb = MAKE_CODE_OBJECT(module_filename_obj, 528, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_alt_pressed, mod_consts.const_str_digest_a1d752b8925dc206ef93154d07a4136a, mod_consts.const_tuple_str_plain_self_str_plain_modifiers_tuple, NULL, 1, 0, 0);
code_objects_20d6b6e858f1bbce7207320377452abe = MAKE_CODE_OBJECT(module_filename_obj, 740, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_canonical, mod_consts.const_str_digest_59de3149ee5e955c4900936673b5a8c3, mod_consts.const_tuple_777dde957bdef1caabf641f2a848b80a_tuple, NULL, 2, 0, 0);
code_objects_eb80d8221a0eb8273d8f2d1892e97369 = MAKE_CODE_OBJECT(module_filename_obj, 548, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_ctrl_pressed, mod_consts.const_str_digest_33c989cadf517202a443ea2ad90911c3, mod_consts.const_tuple_str_plain_self_str_plain_modifiers_tuple, NULL, 1, 0, 0);
code_objects_6d731dd7bee0e6a5ee797df793ab5781 = MAKE_CODE_OBJECT(module_filename_obj, 140, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_from_char, mod_consts.const_str_digest_b4241f7130092b60ff602941137f7702, mod_consts.const_tuple_str_plain_cls_str_plain_char_str_plain_kwargs_tuple, NULL, 2, 0, 0);
code_objects_7343a8d002c39b36df98480ce88869f5 = MAKE_CODE_OBJECT(module_filename_obj, 150, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_from_dead, mod_consts.const_str_digest_12f83a24556f36989c9d41a30e36331d, mod_consts.const_tuple_str_plain_cls_str_plain_char_str_plain_kwargs_tuple, NULL, 2, 0, 0);
code_objects_12642493d8875b3a12bab55fe364c8ec = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_from_vk, mod_consts.const_str_digest_cc5e6419872a0d9594b7fc0de36e47bb, mod_consts.const_tuple_str_plain_cls_str_plain_vk_str_plain_kwargs_tuple, NULL, 2, 0, 0);
code_objects_722c54987a3acde1e1982372c8aab89a = MAKE_CODE_OBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_join, mod_consts.const_str_digest_b622b1fd9b26c6abd752385387f10fe5, mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_combined_tuple, NULL, 2, 0, 0);
code_objects_eb1ff990ec0725518c6c78a0ebf00264 = MAKE_CODE_OBJECT(module_filename_obj, 503, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_modifiers, mod_consts.const_str_digest_0f69ada8c0fd8406fc679dca9d5b7efb, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_b3c5c8a466f25b32503a1a272a2705e1 = MAKE_CODE_OBJECT(module_filename_obj, 355, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_press, mod_consts.const_str_digest_6a3d06875a0ae874cc49505612b8c38a, mod_consts.const_tuple_a044ea7684c8aa5e5abc51edf71ec0de_tuple, NULL, 2, 0, 0);
code_objects_4d64d12aeb27aff10d585f221e64f7dc = MAKE_CODE_OBJECT(module_filename_obj, 465, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS, mod_consts.const_str_plain_pressed, mod_consts.const_str_digest_7a654b074c875cd7fa4e884a9ee3305d, mod_consts.const_tuple_str_plain_self_str_plain_args_str_plain_key_tuple, NULL, 1, 0, 0);
code_objects_45b38bb0f17e4c46216bf515841bb085 = MAKE_CODE_OBJECT(module_filename_obj, 404, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_release, mod_consts.const_str_digest_0614c73af5837b862271dc29da9f4ae2, mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_resolved_tuple, NULL, 2, 0, 0);
code_objects_65f3a7ddae70457892607938a4b91552 = MAKE_CODE_OBJECT(module_filename_obj, 558, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_shift_pressed, mod_consts.const_str_digest_07e820da1d45207ad830389e59de8fc1, mod_consts.const_tuple_str_plain_self_str_plain_modifiers_tuple, NULL, 1, 0, 0);
code_objects_d1569303188a3e44397b139c2e1cb508 = MAKE_CODE_OBJECT(module_filename_obj, 432, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_tap, mod_consts.const_str_digest_e908f0b6b690801b1f88ea5b8dcd8a9a, mod_consts.const_tuple_str_plain_self_str_plain_key_tuple, NULL, 2, 0, 0);
code_objects_9f3833606e00dd44cd3ec63905ee886a = MAKE_CODE_OBJECT(module_filename_obj, 449, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_touch, mod_consts.const_str_digest_1a77c8df5a5cb2c0fbe808cc0ced8231, mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_is_press_tuple, NULL, 3, 0, 0);
code_objects_e256aacdcf5df3d6985f444687d7f581 = MAKE_CODE_OBJECT(module_filename_obj, 479, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_type, mod_consts.const_str_digest_292adef0d5bb49269aff45e42b5df1f9, mod_consts.const_tuple_7c5932b999f10b0b8b03370404e065ec_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_pynput$keyboard$_base$$$function__4___eq__$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_pynput$keyboard$_base$$$function__15_pressed$$$genobj__1_pressed(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_pynput$keyboard$_base$$$function__17_modifiers$$$genobj__1_modifiers(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_pynput$keyboard$_base$$$function__17_modifiers$$$genobj__1_modifiers$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_pynput$keyboard$_base$$$function__22__resolve$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__10___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__11_press(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__12_release(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__13_tap(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__14_touch(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__15_pressed(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__16_type(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__17_modifiers(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__18_alt_pressed(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__19_alt_gr_pressed(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__1___init__(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__20_ctrl_pressed(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__21_shift_pressed(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__22__resolve(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__23__update_modifiers(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__24__as_modifier(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__25__handle(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__26___init__(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__27_canonical(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__2___repr__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__3___str__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__4___eq__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__5___hash__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__6_join(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__7_from_vk(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__8_from_char(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__9_from_dead(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_pynput$keyboard$_base$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_vk = python_pars[1];
PyObject *par_char = python_pars[2];
PyObject *par_is_dead = python_pars[3];
PyObject *par_kwargs = python_pars[4];
PyObject *var_key = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_base$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$_base$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$_base$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$_base$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$_base$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$_base$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_46e1da89c974af8917e92e8076324d34, module_pynput$keyboard$_base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$_base$$$function__1___init__->m_type_description == NULL);
frame_frame_pynput$keyboard$_base$$$function__1___init__ = cache_frame_frame_pynput$keyboard$_base$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_base$$$function__1___init__);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_base$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(par_vk);
tmp_ass_attr_value_1 = par_vk;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_vk, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_ass_attr_target_2;
CHECK_OBJECT(par_char);
tmp_cmp_expr_left_1 = par_char;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_called_instance_1 = module_var_accessor_pynput$keyboard$_base$six(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_six);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_char);
tmp_args_element_value_1 = par_char;
frame_frame_pynput$keyboard$_base$$$function__1___init__->m_frame.f_lineno = 49;
tmp_ass_attr_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_text_type, tmp_args_element_value_1);
if (tmp_ass_attr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_ass_attr_value_2 = Py_None;
Py_INCREF(tmp_ass_attr_value_2);
condexpr_end_1:;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain_char, tmp_ass_attr_value_2);
CHECK_OBJECT(tmp_ass_attr_value_2);
Py_DECREF(tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_ass_attr_target_3;
CHECK_OBJECT(par_is_dead);
tmp_ass_attr_value_3 = par_is_dead;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain_is_dead, tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_is_dead);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 52;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
// Tried code:
{
PyObject *tmp_ass_attr_value_4;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_ass_attr_target_4;
tmp_expression_value_2 = module_var_accessor_pynput$keyboard$_base$unicodedata(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unicodedata);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_lookup);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_add_expr_left_1 = mod_consts.const_str_digest_664c92baca1dab8f8d502053c77bc434;
tmp_expression_value_3 = module_var_accessor_pynput$keyboard$_base$unicodedata(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unicodedata);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 55;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_name);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 55;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_char);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 55;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
frame_frame_pynput$keyboard$_base$$$function__1___init__->m_frame.f_lineno = 55;
tmp_add_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 55;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 55;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
frame_frame_pynput$keyboard$_base$$$function__1___init__->m_frame.f_lineno = 54;
tmp_ass_attr_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_ass_attr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_4, mod_consts.const_str_plain_combining, tmp_ass_attr_value_4);
CHECK_OBJECT(tmp_ass_attr_value_4);
Py_DECREF(tmp_ass_attr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "oooooo";
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

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$function__1___init__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$function__1___init__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_KeyError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(tmp_res == -1));
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_ass_attr_value_5;
PyObject *tmp_ass_attr_target_5;
tmp_ass_attr_value_5 = Py_False;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_5, mod_consts.const_str_plain_is_dead, tmp_ass_attr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
}
{
PyObject *tmp_ass_attr_value_6;
PyObject *tmp_ass_attr_target_6;
tmp_ass_attr_value_6 = Py_None;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_6, mod_consts.const_str_plain_combining, tmp_ass_attr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 53;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pynput$keyboard$_base$$$function__1___init__->m_frame)) {
        frame_frame_pynput$keyboard$_base$$$function__1___init__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooo";
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
nuitka_bool tmp_condition_result_4;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_is_dead);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 60;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_combining);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_4 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_4 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
CHECK_OBJECT(par_char);
tmp_make_exception_arg_1 = par_char;
frame_frame_pynput$keyboard$_base$$$function__1___init__->m_frame.f_lineno = 61;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_KeyError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 61;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_ass_attr_value_7;
PyObject *tmp_ass_attr_target_7;
tmp_ass_attr_value_7 = Py_None;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_7, mod_consts.const_str_plain_combining, tmp_ass_attr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
branch_end_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__PLATFORM_EXTENSIONS);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oooooo";
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
type_description_1 = "oooooo";
exception_lineno = 65;
        goto try_except_handler_4;
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
    PyObject *old = var_key;
    var_key = tmp_assign_source_3;
    Py_INCREF(var_key);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_8;
PyObject *tmp_name_value_1;
PyObject *tmp_value_value_1;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
PyObject *tmp_default_value_1;
PyObject *tmp_capi_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
CHECK_OBJECT(var_key);
tmp_name_value_1 = var_key;
if (par_kwargs == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kwargs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 66;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}

tmp_dict_arg_value_1 = par_kwargs;
CHECK_OBJECT(var_key);
tmp_key_value_1 = var_key;
tmp_default_value_1 = Py_None;
tmp_value_value_1 = DICT_POP3(tstate, tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
tmp_capi_result_1 = BUILTIN_SETATTR(tmp_expression_value_8, tmp_name_value_1, tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
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
{
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_3;
if (par_kwargs == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kwargs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 67;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_3 = CHECK_IF_TRUE(par_kwargs);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
if (par_kwargs == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kwargs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 68;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_make_exception_arg_2 = par_kwargs;
frame_frame_pynput$keyboard$_base$$$function__1___init__->m_frame.f_lineno = 68;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 68;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto frame_exception_exit_1;
}
branch_no_4:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_base$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_base$$$function__1___init__,
    type_description_1,
    par_self,
    par_vk,
    par_char,
    par_is_dead,
    par_kwargs,
    var_key
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$_base$$$function__1___init__ == cache_frame_frame_pynput$keyboard$_base$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$_base$$$function__1___init__);
    cache_frame_frame_pynput$keyboard$_base$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$_base$$$function__1___init__);

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
Py_XDECREF(var_key);
var_key = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_key);
var_key = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_vk);
Py_DECREF(par_vk);
CHECK_OBJECT(par_char);
Py_DECREF(par_char);
CHECK_OBJECT(par_is_dead);
Py_DECREF(par_is_dead);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_vk);
Py_DECREF(par_vk);
CHECK_OBJECT(par_char);
Py_DECREF(par_char);
CHECK_OBJECT(par_is_dead);
Py_DECREF(par_is_dead);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$keyboard$_base$$$function__2___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_base$$$function__2___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$_base$$$function__2___repr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$_base$$$function__2___repr__)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$_base$$$function__2___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$_base$$$function__2___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$_base$$$function__2___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_3e93b89ecb4a6adb4cca62f59c32131c, module_pynput$keyboard$_base, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$_base$$$function__2___repr__->m_type_description == NULL);
frame_frame_pynput$keyboard$_base$$$function__2___repr__ = cache_frame_frame_pynput$keyboard$_base$$$function__2___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_base$$$function__2___repr__);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_base$$$function__2___repr__) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_is_dead);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 71;
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
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_2;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_0674107b2d3e86aecfffb00b3395ae4a;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_char);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_mod_expr_right_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_mod_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_char);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_char);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_expression_value_5;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_d5bb7ae0d709503fba26a489623672b9;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_mod_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_vk);
if (tmp_mod_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_end_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$function__2___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_base$$$function__2___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$function__2___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_base$$$function__2___repr__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$_base$$$function__2___repr__ == cache_frame_frame_pynput$keyboard$_base$$$function__2___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$_base$$$function__2___repr__);
    cache_frame_frame_pynput$keyboard$_base$$$function__2___repr__ = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$_base$$$function__2___repr__);

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


static PyObject *impl_pynput$keyboard$_base$$$function__3___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_base$$$function__3___str__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$_base$$$function__3___str__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$_base$$$function__3___str__)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$_base$$$function__3___str__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$_base$$$function__3___str__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$_base$$$function__3___str__ = MAKE_FUNCTION_FRAME(tstate, code_objects_783b8696b722508bf39a28833d0183a1, module_pynput$keyboard$_base, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$_base$$$function__3___str__->m_type_description == NULL);
frame_frame_pynput$keyboard$_base$$$function__3___str__ = cache_frame_frame_pynput$keyboard$_base$$$function__3___str__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_base$$$function__3___str__);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_base$$$function__3___str__) == 2);

// Framed code:
{
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_self);
tmp_operand_value_1 = par_self;
tmp_return_value = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$function__3___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_base$$$function__3___str__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$function__3___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_base$$$function__3___str__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$_base$$$function__3___str__ == cache_frame_frame_pynput$keyboard$_base$$$function__3___str__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$_base$$$function__3___str__);
    cache_frame_frame_pynput$keyboard$_base$$$function__3___str__ = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$_base$$$function__3___str__);

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


static PyObject *impl_pynput$keyboard$_base$$$function__4___eq__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_other = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_genexpr_1__$0 = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_base$$$function__4___eq__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$_base$$$function__4___eq__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$_base$$$function__4___eq__)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$_base$$$function__4___eq__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$_base$$$function__4___eq__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$_base$$$function__4___eq__ = MAKE_FUNCTION_FRAME(tstate, code_objects_680955316a129f6233f3f1b0e6673b31, module_pynput$keyboard$_base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$_base$$$function__4___eq__->m_type_description == NULL);
frame_frame_pynput$keyboard$_base$$$function__4___eq__ = cache_frame_frame_pynput$keyboard$_base$$$function__4___eq__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_base$$$function__4___eq__);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_base$$$function__4___eq__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(Nuitka_Cell_GET(par_other));
tmp_isinstance_inst_1 = Nuitka_Cell_GET(par_other);
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_1 = Nuitka_Cell_GET(par_self);
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_1);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "cc";
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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
bool tmp_condition_result_2;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_2 = Nuitka_Cell_GET(par_self);
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_char);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(Nuitka_Cell_GET(par_other));
tmp_expression_value_3 = Nuitka_Cell_GET(par_other);
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_char);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_and_right_value_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
tmp_condition_result_2 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_2 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
int tmp_and_left_truth_2;
PyObject *tmp_and_left_value_2;
PyObject *tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_4 = Nuitka_Cell_GET(par_self);
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_char);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "cc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_other));
tmp_expression_value_5 = Nuitka_Cell_GET(par_other);
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_char);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 85;
type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_and_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_2);

exception_lineno = 85;
type_description_1 = "cc";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(tmp_and_left_value_2);
Py_DECREF(tmp_and_left_value_2);
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_6 = Nuitka_Cell_GET(par_self);
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_is_dead);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "cc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_other));
tmp_expression_value_7 = Nuitka_Cell_GET(par_other);
tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_is_dead);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_4);

exception_lineno = 85;
type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_and_right_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_return_value = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_return_value = tmp_and_left_value_2;
and_end_2:;
goto frame_return_exit_1;
}
goto branch_end_2;
branch_no_2:;
{
int tmp_and_left_truth_3;
PyObject *tmp_and_left_value_3;
PyObject *tmp_and_right_value_3;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_all_arg_1;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_8 = Nuitka_Cell_GET(par_self);
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_vk);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "cc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_other));
tmp_expression_value_9 = Nuitka_Cell_GET(par_other);
tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_vk);
if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_5);

exception_lineno = 87;
type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_and_left_value_3 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
CHECK_OBJECT(tmp_cmp_expr_right_5);
Py_DECREF(tmp_cmp_expr_right_5);
if (tmp_and_left_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_3 = CHECK_IF_TRUE(tmp_and_left_value_3);
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_3);

exception_lineno = 87;
type_description_1 = "cc";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(tmp_and_left_value_3);
Py_DECREF(tmp_and_left_value_3);
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_10 = Nuitka_Cell_GET(par_self);
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain__PLATFORM_EXTENSIONS);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "cc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_genexpr_1__$0;
    tmp_genexpr_1__$0 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_closure_1[1] = par_other;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_self;
Py_INCREF(tmp_closure_1[2]);
tmp_all_arg_1 = MAKE_GENERATOR_pynput$keyboard$_base$$$function__4___eq__$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_2;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_and_right_value_3 = BUILTIN_ALL(tstate, tmp_all_arg_1);
CHECK_OBJECT(tmp_all_arg_1);
Py_DECREF(tmp_all_arg_1);
if (tmp_and_right_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_return_value = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_return_value = tmp_and_left_value_3;
and_end_3:;
goto frame_return_exit_1;
}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$function__4___eq__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_base$$$function__4___eq__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$function__4___eq__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_base$$$function__4___eq__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$_base$$$function__4___eq__ == cache_frame_frame_pynput$keyboard$_base$$$function__4___eq__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$_base$$$function__4___eq__);
    cache_frame_frame_pynput$keyboard$_base$$$function__4___eq__ = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$_base$$$function__4___eq__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(par_other);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
par_other = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(par_other);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
par_other = NULL;
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



#if 1
struct pynput$keyboard$_base$$$function__4___eq__$$$genexpr__1_genexpr_locals {
PyObject *var_f;
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

static PyObject *pynput$keyboard$_base$$$function__4___eq__$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct pynput$keyboard$_base$$$function__4___eq__$$$genexpr__1_genexpr_locals *generator_heap = (struct pynput$keyboard$_base$$$function__4___eq__$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_f = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_08c1f854af1bf42a87eef830033d5e2b, module_pynput$keyboard$_base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
generator_heap->type_description_1 = "Nocc";
generator_heap->exception_lineno = 87;
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
    PyObject *old = generator_heap->var_f;
    generator_heap->var_f = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_f);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_name_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_name_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 88;
generator_heap->type_description_1 = "Nocc";
    goto try_except_handler_2;
}

tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[2]);
CHECK_OBJECT(generator_heap->var_f);
tmp_name_value_1 = generator_heap->var_f;
tmp_cmp_expr_left_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_2, tmp_name_value_1, NULL);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 88;
generator_heap->type_description_1 = "Nocc";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
Py_DECREF(tmp_cmp_expr_left_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_other);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 88;
generator_heap->type_description_1 = "Nocc";
    goto try_except_handler_2;
}

tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[1]);
CHECK_OBJECT(generator_heap->var_f);
tmp_name_value_2 = generator_heap->var_f;
tmp_cmp_expr_right_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_3, tmp_name_value_2, NULL);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

generator_heap->exception_lineno = 88;
generator_heap->type_description_1 = "Nocc";
    goto try_except_handler_2;
}
tmp_expression_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 88;
generator_heap->type_description_1 = "Nocc";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_name_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_name_value_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_name_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_name_value_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 88;
generator_heap->type_description_1 = "Nocc";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 87;
generator_heap->type_description_1 = "Nocc";
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
    generator_heap->var_f,
    generator->m_closure[2],
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

Py_XDECREF(generator_heap->var_f);
generator_heap->var_f = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_f);
generator_heap->var_f = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_pynput$keyboard$_base$$$function__4___eq__$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        pynput$keyboard$_base$$$function__4___eq__$$$genexpr__1_genexpr_context,
        module_pynput$keyboard$_base,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_7c942789fdb7952816d14acc47044e1c,
#endif
        code_objects_08c1f854af1bf42a87eef830033d5e2b,
        closure,
        3,
#if 1
        sizeof(struct pynput$keyboard$_base$$$function__4___eq__$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_pynput$keyboard$_base$$$function__5___hash__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_base$$$function__5___hash__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$_base$$$function__5___hash__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$_base$$$function__5___hash__)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$_base$$$function__5___hash__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$_base$$$function__5___hash__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$_base$$$function__5___hash__ = MAKE_FUNCTION_FRAME(tstate, code_objects_77b4251d3eddd035311566610978c24e, module_pynput$keyboard$_base, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$_base$$$function__5___hash__->m_type_description == NULL);
frame_frame_pynput$keyboard$_base$$$function__5___hash__ = cache_frame_frame_pynput$keyboard$_base$$$function__5___hash__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_base$$$function__5___hash__);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_base$$$function__5___hash__) == 2);

// Framed code:
{
PyObject *tmp_hash_arg_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_self);
tmp_operand_value_1 = par_self;
tmp_hash_arg_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
if (tmp_hash_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = BUILTIN_HASH(tstate, tmp_hash_arg_1);
CHECK_OBJECT(tmp_hash_arg_1);
Py_DECREF(tmp_hash_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$function__5___hash__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_base$$$function__5___hash__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$function__5___hash__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_base$$$function__5___hash__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$_base$$$function__5___hash__ == cache_frame_frame_pynput$keyboard$_base$$$function__5___hash__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$_base$$$function__5___hash__);
    cache_frame_frame_pynput$keyboard$_base$$$function__5___hash__ = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$_base$$$function__5___hash__);

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


static PyObject *impl_pynput$keyboard$_base$$$function__6_join(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_key = python_pars[1];
PyObject *var_combined = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_base$$$function__6_join;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$_base$$$function__6_join = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$_base$$$function__6_join)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$_base$$$function__6_join);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$_base$$$function__6_join == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$_base$$$function__6_join = MAKE_FUNCTION_FRAME(tstate, code_objects_722c54987a3acde1e1982372c8aab89a, module_pynput$keyboard$_base, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$_base$$$function__6_join->m_type_description == NULL);
frame_frame_pynput$keyboard$_base$$$function__6_join = cache_frame_frame_pynput$keyboard$_base$$$function__6_join;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_base$$$function__6_join);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_base$$$function__6_join) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_is_dead);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooo";
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
CHECK_OBJECT(par_self);
tmp_make_exception_arg_1 = par_self;
frame_frame_pynput$keyboard$_base$$$function__6_join->m_frame.f_lineno = 112;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 112;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_key);
tmp_expression_value_2 = par_key;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_char);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_space;
tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_self);
tmp_cmp_expr_left_2 = par_self;
CHECK_OBJECT(par_key);
tmp_cmp_expr_right_2 = par_key;
tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
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
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_from_char);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_char);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 117;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$keyboard$_base$$$function__6_join->m_frame.f_lineno = 117;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_key);
tmp_expression_value_5 = par_key;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_char);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
tmp_expression_value_6 = module_var_accessor_pynput$keyboard$_base$unicodedata(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unicodedata);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 121;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_normalize);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = mod_consts.const_str_plain_NFC;
CHECK_OBJECT(par_key);
tmp_expression_value_7 = par_key;
tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_char);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 121;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_combining);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 121;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 121;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$keyboard$_base$$$function__6_join->m_frame.f_lineno = 121;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_combined;
    var_combined = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_1;
CHECK_OBJECT(var_combined);
tmp_truth_name_1 = CHECK_IF_TRUE(var_combined);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(var_combined);
tmp_args_element_value_4 = var_combined;
frame_frame_pynput$keyboard$_base$$$function__6_join->m_frame.f_lineno = 123;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_from_char, tmp_args_element_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_4:;
branch_no_3:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
CHECK_OBJECT(par_key);
tmp_make_exception_arg_2 = par_key;
frame_frame_pynput$keyboard$_base$$$function__6_join->m_frame.f_lineno = 125;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 125;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$function__6_join, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_base$$$function__6_join->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$function__6_join, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_base$$$function__6_join,
    type_description_1,
    par_self,
    par_key,
    var_combined
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$_base$$$function__6_join == cache_frame_frame_pynput$keyboard$_base$$$function__6_join) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$_base$$$function__6_join);
    cache_frame_frame_pynput$keyboard$_base$$$function__6_join = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$_base$$$function__6_join);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_combined);
var_combined = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_combined);
var_combined = NULL;
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


static PyObject *impl_pynput$keyboard$_base$$$function__7_from_vk(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_vk = python_pars[1];
PyObject *par_kwargs = python_pars[2];
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_base$$$function__7_from_vk;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$_base$$$function__7_from_vk = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$_base$$$function__7_from_vk)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$_base$$$function__7_from_vk);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$_base$$$function__7_from_vk == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$_base$$$function__7_from_vk = MAKE_FUNCTION_FRAME(tstate, code_objects_12642493d8875b3a12bab55fe364c8ec, module_pynput$keyboard$_base, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$_base$$$function__7_from_vk->m_type_description == NULL);
frame_frame_pynput$keyboard$_base$$$function__7_from_vk = cache_frame_frame_pynput$keyboard$_base$$$function__7_from_vk;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_base$$$function__7_from_vk);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_base$$$function__7_from_vk) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_direct_call_arg3_1;
CHECK_OBJECT(par_cls);
tmp_direct_call_arg1_1 = par_cls;
tmp_dict_key_1 = mod_consts.const_str_plain_vk;
CHECK_OBJECT(par_vk);
tmp_dict_value_1 = par_vk;
tmp_direct_call_arg2_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg3_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$function__7_from_vk, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_base$$$function__7_from_vk->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$function__7_from_vk, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_base$$$function__7_from_vk,
    type_description_1,
    par_cls,
    par_vk,
    par_kwargs
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$_base$$$function__7_from_vk == cache_frame_frame_pynput$keyboard$_base$$$function__7_from_vk) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$_base$$$function__7_from_vk);
    cache_frame_frame_pynput$keyboard$_base$$$function__7_from_vk = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$_base$$$function__7_from_vk);

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


static PyObject *impl_pynput$keyboard$_base$$$function__8_from_char(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_char = python_pars[1];
PyObject *par_kwargs = python_pars[2];
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_base$$$function__8_from_char;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$_base$$$function__8_from_char = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$_base$$$function__8_from_char)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$_base$$$function__8_from_char);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$_base$$$function__8_from_char == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$_base$$$function__8_from_char = MAKE_FUNCTION_FRAME(tstate, code_objects_6d731dd7bee0e6a5ee797df793ab5781, module_pynput$keyboard$_base, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$_base$$$function__8_from_char->m_type_description == NULL);
frame_frame_pynput$keyboard$_base$$$function__8_from_char = cache_frame_frame_pynput$keyboard$_base$$$function__8_from_char;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_base$$$function__8_from_char);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_base$$$function__8_from_char) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_direct_call_arg3_1;
CHECK_OBJECT(par_cls);
tmp_direct_call_arg1_1 = par_cls;
tmp_dict_key_1 = mod_consts.const_str_plain_char;
CHECK_OBJECT(par_char);
tmp_dict_value_1 = par_char;
tmp_direct_call_arg2_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg3_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$function__8_from_char, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_base$$$function__8_from_char->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$function__8_from_char, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_base$$$function__8_from_char,
    type_description_1,
    par_cls,
    par_char,
    par_kwargs
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$_base$$$function__8_from_char == cache_frame_frame_pynput$keyboard$_base$$$function__8_from_char) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$_base$$$function__8_from_char);
    cache_frame_frame_pynput$keyboard$_base$$$function__8_from_char = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$_base$$$function__8_from_char);

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
CHECK_OBJECT(par_char);
Py_DECREF(par_char);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_char);
Py_DECREF(par_char);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$keyboard$_base$$$function__9_from_dead(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_char = python_pars[1];
PyObject *par_kwargs = python_pars[2];
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_base$$$function__9_from_dead;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$_base$$$function__9_from_dead = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$_base$$$function__9_from_dead)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$_base$$$function__9_from_dead);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$_base$$$function__9_from_dead == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$_base$$$function__9_from_dead = MAKE_FUNCTION_FRAME(tstate, code_objects_7343a8d002c39b36df98480ce88869f5, module_pynput$keyboard$_base, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$_base$$$function__9_from_dead->m_type_description == NULL);
frame_frame_pynput$keyboard$_base$$$function__9_from_dead = cache_frame_frame_pynput$keyboard$_base$$$function__9_from_dead;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_base$$$function__9_from_dead);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_base$$$function__9_from_dead) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_direct_call_arg3_1;
CHECK_OBJECT(par_cls);
tmp_direct_call_arg1_1 = par_cls;
tmp_dict_key_1 = mod_consts.const_str_plain_char;
CHECK_OBJECT(par_char);
tmp_dict_value_1 = par_char;
tmp_direct_call_arg2_1 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_is_dead;
tmp_dict_value_1 = Py_True;
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg3_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$function__9_from_dead, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_base$$$function__9_from_dead->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$function__9_from_dead, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_base$$$function__9_from_dead,
    type_description_1,
    par_cls,
    par_char,
    par_kwargs
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$_base$$$function__9_from_dead == cache_frame_frame_pynput$keyboard$_base$$$function__9_from_dead) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$_base$$$function__9_from_dead);
    cache_frame_frame_pynput$keyboard$_base$$$function__9_from_dead = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$_base$$$function__9_from_dead);

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
CHECK_OBJECT(par_char);
Py_DECREF(par_char);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_char);
Py_DECREF(par_char);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$keyboard$_base$$$function__10___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_base$$$function__10___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$_base$$$function__10___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$_base$$$function__10___init__)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$_base$$$function__10___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$_base$$$function__10___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$_base$$$function__10___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_1284d76c3d46af0ed7a6d5122fa346d8, module_pynput$keyboard$_base, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$_base$$$function__10___init__->m_type_description == NULL);
frame_frame_pynput$keyboard$_base$$$function__10___init__ = cache_frame_frame_pynput$keyboard$_base$$$function__10___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_base$$$function__10___init__);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_base$$$function__10___init__) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_called_value_1 = module_var_accessor_pynput$keyboard$_base$_logger(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__logger);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 349;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pynput$keyboard$_base$$$function__10___init__->m_frame.f_lineno = 349;
tmp_ass_attr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_ass_attr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__log, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_value_1);
Py_DECREF(tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_ass_attr_target_2;
tmp_called_instance_1 = module_var_accessor_pynput$keyboard$_base$threading(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_threading);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 350;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pynput$keyboard$_base$$$function__10___init__->m_frame.f_lineno = 350;
tmp_ass_attr_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_RLock);
if (tmp_ass_attr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain__modifiers_lock, tmp_ass_attr_value_2);
CHECK_OBJECT(tmp_ass_attr_value_2);
Py_DECREF(tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_ass_attr_target_3;
tmp_ass_attr_value_3 = PySet_New(NULL);
CHECK_OBJECT(par_self);
tmp_ass_attr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain__modifiers, tmp_ass_attr_value_3);
CHECK_OBJECT(tmp_ass_attr_value_3);
Py_DECREF(tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_4;
PyObject *tmp_ass_attr_target_4;
tmp_ass_attr_value_4 = Py_False;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_4, mod_consts.const_str_plain__caps_lock, tmp_ass_attr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_5;
PyObject *tmp_ass_attr_target_5;
tmp_ass_attr_value_5 = Py_None;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_5, mod_consts.const_str_plain__dead_key, tmp_ass_attr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$function__10___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_base$$$function__10___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$function__10___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_base$$$function__10___init__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$_base$$$function__10___init__ == cache_frame_frame_pynput$keyboard$_base$$$function__10___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$_base$$$function__10___init__);
    cache_frame_frame_pynput$keyboard$_base$$$function__10___init__ = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$_base$$$function__10___init__);

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


static PyObject *impl_pynput$keyboard$_base$$$function__11_press(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_key = python_pars[1];
PyObject *var_resolved = NULL;
PyObject *var_original = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_base$$$function__11_press;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$_base$$$function__11_press = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$_base$$$function__11_press)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$_base$$$function__11_press);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$_base$$$function__11_press == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$_base$$$function__11_press = MAKE_FUNCTION_FRAME(tstate, code_objects_b3c5c8a466f25b32503a1a272a2705e1, module_pynput$keyboard$_base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$_base$$$function__11_press->m_type_description == NULL);
frame_frame_pynput$keyboard$_base$$$function__11_press = cache_frame_frame_pynput$keyboard$_base$$$function__11_press;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_base$$$function__11_press);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_base$$$function__11_press) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_key);
tmp_args_element_value_1 = par_key;
frame_frame_pynput$keyboard$_base$$$function__11_press->m_frame.f_lineno = 371;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__resolve, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_resolved;
    var_resolved = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_resolved);
tmp_cmp_expr_left_1 = var_resolved;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(par_key);
tmp_args_element_value_2 = par_key;
frame_frame_pynput$keyboard$_base$$$function__11_press->m_frame.f_lineno = 373;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_InvalidKeyException, tmp_args_element_value_2);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 373;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 373;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 373;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_self);
tmp_called_instance_3 = par_self;
CHECK_OBJECT(var_resolved);
tmp_args_element_value_3 = var_resolved;
tmp_args_element_value_4 = Py_True;
frame_frame_pynput$keyboard$_base$$$function__11_press->m_frame.f_lineno = 374;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain__update_modifiers,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_resolved);
tmp_cmp_expr_left_2 = var_resolved;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__Key);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_caps_lock);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_value);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
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
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__caps_lock);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_ass_attr_value_1 = (tmp_res == 0) ? Py_True : Py_False;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__caps_lock, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
branch_no_2:;
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(var_resolved);
tmp_assign_source_2 = var_resolved;
{
    PyObject *old = var_original;
    var_original = tmp_assign_source_2;
    Py_INCREF(var_original);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__dead_key);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 382;
type_description_1 = "oooo";
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
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__dead_key);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 384;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_join);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 384;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_resolved);
tmp_args_element_value_5 = var_resolved;
frame_frame_pynput$keyboard$_base$$$function__11_press->m_frame.f_lineno = 384;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 384;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_resolved;
    assert(old != NULL);
    var_resolved = tmp_assign_source_3;
    Py_DECREF(old);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$function__11_press, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$function__11_press, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = PyExc_ValueError;
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
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_7;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__handle);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 386;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__dead_key);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 386;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_args_element_value_7 = Py_True;
frame_frame_pynput$keyboard$_base$$$function__11_press->m_frame.f_lineno = 386;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 386;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_9;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain__handle);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain__dead_key);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 387;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_args_element_value_9 = Py_False;
frame_frame_pynput$keyboard$_base$$$function__11_press->m_frame.f_lineno = 387;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
goto branch_end_4;
branch_no_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 383;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pynput$keyboard$_base$$$function__11_press->m_frame)) {
        frame_frame_pynput$keyboard$_base$$$function__11_press->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_3;
branch_end_4:;
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
branch_no_3:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_expression_value_12;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
if (var_resolved == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_resolved);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 390;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_12 = var_resolved;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_is_dead);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 390;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_ass_attr_target_2;
if (var_resolved == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_resolved);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 391;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_ass_attr_value_2 = var_resolved;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain__dead_key, tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_5:;
// Tried code:
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_13;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
CHECK_OBJECT(par_self);
tmp_expression_value_13 = par_self;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain__handle);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 395;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
if (var_resolved == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_resolved);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 395;
type_description_1 = "oooo";
    goto try_except_handler_4;
}

tmp_args_element_value_10 = var_resolved;
tmp_args_element_value_11 = Py_True;
frame_frame_pynput$keyboard$_base$$$function__11_press->m_frame.f_lineno = 395;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 395;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$function__11_press, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$function__11_press, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_14;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
CHECK_OBJECT(par_self);
tmp_expression_value_14 = par_self;
tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_InvalidKeyException);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 396;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 396;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
tmp_condition_result_6 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
if (var_resolved == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_resolved);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 397;
type_description_1 = "oooo";
    goto try_except_handler_5;
}

tmp_cmp_expr_left_5 = var_resolved;
CHECK_OBJECT(var_original);
tmp_cmp_expr_right_5 = var_original;
tmp_condition_result_7 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_15;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_12;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_element_value_13;
CHECK_OBJECT(par_self);
tmp_expression_value_15 = par_self;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain__handle);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 398;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(par_self);
tmp_expression_value_16 = par_self;
tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain__dead_key);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 398;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
tmp_args_element_value_13 = Py_True;
frame_frame_pynput$keyboard$_base$$$function__11_press->m_frame.f_lineno = 398;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 398;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_17;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_14;
PyObject *tmp_expression_value_18;
PyObject *tmp_args_element_value_15;
CHECK_OBJECT(par_self);
tmp_expression_value_17 = par_self;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain__handle);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 399;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(par_self);
tmp_expression_value_18 = par_self;
tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain__dead_key);
if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 399;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
tmp_args_element_value_15 = Py_False;
frame_frame_pynput$keyboard$_base$$$function__11_press->m_frame.f_lineno = 399;
{
    PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
    tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 399;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_7;
PyObject *tmp_args_element_value_16;
PyObject *tmp_args_element_value_17;
CHECK_OBJECT(par_self);
tmp_called_instance_4 = par_self;
CHECK_OBJECT(var_original);
tmp_args_element_value_16 = var_original;
tmp_args_element_value_17 = Py_True;
frame_frame_pynput$keyboard$_base$$$function__11_press->m_frame.f_lineno = 400;
{
    PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17};
    tmp_call_result_7 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_4,
        mod_consts.const_str_plain__handle,
        call_args
    );
}

if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
branch_no_7:;
goto branch_end_6;
branch_no_6:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 394;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pynput$keyboard$_base$$$function__11_press->m_frame)) {
        frame_frame_pynput$keyboard$_base$$$function__11_press->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_5;
branch_end_6:;
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
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
try_end_4:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_ass_attr_target_3;
tmp_ass_attr_value_3 = Py_None;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain__dead_key, tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 402;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$function__11_press, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_base$$$function__11_press->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$function__11_press, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_base$$$function__11_press,
    type_description_1,
    par_self,
    par_key,
    var_resolved,
    var_original
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$_base$$$function__11_press == cache_frame_frame_pynput$keyboard$_base$$$function__11_press) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$_base$$$function__11_press);
    cache_frame_frame_pynput$keyboard$_base$$$function__11_press = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$_base$$$function__11_press);

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
Py_XDECREF(var_resolved);
var_resolved = NULL;
CHECK_OBJECT(var_original);
CHECK_OBJECT(var_original);
Py_DECREF(var_original);
var_original = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_resolved);
var_resolved = NULL;
Py_XDECREF(var_original);
var_original = NULL;
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


static PyObject *impl_pynput$keyboard$_base$$$function__12_release(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_key = python_pars[1];
PyObject *var_resolved = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_base$$$function__12_release;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$_base$$$function__12_release = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$_base$$$function__12_release)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$_base$$$function__12_release);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$_base$$$function__12_release == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$_base$$$function__12_release = MAKE_FUNCTION_FRAME(tstate, code_objects_45b38bb0f17e4c46216bf515841bb085, module_pynput$keyboard$_base, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$_base$$$function__12_release->m_type_description == NULL);
frame_frame_pynput$keyboard$_base$$$function__12_release = cache_frame_frame_pynput$keyboard$_base$$$function__12_release;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_base$$$function__12_release);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_base$$$function__12_release) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_key);
tmp_args_element_value_1 = par_key;
frame_frame_pynput$keyboard$_base$$$function__12_release->m_frame.f_lineno = 421;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__resolve, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_resolved;
    var_resolved = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_resolved);
tmp_cmp_expr_left_1 = var_resolved;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(par_key);
tmp_args_element_value_2 = par_key;
frame_frame_pynput$keyboard$_base$$$function__12_release->m_frame.f_lineno = 423;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_InvalidKeyException, tmp_args_element_value_2);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 423;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_self);
tmp_called_instance_3 = par_self;
CHECK_OBJECT(var_resolved);
tmp_args_element_value_3 = var_resolved;
tmp_args_element_value_4 = Py_False;
frame_frame_pynput$keyboard$_base$$$function__12_release->m_frame.f_lineno = 424;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain__update_modifiers,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_resolved);
tmp_expression_value_1 = var_resolved;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_is_dead);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 427;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 427;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
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
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(par_self);
tmp_called_instance_4 = par_self;
CHECK_OBJECT(var_resolved);
tmp_args_element_value_5 = var_resolved;
tmp_args_element_value_6 = Py_False;
frame_frame_pynput$keyboard$_base$$$function__12_release->m_frame.f_lineno = 430;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_4,
        mod_consts.const_str_plain__handle,
        call_args
    );
}

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 430;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$function__12_release, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_base$$$function__12_release->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$function__12_release, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_base$$$function__12_release,
    type_description_1,
    par_self,
    par_key,
    var_resolved
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$_base$$$function__12_release == cache_frame_frame_pynput$keyboard$_base$$$function__12_release) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$_base$$$function__12_release);
    cache_frame_frame_pynput$keyboard$_base$$$function__12_release = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$_base$$$function__12_release);

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
CHECK_OBJECT(var_resolved);
CHECK_OBJECT(var_resolved);
Py_DECREF(var_resolved);
var_resolved = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_resolved);
var_resolved = NULL;
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


static PyObject *impl_pynput$keyboard$_base$$$function__13_tap(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_key = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_base$$$function__13_tap;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$_base$$$function__13_tap = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$_base$$$function__13_tap)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$_base$$$function__13_tap);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$_base$$$function__13_tap == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$_base$$$function__13_tap = MAKE_FUNCTION_FRAME(tstate, code_objects_d1569303188a3e44397b139c2e1cb508, module_pynput$keyboard$_base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$_base$$$function__13_tap->m_type_description == NULL);
frame_frame_pynput$keyboard$_base$$$function__13_tap = cache_frame_frame_pynput$keyboard$_base$$$function__13_tap;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_base$$$function__13_tap);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_base$$$function__13_tap) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_key);
tmp_args_element_value_1 = par_key;
frame_frame_pynput$keyboard$_base$$$function__13_tap->m_frame.f_lineno = 446;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_press, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 446;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(par_key);
tmp_args_element_value_2 = par_key;
frame_frame_pynput$keyboard$_base$$$function__13_tap->m_frame.f_lineno = 447;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_release, tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 447;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$function__13_tap, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_base$$$function__13_tap->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$function__13_tap, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_base$$$function__13_tap,
    type_description_1,
    par_self,
    par_key
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$_base$$$function__13_tap == cache_frame_frame_pynput$keyboard$_base$$$function__13_tap) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$_base$$$function__13_tap);
    cache_frame_frame_pynput$keyboard$_base$$$function__13_tap = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$_base$$$function__13_tap);

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


static PyObject *impl_pynput$keyboard$_base$$$function__14_touch(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_key = python_pars[1];
PyObject *par_is_press = python_pars[2];
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_base$$$function__14_touch;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$_base$$$function__14_touch = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$_base$$$function__14_touch)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$_base$$$function__14_touch);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$_base$$$function__14_touch == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$_base$$$function__14_touch = MAKE_FUNCTION_FRAME(tstate, code_objects_9f3833606e00dd44cd3ec63905ee886a, module_pynput$keyboard$_base, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$_base$$$function__14_touch->m_type_description == NULL);
frame_frame_pynput$keyboard$_base$$$function__14_touch = cache_frame_frame_pynput$keyboard$_base$$$function__14_touch;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_base$$$function__14_touch);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_base$$$function__14_touch) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_is_press);
tmp_truth_name_1 = CHECK_IF_TRUE(par_is_press);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;
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
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_key);
tmp_args_element_value_1 = par_key;
frame_frame_pynput$keyboard$_base$$$function__14_touch->m_frame.f_lineno = 460;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_press, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 460;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(par_key);
tmp_args_element_value_2 = par_key;
frame_frame_pynput$keyboard$_base$$$function__14_touch->m_frame.f_lineno = 462;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_release, tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 462;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$function__14_touch, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_base$$$function__14_touch->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$function__14_touch, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_base$$$function__14_touch,
    type_description_1,
    par_self,
    par_key,
    par_is_press
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$_base$$$function__14_touch == cache_frame_frame_pynput$keyboard$_base$$$function__14_touch) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$_base$$$function__14_touch);
    cache_frame_frame_pynput$keyboard$_base$$$function__14_touch = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$_base$$$function__14_touch);

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


static PyObject *impl_pynput$keyboard$_base$$$function__15_pressed(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_args = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_args;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_GENERATOR_pynput$keyboard$_base$$$function__15_pressed$$$genobj__1_pressed(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_args);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
par_args = NULL;
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
struct pynput$keyboard$_base$$$function__15_pressed$$$genobj__1_pressed_locals {
PyObject *var_key;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
PyObject *tmp_for_loop_2__for_iterator;
PyObject *tmp_for_loop_2__iter_value;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
int exception_keeper_lineno_6;
};
#endif

static PyObject *pynput$keyboard$_base$$$function__15_pressed$$$genobj__1_pressed_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct pynput$keyboard$_base$$$function__15_pressed$$$genobj__1_pressed_locals *generator_heap = (struct pynput$keyboard$_base$$$function__15_pressed$$$genobj__1_pressed_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_key = NULL;
generator_heap->tmp_for_loop_1__for_iterator = NULL;
generator_heap->tmp_for_loop_1__iter_value = NULL;
generator_heap->tmp_for_loop_2__for_iterator = NULL;
generator_heap->tmp_for_loop_2__iter_value = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_4d64d12aeb27aff10d585f221e64f7dc, module_pynput$keyboard$_base, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, const_str_plain_args);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 470;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_iter_arg_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 470;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->tmp_for_loop_1__for_iterator;
    generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_2;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_2 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "cco";
generator_heap->exception_lineno = 470;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
    generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_3 = generator_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = generator_heap->var_key;
    generator_heap->var_key = tmp_assign_source_3;
    Py_INCREF(generator_heap->var_key);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 471;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}

tmp_called_instance_1 = Nuitka_Cell_GET(generator->m_closure[1]);
CHECK_OBJECT(generator_heap->var_key);
tmp_args_element_value_1 = generator_heap->var_key;
generator->m_frame->m_frame.f_lineno = 471;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_press, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 471;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 470;
generator_heap->type_description_1 = "cco";
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

Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
// Tried code:
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


generator_heap->exception_lineno = 474;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_3;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Preserve existing published exception id 1.
generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_2);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_2, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_2, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_2);
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = (PyObject *)&PyReversed_Type;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, const_str_plain_args);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 476;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_4;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
generator->m_frame->m_frame.f_lineno = 476;
tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 476;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_4;
}
tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 476;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_for_loop_2__for_iterator;
    generator_heap->tmp_for_loop_2__for_iterator = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_5;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
tmp_next_source_2 = generator_heap->tmp_for_loop_2__for_iterator;
tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_5 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "cco";
generator_heap->exception_lineno = 476;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_2__iter_value;
    generator_heap->tmp_for_loop_2__iter_value = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__iter_value);
tmp_assign_source_6 = generator_heap->tmp_for_loop_2__iter_value;
{
    PyObject *old = generator_heap->var_key;
    generator_heap->var_key = tmp_assign_source_6;
    Py_INCREF(generator_heap->var_key);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 477;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_5;
}

tmp_called_instance_2 = Nuitka_Cell_GET(generator->m_closure[1]);
CHECK_OBJECT(generator_heap->var_key);
tmp_args_element_value_3 = generator_heap->var_key;
generator->m_frame->m_frame.f_lineno = 477;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_release, tmp_args_element_value_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 477;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 476;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_5;
}
goto loop_start_2;
loop_end_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
generator_heap->tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
generator_heap->tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
try_end_3:;
Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
generator_heap->tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
generator_heap->tmp_for_loop_2__for_iterator = NULL;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 473;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "cco";
goto try_except_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_2:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_3;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = (PyObject *)&PyReversed_Type;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, const_str_plain_args);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 476;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_args_element_value_4 = Nuitka_Cell_GET(generator->m_closure[0]);
generator->m_frame->m_frame.f_lineno = 476;
tmp_iter_arg_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_4);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 476;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_assign_source_7 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 476;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->tmp_for_loop_2__for_iterator;
    generator_heap->tmp_for_loop_2__for_iterator = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_8;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
tmp_next_source_3 = generator_heap->tmp_for_loop_2__for_iterator;
tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_8 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "cco";
generator_heap->exception_lineno = 476;
        goto try_except_handler_6;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_2__iter_value;
    generator_heap->tmp_for_loop_2__iter_value = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__iter_value);
tmp_assign_source_9 = generator_heap->tmp_for_loop_2__iter_value;
{
    PyObject *old = generator_heap->var_key;
    generator_heap->var_key = tmp_assign_source_9;
    Py_INCREF(generator_heap->var_key);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_5;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 477;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_6;
}

tmp_called_instance_3 = Nuitka_Cell_GET(generator->m_closure[1]);
CHECK_OBJECT(generator_heap->var_key);
tmp_args_element_value_5 = generator_heap->var_key;
generator->m_frame->m_frame.f_lineno = 477;
tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_release, tmp_args_element_value_5);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 477;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_6;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 476;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_6;
}
goto loop_start_3;
loop_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_5 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
generator_heap->tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
generator_heap->tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_5;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_4:;

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
    generator->m_closure[1],
    generator->m_closure[0],
    generator_heap->var_key
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
goto try_end_5;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_6 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_key);
generator_heap->var_key = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_6;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

goto function_exception_exit;
// End of try:
try_end_5:;
Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
generator_heap->tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
generator_heap->tmp_for_loop_2__for_iterator = NULL;
Py_XDECREF(generator_heap->var_key);
generator_heap->var_key = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_pynput$keyboard$_base$$$function__15_pressed$$$genobj__1_pressed(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        pynput$keyboard$_base$$$function__15_pressed$$$genobj__1_pressed_context,
        module_pynput$keyboard$_base,
        mod_consts.const_str_plain_pressed,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_7a654b074c875cd7fa4e884a9ee3305d,
#endif
        code_objects_4d64d12aeb27aff10d585f221e64f7dc,
        closure,
        2,
#if 1
        sizeof(struct pynput$keyboard$_base$$$function__15_pressed$$$genobj__1_pressed_locals)
#else
        0
#endif
    );
}


static PyObject *impl_pynput$keyboard$_base$$$function__16_type(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_string = python_pars[1];
PyObject *var__CONTROL_CODES = NULL;
PyObject *var_i = NULL;
PyObject *var_character = NULL;
PyObject *var_key = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_base$$$function__16_type;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$_base$$$function__16_type = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$_base$$$function__16_type)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$_base$$$function__16_type);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$_base$$$function__16_type == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$_base$$$function__16_type = MAKE_FUNCTION_FRAME(tstate, code_objects_e256aacdcf5df3d6985f444687d7f581, module_pynput$keyboard$_base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$_base$$$function__16_type->m_type_description == NULL);
frame_frame_pynput$keyboard$_base$$$function__16_type = cache_frame_frame_pynput$keyboard$_base$$$function__16_type;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_base$$$function__16_type);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_base$$$function__16_type) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = const_str_empty;
tmp_globals_arg_value_1 = (PyObject *)moduledict_pynput$keyboard$_base;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain__CONTROL_CODES_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_pynput$keyboard$_base$$$function__16_type->m_frame.f_lineno = 490;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 490;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_pynput$keyboard$_base,
        mod_consts.const_str_plain__CONTROL_CODES,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain__CONTROL_CODES);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 490;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var__CONTROL_CODES;
    var__CONTROL_CODES = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = (PyObject *)&PyEnum_Type;
CHECK_OBJECT(par_string);
tmp_args_element_value_1 = par_string;
frame_frame_pynput$keyboard$_base$$$function__16_type->m_frame.f_lineno = 492;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 492;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 492;
type_description_1 = "oooooo";
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
type_description_1 = "oooooo";
exception_lineno = 492;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 492;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 492;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 492;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
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



exception_lineno = 492;
type_description_1 = "oooooo";
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
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_7;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_character;
    var_character = tmp_assign_source_8;
    Py_INCREF(var_character);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
if (var__CONTROL_CODES == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain__CONTROL_CODES);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 493;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}

tmp_expression_value_1 = var__CONTROL_CODES;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 493;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_character);
tmp_args_element_value_2 = var_character;
CHECK_OBJECT(var_character);
tmp_args_element_value_3 = var_character;
frame_frame_pynput$keyboard$_base$$$function__16_type->m_frame.f_lineno = 493;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 493;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_key;
    var_key = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_4;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 495;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}

tmp_called_instance_1 = par_self;
CHECK_OBJECT(var_key);
tmp_args_element_value_4 = var_key;
frame_frame_pynput$keyboard$_base$$$function__16_type->m_frame.f_lineno = 495;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_press, tmp_args_element_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 495;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_5;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 496;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}

tmp_called_instance_2 = par_self;
CHECK_OBJECT(var_key);
tmp_args_element_value_5 = var_key;
frame_frame_pynput$keyboard$_base$$$function__16_type->m_frame.f_lineno = 496;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_release, tmp_args_element_value_5);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 496;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$function__16_type, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$function__16_type, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_tuple_element_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_tuple_element_1 = PyExc_ValueError;
tmp_cmp_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_2;
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 0, tmp_tuple_element_1);
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 498;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}

tmp_expression_value_2 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_InvalidKeyException);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_cmp_expr_right_1);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;
type_description_1 = "oooooo";
    goto try_except_handler_6;
}
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 499;
type_description_1 = "oooooo";
    goto try_except_handler_6;
}

tmp_called_instance_3 = par_self;
CHECK_OBJECT(var_i);
tmp_args_element_value_6 = var_i;
CHECK_OBJECT(var_character);
tmp_args_element_value_7 = var_character;
frame_frame_pynput$keyboard$_base$$$function__16_type->m_frame.f_lineno = 499;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_raise_type_input_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain_InvalidCharacterException,
        call_args
    );
}

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 499;
type_description_1 = "oooooo";
    goto try_except_handler_6;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 499;
type_description_1 = "oooooo";
    goto try_except_handler_6;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 499;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto try_except_handler_6;
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 494;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pynput$keyboard$_base$$$function__16_type->m_frame)) {
        frame_frame_pynput$keyboard$_base$$$function__16_type->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooo";
goto try_except_handler_6;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_2;
// End of try:
// End of try:
try_end_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 492;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_4;
// Exception handler code:
try_except_handler_2:;
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
try_end_4:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$function__16_type, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_base$$$function__16_type->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$function__16_type, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_base$$$function__16_type,
    type_description_1,
    par_self,
    par_string,
    var__CONTROL_CODES,
    var_i,
    var_character,
    var_key
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$_base$$$function__16_type == cache_frame_frame_pynput$keyboard$_base$$$function__16_type) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$_base$$$function__16_type);
    cache_frame_frame_pynput$keyboard$_base$$$function__16_type = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$_base$$$function__16_type);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var__CONTROL_CODES);
var__CONTROL_CODES = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_character);
var_character = NULL;
Py_XDECREF(var_key);
var_key = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var__CONTROL_CODES);
var__CONTROL_CODES = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_character);
var_character = NULL;
Py_XDECREF(var_key);
var_key = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_string);
Py_DECREF(par_string);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_string);
Py_DECREF(par_string);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$keyboard$_base$$$function__17_modifiers(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_GENERATOR_pynput$keyboard$_base$$$function__17_modifiers$$$genobj__1_modifiers(tstate, tmp_closure_1);

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
struct pynput$keyboard$_base$$$function__17_modifiers$$$genobj__1_modifiers_locals {
PyObject *tmp_genexpr_1__$0;
PyObject *tmp_with_1__enter;
PyObject *tmp_with_1__exit;
nuitka_bool tmp_with_1__indicator;
PyObject *tmp_with_1__source;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
};
#endif

static PyObject *pynput$keyboard$_base$$$function__17_modifiers$$$genobj__1_modifiers_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct pynput$keyboard$_base$$$function__17_modifiers$$$genobj__1_modifiers_locals *generator_heap = (struct pynput$keyboard$_base$$$function__17_modifiers$$$genobj__1_modifiers_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->tmp_genexpr_1__$0 = NULL;
generator_heap->tmp_with_1__enter = NULL;
generator_heap->tmp_with_1__exit = NULL;
generator_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
generator_heap->tmp_with_1__source = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_eb1ff990ec0725518c6c78a0ebf00264, module_pynput$keyboard$_base, sizeof(void *));
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
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 522;
generator_heap->type_description_1 = "c";
    goto try_except_handler_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__modifiers_lock);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 522;
generator_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
{
    PyObject *old = generator_heap->tmp_with_1__source;
    generator_heap->tmp_with_1__source = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
tmp_expression_value_2 = generator_heap->tmp_with_1__source;
tmp_assign_source_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 522;
generator_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
{
    PyObject *old = generator_heap->tmp_with_1__exit;
    generator_heap->tmp_with_1__exit = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
tmp_expression_value_3 = generator_heap->tmp_with_1__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 522;
generator_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
generator->m_frame->m_frame.f_lineno = 522;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 522;
generator_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
{
    PyObject *old = generator_heap->tmp_with_1__enter;
    generator_heap->tmp_with_1__enter = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
generator_heap->tmp_with_1__indicator = tmp_assign_source_4;
}
// Tried code:
// Tried code:
{
PyObject *tmp_expression_value_4;
PyObject *tmp_set_arg_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_5;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 524;
generator_heap->type_description_1 = "c";
    goto try_except_handler_3;
}

tmp_expression_value_5 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__modifiers);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 524;
generator_heap->type_description_1 = "c";
    goto try_except_handler_3;
}
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 524;
generator_heap->type_description_1 = "c";
    goto try_except_handler_3;
}
{
    PyObject *old = generator_heap->tmp_genexpr_1__$0;
    generator_heap->tmp_genexpr_1__$0 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = Nuitka_Cell_New0(generator_heap->tmp_genexpr_1__$0);
tmp_closure_1[1] = generator->m_closure[0];
Py_INCREF(tmp_closure_1[1]);
tmp_set_arg_1 = MAKE_GENERATOR_pynput$keyboard$_base$$$function__17_modifiers$$$genobj__1_modifiers$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
CHECK_OBJECT(generator_heap->tmp_genexpr_1__$0);
CHECK_OBJECT(generator_heap->tmp_genexpr_1__$0);
Py_DECREF(generator_heap->tmp_genexpr_1__$0);
generator_heap->tmp_genexpr_1__$0 = NULL;
goto outline_result_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_expression_value_4 = PySet_New(tmp_set_arg_1);
CHECK_OBJECT(tmp_set_arg_1);
Py_DECREF(tmp_set_arg_1);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 523;
generator_heap->type_description_1 = "c";
    goto try_except_handler_3;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_set_arg_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_4;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_set_arg_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 523;
generator_heap->type_description_1 = "c";
    goto try_except_handler_3;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
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
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_BaseException;
generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(generator_heap->tmp_res == -1));
tmp_condition_result_1 = (generator_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
nuitka_bool tmp_assign_source_6;
tmp_assign_source_6 = NUITKA_BOOL_FALSE;
generator_heap->tmp_with_1__indicator = tmp_assign_source_6;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_2 = generator_heap->tmp_with_1__exit;
tmp_args_element_value_1 = EXC_TYPE(tstate);
tmp_args_element_value_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_2); 
tmp_args_element_value_3 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_3 == NULL) {
    tmp_args_element_value_3 = Py_None;
}
generator->m_frame->m_frame.f_lineno = 522;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 522;
generator_heap->type_description_1 = "c";
    goto try_except_handler_5;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 522;
generator_heap->type_description_1 = "c";
    goto try_except_handler_5;
}
tmp_condition_result_2 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 522;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "c";
goto try_except_handler_5;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 522;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "c";
goto try_except_handler_5;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

{
bool tmp_condition_result_3;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = generator_heap->tmp_with_1__indicator;
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
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_1;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_3 = generator_heap->tmp_with_1__exit;
generator->m_frame->m_frame.f_lineno = 522;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_3, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&generator_heap->exception_keeper_name_3);

generator_heap->exception_lineno = 522;
generator_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_3:;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto try_except_handler_1;
// End of try:
try_end_3:;
{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = generator_heap->tmp_with_1__indicator;
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
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_2;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_4 = generator_heap->tmp_with_1__exit;
generator->m_frame->m_frame.f_lineno = 522;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 522;
generator_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
goto try_end_4;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_with_1__source);
generator_heap->tmp_with_1__source = NULL;
Py_XDECREF(generator_heap->tmp_with_1__enter);
generator_heap->tmp_with_1__enter = NULL;
Py_XDECREF(generator_heap->tmp_with_1__exit);
generator_heap->tmp_with_1__exit = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;

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
CHECK_OBJECT(generator_heap->tmp_with_1__source);
CHECK_OBJECT(generator_heap->tmp_with_1__source);
Py_DECREF(generator_heap->tmp_with_1__source);
generator_heap->tmp_with_1__source = NULL;
CHECK_OBJECT(generator_heap->tmp_with_1__enter);
CHECK_OBJECT(generator_heap->tmp_with_1__enter);
Py_DECREF(generator_heap->tmp_with_1__enter);
generator_heap->tmp_with_1__enter = NULL;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
Py_DECREF(generator_heap->tmp_with_1__exit);
generator_heap->tmp_with_1__exit = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_pynput$keyboard$_base$$$function__17_modifiers$$$genobj__1_modifiers(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        pynput$keyboard$_base$$$function__17_modifiers$$$genobj__1_modifiers_context,
        module_pynput$keyboard$_base,
        mod_consts.const_str_plain_modifiers,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_0f69ada8c0fd8406fc679dca9d5b7efb,
#endif
        code_objects_eb1ff990ec0725518c6c78a0ebf00264,
        closure,
        1,
#if 1
        sizeof(struct pynput$keyboard$_base$$$function__17_modifiers$$$genobj__1_modifiers_locals)
#else
        0
#endif
    );
}



#if 1
struct pynput$keyboard$_base$$$function__17_modifiers$$$genobj__1_modifiers$$$genexpr__1_genexpr_locals {
PyObject *var_modifier;
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

static PyObject *pynput$keyboard$_base$$$function__17_modifiers$$$genobj__1_modifiers$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct pynput$keyboard$_base$$$function__17_modifiers$$$genobj__1_modifiers$$$genexpr__1_genexpr_locals *generator_heap = (struct pynput$keyboard$_base$$$function__17_modifiers$$$genobj__1_modifiers$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_modifier = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_49bbcd316069b0637810e8c84fae03be, module_pynput$keyboard$_base, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
generator_heap->exception_lineno = 523;
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
    PyObject *old = generator_heap->var_modifier;
    generator_heap->var_modifier = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_modifier);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 524;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}

tmp_called_instance_1 = Nuitka_Cell_GET(generator->m_closure[1]);
CHECK_OBJECT(generator_heap->var_modifier);
tmp_args_element_value_1 = generator_heap->var_modifier;
generator->m_frame->m_frame.f_lineno = 524;
tmp_expression_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__as_modifier, tmp_args_element_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 524;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 524;
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


generator_heap->exception_lineno = 523;
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
    generator_heap->var_modifier,
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

Py_XDECREF(generator_heap->var_modifier);
generator_heap->var_modifier = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_modifier);
generator_heap->var_modifier = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_pynput$keyboard$_base$$$function__17_modifiers$$$genobj__1_modifiers$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        pynput$keyboard$_base$$$function__17_modifiers$$$genobj__1_modifiers$$$genexpr__1_genexpr_context,
        module_pynput$keyboard$_base,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_b162aace11bc6f3e47e689774886e22d,
#endif
        code_objects_49bbcd316069b0637810e8c84fae03be,
        closure,
        2,
#if 1
        sizeof(struct pynput$keyboard$_base$$$function__17_modifiers$$$genobj__1_modifiers$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_pynput$keyboard$_base$$$function__18_alt_pressed(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_modifiers = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_base$$$function__18_alt_pressed;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$_base$$$function__18_alt_pressed = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$_base$$$function__18_alt_pressed)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$_base$$$function__18_alt_pressed);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$_base$$$function__18_alt_pressed == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$_base$$$function__18_alt_pressed = MAKE_FUNCTION_FRAME(tstate, code_objects_23a5f8271f2c60c2133eb1c3da3b13fb, module_pynput$keyboard$_base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$_base$$$function__18_alt_pressed->m_type_description == NULL);
frame_frame_pynput$keyboard$_base$$$function__18_alt_pressed = cache_frame_frame_pynput$keyboard$_base$$$function__18_alt_pressed;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_base$$$function__18_alt_pressed);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_base$$$function__18_alt_pressed) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_modifiers);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 534;
type_description_1 = "oo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_with_1__source;
    tmp_with_1__source = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_assign_source_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 534;
type_description_1 = "oo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_with_1__exit;
    tmp_with_1__exit = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_3 = tmp_with_1__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 534;
type_description_1 = "oo";
    goto try_except_handler_2;
}
frame_frame_pynput$keyboard$_base$$$function__18_alt_pressed->m_frame.f_lineno = 534;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 534;
type_description_1 = "oo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_with_1__enter;
    tmp_with_1__enter = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_5 = tmp_with_1__enter;
{
    PyObject *old = var_modifiers;
    var_modifiers = tmp_assign_source_5;
    Py_INCREF(var_modifiers);
    Py_XDECREF(old);
}

}
// Tried code:
// Tried code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__Key);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 535;
type_description_1 = "oo";
    goto try_except_handler_4;
}
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_alt);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 535;
type_description_1 = "oo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_modifiers);
tmp_cmp_expr_right_1 = var_modifiers;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 535;
type_description_1 = "oo";
    goto try_except_handler_4;
}
tmp_return_value = (tmp_res == 1) ? Py_True : Py_False;
Py_INCREF(tmp_return_value);
goto try_return_handler_3;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$function__18_alt_pressed, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$function__18_alt_pressed, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
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
nuitka_bool tmp_assign_source_6;
tmp_assign_source_6 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_6;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_2 = tmp_with_1__exit;
tmp_args_element_value_1 = EXC_TYPE(tstate);
tmp_args_element_value_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_2); 
tmp_args_element_value_3 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_3 == NULL) {
    tmp_args_element_value_3 = Py_None;
}
frame_frame_pynput$keyboard$_base$$$function__18_alt_pressed->m_frame.f_lineno = 534;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 534;
type_description_1 = "oo";
    goto try_except_handler_5;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 534;
type_description_1 = "oo";
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
    exception_lineno = 534;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pynput$keyboard$_base$$$function__18_alt_pressed->m_frame)) {
        frame_frame_pynput$keyboard$_base$$$function__18_alt_pressed->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_5;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 534;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pynput$keyboard$_base$$$function__18_alt_pressed->m_frame)) {
        frame_frame_pynput$keyboard$_base$$$function__18_alt_pressed->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_5;
branch_end_1:;
goto try_end_1;
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
try_end_1:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
goto try_end_3;
// Return handler code:
try_return_handler_3:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_3 = tmp_with_1__exit;
frame_frame_pynput$keyboard$_base$$$function__18_alt_pressed->m_frame.f_lineno = 534;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_3, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 534;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_3;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_pynput$keyboard$_base$$$function__18_alt_pressed->m_frame.f_lineno = 534;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 534;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_3:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
goto try_end_4;
// Return handler code:
try_return_handler_2:;
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
goto frame_return_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$function__18_alt_pressed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_base$$$function__18_alt_pressed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$function__18_alt_pressed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_base$$$function__18_alt_pressed,
    type_description_1,
    par_self,
    var_modifiers
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$_base$$$function__18_alt_pressed == cache_frame_frame_pynput$keyboard$_base$$$function__18_alt_pressed) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$_base$$$function__18_alt_pressed);
    cache_frame_frame_pynput$keyboard$_base$$$function__18_alt_pressed = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$_base$$$function__18_alt_pressed);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_modifiers);
CHECK_OBJECT(var_modifiers);
Py_DECREF(var_modifiers);
var_modifiers = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_modifiers);
var_modifiers = NULL;
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


static PyObject *impl_pynput$keyboard$_base$$$function__19_alt_gr_pressed(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_modifiers = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_base$$$function__19_alt_gr_pressed;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$_base$$$function__19_alt_gr_pressed = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$_base$$$function__19_alt_gr_pressed)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$_base$$$function__19_alt_gr_pressed);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$_base$$$function__19_alt_gr_pressed == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$_base$$$function__19_alt_gr_pressed = MAKE_FUNCTION_FRAME(tstate, code_objects_8b8ed972ed7120bdd26f059e72138c1a, module_pynput$keyboard$_base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$_base$$$function__19_alt_gr_pressed->m_type_description == NULL);
frame_frame_pynput$keyboard$_base$$$function__19_alt_gr_pressed = cache_frame_frame_pynput$keyboard$_base$$$function__19_alt_gr_pressed;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_base$$$function__19_alt_gr_pressed);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_base$$$function__19_alt_gr_pressed) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_modifiers);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 544;
type_description_1 = "oo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_with_1__source;
    tmp_with_1__source = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_assign_source_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 544;
type_description_1 = "oo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_with_1__exit;
    tmp_with_1__exit = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_3 = tmp_with_1__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 544;
type_description_1 = "oo";
    goto try_except_handler_2;
}
frame_frame_pynput$keyboard$_base$$$function__19_alt_gr_pressed->m_frame.f_lineno = 544;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 544;
type_description_1 = "oo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_with_1__enter;
    tmp_with_1__enter = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_5 = tmp_with_1__enter;
{
    PyObject *old = var_modifiers;
    var_modifiers = tmp_assign_source_5;
    Py_INCREF(var_modifiers);
    Py_XDECREF(old);
}

}
// Tried code:
// Tried code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__Key);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 545;
type_description_1 = "oo";
    goto try_except_handler_4;
}
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_alt_gr);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 545;
type_description_1 = "oo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_modifiers);
tmp_cmp_expr_right_1 = var_modifiers;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 545;
type_description_1 = "oo";
    goto try_except_handler_4;
}
tmp_return_value = (tmp_res == 1) ? Py_True : Py_False;
Py_INCREF(tmp_return_value);
goto try_return_handler_3;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$function__19_alt_gr_pressed, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$function__19_alt_gr_pressed, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
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
nuitka_bool tmp_assign_source_6;
tmp_assign_source_6 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_6;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_2 = tmp_with_1__exit;
tmp_args_element_value_1 = EXC_TYPE(tstate);
tmp_args_element_value_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_2); 
tmp_args_element_value_3 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_3 == NULL) {
    tmp_args_element_value_3 = Py_None;
}
frame_frame_pynput$keyboard$_base$$$function__19_alt_gr_pressed->m_frame.f_lineno = 544;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 544;
type_description_1 = "oo";
    goto try_except_handler_5;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 544;
type_description_1 = "oo";
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
    exception_lineno = 544;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pynput$keyboard$_base$$$function__19_alt_gr_pressed->m_frame)) {
        frame_frame_pynput$keyboard$_base$$$function__19_alt_gr_pressed->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_5;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 544;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pynput$keyboard$_base$$$function__19_alt_gr_pressed->m_frame)) {
        frame_frame_pynput$keyboard$_base$$$function__19_alt_gr_pressed->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_5;
branch_end_1:;
goto try_end_1;
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
try_end_1:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
goto try_end_3;
// Return handler code:
try_return_handler_3:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_3 = tmp_with_1__exit;
frame_frame_pynput$keyboard$_base$$$function__19_alt_gr_pressed->m_frame.f_lineno = 544;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_3, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 544;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_3;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_pynput$keyboard$_base$$$function__19_alt_gr_pressed->m_frame.f_lineno = 544;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 544;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_3:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
goto try_end_4;
// Return handler code:
try_return_handler_2:;
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
goto frame_return_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$function__19_alt_gr_pressed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_base$$$function__19_alt_gr_pressed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$function__19_alt_gr_pressed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_base$$$function__19_alt_gr_pressed,
    type_description_1,
    par_self,
    var_modifiers
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$_base$$$function__19_alt_gr_pressed == cache_frame_frame_pynput$keyboard$_base$$$function__19_alt_gr_pressed) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$_base$$$function__19_alt_gr_pressed);
    cache_frame_frame_pynput$keyboard$_base$$$function__19_alt_gr_pressed = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$_base$$$function__19_alt_gr_pressed);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_modifiers);
CHECK_OBJECT(var_modifiers);
Py_DECREF(var_modifiers);
var_modifiers = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_modifiers);
var_modifiers = NULL;
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


static PyObject *impl_pynput$keyboard$_base$$$function__20_ctrl_pressed(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_modifiers = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_base$$$function__20_ctrl_pressed;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$_base$$$function__20_ctrl_pressed = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$_base$$$function__20_ctrl_pressed)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$_base$$$function__20_ctrl_pressed);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$_base$$$function__20_ctrl_pressed == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$_base$$$function__20_ctrl_pressed = MAKE_FUNCTION_FRAME(tstate, code_objects_eb80d8221a0eb8273d8f2d1892e97369, module_pynput$keyboard$_base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$_base$$$function__20_ctrl_pressed->m_type_description == NULL);
frame_frame_pynput$keyboard$_base$$$function__20_ctrl_pressed = cache_frame_frame_pynput$keyboard$_base$$$function__20_ctrl_pressed;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_base$$$function__20_ctrl_pressed);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_base$$$function__20_ctrl_pressed) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_modifiers);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 554;
type_description_1 = "oo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_with_1__source;
    tmp_with_1__source = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_assign_source_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 554;
type_description_1 = "oo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_with_1__exit;
    tmp_with_1__exit = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_3 = tmp_with_1__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 554;
type_description_1 = "oo";
    goto try_except_handler_2;
}
frame_frame_pynput$keyboard$_base$$$function__20_ctrl_pressed->m_frame.f_lineno = 554;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 554;
type_description_1 = "oo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_with_1__enter;
    tmp_with_1__enter = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_5 = tmp_with_1__enter;
{
    PyObject *old = var_modifiers;
    var_modifiers = tmp_assign_source_5;
    Py_INCREF(var_modifiers);
    Py_XDECREF(old);
}

}
// Tried code:
// Tried code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__Key);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 555;
type_description_1 = "oo";
    goto try_except_handler_4;
}
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_ctrl);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 555;
type_description_1 = "oo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_modifiers);
tmp_cmp_expr_right_1 = var_modifiers;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 555;
type_description_1 = "oo";
    goto try_except_handler_4;
}
tmp_return_value = (tmp_res == 1) ? Py_True : Py_False;
Py_INCREF(tmp_return_value);
goto try_return_handler_3;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$function__20_ctrl_pressed, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$function__20_ctrl_pressed, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
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
nuitka_bool tmp_assign_source_6;
tmp_assign_source_6 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_6;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_2 = tmp_with_1__exit;
tmp_args_element_value_1 = EXC_TYPE(tstate);
tmp_args_element_value_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_2); 
tmp_args_element_value_3 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_3 == NULL) {
    tmp_args_element_value_3 = Py_None;
}
frame_frame_pynput$keyboard$_base$$$function__20_ctrl_pressed->m_frame.f_lineno = 554;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 554;
type_description_1 = "oo";
    goto try_except_handler_5;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 554;
type_description_1 = "oo";
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
    exception_lineno = 554;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pynput$keyboard$_base$$$function__20_ctrl_pressed->m_frame)) {
        frame_frame_pynput$keyboard$_base$$$function__20_ctrl_pressed->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_5;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 554;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pynput$keyboard$_base$$$function__20_ctrl_pressed->m_frame)) {
        frame_frame_pynput$keyboard$_base$$$function__20_ctrl_pressed->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_5;
branch_end_1:;
goto try_end_1;
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
try_end_1:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
goto try_end_3;
// Return handler code:
try_return_handler_3:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_3 = tmp_with_1__exit;
frame_frame_pynput$keyboard$_base$$$function__20_ctrl_pressed->m_frame.f_lineno = 554;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_3, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 554;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_3;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_pynput$keyboard$_base$$$function__20_ctrl_pressed->m_frame.f_lineno = 554;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 554;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_3:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
goto try_end_4;
// Return handler code:
try_return_handler_2:;
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
goto frame_return_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$function__20_ctrl_pressed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_base$$$function__20_ctrl_pressed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$function__20_ctrl_pressed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_base$$$function__20_ctrl_pressed,
    type_description_1,
    par_self,
    var_modifiers
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$_base$$$function__20_ctrl_pressed == cache_frame_frame_pynput$keyboard$_base$$$function__20_ctrl_pressed) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$_base$$$function__20_ctrl_pressed);
    cache_frame_frame_pynput$keyboard$_base$$$function__20_ctrl_pressed = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$_base$$$function__20_ctrl_pressed);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_modifiers);
CHECK_OBJECT(var_modifiers);
Py_DECREF(var_modifiers);
var_modifiers = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_modifiers);
var_modifiers = NULL;
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


static PyObject *impl_pynput$keyboard$_base$$$function__21_shift_pressed(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_modifiers = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_base$$$function__21_shift_pressed;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$_base$$$function__21_shift_pressed = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$_base$$$function__21_shift_pressed)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$_base$$$function__21_shift_pressed);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$_base$$$function__21_shift_pressed == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$_base$$$function__21_shift_pressed = MAKE_FUNCTION_FRAME(tstate, code_objects_65f3a7ddae70457892607938a4b91552, module_pynput$keyboard$_base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$_base$$$function__21_shift_pressed->m_type_description == NULL);
frame_frame_pynput$keyboard$_base$$$function__21_shift_pressed = cache_frame_frame_pynput$keyboard$_base$$$function__21_shift_pressed;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_base$$$function__21_shift_pressed);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_base$$$function__21_shift_pressed) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__caps_lock);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 564;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 564;
type_description_1 = "oo";
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
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_modifiers);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 567;
type_description_1 = "oo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_with_1__source;
    tmp_with_1__source = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_3 = tmp_with_1__source;
tmp_assign_source_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___exit__);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 567;
type_description_1 = "oo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_with_1__exit;
    tmp_with_1__exit = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_4 = tmp_with_1__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_4, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 567;
type_description_1 = "oo";
    goto try_except_handler_2;
}
frame_frame_pynput$keyboard$_base$$$function__21_shift_pressed->m_frame.f_lineno = 567;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 567;
type_description_1 = "oo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_with_1__enter;
    tmp_with_1__enter = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_5 = tmp_with_1__enter;
{
    PyObject *old = var_modifiers;
    var_modifiers = tmp_assign_source_5;
    Py_INCREF(var_modifiers);
    Py_XDECREF(old);
}

}
// Tried code:
// Tried code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__Key);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 568;
type_description_1 = "oo";
    goto try_except_handler_4;
}
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_shift);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 568;
type_description_1 = "oo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_modifiers);
tmp_cmp_expr_right_1 = var_modifiers;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 568;
type_description_1 = "oo";
    goto try_except_handler_4;
}
tmp_return_value = (tmp_res == 1) ? Py_True : Py_False;
Py_INCREF(tmp_return_value);
goto try_return_handler_3;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$function__21_shift_pressed, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$function__21_shift_pressed, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_2 = PyExc_BaseException;
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
nuitka_bool tmp_assign_source_6;
tmp_assign_source_6 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_6;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_2 = tmp_with_1__exit;
tmp_args_element_value_1 = EXC_TYPE(tstate);
tmp_args_element_value_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_2); 
tmp_args_element_value_3 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_3 == NULL) {
    tmp_args_element_value_3 = Py_None;
}
frame_frame_pynput$keyboard$_base$$$function__21_shift_pressed->m_frame.f_lineno = 567;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 567;
type_description_1 = "oo";
    goto try_except_handler_5;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 567;
type_description_1 = "oo";
    goto try_except_handler_5;
}
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 567;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pynput$keyboard$_base$$$function__21_shift_pressed->m_frame)) {
        frame_frame_pynput$keyboard$_base$$$function__21_shift_pressed->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_5;
branch_no_3:;
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 567;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pynput$keyboard$_base$$$function__21_shift_pressed->m_frame)) {
        frame_frame_pynput$keyboard$_base$$$function__21_shift_pressed->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_5;
branch_end_2:;
goto try_end_1;
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
try_end_1:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
goto try_end_3;
// Return handler code:
try_return_handler_3:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_3 = tmp_with_1__exit;
frame_frame_pynput$keyboard$_base$$$function__21_shift_pressed->m_frame.f_lineno = 567;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_3, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 567;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

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
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_pynput$keyboard$_base$$$function__21_shift_pressed->m_frame.f_lineno = 567;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 567;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
goto try_end_4;
// Return handler code:
try_return_handler_2:;
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
goto frame_return_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$function__21_shift_pressed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_base$$$function__21_shift_pressed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$function__21_shift_pressed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_base$$$function__21_shift_pressed,
    type_description_1,
    par_self,
    var_modifiers
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$_base$$$function__21_shift_pressed == cache_frame_frame_pynput$keyboard$_base$$$function__21_shift_pressed) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$_base$$$function__21_shift_pressed);
    cache_frame_frame_pynput$keyboard$_base$$$function__21_shift_pressed = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$_base$$$function__21_shift_pressed);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_modifiers);
var_modifiers = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_modifiers);
var_modifiers = NULL;
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


static PyObject *impl_pynput$keyboard$_base$$$function__22__resolve(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_key = python_pars[1];
PyObject *tmp_genexpr_1__$0 = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_base$$$function__22__resolve;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$_base$$$function__22__resolve = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$_base$$$function__22__resolve)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$_base$$$function__22__resolve);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$_base$$$function__22__resolve == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$_base$$$function__22__resolve = MAKE_FUNCTION_FRAME(tstate, code_objects_bbb7c228841b2ecf437f301de333af9a, module_pynput$keyboard$_base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$_base$$$function__22__resolve->m_type_description == NULL);
frame_frame_pynput$keyboard$_base$$$function__22__resolve = cache_frame_frame_pynput$keyboard$_base$$$function__22__resolve;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_base$$$function__22__resolve);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_base$$$function__22__resolve) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_key);
tmp_cmp_expr_left_1 = par_key;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__Key);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 581;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 581;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_genexpr_1__$0;
    tmp_genexpr_1__$0 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_cmp_expr_right_1 = MAKE_GENERATOR_pynput$keyboard$_base$$$function__22__resolve$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 581;
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
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_key);
tmp_expression_value_2 = par_key;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_value);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 582;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_key);
tmp_isinstance_inst_1 = par_key;
tmp_expression_value_3 = module_var_accessor_pynput$keyboard$_base$six(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_six);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 585;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_string_types);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 585;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 585;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
nuitka_digit tmp_cmp_expr_right_2;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_key);
tmp_len_arg_1 = par_key;
tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 586;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = 1;
tmp_condition_result_3 = RICH_COMPARE_NE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
CHECK_OBJECT(par_key);
tmp_make_exception_arg_1 = par_key;
frame_frame_pynput$keyboard$_base$$$function__22__resolve->m_frame.f_lineno = 587;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 587;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__KeyCode);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 588;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_key);
tmp_args_element_value_1 = par_key;
frame_frame_pynput$keyboard$_base$$$function__22__resolve->m_frame.f_lineno = 588;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_from_char, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 588;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_key);
tmp_isinstance_inst_2 = par_key;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__KeyCode);
if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 591;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_cls_2);
Py_DECREF(tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 591;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
nuitka_bool tmp_condition_result_5;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_key);
tmp_expression_value_6 = par_key;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_char);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 592;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_shift_pressed);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 592;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 592;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_condition_result_5 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_5 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__KeyCode);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_key);
tmp_expression_value_9 = par_key;
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_vk);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 593;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_key);
tmp_expression_value_11 = par_key;
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_char);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 593;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_upper);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 593;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$keyboard$_base$$$function__22__resolve->m_frame.f_lineno = 593;
tmp_kw_call_value_1_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 593;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$keyboard$_base$$$function__22__resolve->m_frame.f_lineno = 593;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_vk_str_plain_char_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_5;
branch_no_5:;
CHECK_OBJECT(par_key);
tmp_return_value = par_key;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_end_5:;
branch_no_4:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$function__22__resolve, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_base$$$function__22__resolve->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$function__22__resolve, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_base$$$function__22__resolve,
    type_description_1,
    par_self,
    par_key
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$_base$$$function__22__resolve == cache_frame_frame_pynput$keyboard$_base$$$function__22__resolve) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$_base$$$function__22__resolve);
    cache_frame_frame_pynput$keyboard$_base$$$function__22__resolve = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$_base$$$function__22__resolve);

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



#if 1
struct pynput$keyboard$_base$$$function__22__resolve$$$genexpr__1_genexpr_locals {
PyObject *var_k;
PyObject *tmp_iter_value_0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *pynput$keyboard$_base$$$function__22__resolve$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct pynput$keyboard$_base$$$function__22__resolve$$$genexpr__1_genexpr_locals *generator_heap = (struct pynput$keyboard$_base$$$function__22__resolve$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_k = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_2d5336fcc8445846fc378348355355cb, module_pynput$keyboard$_base, sizeof(void *)+sizeof(void *));
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
generator_heap->type_description_1 = "No";
generator_heap->exception_lineno = 581;
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
    PyObject *old = generator_heap->var_k;
    generator_heap->var_k = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_k);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_k);
tmp_expression_value_1 = generator_heap->var_k;
Py_INCREF(tmp_expression_value_1);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 581;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 581;
generator_heap->type_description_1 = "No";
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
    generator_heap->var_k
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

Py_XDECREF(generator_heap->var_k);
generator_heap->var_k = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_k);
generator_heap->var_k = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_pynput$keyboard$_base$$$function__22__resolve$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        pynput$keyboard$_base$$$function__22__resolve$$$genexpr__1_genexpr_context,
        module_pynput$keyboard$_base,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_dedd3afef694a9bbd9f6a8f92417d2fa,
#endif
        code_objects_2d5336fcc8445846fc378348355355cb,
        closure,
        1,
#if 1
        sizeof(struct pynput$keyboard$_base$$$function__22__resolve$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_pynput$keyboard$_base$$$function__23__update_modifiers(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_key = python_pars[1];
PyObject *par_is_press = python_pars[2];
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_base$$$function__23__update_modifiers;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$_base$$$function__23__update_modifiers = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$_base$$$function__23__update_modifiers)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$_base$$$function__23__update_modifiers);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$_base$$$function__23__update_modifiers == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$_base$$$function__23__update_modifiers = MAKE_FUNCTION_FRAME(tstate, code_objects_e1e524cee66482896185c9e8b60012c0, module_pynput$keyboard$_base, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$_base$$$function__23__update_modifiers->m_type_description == NULL);
frame_frame_pynput$keyboard$_base$$$function__23__update_modifiers = cache_frame_frame_pynput$keyboard$_base$$$function__23__update_modifiers;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_base$$$function__23__update_modifiers);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_base$$$function__23__update_modifiers) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_key);
tmp_args_element_value_1 = par_key;
frame_frame_pynput$keyboard$_base$$$function__23__update_modifiers->m_frame.f_lineno = 605;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__as_modifier, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 605;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 605;
type_description_1 = "ooo";
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
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__modifiers_lock);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 606;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
{
    PyObject *old = tmp_with_1__source;
    tmp_with_1__source = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_assign_source_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 606;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
{
    PyObject *old = tmp_with_1__exit;
    tmp_with_1__exit = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_3 = tmp_with_1__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 606;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
frame_frame_pynput$keyboard$_base$$$function__23__update_modifiers->m_frame.f_lineno = 606;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 606;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
{
    PyObject *old = tmp_with_1__enter;
    tmp_with_1__enter = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_4;
}
// Tried code:
// Tried code:
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_is_press);
tmp_truth_name_2 = CHECK_IF_TRUE(par_is_press);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;
type_description_1 = "ooo";
    goto try_except_handler_3;
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
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__modifiers);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 608;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_key);
tmp_args_element_value_2 = par_key;
frame_frame_pynput$keyboard$_base$$$function__23__update_modifiers->m_frame.f_lineno = 608;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_add, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 608;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
goto branch_end_2;
branch_no_2:;
// Tried code:
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__modifiers);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 611;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_remove);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 611;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_key);
tmp_args_element_value_3 = par_key;
frame_frame_pynput$keyboard$_base$$$function__23__update_modifiers->m_frame.f_lineno = 611;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 611;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$function__23__update_modifiers, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$function__23__update_modifiers, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_KeyError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 610;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pynput$keyboard$_base$$$function__23__update_modifiers->m_frame)) {
        frame_frame_pynput$keyboard$_base$$$function__23__update_modifiers->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_5;
branch_no_3:;
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
branch_end_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$function__23__update_modifiers, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$function__23__update_modifiers, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
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
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_5;
}
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_3 = tmp_with_1__exit;
tmp_args_element_value_4 = EXC_TYPE(tstate);
tmp_args_element_value_5 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_5); 
tmp_args_element_value_6 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_6 == NULL) {
    tmp_args_element_value_6 = Py_None;
}
frame_frame_pynput$keyboard$_base$$$function__23__update_modifiers->m_frame.f_lineno = 606;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 606;
type_description_1 = "ooo";
    goto try_except_handler_6;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 606;
type_description_1 = "ooo";
    goto try_except_handler_6;
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
    exception_lineno = 606;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pynput$keyboard$_base$$$function__23__update_modifiers->m_frame)) {
        frame_frame_pynput$keyboard$_base$$$function__23__update_modifiers->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_6;
branch_no_5:;
goto branch_end_4;
branch_no_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 606;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pynput$keyboard$_base$$$function__23__update_modifiers->m_frame)) {
        frame_frame_pynput$keyboard$_base$$$function__23__update_modifiers->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_6;
branch_end_4:;
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_2;
// End of try:
try_end_4:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
goto try_end_5;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_6;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_6 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_4;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_pynput$keyboard$_base$$$function__23__update_modifiers->m_frame.f_lineno = 606;
tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_5);

exception_lineno = 606;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_6:;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_1;
// End of try:
try_end_5:;
{
bool tmp_condition_result_7;
nuitka_bool tmp_cmp_expr_left_4;
nuitka_bool tmp_cmp_expr_right_4;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_4 = tmp_with_1__indicator;
tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
tmp_condition_result_7 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_5;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
frame_frame_pynput$keyboard$_base$$$function__23__update_modifiers->m_frame.f_lineno = 606;
tmp_call_result_5 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 606;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_no_7:;
goto try_end_6;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
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
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$function__23__update_modifiers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_base$$$function__23__update_modifiers->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$function__23__update_modifiers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_base$$$function__23__update_modifiers,
    type_description_1,
    par_self,
    par_key,
    par_is_press
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$_base$$$function__23__update_modifiers == cache_frame_frame_pynput$keyboard$_base$$$function__23__update_modifiers) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$_base$$$function__23__update_modifiers);
    cache_frame_frame_pynput$keyboard$_base$$$function__23__update_modifiers = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$_base$$$function__23__update_modifiers);

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


static PyObject *impl_pynput$keyboard$_base$$$function__24__as_modifier(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_key = python_pars[1];
PyObject *var__NORMAL_MODIFIERS = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_base$$$function__24__as_modifier;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$_base$$$function__24__as_modifier = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$_base$$$function__24__as_modifier)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$_base$$$function__24__as_modifier);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$_base$$$function__24__as_modifier == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$_base$$$function__24__as_modifier = MAKE_FUNCTION_FRAME(tstate, code_objects_00e6d5492578cbebcddfa68246a2914c, module_pynput$keyboard$_base, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$_base$$$function__24__as_modifier->m_type_description == NULL);
frame_frame_pynput$keyboard$_base$$$function__24__as_modifier = cache_frame_frame_pynput$keyboard$_base$$$function__24__as_modifier;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_base$$$function__24__as_modifier);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_base$$$function__24__as_modifier) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = const_str_empty;
tmp_globals_arg_value_1 = (PyObject *)moduledict_pynput$keyboard$_base;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain__NORMAL_MODIFIERS_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_pynput$keyboard$_base$$$function__24__as_modifier->m_frame.f_lineno = 626;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 626;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_pynput$keyboard$_base,
        mod_consts.const_str_plain__NORMAL_MODIFIERS,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain__NORMAL_MODIFIERS);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 626;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var__NORMAL_MODIFIERS;
    var__NORMAL_MODIFIERS = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var__NORMAL_MODIFIERS);
tmp_expression_value_1 = var__NORMAL_MODIFIERS;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 628;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_key);
tmp_args_element_value_1 = par_key;
tmp_args_element_value_2 = Py_None;
frame_frame_pynput$keyboard$_base$$$function__24__as_modifier->m_frame.f_lineno = 628;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 628;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$function__24__as_modifier, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_base$$$function__24__as_modifier->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$function__24__as_modifier, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_base$$$function__24__as_modifier,
    type_description_1,
    par_self,
    par_key,
    var__NORMAL_MODIFIERS
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$_base$$$function__24__as_modifier == cache_frame_frame_pynput$keyboard$_base$$$function__24__as_modifier) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$_base$$$function__24__as_modifier);
    cache_frame_frame_pynput$keyboard$_base$$$function__24__as_modifier = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$_base$$$function__24__as_modifier);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var__NORMAL_MODIFIERS);
CHECK_OBJECT(var__NORMAL_MODIFIERS);
Py_DECREF(var__NORMAL_MODIFIERS);
var__NORMAL_MODIFIERS = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var__NORMAL_MODIFIERS);
var__NORMAL_MODIFIERS = NULL;
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


static PyObject *impl_pynput$keyboard$_base$$$function__25__handle(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_key = python_pars[1];
PyObject *par_is_press = python_pars[2];
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_base$$$function__25__handle;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$_base$$$function__25__handle = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$_base$$$function__25__handle)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$_base$$$function__25__handle);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$_base$$$function__25__handle == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$_base$$$function__25__handle = MAKE_FUNCTION_FRAME(tstate, code_objects_3ec2c891b97bd04a277ba04ebf853cb6, module_pynput$keyboard$_base, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$_base$$$function__25__handle->m_type_description == NULL);
frame_frame_pynput$keyboard$_base$$$function__25__handle = cache_frame_frame_pynput$keyboard$_base$$$function__25__handle;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_base$$$function__25__handle);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_base$$$function__25__handle) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
frame_frame_pynput$keyboard$_base$$$function__25__handle->m_frame.f_lineno = 640;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_NotImplementedError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 640;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$function__25__handle, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_base$$$function__25__handle->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$function__25__handle, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_base$$$function__25__handle,
    type_description_1,
    par_self,
    par_key,
    par_is_press
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$_base$$$function__25__handle == cache_frame_frame_pynput$keyboard$_base$$$function__25__handle) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$_base$$$function__25__handle);
    cache_frame_frame_pynput$keyboard$_base$$$function__25__handle = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$_base$$$function__25__handle);

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
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
CHECK_OBJECT(par_is_press);
Py_DECREF(par_is_press);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_pynput$keyboard$_base$$$function__26___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_on_press = python_pars[1];
PyObject *par_on_release = python_pars[2];
PyObject *par_suppress = python_pars[3];
PyObject *par_kwargs = python_pars[4];
PyObject *var_option_prefix = NULL;
PyObject *outline_0_var_key = NULL;
PyObject *outline_0_var_value = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_dictcontraction_1__$0 = NULL;
PyObject *tmp_dictcontraction_1__contraction = NULL;
PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_base$$$function__26___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$_base$$$function__26___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$_base$$$function__26___init__)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$_base$$$function__26___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$_base$$$function__26___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$_base$$$function__26___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_5b1f0458ba8eb95ee47d151443b6625c, module_pynput$keyboard$_base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$_base$$$function__26___init__->m_type_description == NULL);
frame_frame_pynput$keyboard$_base$$$function__26___init__ = cache_frame_frame_pynput$keyboard$_base$$$function__26___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_base$$$function__26___init__);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_base$$$function__26___init__) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_called_value_1 = module_var_accessor_pynput$keyboard$_base$_logger(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__logger);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 725;
type_description_1 = "ooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 725;
type_description_1 = "ooooooN";
    goto frame_exception_exit_1;
}
frame_frame_pynput$keyboard$_base$$$function__26___init__->m_frame.f_lineno = 725;
tmp_ass_attr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_ass_attr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 725;
type_description_1 = "ooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__log, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_value_1);
Py_DECREF(tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 725;
type_description_1 = "ooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_2;
tmp_called_value_2 = module_var_accessor_pynput$keyboard$_base$prefix(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_prefix);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 726;
type_description_1 = "ooooooN";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_pynput$keyboard$_base$Listener(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Listener);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 726;
type_description_1 = "ooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_2);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 726;
type_description_1 = "ooooooN";
    goto frame_exception_exit_1;
}
frame_frame_pynput$keyboard$_base$$$function__26___init__->m_frame.f_lineno = 726;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 726;
type_description_1 = "ooooooN";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_option_prefix;
    var_option_prefix = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_ass_attr_target_2;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_dict_arg_1;
CHECK_OBJECT(par_kwargs);
tmp_dict_arg_1 = par_kwargs;
tmp_iter_arg_1 = DICT_ITERITEMS(tstate, tmp_dict_arg_1);
assert(!(tmp_iter_arg_1 == NULL));
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 729;
type_description_1 = "ooooooN";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_dictcontraction_1__$0;
    tmp_dictcontraction_1__$0 = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = tmp_dictcontraction_1__contraction;
    tmp_dictcontraction_1__contraction = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
tmp_next_source_1 = tmp_dictcontraction_1__$0;
tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooN";
exception_lineno = 727;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_dictcontraction_1__iter_value_0;
    tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
tmp_iter_arg_2 = tmp_dictcontraction_1__iter_value_0;
tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 729;
type_description_1 = "ooooooN";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
    tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 729;
type_description_1 = "ooooooN";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
    tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 729;
type_description_1 = "ooooooN";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
    tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_7;
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



exception_lineno = 729;
type_description_1 = "ooooooN";
    goto try_except_handler_5;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_4;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_assign_source_8 = tmp_dictcontraction$tuple_unpack_1__element_1;
{
    PyObject *old = outline_0_var_key;
    outline_0_var_key = tmp_assign_source_8;
    Py_INCREF(outline_0_var_key);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_assign_source_9 = tmp_dictcontraction$tuple_unpack_1__element_2;
{
    PyObject *old = outline_0_var_value;
    outline_0_var_value = tmp_assign_source_9;
    Py_INCREF(outline_0_var_value);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_4;
int tmp_truth_name_1;
CHECK_OBJECT(outline_0_var_key);
tmp_expression_value_3 = outline_0_var_key;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_startswith);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 730;
type_description_1 = "ooooooN";
    goto try_except_handler_3;
}
if (var_option_prefix == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_option_prefix);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 730;
type_description_1 = "ooooooN";
    goto try_except_handler_3;
}

tmp_args_element_value_4 = var_option_prefix;
frame_frame_pynput$keyboard$_base$$$function__26___init__->m_frame.f_lineno = 730;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 730;
type_description_1 = "ooooooN";
    goto try_except_handler_3;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 730;
type_description_1 = "ooooooN";
    goto try_except_handler_3;
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
PyObject *tmp_dictset38_key_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
PyObject *tmp_start_value_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_stop_value_1;
PyObject *tmp_dictset38_value_1;
PyObject *tmp_dictset38_dict_1;
CHECK_OBJECT(outline_0_var_key);
tmp_expression_value_4 = outline_0_var_key;
if (var_option_prefix == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_option_prefix);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 728;
type_description_1 = "ooooooN";
    goto try_except_handler_3;
}

tmp_len_arg_1 = var_option_prefix;
tmp_start_value_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_start_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 728;
type_description_1 = "ooooooN";
    goto try_except_handler_3;
}
tmp_stop_value_1 = Py_None;
tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
CHECK_OBJECT(tmp_start_value_1);
Py_DECREF(tmp_start_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_dictset38_key_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_dictset38_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 728;
type_description_1 = "ooooooN";
    goto try_except_handler_3;
}
CHECK_OBJECT(outline_0_var_value);
tmp_dictset38_value_1 = outline_0_var_value;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
assert(PyDict_CheckExact(tmp_dictset38_dict_1));
tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

CHECK_OBJECT(tmp_dictset38_key_1);
Py_DECREF(tmp_dictset38_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 727;
type_description_1 = "ooooooN";
    goto try_except_handler_3;
}
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 727;
type_description_1 = "ooooooN";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_ass_attr_value_2 = tmp_dictcontraction_1__contraction;
Py_INCREF(tmp_ass_attr_value_2);
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
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
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
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
Py_XDECREF(outline_0_var_key);
outline_0_var_key = NULL;
Py_XDECREF(outline_0_var_value);
outline_0_var_value = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
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
exception_lineno = 727;
goto frame_exception_exit_1;
outline_result_1:;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain__options, tmp_ass_attr_value_2);
CHECK_OBJECT(tmp_ass_attr_value_2);
Py_DECREF(tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 727;
type_description_1 = "ooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_2;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_kw_call_value_2_1;
tmp_type_arg_value_1 = module_var_accessor_pynput$keyboard$_base$Listener(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Listener);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 732;
type_description_1 = "ooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_5 = BUILTIN_SUPER2(tstate, moduledict_pynput$keyboard$_base, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 732;
type_description_1 = "ooooooN";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 732;
type_description_1 = "ooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_on_press);
tmp_args_element_value_5 = par_on_press;
tmp_args_element_value_6 = mod_consts.const_int_pos_2;
frame_frame_pynput$keyboard$_base$$$function__26___init__->m_frame.f_lineno = 733;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_kw_call_value_0_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain__wrap,
        call_args
    );
}

if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 733;
type_description_1 = "ooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(par_on_release);
tmp_args_element_value_7 = par_on_release;
tmp_args_element_value_8 = mod_consts.const_int_pos_2;
frame_frame_pynput$keyboard$_base$$$function__26___init__->m_frame.f_lineno = 734;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_kw_call_value_1_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain__wrap,
        call_args
    );
}

if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 734;
type_description_1 = "ooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_suppress);
tmp_kw_call_value_2_1 = par_suppress;
frame_frame_pynput$keyboard$_base$$$function__26___init__->m_frame.f_lineno = 732;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

    tmp_call_result_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, kw_values, mod_consts.const_tuple_str_plain_on_press_str_plain_on_release_str_plain_suppress_tuple);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 732;
type_description_1 = "ooooooN";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$function__26___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_base$$$function__26___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$function__26___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_base$$$function__26___init__,
    type_description_1,
    par_self,
    par_on_press,
    par_on_release,
    par_suppress,
    par_kwargs,
    var_option_prefix,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$_base$$$function__26___init__ == cache_frame_frame_pynput$keyboard$_base$$$function__26___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$_base$$$function__26___init__);
    cache_frame_frame_pynput$keyboard$_base$$$function__26___init__ = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$_base$$$function__26___init__);

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
Py_XDECREF(var_option_prefix);
var_option_prefix = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_option_prefix);
var_option_prefix = NULL;
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
CHECK_OBJECT(par_on_press);
Py_DECREF(par_on_press);
CHECK_OBJECT(par_on_release);
Py_DECREF(par_on_release);
CHECK_OBJECT(par_suppress);
Py_DECREF(par_suppress);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_on_press);
Py_DECREF(par_on_press);
CHECK_OBJECT(par_on_release);
Py_DECREF(par_on_release);
CHECK_OBJECT(par_suppress);
Py_DECREF(par_suppress);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pynput$keyboard$_base$$$function__27_canonical(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_key = python_pars[1];
PyObject *var_Key = NULL;
PyObject *var_KeyCode = NULL;
PyObject *var__NORMAL_MODIFIERS = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_base$$$function__27_canonical;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pynput$keyboard$_base$$$function__27_canonical = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pynput$keyboard$_base$$$function__27_canonical)) {
    Py_XDECREF(cache_frame_frame_pynput$keyboard$_base$$$function__27_canonical);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pynput$keyboard$_base$$$function__27_canonical == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pynput$keyboard$_base$$$function__27_canonical = MAKE_FUNCTION_FRAME(tstate, code_objects_20d6b6e858f1bbce7207320377452abe, module_pynput$keyboard$_base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pynput$keyboard$_base$$$function__27_canonical->m_type_description == NULL);
frame_frame_pynput$keyboard$_base$$$function__27_canonical = cache_frame_frame_pynput$keyboard$_base$$$function__27_canonical;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_base$$$function__27_canonical);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_base$$$function__27_canonical) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_f4a9d444dae7988f006080c97c8628eb;
tmp_globals_arg_value_1 = (PyObject *)moduledict_pynput$keyboard$_base;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Key_str_plain_KeyCode_str_plain__NORMAL_MODIFIERS_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_pynput$keyboard$_base$$$function__27_canonical->m_frame.f_lineno = 756;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 756;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_import_from_1__module;
    tmp_import_from_1__module = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_pynput$keyboard$_base,
        mod_consts.const_str_plain_Key,
        const_int_0
    );
} else {
    tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Key);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 756;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_Key;
    var_Key = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_pynput$keyboard$_base,
        mod_consts.const_str_plain_KeyCode,
        const_int_0
    );
} else {
    tmp_assign_source_3 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_KeyCode);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 756;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_KeyCode;
    var_KeyCode = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_pynput$keyboard$_base,
        mod_consts.const_str_plain__NORMAL_MODIFIERS,
        const_int_0
    );
} else {
    tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain__NORMAL_MODIFIERS);
}

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 756;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var__NORMAL_MODIFIERS;
    var__NORMAL_MODIFIERS = tmp_assign_source_4;
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
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_key);
tmp_isinstance_inst_1 = par_key;
CHECK_OBJECT(var_KeyCode);
tmp_isinstance_cls_1 = var_KeyCode;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 758;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 758;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_key);
tmp_expression_value_1 = par_key;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_char);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 758;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_and_right_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_KeyCode);
tmp_expression_value_2 = var_KeyCode;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_from_char);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 759;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_key);
tmp_expression_value_4 = par_key;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_char);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 759;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_lower);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 759;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$keyboard$_base$$$function__27_canonical->m_frame.f_lineno = 759;
tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 759;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$keyboard$_base$$$function__27_canonical->m_frame.f_lineno = 759;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 759;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_key);
tmp_isinstance_inst_2 = par_key;
CHECK_OBJECT(var_Key);
tmp_isinstance_cls_2 = var_Key;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 760;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 760;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_key);
tmp_expression_value_5 = par_key;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_value);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 760;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var__NORMAL_MODIFIERS);
tmp_cmp_expr_right_2 = var__NORMAL_MODIFIERS;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 760;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_2 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_2 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var__NORMAL_MODIFIERS);
tmp_expression_value_6 = var__NORMAL_MODIFIERS;
CHECK_OBJECT(par_key);
tmp_expression_value_7 = par_key;
tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_value);
if (tmp_subscript_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 761;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 761;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
PyObject *tmp_isinstance_inst_3;
PyObject *tmp_isinstance_cls_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(par_key);
tmp_isinstance_inst_3 = par_key;
CHECK_OBJECT(var_Key);
tmp_isinstance_cls_3 = var_Key;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 762;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 762;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(par_key);
tmp_expression_value_9 = par_key;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_value);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 762;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_vk);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 762;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_and_right_value_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
tmp_condition_result_3 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_condition_result_3 = tmp_and_left_value_3;
and_end_3:;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(var_KeyCode);
tmp_expression_value_10 = var_KeyCode;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_from_vk);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 763;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_key);
tmp_expression_value_12 = par_key;
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_value);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 763;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_vk);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 763;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_pynput$keyboard$_base$$$function__27_canonical->m_frame.f_lineno = 763;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 763;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_3;
branch_no_3:;
CHECK_OBJECT(par_key);
tmp_return_value = par_key;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_end_3:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$function__27_canonical, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_base$$$function__27_canonical->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$function__27_canonical, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_base$$$function__27_canonical,
    type_description_1,
    par_self,
    par_key,
    var_Key,
    var_KeyCode,
    var__NORMAL_MODIFIERS
);


// Release cached frame if used for exception.
if (frame_frame_pynput$keyboard$_base$$$function__27_canonical == cache_frame_frame_pynput$keyboard$_base$$$function__27_canonical) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pynput$keyboard$_base$$$function__27_canonical);
    cache_frame_frame_pynput$keyboard$_base$$$function__27_canonical = NULL;
}

assertFrameObject(frame_frame_pynput$keyboard$_base$$$function__27_canonical);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_Key);
CHECK_OBJECT(var_Key);
Py_DECREF(var_Key);
var_Key = NULL;
CHECK_OBJECT(var_KeyCode);
CHECK_OBJECT(var_KeyCode);
Py_DECREF(var_KeyCode);
var_KeyCode = NULL;
CHECK_OBJECT(var__NORMAL_MODIFIERS);
CHECK_OBJECT(var__NORMAL_MODIFIERS);
Py_DECREF(var__NORMAL_MODIFIERS);
var__NORMAL_MODIFIERS = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_Key);
var_Key = NULL;
Py_XDECREF(var_KeyCode);
var_KeyCode = NULL;
Py_XDECREF(var__NORMAL_MODIFIERS);
var__NORMAL_MODIFIERS = NULL;
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



static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__10___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_base$$$function__10___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b927199d85c7cd7a86dce88997eeb880,
#endif
        code_objects_1284d76c3d46af0ed7a6d5122fa346d8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_base,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__11_press(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_base$$$function__11_press,
        mod_consts.const_str_plain_press,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6a3d06875a0ae874cc49505612b8c38a,
#endif
        code_objects_b3c5c8a466f25b32503a1a272a2705e1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_base,
        mod_consts.const_str_digest_5357d86fdb528f369bb4cbf536afc75f,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__12_release(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_base$$$function__12_release,
        mod_consts.const_str_plain_release,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0614c73af5837b862271dc29da9f4ae2,
#endif
        code_objects_45b38bb0f17e4c46216bf515841bb085,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_base,
        mod_consts.const_str_digest_4d5c44f1715c738ab1477c1104b4dc72,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__13_tap(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_base$$$function__13_tap,
        mod_consts.const_str_plain_tap,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e908f0b6b690801b1f88ea5b8dcd8a9a,
#endif
        code_objects_d1569303188a3e44397b139c2e1cb508,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_base,
        mod_consts.const_str_digest_f5f1371004fd2c03864a121c881eac70,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__14_touch(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_base$$$function__14_touch,
        mod_consts.const_str_plain_touch,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1a77c8df5a5cb2c0fbe808cc0ced8231,
#endif
        code_objects_9f3833606e00dd44cd3ec63905ee886a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_base,
        mod_consts.const_str_digest_ff8be095bf80f0e27c0770ec6d5536e7,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__15_pressed(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_base$$$function__15_pressed,
        mod_consts.const_str_plain_pressed,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7a654b074c875cd7fa4e884a9ee3305d,
#endif
        code_objects_4d64d12aeb27aff10d585f221e64f7dc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_base,
        mod_consts.const_str_digest_8f733b5107c7c1418b3d02ca4063735a,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__16_type(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_base$$$function__16_type,
        const_str_plain_type,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_292adef0d5bb49269aff45e42b5df1f9,
#endif
        code_objects_e256aacdcf5df3d6985f444687d7f581,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_base,
        mod_consts.const_str_digest_4b5429c6ae493bbbf1f31b16dba63ce7,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__17_modifiers(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_base$$$function__17_modifiers,
        mod_consts.const_str_plain_modifiers,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0f69ada8c0fd8406fc679dca9d5b7efb,
#endif
        code_objects_eb1ff990ec0725518c6c78a0ebf00264,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_base,
        mod_consts.const_str_digest_411c33fbbf064714d13e4ead8e55648e,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__18_alt_pressed(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_base$$$function__18_alt_pressed,
        mod_consts.const_str_plain_alt_pressed,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a1d752b8925dc206ef93154d07a4136a,
#endif
        code_objects_23a5f8271f2c60c2133eb1c3da3b13fb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_base,
        mod_consts.const_str_digest_581e2c5b206a1667b97e60d00f588914,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__19_alt_gr_pressed(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_base$$$function__19_alt_gr_pressed,
        mod_consts.const_str_plain_alt_gr_pressed,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_96c669989794fc4c7dc951847f3aeba1,
#endif
        code_objects_8b8ed972ed7120bdd26f059e72138c1a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_base,
        mod_consts.const_str_digest_7a44fc0705a1785d7fa3a3e0b5a89543,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__1___init__(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_base$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5b96c739e714ad7ce446e8f89a7125f4,
#endif
        code_objects_46e1da89c974af8917e92e8076324d34,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_base,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__20_ctrl_pressed(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_base$$$function__20_ctrl_pressed,
        mod_consts.const_str_plain_ctrl_pressed,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_33c989cadf517202a443ea2ad90911c3,
#endif
        code_objects_eb80d8221a0eb8273d8f2d1892e97369,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_base,
        mod_consts.const_str_digest_a089a8fcca43f085bf0996470ee9aaee,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__21_shift_pressed(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_base$$$function__21_shift_pressed,
        mod_consts.const_str_plain_shift_pressed,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_07e820da1d45207ad830389e59de8fc1,
#endif
        code_objects_65f3a7ddae70457892607938a4b91552,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_base,
        mod_consts.const_str_digest_778bf2157220734f3e1ca49144aea923,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__22__resolve(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_base$$$function__22__resolve,
        mod_consts.const_str_plain__resolve,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_18c025eec62fdadb628360c312bb5efd,
#endif
        code_objects_bbb7c228841b2ecf437f301de333af9a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_base,
        mod_consts.const_str_digest_d5f2b65fc1620a169f17429bf47cdc16,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__23__update_modifiers(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_base$$$function__23__update_modifiers,
        mod_consts.const_str_plain__update_modifiers,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_934ffbc715f089b2d637e813cd7b8a9e,
#endif
        code_objects_e1e524cee66482896185c9e8b60012c0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_base,
        mod_consts.const_str_digest_30c59fa0df14a05e2ca88490b7a7c72e,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__24__as_modifier(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_base$$$function__24__as_modifier,
        mod_consts.const_str_plain__as_modifier,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dd6b2f333bf54db48d767dcaf29e4e11,
#endif
        code_objects_00e6d5492578cbebcddfa68246a2914c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_base,
        mod_consts.const_str_digest_ff49492fb98ce321aecc5b366aaf2d18,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__25__handle(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_base$$$function__25__handle,
        mod_consts.const_str_plain__handle,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d2e5724cf7b5fadd38e435af2aefd902,
#endif
        code_objects_3ec2c891b97bd04a277ba04ebf853cb6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_base,
        mod_consts.const_str_digest_df9c473e3d718724b66a1fb733b46820,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__26___init__(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_base$$$function__26___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8e366a1ab068a492ddad2c2681ebc3cc,
#endif
        code_objects_5b1f0458ba8eb95ee47d151443b6625c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_base,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__27_canonical(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_base$$$function__27_canonical,
        mod_consts.const_str_plain_canonical,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_59de3149ee5e955c4900936673b5a8c3,
#endif
        code_objects_20d6b6e858f1bbce7207320377452abe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_base,
        mod_consts.const_str_digest_3b7ebd82fde0d8bbc5e465f9323ea066,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__2___repr__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_base$$$function__2___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4990e54b6d9d2f293acf1c6ba0630d20,
#endif
        code_objects_3e93b89ecb4a6adb4cca62f59c32131c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_base,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__3___str__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_base$$$function__3___str__,
        mod_consts.const_str_plain___str__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ea307985ee68d878d543c5fcbebb08f8,
#endif
        code_objects_783b8696b722508bf39a28833d0183a1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_base,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__4___eq__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_base$$$function__4___eq__,
        mod_consts.const_str_plain___eq__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_19056f6749f39c06071a6dd90d630f38,
#endif
        code_objects_680955316a129f6233f3f1b0e6673b31,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_base,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__5___hash__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_base$$$function__5___hash__,
        mod_consts.const_str_plain___hash__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_214b436c27d90ac99d3294a5f7b1fc8e,
#endif
        code_objects_77b4251d3eddd035311566610978c24e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_base,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__6_join(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_base$$$function__6_join,
        mod_consts.const_str_plain_join,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b622b1fd9b26c6abd752385387f10fe5,
#endif
        code_objects_722c54987a3acde1e1982372c8aab89a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_base,
        mod_consts.const_str_digest_e60a8c1d7b3184c881b61ba89c681c5a,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__7_from_vk(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_base$$$function__7_from_vk,
        mod_consts.const_str_plain_from_vk,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_cc5e6419872a0d9594b7fc0de36e47bb,
#endif
        code_objects_12642493d8875b3a12bab55fe364c8ec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_base,
        mod_consts.const_str_digest_d794b56377271672b7f19e862167c5b4,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__8_from_char(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_base$$$function__8_from_char,
        mod_consts.const_str_plain_from_char,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b4241f7130092b60ff602941137f7702,
#endif
        code_objects_6d731dd7bee0e6a5ee797df793ab5781,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_base,
        mod_consts.const_str_digest_1e669dfefa7390902cf9eedb3efa23dc,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pynput$keyboard$_base$$$function__9_from_dead(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pynput$keyboard$_base$$$function__9_from_dead,
        mod_consts.const_str_plain_from_dead,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_12f83a24556f36989c9d41a30e36331d,
#endif
        code_objects_7343a8d002c39b36df98480ce88869f5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pynput$keyboard$_base,
        mod_consts.const_str_digest_5b6abc36e5e17eb22c40e871534892d7,
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

static function_impl_code const function_table_pynput$keyboard$_base[] = {
impl_pynput$keyboard$_base$$$function__1___init__,
impl_pynput$keyboard$_base$$$function__2___repr__,
impl_pynput$keyboard$_base$$$function__3___str__,
impl_pynput$keyboard$_base$$$function__4___eq__,
impl_pynput$keyboard$_base$$$function__5___hash__,
impl_pynput$keyboard$_base$$$function__6_join,
impl_pynput$keyboard$_base$$$function__7_from_vk,
impl_pynput$keyboard$_base$$$function__8_from_char,
impl_pynput$keyboard$_base$$$function__9_from_dead,
impl_pynput$keyboard$_base$$$function__10___init__,
impl_pynput$keyboard$_base$$$function__11_press,
impl_pynput$keyboard$_base$$$function__12_release,
impl_pynput$keyboard$_base$$$function__13_tap,
impl_pynput$keyboard$_base$$$function__14_touch,
impl_pynput$keyboard$_base$$$function__15_pressed,
impl_pynput$keyboard$_base$$$function__16_type,
impl_pynput$keyboard$_base$$$function__17_modifiers,
impl_pynput$keyboard$_base$$$function__18_alt_pressed,
impl_pynput$keyboard$_base$$$function__19_alt_gr_pressed,
impl_pynput$keyboard$_base$$$function__20_ctrl_pressed,
impl_pynput$keyboard$_base$$$function__21_shift_pressed,
impl_pynput$keyboard$_base$$$function__22__resolve,
impl_pynput$keyboard$_base$$$function__23__update_modifiers,
impl_pynput$keyboard$_base$$$function__24__as_modifier,
impl_pynput$keyboard$_base$$$function__25__handle,
impl_pynput$keyboard$_base$$$function__26___init__,
impl_pynput$keyboard$_base$$$function__27_canonical,
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

    return Nuitka_Function_GetFunctionState(function, function_table_pynput$keyboard$_base);
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
        module_pynput$keyboard$_base,
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
        function_table_pynput$keyboard$_base,
        sizeof(function_table_pynput$keyboard$_base) / sizeof(function_impl_code)
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
static char const *module_full_name = "pynput.keyboard._base";
#endif

// Internal entry point for module code.
PyObject *module_code_pynput$keyboard$_base(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pynput$keyboard$_base");

    // Store the module for future use.
    module_pynput$keyboard$_base = module;

    moduledict_pynput$keyboard$_base = MODULE_DICT(module_pynput$keyboard$_base);

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
        PRINT_STRING("pynput$keyboard$_base: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("pynput$keyboard$_base: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pynput$keyboard$_base: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "pynput.keyboard._base" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initpynput$keyboard$_base\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_pynput$keyboard$_base,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pynput$keyboard$_base,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pynput$keyboard$_base,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pynput$keyboard$_base,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pynput$keyboard$_base,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pynput$keyboard$_base);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pynput$keyboard$_base);
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

        UPDATE_STRING_DICT1(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
PyObject *outline_4_var___class__ = NULL;
PyCellObject *outline_5_var___class__ = NULL;
PyObject *tmp_Controller$class_container$class_creation_1__bases = NULL;
PyObject *tmp_Controller$class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_Controller$class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_Controller$class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_Controller$class_container$class_creation_1__prepared = NULL;
PyObject *tmp_Controller$class_container$class_creation_2__bases = NULL;
PyObject *tmp_Controller$class_container$class_creation_2__bases_orig = NULL;
PyObject *tmp_Controller$class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_Controller$class_container$class_creation_2__metaclass = NULL;
PyObject *tmp_Controller$class_container$class_creation_2__prepared = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__bases = NULL;
PyObject *tmp_class_container$class_creation_2__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__metaclass = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_class_container$class_creation_3__bases = NULL;
PyObject *tmp_class_container$class_creation_3__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_3__metaclass = NULL;
PyObject *tmp_class_container$class_creation_3__prepared = NULL;
PyObject *tmp_class_container$class_creation_4__bases = NULL;
PyObject *tmp_class_container$class_creation_4__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_4__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_4__metaclass = NULL;
PyObject *tmp_class_container$class_creation_4__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_base;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_pynput$keyboard$_base$$$class__1_KeyCode_38 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_base$$$class__1_KeyCode_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *locals_pynput$keyboard$_base$$$class__2_Key_162 = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_base$$$class__2_Key_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
PyObject *locals_pynput$keyboard$_base$$$class__3_Controller_320 = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_base$$$class__3_Controller_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
PyObject *locals_pynput$keyboard$_base$$$class__4_InvalidKeyException_329 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
PyObject *locals_pynput$keyboard$_base$$$class__5_InvalidCharacterException_338 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
PyObject *locals_pynput$keyboard$_base$$$class__6_Listener_644 = NULL;
struct Nuitka_FrameObject *frame_frame_pynput$keyboard$_base$$$class__6_Listener_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_b91c90bc7081e6515f7d674b43042a01;
UPDATE_STRING_DICT0(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_pynput$keyboard$_base = MAKE_MODULE_FRAME(code_objects_7bbeffcca071b86d478b232afa35daa2, module_pynput$keyboard$_base);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_base);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_base) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_pynput$keyboard$_base$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_pynput$keyboard$_base$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_contextlib;
tmp_globals_arg_value_1 = (PyObject *)moduledict_pynput$keyboard$_base;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_pynput$keyboard$_base->m_frame.f_lineno = 27;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_enum;
tmp_globals_arg_value_2 = (PyObject *)moduledict_pynput$keyboard$_base;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_pynput$keyboard$_base->m_frame.f_lineno = 28;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_enum, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_threading;
tmp_globals_arg_value_3 = (PyObject *)moduledict_pynput$keyboard$_base;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_pynput$keyboard$_base->m_frame.f_lineno = 29;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_threading, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_unicodedata;
tmp_globals_arg_value_4 = (PyObject *)moduledict_pynput$keyboard$_base;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = Py_None;
tmp_level_value_4 = const_int_0;
frame_frame_pynput$keyboard$_base->m_frame.f_lineno = 30;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_unicodedata, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_six;
tmp_globals_arg_value_5 = (PyObject *)moduledict_pynput$keyboard$_base;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = Py_None;
tmp_level_value_5 = const_int_0;
frame_frame_pynput$keyboard$_base->m_frame.f_lineno = 32;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_six, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_49cd7e2601ab9c53a900cb92c1cfa745;
tmp_globals_arg_value_6 = (PyObject *)moduledict_pynput$keyboard$_base;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_AbstractListener_str_plain_prefix_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_pynput$keyboard$_base->m_frame.f_lineno = 34;
tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_10;
}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_pynput$keyboard$_base,
        mod_consts.const_str_plain_AbstractListener,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_AbstractListener);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_AbstractListener, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_pynput$keyboard$_base,
        mod_consts.const_str_plain_prefix,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_prefix);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_prefix, tmp_assign_source_12);
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
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_pynput;
tmp_globals_arg_value_7 = (PyObject *)moduledict_pynput$keyboard$_base;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain__logger_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_pynput$keyboard$_base->m_frame.f_lineno = 35;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_pynput$keyboard$_base,
        mod_consts.const_str_plain__logger,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain__logger);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain__logger, tmp_assign_source_13);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_direct_call_arg1_1;
tmp_direct_call_arg1_1 = mod_consts.const_tuple_type_object_tuple;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_14 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

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
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

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
tmp_expression_value_1 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_2;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

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


exception_lineno = 38;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_16;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_2;
}
tmp_tuple_element_1 = mod_consts.const_str_plain_KeyCode;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_1 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_pynput$keyboard$_base->m_frame.f_lineno = 38;
tmp_assign_source_17 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_17;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_4 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

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
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_8, tmp_default_value_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_2;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
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


exception_lineno = 38;

    goto try_except_handler_2;
}
frame_frame_pynput$keyboard$_base->m_frame.f_lineno = 38;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 38;
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
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_pynput$keyboard$_base$$$class__1_KeyCode_38 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_5787da84b9f9e63f3d3b20cb4f6f6bde;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__1_KeyCode_38, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_digest_e40a7b8edf385bb36bda7d1f44c68efc;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__1_KeyCode_38, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain_KeyCode;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__1_KeyCode_38, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_38;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__1_KeyCode_38, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_4;
}
frame_frame_pynput$keyboard$_base$$$class__1_KeyCode_2 = MAKE_CLASS_FRAME(tstate, code_objects_27a86cbefe381a9442eebd09c1c78ab9, module_pynput$keyboard$_base, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pynput$keyboard$_base$$$class__1_KeyCode_2, locals_pynput$keyboard$_base$$$class__1_KeyCode_38);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_base$$$class__1_KeyCode_2);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_base$$$class__1_KeyCode_2) == 2);

// Framed code:
tmp_dictset_value = MAKE_LIST_EMPTY(tstate, 0);
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__1_KeyCode_38, mod_consts.const_str_plain__PLATFORM_EXTENSIONS, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_none_none_false_tuple;
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_pynput$keyboard$_base$$$function__1___init__(tstate, tmp_defaults_1);

tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__1_KeyCode_38, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}

tmp_dictset_value = MAKE_FUNCTION_pynput$keyboard$_base$$$function__2___repr__(tstate);

tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__1_KeyCode_38, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$keyboard$_base$$$function__3___str__(tstate);

tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__1_KeyCode_38, mod_consts.const_str_plain___str__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$keyboard$_base$$$function__4___eq__(tstate);

tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__1_KeyCode_38, mod_consts.const_str_plain___eq__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$keyboard$_base$$$function__5___hash__(tstate);

tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__1_KeyCode_38, mod_consts.const_str_plain___hash__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$keyboard$_base$$$function__6_join(tstate);

tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__1_KeyCode_38, mod_consts.const_str_plain_join, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
tmp_called_value_2 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__1_KeyCode_38, const_str_plain_classmethod);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_1 = MAKE_FUNCTION_pynput$keyboard$_base$$$function__7_from_vk(tstate);

frame_frame_pynput$keyboard$_base$$$class__1_KeyCode_2->m_frame.f_lineno = 127;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__1_KeyCode_38, mod_consts.const_str_plain_from_vk, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
tmp_called_value_3 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__1_KeyCode_38, const_str_plain_classmethod);

if (tmp_called_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_3 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_2 = MAKE_FUNCTION_pynput$keyboard$_base$$$function__8_from_char(tstate);

frame_frame_pynput$keyboard$_base$$$class__1_KeyCode_2->m_frame.f_lineno = 139;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__1_KeyCode_38, mod_consts.const_str_plain_from_char, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
tmp_called_value_4 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__1_KeyCode_38, const_str_plain_classmethod);

if (tmp_called_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_4 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_3 = MAKE_FUNCTION_pynput$keyboard$_base$$$function__9_from_dead(tstate);

frame_frame_pynput$keyboard$_base$$$class__1_KeyCode_2->m_frame.f_lineno = 149;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__1_KeyCode_38, mod_consts.const_str_plain_from_dead, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$keyboard$_base$$$class__1_KeyCode_2);


goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$class__1_KeyCode_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_base$$$class__1_KeyCode_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$class__1_KeyCode_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_base$$$class__1_KeyCode_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_pynput$keyboard$_base$$$class__1_KeyCode_2);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$keyboard$_base$$$class__1_KeyCode_2);


// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_4;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_cb0d5ff9fc24ca5ae15b245cda58ae71_tuple;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__1_KeyCode_38, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_4;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_1__bases;
tmp_cmp_expr_right_1 = mod_consts.const_tuple_type_object_tuple;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_4;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_dictset_value = mod_consts.const_tuple_type_object_tuple;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__1_KeyCode_38, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_4;
}
branch_no_3:;
{
PyObject *tmp_assign_source_20;
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
tmp_dict_arg_value_1 = locals_pynput$keyboard$_base$$$class__1_KeyCode_38;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_9, tmp_bases_value_2, tmp_dict_arg_value_1);
tmp_assign_source_20 = CALL_FUNCTION(tstate, tmp_metaclass_value_2, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_4;
}
{
    PyObject *old = outline_0_var___class__;
    outline_0_var___class__ = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_19 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_19);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_pynput$keyboard$_base$$$class__1_KeyCode_38);
locals_pynput$keyboard$_base$$$class__1_KeyCode_38 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pynput$keyboard$_base$$$class__1_KeyCode_38);
locals_pynput$keyboard$_base$$$class__1_KeyCode_38 = NULL;
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
exception_lineno = 38;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_KeyCode, tmp_assign_source_19);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

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
PyObject *tmp_assign_source_21;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_7;
tmp_expression_value_7 = module_var_accessor_pynput$keyboard$_base$enum(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enum);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 162;

    goto try_except_handler_5;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_Enum);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_5;
}
tmp_assign_source_21 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_21, 0, tmp_tuple_element_3);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_22 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_23;
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

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
tmp_expression_value_8 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_5;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_5;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_24 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_24;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

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
PyObject *tmp_assign_source_25;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_10 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_5;
}
tmp_tuple_element_4 = mod_consts.const_str_plain_Key;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_pynput$keyboard$_base->m_frame.f_lineno = 162;
tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_25;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_11 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_11, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

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
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_12;
PyObject *tmp_name_value_10;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_12 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_10 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_5 = BUILTIN_GETATTR(tstate, tmp_expression_value_12, tmp_name_value_10, tmp_default_value_2);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_5;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_13;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_13 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_13 == NULL));
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_5);
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


exception_lineno = 162;

    goto try_except_handler_5;
}
frame_frame_pynput$keyboard$_base->m_frame.f_lineno = 162;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 162;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_5;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_26;
}
branch_end_4:;
{
PyObject *tmp_assign_source_27;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_pynput$keyboard$_base$$$class__2_Key_162 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_5787da84b9f9e63f3d3b20cb4f6f6bde;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_digest_5882b9822b7e2f13a7f6ac17c2401754;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_plain_Key;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_int_pos_162;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_7;
}
frame_frame_pynput$keyboard$_base$$$class__2_Key_3 = MAKE_CLASS_FRAME(tstate, code_objects_45744ecff63b6a4f3ab6f190c89a1c9b, module_pynput$keyboard$_base, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pynput$keyboard$_base$$$class__2_Key_3, locals_pynput$keyboard$_base$$$class__2_Key_162);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_base$$$class__2_Key_3);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_base$$$class__2_Key_3) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_1 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 172;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 172;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_alt, tmp_dictset_value);
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
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_2 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 175;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 175;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_alt_l, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_3;
tmp_called_instance_3 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_3 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 178;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 178;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_alt_r, tmp_dictset_value);
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
PyObject *tmp_called_instance_4;
tmp_called_instance_4 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_4 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 181;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 181;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_4,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_alt_gr, tmp_dictset_value);
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
{
PyObject *tmp_called_instance_5;
tmp_called_instance_5 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_5 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 184;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 184;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_5,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_5);
Py_DECREF(tmp_called_instance_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_backspace, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_6;
tmp_called_instance_6 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_6 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 187;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 187;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_6,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_6);
Py_DECREF(tmp_called_instance_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_caps_lock, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_7;
tmp_called_instance_7 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_7 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 192;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 192;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_7,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_7);
Py_DECREF(tmp_called_instance_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_cmd, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_8;
tmp_called_instance_8 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_8 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 197;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 197;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_8,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_8);
Py_DECREF(tmp_called_instance_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_cmd_l, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_9;
tmp_called_instance_9 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_9 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 202;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 202;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_9,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_9);
Py_DECREF(tmp_called_instance_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_cmd_r, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_10;
tmp_called_instance_10 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_10 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 205;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 205;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_10,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_10);
Py_DECREF(tmp_called_instance_10);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_ctrl, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_11;
tmp_called_instance_11 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_11 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 208;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 208;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_11,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_11);
Py_DECREF(tmp_called_instance_11);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_ctrl_l, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_12;
tmp_called_instance_12 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_12 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 211;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 211;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_12,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_12);
Py_DECREF(tmp_called_instance_12);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_ctrl_r, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_13;
tmp_called_instance_13 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_13 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 214;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 214;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_13,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_13);
Py_DECREF(tmp_called_instance_13);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_delete, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_14;
tmp_called_instance_14 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_14 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 217;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 217;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_14,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_14);
Py_DECREF(tmp_called_instance_14);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_down, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_15;
tmp_called_instance_15 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_15 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_15 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 220;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_15);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 220;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_15,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_15);
Py_DECREF(tmp_called_instance_15);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, const_str_plain_end, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_16;
tmp_called_instance_16 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_16 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_16 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 223;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_16);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 223;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_16,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_16);
Py_DECREF(tmp_called_instance_16);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_enter, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_17;
tmp_called_instance_17 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_17 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_17 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 226;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_17);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 226;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_17,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_17);
Py_DECREF(tmp_called_instance_17);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_esc, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_18;
tmp_called_instance_18 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_18 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_18 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 229;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_18);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 229;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_18,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_18);
Py_DECREF(tmp_called_instance_18);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_f1, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_19;
tmp_called_instance_19 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_19 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_19 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 230;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_19);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 230;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_19,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_19);
Py_DECREF(tmp_called_instance_19);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_f2, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_20;
tmp_called_instance_20 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_20 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_20 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 231;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_20);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 231;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_20,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_20);
Py_DECREF(tmp_called_instance_20);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_f3, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_21;
tmp_called_instance_21 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_21 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_21 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 232;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_21);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 232;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_21,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_21);
Py_DECREF(tmp_called_instance_21);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_f4, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_22;
tmp_called_instance_22 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_22 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_22 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 233;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_22);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 233;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_22,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_22);
Py_DECREF(tmp_called_instance_22);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_f5, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_23;
tmp_called_instance_23 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_23 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_23 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 234;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_23);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 234;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_23,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_23);
Py_DECREF(tmp_called_instance_23);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_f6, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_24;
tmp_called_instance_24 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_24 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_24 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 235;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_24);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 235;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_24,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_24);
Py_DECREF(tmp_called_instance_24);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_f7, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_25;
tmp_called_instance_25 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_25 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_25 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 236;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_25);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 236;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_25,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_25);
Py_DECREF(tmp_called_instance_25);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_f8, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_26;
tmp_called_instance_26 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_26 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_26 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 237;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_26);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 237;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_26,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_26);
Py_DECREF(tmp_called_instance_26);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_f9, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_27;
tmp_called_instance_27 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_27 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_27 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 238;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_27);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 238;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_27,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_27);
Py_DECREF(tmp_called_instance_27);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_f10, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_28;
tmp_called_instance_28 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_28 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_28 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 239;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_28);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 239;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_28,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_28);
Py_DECREF(tmp_called_instance_28);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_f11, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_29;
tmp_called_instance_29 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_29 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_29 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 240;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_29);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 240;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_29,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_29);
Py_DECREF(tmp_called_instance_29);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_f12, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_30;
tmp_called_instance_30 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_30 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_30 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 241;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_30);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 241;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_30,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_30);
Py_DECREF(tmp_called_instance_30);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_f13, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_31;
tmp_called_instance_31 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_31 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_31 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 242;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_31);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 242;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_31,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_31);
Py_DECREF(tmp_called_instance_31);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_f14, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_32;
tmp_called_instance_32 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_32 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_32 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 243;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_32);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 243;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_32,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_32);
Py_DECREF(tmp_called_instance_32);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_f15, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_33;
tmp_called_instance_33 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_33 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_33 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 244;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_33);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 244;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_33,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_33);
Py_DECREF(tmp_called_instance_33);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_f16, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_34;
tmp_called_instance_34 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_34 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_34 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 245;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_34);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 245;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_34,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_34);
Py_DECREF(tmp_called_instance_34);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_f17, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_35;
tmp_called_instance_35 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_35 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_35 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_35 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 246;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_35);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 246;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_35,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_35);
Py_DECREF(tmp_called_instance_35);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_f18, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_36;
tmp_called_instance_36 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_36 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_36 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 247;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_36);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 247;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_36,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_36);
Py_DECREF(tmp_called_instance_36);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_f19, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_37;
tmp_called_instance_37 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_37 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_37 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_37 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 248;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_37);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 248;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_37,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_37);
Py_DECREF(tmp_called_instance_37);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_f20, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_38;
tmp_called_instance_38 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_38 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_38 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_38 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 251;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_38);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 251;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_38,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_38);
Py_DECREF(tmp_called_instance_38);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_home, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_39;
tmp_called_instance_39 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_39 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_39 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_39 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 254;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_39);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 254;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_39,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_39);
Py_DECREF(tmp_called_instance_39);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_left, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_40;
tmp_called_instance_40 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_40 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_40 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_40 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_40 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 257;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_40);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 257;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_40,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_40);
Py_DECREF(tmp_called_instance_40);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_page_down, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_41;
tmp_called_instance_41 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_41 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_41 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_41 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 260;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_41);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 260;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_41,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_41);
Py_DECREF(tmp_called_instance_41);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_page_up, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_42;
tmp_called_instance_42 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_42 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_42 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_42 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_42 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 263;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_42);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 263;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_42,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_42);
Py_DECREF(tmp_called_instance_42);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_right, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_43;
tmp_called_instance_43 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_43 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_43 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 266;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_43);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 266;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_43,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_43);
Py_DECREF(tmp_called_instance_43);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_shift, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_44;
tmp_called_instance_44 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_44 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_44 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_44 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_44 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 269;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_44);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 269;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_44,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_44);
Py_DECREF(tmp_called_instance_44);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_shift_l, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_45;
tmp_called_instance_45 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_45 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_45 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_45 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_45 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 272;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_45);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 272;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_45,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_45);
Py_DECREF(tmp_called_instance_45);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_shift_r, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_46;
tmp_called_instance_46 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_46 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_46 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_46 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_46 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 275;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_46);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 275;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_46,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_46);
Py_DECREF(tmp_called_instance_46);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_space, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_47;
tmp_called_instance_47 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_47 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_47 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_47 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_47 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 278;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_47);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 278;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_47,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_47);
Py_DECREF(tmp_called_instance_47);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_tab, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_48;
tmp_called_instance_48 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_48 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_48 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_48 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_48 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 281;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_48);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 281;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_48,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_48);
Py_DECREF(tmp_called_instance_48);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_up, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_49;
tmp_called_instance_49 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_49 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_49 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_49 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_49 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 284;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_49);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 284;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_49,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_49);
Py_DECREF(tmp_called_instance_49);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_media_play_pause, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_50;
tmp_called_instance_50 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_50 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_50 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_50 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_50 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 287;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_50);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 287;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_50,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_50);
Py_DECREF(tmp_called_instance_50);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_media_volume_mute, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_51;
tmp_called_instance_51 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_51 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_51 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_51 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_51 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 290;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_51);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 290;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_51,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_51);
Py_DECREF(tmp_called_instance_51);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_media_volume_down, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_52;
tmp_called_instance_52 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_52 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_52 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_52 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_52 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 293;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_52);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 293;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_52,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_52);
Py_DECREF(tmp_called_instance_52);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_media_volume_up, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_53;
tmp_called_instance_53 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_53 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_53 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_53 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_53 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 296;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_53);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 296;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_53,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_53);
Py_DECREF(tmp_called_instance_53);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_media_previous, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_54;
tmp_called_instance_54 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_54 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_54 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_54 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_54 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 299;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_54);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 299;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_54,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_54);
Py_DECREF(tmp_called_instance_54);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_media_next, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_55;
tmp_called_instance_55 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_55 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_55 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_55 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_55 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 302;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_55);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 302;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_55,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_55);
Py_DECREF(tmp_called_instance_55);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_insert, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_56;
tmp_called_instance_56 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_56 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_56 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_56 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_56 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 305;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_56);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 305;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_56,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_56);
Py_DECREF(tmp_called_instance_56);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_menu, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_57;
tmp_called_instance_57 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_57 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_57 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_57 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_57 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 308;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_57);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 308;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_57,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_57);
Py_DECREF(tmp_called_instance_57);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_num_lock, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_58;
tmp_called_instance_58 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_58 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_58 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_58 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_58 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_58);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 311;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_58,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_58);
Py_DECREF(tmp_called_instance_58);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_pause, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_59;
tmp_called_instance_59 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_59 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_59 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_59 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_59 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 314;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_59);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 314;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_59,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_59);
Py_DECREF(tmp_called_instance_59);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_print_screen, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_60;
tmp_called_instance_60 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_KeyCode);

if (tmp_called_instance_60 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_60 = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_called_instance_60 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_called_instance_60 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 317;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_60);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame.f_lineno = 317;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_60,
    mod_consts.const_str_plain_from_vk,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_60);
Py_DECREF(tmp_called_instance_60);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain_scroll_lock, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$keyboard$_base$$$class__2_Key_3);


goto frame_no_exception_2;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$class__2_Key_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_base$$$class__2_Key_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$class__2_Key_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_base$$$class__2_Key_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_pynput$keyboard$_base$$$class__2_Key_3);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$keyboard$_base$$$class__2_Key_3);


// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_7;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

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


exception_lineno = 162;

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
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__2_Key_162, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_7;
}
branch_no_6:;
{
PyObject *tmp_assign_source_28;
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
tmp_dict_arg_value_2 = locals_pynput$keyboard$_base$$$class__2_Key_162;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_decl_dict_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_metaclass_args_2 = MAKE_TUPLE3(tstate, tmp_name_value_11, tmp_bases_value_4, tmp_dict_arg_value_2);
tmp_assign_source_28 = CALL_FUNCTION(tstate, tmp_metaclass_value_4, tmp_metaclass_args_2, tmp_class_decl_dict_value_2);
CHECK_OBJECT(tmp_metaclass_args_2);
Py_DECREF(tmp_metaclass_args_2);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_7;
}
{
    PyObject *old = outline_1_var___class__;
    outline_1_var___class__ = tmp_assign_source_28;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_27 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_27);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_pynput$keyboard$_base$$$class__2_Key_162);
locals_pynput$keyboard$_base$$$class__2_Key_162 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pynput$keyboard$_base$$$class__2_Key_162);
locals_pynput$keyboard$_base$$$class__2_Key_162 = NULL;
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
exception_lineno = 162;
goto try_except_handler_5;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_Key, tmp_assign_source_27);
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
PyObject *tmp_assign_source_29;
PyObject *tmp_direct_call_arg1_3;
tmp_direct_call_arg1_3 = mod_consts.const_tuple_type_object_tuple;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_29 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_29;
}
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_30;
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_metaclass_value_5;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

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
tmp_expression_value_14 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_3, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_8;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_8;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_5);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_5 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_31 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
CHECK_OBJECT(tmp_metaclass_value_5);
Py_DECREF(tmp_metaclass_value_5);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_31;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_15 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_15, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

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
PyObject *tmp_assign_source_32;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_16 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_8;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_Controller;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_pynput$keyboard$_base->m_frame.f_lineno = 320;
tmp_assign_source_32 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_32;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_17 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_17, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

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
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_18;
PyObject *tmp_name_value_12;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_18 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_12 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_18, tmp_name_value_12, tmp_default_value_3);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_8;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_19;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_19 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_19 == NULL));
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_7);
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


exception_lineno = 320;

    goto try_except_handler_8;
}
frame_frame_pynput$keyboard$_base->m_frame.f_lineno = 320;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 320;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_8;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_33;
tmp_assign_source_33 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_33;
}
branch_end_7:;
{
PyObject *tmp_assign_source_34;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_pynput$keyboard$_base$$$class__3_Controller_320 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_5787da84b9f9e63f3d3b20cb4f6f6bde;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__3_Controller_320, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_digest_50cc9985bc6fd6a67382b9788508749d;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__3_Controller_320, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_plain_Controller;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__3_Controller_320, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_int_pos_320;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__3_Controller_320, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_10;
}
frame_frame_pynput$keyboard$_base$$$class__3_Controller_4 = MAKE_CLASS_FRAME(tstate, code_objects_6faf2e2a2df09bf602f08554e735a9d6, module_pynput$keyboard$_base, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pynput$keyboard$_base$$$class__3_Controller_4, locals_pynput$keyboard$_base$$$class__3_Controller_320);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_base$$$class__3_Controller_4);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_base$$$class__3_Controller_4) == 2);

// Framed code:
tmp_dictset_value = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__3_Controller_320, mod_consts.const_str_plain_KeyCode);

if (tmp_dictset_value == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dictset_value = module_var_accessor_pynput$keyboard$_base$KeyCode(tstate);
if (unlikely(tmp_dictset_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KeyCode);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 324;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_dictset_value);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__3_Controller_320, mod_consts.const_str_plain__KeyCode, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__3_Controller_320, mod_consts.const_str_plain_Key);

if (tmp_dictset_value == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dictset_value = module_var_accessor_pynput$keyboard$_base$Key(tstate);
if (unlikely(tmp_dictset_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Key);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 327;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_dictset_value);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__3_Controller_320, mod_consts.const_str_plain__Key, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
{
PyObject *tmp_outline_return_value_4;
{
PyObject *tmp_assign_source_35;
PyObject *tmp_tuple_element_8;
tmp_tuple_element_8 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__3_Controller_320, mod_consts.const_str_plain_Exception);

if (tmp_tuple_element_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_8 = PyExc_Exception;
        Py_INCREF(tmp_tuple_element_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_assign_source_35 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_35, 0, tmp_tuple_element_8);
{
    PyObject *old = tmp_Controller$class_container$class_creation_1__bases_orig;
    tmp_Controller$class_container$class_creation_1__bases_orig = tmp_assign_source_35;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_36;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_4 = tmp_Controller$class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_36 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_2 = "o";
    goto try_except_handler_11;
}
{
    PyObject *old = tmp_Controller$class_container$class_creation_1__bases;
    tmp_Controller$class_container$class_creation_1__bases = tmp_assign_source_36;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_37;
tmp_assign_source_37 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = tmp_Controller$class_container$class_creation_1__class_decl_dict;
    tmp_Controller$class_container$class_creation_1__class_decl_dict = tmp_assign_source_37;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_metaclass_value_6;
nuitka_bool tmp_condition_result_12;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_6;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_1__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_Controller$class_container$class_creation_1__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_2 = "o";
    goto try_except_handler_11;
}
tmp_condition_result_12 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_1__bases);
tmp_expression_value_20 = tmp_Controller$class_container$class_creation_1__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_20, tmp_subscript_value_4, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_2 = "o";
    goto try_except_handler_11;
}
tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_2 = "o";
    goto try_except_handler_11;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_6);
condexpr_end_4:;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_1__bases);
tmp_bases_value_6 = tmp_Controller$class_container$class_creation_1__bases;
tmp_assign_source_38 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
CHECK_OBJECT(tmp_metaclass_value_6);
Py_DECREF(tmp_metaclass_value_6);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_2 = "o";
    goto try_except_handler_11;
}
{
    PyObject *old = tmp_Controller$class_container$class_creation_1__metaclass;
    tmp_Controller$class_container$class_creation_1__metaclass = tmp_assign_source_38;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_13;
PyObject *tmp_expression_value_21;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_1__metaclass);
tmp_expression_value_21 = tmp_Controller$class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_21, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_2 = "o";
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
PyObject *tmp_assign_source_39;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_22;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_9;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_1__metaclass);
tmp_expression_value_22 = tmp_Controller$class_container$class_creation_1__metaclass;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_2 = "o";
    goto try_except_handler_11;
}
tmp_tuple_element_9 = mod_consts.const_str_plain_InvalidKeyException;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_Controller$class_container$class_creation_1__bases);
tmp_tuple_element_9 = tmp_Controller$class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_9);
CHECK_OBJECT(tmp_Controller$class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_4 = tmp_Controller$class_container$class_creation_1__class_decl_dict;
frame_frame_pynput$keyboard$_base$$$class__3_Controller_4->m_frame.f_lineno = 329;
tmp_assign_source_39 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_2 = "o";
    goto try_except_handler_11;
}
{
    PyObject *old = tmp_Controller$class_container$class_creation_1__prepared;
    tmp_Controller$class_container$class_creation_1__prepared = tmp_assign_source_39;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_14;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_23;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_1__prepared);
tmp_expression_value_23 = tmp_Controller$class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_23, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_2 = "o";
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
PyObject *tmp_tuple_element_10;
PyObject *tmp_expression_value_24;
PyObject *tmp_name_value_13;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_1__metaclass);
tmp_expression_value_24 = tmp_Controller$class_container$class_creation_1__metaclass;
tmp_name_value_13 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_10 = BUILTIN_GETATTR(tstate, tmp_expression_value_24, tmp_name_value_13, tmp_default_value_4);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_2 = "o";
    goto try_except_handler_11;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_25;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_Controller$class_container$class_creation_1__prepared);
tmp_type_arg_8 = tmp_Controller$class_container$class_creation_1__prepared;
tmp_expression_value_25 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_25 == NULL));
tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_25);
Py_DECREF(tmp_expression_value_25);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_2 = "o";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_10);
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


exception_lineno = 329;
type_description_2 = "o";
    goto try_except_handler_11;
}
frame_frame_pynput$keyboard$_base$$$class__3_Controller_4->m_frame.f_lineno = 329;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 329;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_2 = "o";
goto try_except_handler_11;
}
branch_no_10:;
goto branch_end_9;
branch_no_9:;
{
PyObject *tmp_assign_source_40;
tmp_assign_source_40 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = tmp_Controller$class_container$class_creation_1__prepared;
    tmp_Controller$class_container$class_creation_1__prepared = tmp_assign_source_40;
    Py_XDECREF(old);
}

}
branch_end_9:;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_1__prepared);
tmp_set_locals_4 = tmp_Controller$class_container$class_creation_1__prepared;
locals_pynput$keyboard$_base$$$class__4_InvalidKeyException_329 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_5787da84b9f9e63f3d3b20cb4f6f6bde;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__4_InvalidKeyException_329, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_2 = "o";
    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_str_digest_dd5f2c78f9b1f0a773678e0062f1aae7;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__4_InvalidKeyException_329, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_2 = "o";
    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_str_digest_b0bb594e9022feb274ad8395ca4df024;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__4_InvalidKeyException_329, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_2 = "o";
    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_int_pos_329;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__4_InvalidKeyException_329, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_2 = "o";
    goto try_except_handler_13;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__4_InvalidKeyException_329, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_2 = "o";
    goto try_except_handler_13;
}
{
nuitka_bool tmp_condition_result_15;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_1__bases);
tmp_cmp_expr_left_3 = tmp_Controller$class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_3 = tmp_Controller$class_container$class_creation_1__bases_orig;
tmp_condition_result_15 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_2 = "o";
    goto try_except_handler_13;
}
if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_Controller$class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__4_InvalidKeyException_329, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_2 = "o";
    goto try_except_handler_13;
}
branch_no_11:;
{
PyObject *tmp_assign_source_41;
PyObject *tmp_metaclass_value_7;
PyObject *tmp_name_value_14;
PyObject *tmp_bases_value_7;
PyObject *tmp_dict_arg_value_3;
PyObject *tmp_class_decl_dict_value_3;
PyObject *tmp_metaclass_args_3;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_1__metaclass);
tmp_metaclass_value_7 = tmp_Controller$class_container$class_creation_1__metaclass;
tmp_name_value_14 = mod_consts.const_str_plain_InvalidKeyException;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_1__bases);
tmp_bases_value_7 = tmp_Controller$class_container$class_creation_1__bases;
tmp_dict_arg_value_3 = locals_pynput$keyboard$_base$$$class__4_InvalidKeyException_329;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_3 = tmp_Controller$class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_3 = MAKE_TUPLE3(tstate, tmp_name_value_14, tmp_bases_value_7, tmp_dict_arg_value_3);
tmp_assign_source_41 = CALL_FUNCTION(tstate, tmp_metaclass_value_7, tmp_metaclass_args_3, tmp_class_decl_dict_value_3);
CHECK_OBJECT(tmp_metaclass_args_3);
Py_DECREF(tmp_metaclass_args_3);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_2 = "o";
    goto try_except_handler_13;
}
{
    PyObject *old = outline_3_var___class__;
    outline_3_var___class__ = tmp_assign_source_41;
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
Py_DECREF(locals_pynput$keyboard$_base$$$class__4_InvalidKeyException_329);
locals_pynput$keyboard$_base$$$class__4_InvalidKeyException_329 = NULL;
goto try_return_handler_12;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pynput$keyboard$_base$$$class__4_InvalidKeyException_329);
locals_pynput$keyboard$_base$$$class__4_InvalidKeyException_329 = NULL;
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
exception_lineno = 329;
goto try_except_handler_11;
outline_result_8:;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__3_Controller_320, mod_consts.const_str_plain_InvalidKeyException, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_2 = "o";
    goto try_except_handler_11;
}
goto try_end_4;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_Controller$class_container$class_creation_1__bases_orig);
CHECK_OBJECT(tmp_Controller$class_container$class_creation_1__bases_orig);
Py_DECREF(tmp_Controller$class_container$class_creation_1__bases_orig);
tmp_Controller$class_container$class_creation_1__bases_orig = NULL;
Py_XDECREF(tmp_Controller$class_container$class_creation_1__bases);
tmp_Controller$class_container$class_creation_1__bases = NULL;
Py_XDECREF(tmp_Controller$class_container$class_creation_1__class_decl_dict);
tmp_Controller$class_container$class_creation_1__class_decl_dict = NULL;
Py_XDECREF(tmp_Controller$class_container$class_creation_1__metaclass);
tmp_Controller$class_container$class_creation_1__metaclass = NULL;
Py_XDECREF(tmp_Controller$class_container$class_creation_1__prepared);
tmp_Controller$class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_4;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_1__bases_orig);
CHECK_OBJECT(tmp_Controller$class_container$class_creation_1__bases_orig);
Py_DECREF(tmp_Controller$class_container$class_creation_1__bases_orig);
tmp_Controller$class_container$class_creation_1__bases_orig = NULL;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_1__bases);
CHECK_OBJECT(tmp_Controller$class_container$class_creation_1__bases);
Py_DECREF(tmp_Controller$class_container$class_creation_1__bases);
tmp_Controller$class_container$class_creation_1__bases = NULL;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_Controller$class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_Controller$class_container$class_creation_1__class_decl_dict);
tmp_Controller$class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_1__metaclass);
CHECK_OBJECT(tmp_Controller$class_container$class_creation_1__metaclass);
Py_DECREF(tmp_Controller$class_container$class_creation_1__metaclass);
tmp_Controller$class_container$class_creation_1__metaclass = NULL;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_1__prepared);
CHECK_OBJECT(tmp_Controller$class_container$class_creation_1__prepared);
Py_DECREF(tmp_Controller$class_container$class_creation_1__prepared);
tmp_Controller$class_container$class_creation_1__prepared = NULL;
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
{
PyObject *tmp_assign_source_42;
PyObject *tmp_tuple_element_11;
tmp_tuple_element_11 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__3_Controller_320, mod_consts.const_str_plain_Exception);

if (tmp_tuple_element_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_11 = PyExc_Exception;
        Py_INCREF(tmp_tuple_element_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_assign_source_42 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_42, 0, tmp_tuple_element_11);
{
    PyObject *old = tmp_Controller$class_container$class_creation_2__bases_orig;
    tmp_Controller$class_container$class_creation_2__bases_orig = tmp_assign_source_42;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_43;
PyObject *tmp_direct_call_arg1_5;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_5 = tmp_Controller$class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5};
    tmp_assign_source_43 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_2 = "o";
    goto try_except_handler_14;
}
{
    PyObject *old = tmp_Controller$class_container$class_creation_2__bases;
    tmp_Controller$class_container$class_creation_2__bases = tmp_assign_source_43;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_44;
tmp_assign_source_44 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = tmp_Controller$class_container$class_creation_2__class_decl_dict;
    tmp_Controller$class_container$class_creation_2__class_decl_dict = tmp_assign_source_44;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_metaclass_value_8;
nuitka_bool tmp_condition_result_16;
int tmp_truth_name_5;
PyObject *tmp_type_arg_9;
PyObject *tmp_expression_value_26;
PyObject *tmp_subscript_value_5;
PyObject *tmp_bases_value_8;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_2__bases);
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_Controller$class_container$class_creation_2__bases);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_2 = "o";
    goto try_except_handler_14;
}
tmp_condition_result_16 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_5;
} else {
    goto condexpr_false_5;
}
condexpr_true_5:;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_2__bases);
tmp_expression_value_26 = tmp_Controller$class_container$class_creation_2__bases;
tmp_subscript_value_5 = const_int_0;
tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_26, tmp_subscript_value_5, 0);
if (tmp_type_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_2 = "o";
    goto try_except_handler_14;
}
tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_9);
CHECK_OBJECT(tmp_type_arg_9);
Py_DECREF(tmp_type_arg_9);
if (tmp_metaclass_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_2 = "o";
    goto try_except_handler_14;
}
goto condexpr_end_5;
condexpr_false_5:;
tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_8);
condexpr_end_5:;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_2__bases);
tmp_bases_value_8 = tmp_Controller$class_container$class_creation_2__bases;
tmp_assign_source_45 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
CHECK_OBJECT(tmp_metaclass_value_8);
Py_DECREF(tmp_metaclass_value_8);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_2 = "o";
    goto try_except_handler_14;
}
{
    PyObject *old = tmp_Controller$class_container$class_creation_2__metaclass;
    tmp_Controller$class_container$class_creation_2__metaclass = tmp_assign_source_45;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_17;
PyObject *tmp_expression_value_27;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_2__metaclass);
tmp_expression_value_27 = tmp_Controller$class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_27, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_2 = "o";
    goto try_except_handler_14;
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
PyObject *tmp_assign_source_46;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_28;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_2__metaclass);
tmp_expression_value_28 = tmp_Controller$class_container$class_creation_2__metaclass;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_2 = "o";
    goto try_except_handler_14;
}
tmp_tuple_element_12 = mod_consts.const_str_plain_InvalidCharacterException;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_Controller$class_container$class_creation_2__bases);
tmp_tuple_element_12 = tmp_Controller$class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_12);
CHECK_OBJECT(tmp_Controller$class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_5 = tmp_Controller$class_container$class_creation_2__class_decl_dict;
frame_frame_pynput$keyboard$_base$$$class__3_Controller_4->m_frame.f_lineno = 338;
tmp_assign_source_46 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_2 = "o";
    goto try_except_handler_14;
}
{
    PyObject *old = tmp_Controller$class_container$class_creation_2__prepared;
    tmp_Controller$class_container$class_creation_2__prepared = tmp_assign_source_46;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_18;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_29;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_2__prepared);
tmp_expression_value_29 = tmp_Controller$class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_29, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_2 = "o";
    goto try_except_handler_14;
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
PyObject *tmp_tuple_element_13;
PyObject *tmp_expression_value_30;
PyObject *tmp_name_value_15;
PyObject *tmp_default_value_5;
tmp_mod_expr_left_5 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_2__metaclass);
tmp_expression_value_30 = tmp_Controller$class_container$class_creation_2__metaclass;
tmp_name_value_15 = const_str_plain___name__;
tmp_default_value_5 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_13 = BUILTIN_GETATTR(tstate, tmp_expression_value_30, tmp_name_value_15, tmp_default_value_5);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_2 = "o";
    goto try_except_handler_14;
}
tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_31;
PyObject *tmp_type_arg_10;
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_Controller$class_container$class_creation_2__prepared);
tmp_type_arg_10 = tmp_Controller$class_container$class_creation_2__prepared;
tmp_expression_value_31 = BUILTIN_TYPE1(tmp_type_arg_10);
assert(!(tmp_expression_value_31 == NULL));
tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_31);
Py_DECREF(tmp_expression_value_31);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_2 = "o";
    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_13);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_mod_expr_right_5);
goto try_except_handler_14;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_make_exception_arg_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
CHECK_OBJECT(tmp_mod_expr_right_5);
Py_DECREF(tmp_mod_expr_right_5);
if (tmp_make_exception_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_2 = "o";
    goto try_except_handler_14;
}
frame_frame_pynput$keyboard$_base$$$class__3_Controller_4->m_frame.f_lineno = 338;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 338;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_2 = "o";
goto try_except_handler_14;
}
branch_no_13:;
goto branch_end_12;
branch_no_12:;
{
PyObject *tmp_assign_source_47;
tmp_assign_source_47 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = tmp_Controller$class_container$class_creation_2__prepared;
    tmp_Controller$class_container$class_creation_2__prepared = tmp_assign_source_47;
    Py_XDECREF(old);
}

}
branch_end_12:;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_2__prepared);
tmp_set_locals_5 = tmp_Controller$class_container$class_creation_2__prepared;
locals_pynput$keyboard$_base$$$class__5_InvalidCharacterException_338 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_5787da84b9f9e63f3d3b20cb4f6f6bde;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__5_InvalidCharacterException_338, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_2 = "o";
    goto try_except_handler_16;
}
tmp_dictset_value = mod_consts.const_str_digest_d4143e58bd5d85dd37446aabfdb9d16f;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__5_InvalidCharacterException_338, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_2 = "o";
    goto try_except_handler_16;
}
tmp_dictset_value = mod_consts.const_str_digest_268e74f17db3493c34a7dc97045c9a1e;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__5_InvalidCharacterException_338, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_2 = "o";
    goto try_except_handler_16;
}
tmp_dictset_value = mod_consts.const_int_pos_338;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__5_InvalidCharacterException_338, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_2 = "o";
    goto try_except_handler_16;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__5_InvalidCharacterException_338, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_2 = "o";
    goto try_except_handler_16;
}
{
nuitka_bool tmp_condition_result_19;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_2__bases);
tmp_cmp_expr_left_4 = tmp_Controller$class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_4 = tmp_Controller$class_container$class_creation_2__bases_orig;
tmp_condition_result_19 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_19 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_2 = "o";
    goto try_except_handler_16;
}
if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_Controller$class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__5_InvalidCharacterException_338, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_2 = "o";
    goto try_except_handler_16;
}
branch_no_14:;
{
PyObject *tmp_assign_source_48;
PyObject *tmp_metaclass_value_9;
PyObject *tmp_name_value_16;
PyObject *tmp_bases_value_9;
PyObject *tmp_dict_arg_value_4;
PyObject *tmp_class_decl_dict_value_4;
PyObject *tmp_metaclass_args_4;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_2__metaclass);
tmp_metaclass_value_9 = tmp_Controller$class_container$class_creation_2__metaclass;
tmp_name_value_16 = mod_consts.const_str_plain_InvalidCharacterException;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_2__bases);
tmp_bases_value_9 = tmp_Controller$class_container$class_creation_2__bases;
tmp_dict_arg_value_4 = locals_pynput$keyboard$_base$$$class__5_InvalidCharacterException_338;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_2__class_decl_dict);
tmp_class_decl_dict_value_4 = tmp_Controller$class_container$class_creation_2__class_decl_dict;
tmp_metaclass_args_4 = MAKE_TUPLE3(tstate, tmp_name_value_16, tmp_bases_value_9, tmp_dict_arg_value_4);
tmp_assign_source_48 = CALL_FUNCTION(tstate, tmp_metaclass_value_9, tmp_metaclass_args_4, tmp_class_decl_dict_value_4);
CHECK_OBJECT(tmp_metaclass_args_4);
Py_DECREF(tmp_metaclass_args_4);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_2 = "o";
    goto try_except_handler_16;
}
{
    PyObject *old = outline_4_var___class__;
    outline_4_var___class__ = tmp_assign_source_48;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_4_var___class__);
tmp_dictset_value = outline_4_var___class__;
Py_INCREF(tmp_dictset_value);
goto try_return_handler_16;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_16:;
Py_DECREF(locals_pynput$keyboard$_base$$$class__5_InvalidCharacterException_338);
locals_pynput$keyboard$_base$$$class__5_InvalidCharacterException_338 = NULL;
goto try_return_handler_15;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pynput$keyboard$_base$$$class__5_InvalidCharacterException_338);
locals_pynput$keyboard$_base$$$class__5_InvalidCharacterException_338 = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_15;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
CHECK_OBJECT(outline_4_var___class__);
CHECK_OBJECT(outline_4_var___class__);
Py_DECREF(outline_4_var___class__);
outline_4_var___class__ = NULL;
goto outline_result_10;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto outline_exception_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_5:;
exception_lineno = 338;
goto try_except_handler_14;
outline_result_10:;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__3_Controller_320, mod_consts.const_str_plain_InvalidCharacterException, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_2 = "o";
    goto try_except_handler_14;
}
goto try_end_5;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_Controller$class_container$class_creation_2__bases_orig);
CHECK_OBJECT(tmp_Controller$class_container$class_creation_2__bases_orig);
Py_DECREF(tmp_Controller$class_container$class_creation_2__bases_orig);
tmp_Controller$class_container$class_creation_2__bases_orig = NULL;
Py_XDECREF(tmp_Controller$class_container$class_creation_2__bases);
tmp_Controller$class_container$class_creation_2__bases = NULL;
Py_XDECREF(tmp_Controller$class_container$class_creation_2__class_decl_dict);
tmp_Controller$class_container$class_creation_2__class_decl_dict = NULL;
Py_XDECREF(tmp_Controller$class_container$class_creation_2__metaclass);
tmp_Controller$class_container$class_creation_2__metaclass = NULL;
Py_XDECREF(tmp_Controller$class_container$class_creation_2__prepared);
tmp_Controller$class_container$class_creation_2__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto frame_exception_exit_4;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_2__bases_orig);
CHECK_OBJECT(tmp_Controller$class_container$class_creation_2__bases_orig);
Py_DECREF(tmp_Controller$class_container$class_creation_2__bases_orig);
tmp_Controller$class_container$class_creation_2__bases_orig = NULL;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_2__bases);
CHECK_OBJECT(tmp_Controller$class_container$class_creation_2__bases);
Py_DECREF(tmp_Controller$class_container$class_creation_2__bases);
tmp_Controller$class_container$class_creation_2__bases = NULL;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_Controller$class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_Controller$class_container$class_creation_2__class_decl_dict);
tmp_Controller$class_container$class_creation_2__class_decl_dict = NULL;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_2__metaclass);
CHECK_OBJECT(tmp_Controller$class_container$class_creation_2__metaclass);
Py_DECREF(tmp_Controller$class_container$class_creation_2__metaclass);
tmp_Controller$class_container$class_creation_2__metaclass = NULL;
CHECK_OBJECT(tmp_Controller$class_container$class_creation_2__prepared);
CHECK_OBJECT(tmp_Controller$class_container$class_creation_2__prepared);
Py_DECREF(tmp_Controller$class_container$class_creation_2__prepared);
tmp_Controller$class_container$class_creation_2__prepared = NULL;
tmp_outline_return_value_5 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_5);
goto outline_result_9;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_9:;
CHECK_OBJECT(tmp_outline_return_value_5);
Py_DECREF(tmp_outline_return_value_5);
}

tmp_dictset_value = MAKE_FUNCTION_pynput$keyboard$_base$$$function__10___init__(tstate);

tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__3_Controller_320, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$keyboard$_base$$$function__11_press(tstate);

tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__3_Controller_320, mod_consts.const_str_plain_press, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$keyboard$_base$$$function__12_release(tstate);

tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__3_Controller_320, mod_consts.const_str_plain_release, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 404;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$keyboard$_base$$$function__13_tap(tstate);

tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__3_Controller_320, mod_consts.const_str_plain_tap, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$keyboard$_base$$$function__14_touch(tstate);

tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__3_Controller_320, mod_consts.const_str_plain_touch, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 449;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
{
PyObject *tmp_called_instance_61;
PyObject *tmp_args_element_value_4;
tmp_called_instance_61 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__3_Controller_320, mod_consts.const_str_plain_contextlib);

if (tmp_called_instance_61 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_61 = module_var_accessor_pynput$keyboard$_base$contextlib(tstate);
if (unlikely(tmp_called_instance_61 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_contextlib);
}

if (tmp_called_instance_61 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 464;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_called_instance_61);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}


tmp_args_element_value_4 = MAKE_FUNCTION_pynput$keyboard$_base$$$function__15_pressed(tstate);

frame_frame_pynput$keyboard$_base$$$class__3_Controller_4->m_frame.f_lineno = 464;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_61, mod_consts.const_str_plain_contextmanager, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_instance_61);
Py_DECREF(tmp_called_instance_61);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 464;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__3_Controller_320, mod_consts.const_str_plain_pressed, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 465;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}

tmp_dictset_value = MAKE_FUNCTION_pynput$keyboard$_base$$$function__16_type(tstate);

tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__3_Controller_320, const_str_plain_type, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_instance_62;
PyObject *tmp_args_element_value_6;
tmp_called_value_9 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__3_Controller_320, mod_consts.const_str_plain_property);

if (tmp_called_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_9 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_called_instance_62 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__3_Controller_320, mod_consts.const_str_plain_contextlib);

if (tmp_called_instance_62 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_62 = module_var_accessor_pynput$keyboard$_base$contextlib(tstate);
if (unlikely(tmp_called_instance_62 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_contextlib);
}

if (tmp_called_instance_62 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_9);

exception_lineno = 502;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_called_instance_62);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}


tmp_args_element_value_6 = MAKE_FUNCTION_pynput$keyboard$_base$$$function__17_modifiers(tstate);

frame_frame_pynput$keyboard$_base$$$class__3_Controller_4->m_frame.f_lineno = 502;
tmp_args_element_value_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_62, mod_consts.const_str_plain_contextmanager, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_instance_62);
Py_DECREF(tmp_called_instance_62);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 502;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
frame_frame_pynput$keyboard$_base$$$class__3_Controller_4->m_frame.f_lineno = 501;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 501;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__3_Controller_320, mod_consts.const_str_plain_modifiers, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 503;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_7;
tmp_called_value_10 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__3_Controller_320, mod_consts.const_str_plain_property);

if (tmp_called_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_10 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}


tmp_args_element_value_7 = MAKE_FUNCTION_pynput$keyboard$_base$$$function__18_alt_pressed(tstate);

frame_frame_pynput$keyboard$_base$$$class__3_Controller_4->m_frame.f_lineno = 527;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 527;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__3_Controller_320, mod_consts.const_str_plain_alt_pressed, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 528;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_8;
tmp_called_value_11 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__3_Controller_320, mod_consts.const_str_plain_property);

if (tmp_called_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_11 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}


tmp_args_element_value_8 = MAKE_FUNCTION_pynput$keyboard$_base$$$function__19_alt_gr_pressed(tstate);

frame_frame_pynput$keyboard$_base$$$class__3_Controller_4->m_frame.f_lineno = 537;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 537;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__3_Controller_320, mod_consts.const_str_plain_alt_gr_pressed, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 538;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_9;
tmp_called_value_12 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__3_Controller_320, mod_consts.const_str_plain_property);

if (tmp_called_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_12 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}


tmp_args_element_value_9 = MAKE_FUNCTION_pynput$keyboard$_base$$$function__20_ctrl_pressed(tstate);

frame_frame_pynput$keyboard$_base$$$class__3_Controller_4->m_frame.f_lineno = 547;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 547;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__3_Controller_320, mod_consts.const_str_plain_ctrl_pressed, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 548;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_10;
tmp_called_value_13 = PyObject_GetItem(locals_pynput$keyboard$_base$$$class__3_Controller_320, mod_consts.const_str_plain_property);

if (tmp_called_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_13 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}


tmp_args_element_value_10 = MAKE_FUNCTION_pynput$keyboard$_base$$$function__21_shift_pressed(tstate);

frame_frame_pynput$keyboard$_base$$$class__3_Controller_4->m_frame.f_lineno = 557;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 557;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__3_Controller_320, mod_consts.const_str_plain_shift_pressed, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 558;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}

tmp_dictset_value = MAKE_FUNCTION_pynput$keyboard$_base$$$function__22__resolve(tstate);

tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__3_Controller_320, mod_consts.const_str_plain__resolve, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 570;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$keyboard$_base$$$function__23__update_modifiers(tstate);

tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__3_Controller_320, mod_consts.const_str_plain__update_modifiers, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 597;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$keyboard$_base$$$function__24__as_modifier(tstate);

tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__3_Controller_320, mod_consts.const_str_plain__as_modifier, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 615;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

tmp_dictset_value = MAKE_FUNCTION_pynput$keyboard$_base$$$function__25__handle(tstate);

tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__3_Controller_320, mod_consts.const_str_plain__handle, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 630;
type_description_2 = "o";
    goto frame_exception_exit_4;
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$keyboard$_base$$$class__3_Controller_4);


goto frame_no_exception_3;
frame_exception_exit_4:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$class__3_Controller_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_base$$$class__3_Controller_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$class__3_Controller_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_base$$$class__3_Controller_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_pynput$keyboard$_base$$$class__3_Controller_4);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$keyboard$_base$$$class__3_Controller_4);


// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_10;
skip_nested_handling_3:;
tmp_dictset_value = mod_consts.const_tuple_572bc12affa7b0858b9dc76ded5a1708_tuple;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__3_Controller_320, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_10;
}
{
nuitka_bool tmp_condition_result_20;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_5 = tmp_class_container$class_creation_3__bases;
tmp_cmp_expr_right_5 = mod_consts.const_tuple_type_object_tuple;
tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_10;
}
if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
tmp_dictset_value = mod_consts.const_tuple_type_object_tuple;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__3_Controller_320, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_10;
}
branch_no_15:;
{
PyObject *tmp_assign_source_49;
PyObject *tmp_metaclass_value_10;
PyObject *tmp_name_value_17;
PyObject *tmp_bases_value_10;
PyObject *tmp_dict_arg_value_5;
PyObject *tmp_class_decl_dict_value_5;
PyObject *tmp_metaclass_args_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_metaclass_value_10 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_17 = mod_consts.const_str_plain_Controller;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_10 = tmp_class_container$class_creation_3__bases;
tmp_dict_arg_value_5 = locals_pynput$keyboard$_base$$$class__3_Controller_320;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_decl_dict_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
tmp_metaclass_args_5 = MAKE_TUPLE3(tstate, tmp_name_value_17, tmp_bases_value_10, tmp_dict_arg_value_5);
tmp_assign_source_49 = CALL_FUNCTION(tstate, tmp_metaclass_value_10, tmp_metaclass_args_5, tmp_class_decl_dict_value_5);
CHECK_OBJECT(tmp_metaclass_args_5);
Py_DECREF(tmp_metaclass_args_5);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_10;
}
{
    PyObject *old = outline_2_var___class__;
    outline_2_var___class__ = tmp_assign_source_49;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_34 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_34);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
Py_DECREF(locals_pynput$keyboard$_base$$$class__3_Controller_320);
locals_pynput$keyboard$_base$$$class__3_Controller_320 = NULL;
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pynput$keyboard$_base$$$class__3_Controller_320);
locals_pynput$keyboard$_base$$$class__3_Controller_320 = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

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
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 320;
goto try_except_handler_8;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_Controller, tmp_assign_source_34);
}
goto try_end_6;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_3__bases);
tmp_class_container$class_creation_3__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__metaclass);
tmp_class_container$class_creation_3__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__prepared);
tmp_class_container$class_creation_3__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
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
PyObject *tmp_outline_return_value_6;
// Tried code:
{
PyObject *tmp_assign_source_50;
PyObject *tmp_tuple_element_14;
tmp_tuple_element_14 = module_var_accessor_pynput$keyboard$_base$AbstractListener(tstate);
if (unlikely(tmp_tuple_element_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AbstractListener);
}

if (tmp_tuple_element_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 644;

    goto try_except_handler_17;
}
tmp_assign_source_50 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_50, 0, tmp_tuple_element_14);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_50;
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_direct_call_arg1_6;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_6 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_6);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_6};
    tmp_assign_source_51 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 644;

    goto try_except_handler_17;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_51;
}
{
PyObject *tmp_assign_source_52;
tmp_assign_source_52 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_52;
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_metaclass_value_11;
nuitka_bool tmp_condition_result_21;
int tmp_truth_name_6;
PyObject *tmp_type_arg_11;
PyObject *tmp_expression_value_32;
PyObject *tmp_subscript_value_6;
PyObject *tmp_bases_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 644;

    goto try_except_handler_17;
}
tmp_condition_result_21 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_6;
} else {
    goto condexpr_false_6;
}
condexpr_true_6:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_32 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_6 = const_int_0;
tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_32, tmp_subscript_value_6, 0);
if (tmp_type_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 644;

    goto try_except_handler_17;
}
tmp_metaclass_value_11 = BUILTIN_TYPE1(tmp_type_arg_11);
CHECK_OBJECT(tmp_type_arg_11);
Py_DECREF(tmp_type_arg_11);
if (tmp_metaclass_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 644;

    goto try_except_handler_17;
}
goto condexpr_end_6;
condexpr_false_6:;
tmp_metaclass_value_11 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_11);
condexpr_end_6:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_11 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_53 = SELECT_METACLASS(tstate, tmp_metaclass_value_11, tmp_bases_value_11);
CHECK_OBJECT(tmp_metaclass_value_11);
Py_DECREF(tmp_metaclass_value_11);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 644;

    goto try_except_handler_17;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_53;
}
{
bool tmp_condition_result_22;
PyObject *tmp_expression_value_33;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_33 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_33, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 644;

    goto try_except_handler_17;
}
tmp_condition_result_22 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_22 != false) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_assign_source_54;
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_34;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_15;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_34 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 644;

    goto try_except_handler_17;
}
tmp_tuple_element_15 = mod_consts.const_str_plain_Listener;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_15 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_pynput$keyboard$_base->m_frame.f_lineno = 644;
tmp_assign_source_54 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 644;

    goto try_except_handler_17;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_54;
}
{
bool tmp_condition_result_23;
PyObject *tmp_operand_value_6;
PyObject *tmp_expression_value_35;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_35 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_35, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 644;

    goto try_except_handler_17;
}
tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
assert(!(tmp_res == -1));
tmp_condition_result_23 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_23 != false) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
{
PyObject *tmp_raise_type_6;
PyObject *tmp_make_exception_arg_6;
PyObject *tmp_mod_expr_left_6;
PyObject *tmp_mod_expr_right_6;
PyObject *tmp_tuple_element_16;
PyObject *tmp_expression_value_36;
PyObject *tmp_name_value_18;
PyObject *tmp_default_value_6;
tmp_mod_expr_left_6 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_36 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_18 = const_str_plain___name__;
tmp_default_value_6 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_16 = BUILTIN_GETATTR(tstate, tmp_expression_value_36, tmp_name_value_18, tmp_default_value_6);
if (tmp_tuple_element_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 644;

    goto try_except_handler_17;
}
tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_37;
PyObject *tmp_type_arg_12;
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_12 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_37 = BUILTIN_TYPE1(tmp_type_arg_12);
assert(!(tmp_expression_value_37 == NULL));
tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_37);
Py_DECREF(tmp_expression_value_37);
if (tmp_tuple_element_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 644;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_16);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_mod_expr_right_6);
goto try_except_handler_17;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_make_exception_arg_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
CHECK_OBJECT(tmp_mod_expr_right_6);
Py_DECREF(tmp_mod_expr_right_6);
if (tmp_make_exception_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 644;

    goto try_except_handler_17;
}
frame_frame_pynput$keyboard$_base->m_frame.f_lineno = 644;
tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_6);
CHECK_OBJECT(tmp_make_exception_arg_6);
Py_DECREF(tmp_make_exception_arg_6);
assert(!(tmp_raise_type_6 == NULL));
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 644;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_17;
}
branch_no_17:;
goto branch_end_16;
branch_no_16:;
{
PyObject *tmp_assign_source_55;
tmp_assign_source_55 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_55;
}
branch_end_16:;
{
PyObject *tmp_assign_source_56;
outline_5_var___class__ = (PyCellObject *)PyCell_New(NULL);
{
PyObject *tmp_set_locals_6;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_6 = tmp_class_container$class_creation_4__prepared;
locals_pynput$keyboard$_base$$$class__6_Listener_644 = tmp_set_locals_6;
Py_INCREF(tmp_set_locals_6);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_5787da84b9f9e63f3d3b20cb4f6f6bde;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__6_Listener_644, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 644;

    goto try_except_handler_19;
}
tmp_dictset_value = mod_consts.const_str_digest_48a46ef00f3fe282a279bcd5909ee5f3;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__6_Listener_644, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 644;

    goto try_except_handler_19;
}
tmp_dictset_value = mod_consts.const_str_plain_Listener;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__6_Listener_644, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 644;

    goto try_except_handler_19;
}
tmp_dictset_value = mod_consts.const_int_pos_644;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__6_Listener_644, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 644;

    goto try_except_handler_19;
}
frame_frame_pynput$keyboard$_base$$$class__6_Listener_5 = MAKE_CLASS_FRAME(tstate, code_objects_695be71fb1d8a3e8f335f8da35c4ca9a, module_pynput$keyboard$_base, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_pynput$keyboard$_base$$$class__6_Listener_5, locals_pynput$keyboard$_base$$$class__6_Listener_644);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pynput$keyboard$_base$$$class__6_Listener_5);
assert(Py_REFCNT(frame_frame_pynput$keyboard$_base$$$class__6_Listener_5) == 2);

// Framed code:
{
PyObject *tmp_defaults_2;
tmp_defaults_2 = mod_consts.const_tuple_none_none_false_tuple;
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_pynput$keyboard$_base$$$function__26___init__(tstate, tmp_defaults_2);

tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__6_Listener_644, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 722;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
}

tmp_dictset_value = MAKE_FUNCTION_pynput$keyboard$_base$$$function__27_canonical(tstate);

tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__6_Listener_644, mod_consts.const_str_plain_canonical, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 740;
type_description_2 = "c";
    goto frame_exception_exit_5;
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$keyboard$_base$$$class__6_Listener_5);


goto frame_no_exception_4;
frame_exception_exit_5:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base$$$class__6_Listener_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_base$$$class__6_Listener_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base$$$class__6_Listener_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pynput$keyboard$_base$$$class__6_Listener_5,
    type_description_2,
    outline_5_var___class__
);



assertFrameObject(frame_frame_pynput$keyboard$_base$$$class__6_Listener_5);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_pynput$keyboard$_base$$$class__6_Listener_5);


// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_19;
skip_nested_handling_4:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__log_str_plain__options_tuple;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__6_Listener_644, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 644;

    goto try_except_handler_19;
}
{
nuitka_bool tmp_condition_result_24;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_cmp_expr_left_6 = tmp_class_container$class_creation_4__bases;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_cmp_expr_right_6 = tmp_class_container$class_creation_4__bases_orig;
tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 644;

    goto try_except_handler_19;
}
if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_4__bases_orig;
tmp_res = PyObject_SetItem(locals_pynput$keyboard$_base$$$class__6_Listener_644, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 644;

    goto try_except_handler_19;
}
branch_no_18:;
{
PyObject *tmp_assign_source_57;
PyObject *tmp_metaclass_value_12;
PyObject *tmp_name_value_19;
PyObject *tmp_bases_value_12;
PyObject *tmp_dict_arg_value_6;
PyObject *tmp_class_decl_dict_value_6;
PyObject *tmp_metaclass_args_6;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_metaclass_value_12 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_19 = mod_consts.const_str_plain_Listener;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_12 = tmp_class_container$class_creation_4__bases;
tmp_dict_arg_value_6 = locals_pynput$keyboard$_base$$$class__6_Listener_644;
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_decl_dict_value_6 = tmp_class_container$class_creation_4__class_decl_dict;
DICT_SET_ITEM(tmp_dict_arg_value_6, const_str_plain___classcell__, (PyObject *)outline_5_var___class__);
tmp_metaclass_args_6 = MAKE_TUPLE3(tstate, tmp_name_value_19, tmp_bases_value_12, tmp_dict_arg_value_6);
tmp_assign_source_57 = CALL_FUNCTION(tstate, tmp_metaclass_value_12, tmp_metaclass_args_6, tmp_class_decl_dict_value_6);
CHECK_OBJECT(tmp_metaclass_args_6);
Py_DECREF(tmp_metaclass_args_6);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 644;

    goto try_except_handler_19;
}
{
    PyObject *old = PyCell_GET((PyObject *)outline_5_var___class__);
    PyCell_SET((PyObject *)outline_5_var___class__, tmp_assign_source_57);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(PyCell_GET((PyObject *)outline_5_var___class__));
tmp_assign_source_56 = PyCell_GET((PyObject *)outline_5_var___class__);
Py_INCREF(tmp_assign_source_56);
goto try_return_handler_19;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_19:;
Py_DECREF(locals_pynput$keyboard$_base$$$class__6_Listener_644);
locals_pynput$keyboard$_base$$$class__6_Listener_644 = NULL;
goto try_return_handler_18;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pynput$keyboard$_base$$$class__6_Listener_644);
locals_pynput$keyboard$_base$$$class__6_Listener_644 = NULL;
// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto try_except_handler_18;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_18:;
CHECK_OBJECT(outline_5_var___class__);
assert(PyCell_Check((PyObject *)outline_5_var___class__));
CHECK_OBJECT(outline_5_var___class__);
Py_DECREF(outline_5_var___class__);
outline_5_var___class__ = NULL;
goto outline_result_12;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto outline_exception_6;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_6:;
exception_lineno = 644;
goto try_except_handler_17;
outline_result_12:;
UPDATE_STRING_DICT1(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener, tmp_assign_source_56);
}
goto try_end_7;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
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
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
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
tmp_outline_return_value_6 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_6);
goto outline_result_11;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_11:;
CHECK_OBJECT(tmp_outline_return_value_6);
Py_DECREF(tmp_outline_return_value_6);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_5;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pynput$keyboard$_base, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pynput$keyboard$_base->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pynput$keyboard$_base, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_pynput$keyboard$_base);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_5:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pynput$keyboard$_base", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "pynput.keyboard._base" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_pynput$keyboard$_base);
    return module_pynput$keyboard$_base;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pynput$keyboard$_base, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pynput$keyboard$_base", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
