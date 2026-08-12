/* Generated code for Python module 'urllib3$util$timeout'
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



/* The "module_urllib3$util$timeout" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$util$timeout;
PyDictObject *moduledict_urllib3$util$timeout;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain__validate_timeout;
PyObject *const_str_plain_connect;
PyObject *const_str_plain__connect;
PyObject *const_str_plain__read;
PyObject *const_str_plain_total;
PyObject *const_str_plain__start_connect;
PyObject *const_str_digest_a9562b9ae2879d76dee7fa6f34427855;
PyObject *const_str_digest_a2e66ed84948d21be07b9aad5a0ca97d;
PyObject *const_str_digest_b1f677bea1b8caf00c16fd199dd13b31;
PyObject *const_str_chr_41;
PyObject *const_str_plain__DEFAULT_TIMEOUT;
PyObject *const_str_plain_getdefaulttimeout;
PyObject *const_str_digest_64e15dbee6c4146dbe7421c492ac7ba5;
PyObject *const_tuple_type_TypeError_type_ValueError_tuple;
PyObject *const_str_digest_d0928c9302966cb6030b0c893055e417;
PyObject *const_str_digest_a2b9211444a2d47df9bfa67db6d202fd;
PyObject *const_str_digest_fba725f1baa66150f2573f535e7d7fa4;
PyObject *const_str_plain_Timeout;
PyObject *const_tuple_str_plain_read_str_plain_connect_tuple;
PyObject *const_str_digest_f5ae38040be454d73f943e895fb6715f;
PyObject *const_tuple_str_plain_connect_str_plain_read_str_plain_total_tuple;
PyObject *const_str_digest_a1c5c41c25762b04296015b06f0d3fa2;
PyObject *const_str_plain_TimeoutStateError;
PyObject *const_tuple_str_digest_b6f4a8f71fe9ce5f9173564ff1edc89c_tuple;
PyObject *const_str_plain_time;
PyObject *const_str_plain_monotonic;
PyObject *const_str_digest_bb0d5d2607c597f054cd1f715a7c54a4;
PyObject *const_tuple_str_digest_95153bcb73e0c026788c0de3a9407b4f_tuple;
PyObject *const_str_digest_bd99b3c1b6162da9b8b28dfa94fcec92;
PyObject *const_str_plain_min;
PyObject *const_str_digest_3f07ed69f6413e7ed3abfbfc14915dc7;
PyObject *const_str_plain_max;
PyObject *const_str_plain_get_connect_duration;
PyObject *const_str_plain_resolve_default_timeout;
PyObject *const_str_digest_0f1f383d34ce61e2d09e2e10bc6ac653;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_typing;
PyObject *const_str_plain_enum;
PyObject *const_tuple_str_plain_Enum_tuple;
PyObject *const_str_plain_Enum;
PyObject *const_str_plain_socket;
PyObject *const_tuple_str_plain_getdefaulttimeout_tuple;
PyObject *const_str_plain_exceptions;
PyObject *const_tuple_str_plain_TimeoutStateError_tuple;
PyObject *const_int_pos_2;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain__TYPE_DEFAULT;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_a82603375214fa180234243f5e1e4301;
PyObject *const_int_pos_14;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_token;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_b615c7f1930dd0a835f557bcc712ff9c;
PyObject *const_str_plain_Optional;
PyObject *const_str_plain_Union;
PyObject *const_str_plain__TYPE_TIMEOUT;
PyObject *const_str_digest_0e2f64c706149059d11789b57c7767b4;
PyObject *const_int_pos_25;
PyObject *const_str_plain_DEFAULT_TIMEOUT;
PyObject *const_dict_3274c1098e00a4178f050ad8d873ecad;
PyObject *const_str_digest_f7b67c6705a16b8d911cf345acb733d8;
PyObject *const_dict_e8d16ece775461636da8aedac2f07d6b;
PyObject *const_str_plain___repr__;
PyObject *const_str_digest_61e458e320209e369b72a6d0d5fa136b;
PyObject *const_str_plain___str__;
PyObject *const_dict_87cc81cb1744a38fb3278e4b8850ae0d;
PyObject *const_str_digest_e2d5f9246526b73006aa09200cb2cbfb;
PyObject *const_dict_a77ac95d5b4c53ec0673d2194cc663fa;
PyObject *const_str_digest_de3740d62fd80820559565b4f4c53af9;
PyObject *const_dict_4759046f786b4cff62c41e2f3c9ff8d0;
PyObject *const_str_plain_from_float;
PyObject *const_str_digest_1f0a7be0eb223c3fb339f4f8d89c76c4;
PyObject *const_dict_7a0c8558cbedac6d229d6ef8222b143a;
PyObject *const_str_plain_clone;
PyObject *const_str_digest_2f1dd0fe2e3f6f70224ea80af8bf458a;
PyObject *const_dict_19141050eff162b9ef06122f75e4a0a6;
PyObject *const_str_plain_start_connect;
PyObject *const_str_digest_26f721d77f7e03a7561fccb69d4eb1a4;
PyObject *const_str_digest_a9eab5f6a940c885b2cc9facaf38d440;
PyObject *const_dict_73043c26a18efbbb553f7889e0405b8f;
PyObject *const_str_plain_connect_timeout;
PyObject *const_str_digest_cfcbb8b2e672157769bd403fa94854d0;
PyObject *const_dict_db7decffacc19a524dc0bb9b22309b52;
PyObject *const_str_plain_read_timeout;
PyObject *const_str_digest_450defc94378d179d797255f208f6f07;
PyObject *const_tuple_4a82a9e7ea2bd12e92935a3b5cdc9e56_tuple;
PyObject *const_str_digest_a9c095d58de8dc953a26feab2ba202e2;
PyObject *const_str_digest_56c1d76d6fbf08b3cb8df1914efda274;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_fc2cf7f0fd082347583a3ba7b55239dd_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_cls_str_plain_value_str_plain_name_tuple;
PyObject *const_tuple_str_plain_cls_str_plain_timeout_tuple;
PyObject *const_tuple_str_plain_timeout_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[100];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("urllib3.util.timeout"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 100) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 100 values, got %d\n",
                    UN_TRANSLATE("urllib3.util.timeout"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__validate_timeout", mod_consts.const_str_plain__validate_timeout);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain__validate_timeout);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connect", mod_consts.const_str_plain_connect);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_connect);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__connect", mod_consts.const_str_plain__connect);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain__connect);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__read", mod_consts.const_str_plain__read);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain__read);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_total", mod_consts.const_str_plain_total);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_total);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__start_connect", mod_consts.const_str_plain__start_connect);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain__start_connect);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a9562b9ae2879d76dee7fa6f34427855", mod_consts.const_str_digest_a9562b9ae2879d76dee7fa6f34427855);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_a9562b9ae2879d76dee7fa6f34427855);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a2e66ed84948d21be07b9aad5a0ca97d", mod_consts.const_str_digest_a2e66ed84948d21be07b9aad5a0ca97d);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_a2e66ed84948d21be07b9aad5a0ca97d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b1f677bea1b8caf00c16fd199dd13b31", mod_consts.const_str_digest_b1f677bea1b8caf00c16fd199dd13b31);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_b1f677bea1b8caf00c16fd199dd13b31);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_41", mod_consts.const_str_chr_41);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_chr_41);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__DEFAULT_TIMEOUT", mod_consts.const_str_plain__DEFAULT_TIMEOUT);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain__DEFAULT_TIMEOUT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getdefaulttimeout", mod_consts.const_str_plain_getdefaulttimeout);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_getdefaulttimeout);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_64e15dbee6c4146dbe7421c492ac7ba5", mod_consts.const_str_digest_64e15dbee6c4146dbe7421c492ac7ba5);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_64e15dbee6c4146dbe7421c492ac7ba5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_TypeError_type_ValueError_tuple", mod_consts.const_tuple_type_TypeError_type_ValueError_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_tuple_type_TypeError_type_ValueError_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d0928c9302966cb6030b0c893055e417", mod_consts.const_str_digest_d0928c9302966cb6030b0c893055e417);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_d0928c9302966cb6030b0c893055e417);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a2b9211444a2d47df9bfa67db6d202fd", mod_consts.const_str_digest_a2b9211444a2d47df9bfa67db6d202fd);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_a2b9211444a2d47df9bfa67db6d202fd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fba725f1baa66150f2573f535e7d7fa4", mod_consts.const_str_digest_fba725f1baa66150f2573f535e7d7fa4);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_fba725f1baa66150f2573f535e7d7fa4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Timeout", mod_consts.const_str_plain_Timeout);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_Timeout);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_read_str_plain_connect_tuple", mod_consts.const_tuple_str_plain_read_str_plain_connect_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_read_str_plain_connect_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f5ae38040be454d73f943e895fb6715f", mod_consts.const_str_digest_f5ae38040be454d73f943e895fb6715f);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_f5ae38040be454d73f943e895fb6715f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_connect_str_plain_read_str_plain_total_tuple", mod_consts.const_tuple_str_plain_connect_str_plain_read_str_plain_total_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_connect_str_plain_read_str_plain_total_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a1c5c41c25762b04296015b06f0d3fa2", mod_consts.const_str_digest_a1c5c41c25762b04296015b06f0d3fa2);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_a1c5c41c25762b04296015b06f0d3fa2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TimeoutStateError", mod_consts.const_str_plain_TimeoutStateError);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_TimeoutStateError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_b6f4a8f71fe9ce5f9173564ff1edc89c_tuple", mod_consts.const_tuple_str_digest_b6f4a8f71fe9ce5f9173564ff1edc89c_tuple);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b6f4a8f71fe9ce5f9173564ff1edc89c_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_time", mod_consts.const_str_plain_time);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_time);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_monotonic", mod_consts.const_str_plain_monotonic);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_monotonic);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bb0d5d2607c597f054cd1f715a7c54a4", mod_consts.const_str_digest_bb0d5d2607c597f054cd1f715a7c54a4);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_bb0d5d2607c597f054cd1f715a7c54a4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_95153bcb73e0c026788c0de3a9407b4f_tuple", mod_consts.const_tuple_str_digest_95153bcb73e0c026788c0de3a9407b4f_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_95153bcb73e0c026788c0de3a9407b4f_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bd99b3c1b6162da9b8b28dfa94fcec92", mod_consts.const_str_digest_bd99b3c1b6162da9b8b28dfa94fcec92);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_bd99b3c1b6162da9b8b28dfa94fcec92);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_min", mod_consts.const_str_plain_min);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_min);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3f07ed69f6413e7ed3abfbfc14915dc7", mod_consts.const_str_digest_3f07ed69f6413e7ed3abfbfc14915dc7);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_3f07ed69f6413e7ed3abfbfc14915dc7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_max", mod_consts.const_str_plain_max);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_max);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_connect_duration", mod_consts.const_str_plain_get_connect_duration);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_connect_duration);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_resolve_default_timeout", mod_consts.const_str_plain_resolve_default_timeout);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_resolve_default_timeout);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0f1f383d34ce61e2d09e2e10bc6ac653", mod_consts.const_str_digest_0f1f383d34ce61e2d09e2e10bc6ac653);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_0f1f383d34ce61e2d09e2e10bc6ac653);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_typing", mod_consts.const_str_plain_typing);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_enum", mod_consts.const_str_plain_enum);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_enum);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Enum_tuple", mod_consts.const_tuple_str_plain_Enum_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Enum_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Enum", mod_consts.const_str_plain_Enum);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_Enum);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_socket", mod_consts.const_str_plain_socket);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_socket);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_getdefaulttimeout_tuple", mod_consts.const_tuple_str_plain_getdefaulttimeout_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_getdefaulttimeout_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exceptions", mod_consts.const_str_plain_exceptions);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_TimeoutStateError_tuple", mod_consts.const_tuple_str_plain_TimeoutStateError_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TimeoutStateError_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__TYPE_DEFAULT", mod_consts.const_str_plain__TYPE_DEFAULT);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain__TYPE_DEFAULT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a82603375214fa180234243f5e1e4301", mod_consts.const_str_digest_a82603375214fa180234243f5e1e4301);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_a82603375214fa180234243f5e1e4301);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_14", mod_consts.const_int_pos_14);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_int_pos_14);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_token", mod_consts.const_str_plain_token);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_token);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b615c7f1930dd0a835f557bcc712ff9c", mod_consts.const_str_digest_b615c7f1930dd0a835f557bcc712ff9c);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_b615c7f1930dd0a835f557bcc712ff9c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Optional", mod_consts.const_str_plain_Optional);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_Optional);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Union", mod_consts.const_str_plain_Union);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__TYPE_TIMEOUT", mod_consts.const_str_plain__TYPE_TIMEOUT);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain__TYPE_TIMEOUT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0e2f64c706149059d11789b57c7767b4", mod_consts.const_str_digest_0e2f64c706149059d11789b57c7767b4);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_0e2f64c706149059d11789b57c7767b4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_25", mod_consts.const_int_pos_25);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_int_pos_25);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DEFAULT_TIMEOUT", mod_consts.const_str_plain_DEFAULT_TIMEOUT);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_TIMEOUT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_3274c1098e00a4178f050ad8d873ecad", mod_consts.const_dict_3274c1098e00a4178f050ad8d873ecad);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_dict_3274c1098e00a4178f050ad8d873ecad);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f7b67c6705a16b8d911cf345acb733d8", mod_consts.const_str_digest_f7b67c6705a16b8d911cf345acb733d8);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_f7b67c6705a16b8d911cf345acb733d8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b", mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___repr__", mod_consts.const_str_plain___repr__);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain___repr__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_61e458e320209e369b72a6d0d5fa136b", mod_consts.const_str_digest_61e458e320209e369b72a6d0d5fa136b);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_61e458e320209e369b72a6d0d5fa136b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___str__", mod_consts.const_str_plain___str__);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain___str__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_87cc81cb1744a38fb3278e4b8850ae0d", mod_consts.const_dict_87cc81cb1744a38fb3278e4b8850ae0d);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_dict_87cc81cb1744a38fb3278e4b8850ae0d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e2d5f9246526b73006aa09200cb2cbfb", mod_consts.const_str_digest_e2d5f9246526b73006aa09200cb2cbfb);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_e2d5f9246526b73006aa09200cb2cbfb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_a77ac95d5b4c53ec0673d2194cc663fa", mod_consts.const_dict_a77ac95d5b4c53ec0673d2194cc663fa);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_dict_a77ac95d5b4c53ec0673d2194cc663fa);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_de3740d62fd80820559565b4f4c53af9", mod_consts.const_str_digest_de3740d62fd80820559565b4f4c53af9);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_de3740d62fd80820559565b4f4c53af9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_4759046f786b4cff62c41e2f3c9ff8d0", mod_consts.const_dict_4759046f786b4cff62c41e2f3c9ff8d0);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_dict_4759046f786b4cff62c41e2f3c9ff8d0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_from_float", mod_consts.const_str_plain_from_float);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_float);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1f0a7be0eb223c3fb339f4f8d89c76c4", mod_consts.const_str_digest_1f0a7be0eb223c3fb339f4f8d89c76c4);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_digest_1f0a7be0eb223c3fb339f4f8d89c76c4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_7a0c8558cbedac6d229d6ef8222b143a", mod_consts.const_dict_7a0c8558cbedac6d229d6ef8222b143a);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_dict_7a0c8558cbedac6d229d6ef8222b143a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_clone", mod_consts.const_str_plain_clone);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_clone);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2f1dd0fe2e3f6f70224ea80af8bf458a", mod_consts.const_str_digest_2f1dd0fe2e3f6f70224ea80af8bf458a);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_2f1dd0fe2e3f6f70224ea80af8bf458a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6", mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_start_connect", mod_consts.const_str_plain_start_connect);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_start_connect);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_26f721d77f7e03a7561fccb69d4eb1a4", mod_consts.const_str_digest_26f721d77f7e03a7561fccb69d4eb1a4);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_26f721d77f7e03a7561fccb69d4eb1a4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a9eab5f6a940c885b2cc9facaf38d440", mod_consts.const_str_digest_a9eab5f6a940c885b2cc9facaf38d440);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_a9eab5f6a940c885b2cc9facaf38d440);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_73043c26a18efbbb553f7889e0405b8f", mod_consts.const_dict_73043c26a18efbbb553f7889e0405b8f);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_dict_73043c26a18efbbb553f7889e0405b8f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connect_timeout", mod_consts.const_str_plain_connect_timeout);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_connect_timeout);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cfcbb8b2e672157769bd403fa94854d0", mod_consts.const_str_digest_cfcbb8b2e672157769bd403fa94854d0);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_cfcbb8b2e672157769bd403fa94854d0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_db7decffacc19a524dc0bb9b22309b52", mod_consts.const_dict_db7decffacc19a524dc0bb9b22309b52);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_dict_db7decffacc19a524dc0bb9b22309b52);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_read_timeout", mod_consts.const_str_plain_read_timeout);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_read_timeout);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_450defc94378d179d797255f208f6f07", mod_consts.const_str_digest_450defc94378d179d797255f208f6f07);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_450defc94378d179d797255f208f6f07);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_4a82a9e7ea2bd12e92935a3b5cdc9e56_tuple", mod_consts.const_tuple_4a82a9e7ea2bd12e92935a3b5cdc9e56_tuple);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_tuple_4a82a9e7ea2bd12e92935a3b5cdc9e56_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a9c095d58de8dc953a26feab2ba202e2", mod_consts.const_str_digest_a9c095d58de8dc953a26feab2ba202e2);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_a9c095d58de8dc953a26feab2ba202e2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_56c1d76d6fbf08b3cb8df1914efda274", mod_consts.const_str_digest_56c1d76d6fbf08b3cb8df1914efda274);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_56c1d76d6fbf08b3cb8df1914efda274);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_fc2cf7f0fd082347583a3ba7b55239dd_tuple", mod_consts.const_tuple_fc2cf7f0fd082347583a3ba7b55239dd_tuple);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_tuple_fc2cf7f0fd082347583a3ba7b55239dd_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_cls_str_plain_value_str_plain_name_tuple", mod_consts.const_tuple_str_plain_cls_str_plain_value_str_plain_name_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_value_str_plain_name_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_cls_str_plain_timeout_tuple", mod_consts.const_tuple_str_plain_cls_str_plain_timeout_tuple);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_timeout_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_timeout_tuple", mod_consts.const_tuple_str_plain_timeout_tuple);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_timeout_tuple);
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
void checkModuleConstants_urllib3$util$timeout(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__validate_timeout", mod_consts.const_str_plain__validate_timeout);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain__validate_timeout) && "mod_consts.const_str_plain__validate_timeout");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connect", mod_consts.const_str_plain_connect);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_connect) && "mod_consts.const_str_plain_connect");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__connect", mod_consts.const_str_plain__connect);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain__connect) && "mod_consts.const_str_plain__connect");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__read", mod_consts.const_str_plain__read);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain__read) && "mod_consts.const_str_plain__read");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_total", mod_consts.const_str_plain_total);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_total) && "mod_consts.const_str_plain_total");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__start_connect", mod_consts.const_str_plain__start_connect);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain__start_connect) && "mod_consts.const_str_plain__start_connect");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a9562b9ae2879d76dee7fa6f34427855", mod_consts.const_str_digest_a9562b9ae2879d76dee7fa6f34427855);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_a9562b9ae2879d76dee7fa6f34427855) && "mod_consts.const_str_digest_a9562b9ae2879d76dee7fa6f34427855");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a2e66ed84948d21be07b9aad5a0ca97d", mod_consts.const_str_digest_a2e66ed84948d21be07b9aad5a0ca97d);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_a2e66ed84948d21be07b9aad5a0ca97d) && "mod_consts.const_str_digest_a2e66ed84948d21be07b9aad5a0ca97d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b1f677bea1b8caf00c16fd199dd13b31", mod_consts.const_str_digest_b1f677bea1b8caf00c16fd199dd13b31);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_b1f677bea1b8caf00c16fd199dd13b31) && "mod_consts.const_str_digest_b1f677bea1b8caf00c16fd199dd13b31");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_41", mod_consts.const_str_chr_41);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_chr_41) && "mod_consts.const_str_chr_41");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__DEFAULT_TIMEOUT", mod_consts.const_str_plain__DEFAULT_TIMEOUT);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain__DEFAULT_TIMEOUT) && "mod_consts.const_str_plain__DEFAULT_TIMEOUT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getdefaulttimeout", mod_consts.const_str_plain_getdefaulttimeout);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_getdefaulttimeout) && "mod_consts.const_str_plain_getdefaulttimeout");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_64e15dbee6c4146dbe7421c492ac7ba5", mod_consts.const_str_digest_64e15dbee6c4146dbe7421c492ac7ba5);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_64e15dbee6c4146dbe7421c492ac7ba5) && "mod_consts.const_str_digest_64e15dbee6c4146dbe7421c492ac7ba5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_TypeError_type_ValueError_tuple", mod_consts.const_tuple_type_TypeError_type_ValueError_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_tuple_type_TypeError_type_ValueError_tuple) && "mod_consts.const_tuple_type_TypeError_type_ValueError_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d0928c9302966cb6030b0c893055e417", mod_consts.const_str_digest_d0928c9302966cb6030b0c893055e417);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_d0928c9302966cb6030b0c893055e417) && "mod_consts.const_str_digest_d0928c9302966cb6030b0c893055e417");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a2b9211444a2d47df9bfa67db6d202fd", mod_consts.const_str_digest_a2b9211444a2d47df9bfa67db6d202fd);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_a2b9211444a2d47df9bfa67db6d202fd) && "mod_consts.const_str_digest_a2b9211444a2d47df9bfa67db6d202fd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fba725f1baa66150f2573f535e7d7fa4", mod_consts.const_str_digest_fba725f1baa66150f2573f535e7d7fa4);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_fba725f1baa66150f2573f535e7d7fa4) && "mod_consts.const_str_digest_fba725f1baa66150f2573f535e7d7fa4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Timeout", mod_consts.const_str_plain_Timeout);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_Timeout) && "mod_consts.const_str_plain_Timeout");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_read_str_plain_connect_tuple", mod_consts.const_tuple_str_plain_read_str_plain_connect_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_read_str_plain_connect_tuple) && "mod_consts.const_tuple_str_plain_read_str_plain_connect_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f5ae38040be454d73f943e895fb6715f", mod_consts.const_str_digest_f5ae38040be454d73f943e895fb6715f);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_f5ae38040be454d73f943e895fb6715f) && "mod_consts.const_str_digest_f5ae38040be454d73f943e895fb6715f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_connect_str_plain_read_str_plain_total_tuple", mod_consts.const_tuple_str_plain_connect_str_plain_read_str_plain_total_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_connect_str_plain_read_str_plain_total_tuple) && "mod_consts.const_tuple_str_plain_connect_str_plain_read_str_plain_total_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a1c5c41c25762b04296015b06f0d3fa2", mod_consts.const_str_digest_a1c5c41c25762b04296015b06f0d3fa2);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_a1c5c41c25762b04296015b06f0d3fa2) && "mod_consts.const_str_digest_a1c5c41c25762b04296015b06f0d3fa2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TimeoutStateError", mod_consts.const_str_plain_TimeoutStateError);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_TimeoutStateError) && "mod_consts.const_str_plain_TimeoutStateError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_b6f4a8f71fe9ce5f9173564ff1edc89c_tuple", mod_consts.const_tuple_str_digest_b6f4a8f71fe9ce5f9173564ff1edc89c_tuple);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b6f4a8f71fe9ce5f9173564ff1edc89c_tuple) && "mod_consts.const_tuple_str_digest_b6f4a8f71fe9ce5f9173564ff1edc89c_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_time", mod_consts.const_str_plain_time);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_time) && "mod_consts.const_str_plain_time");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_monotonic", mod_consts.const_str_plain_monotonic);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_monotonic) && "mod_consts.const_str_plain_monotonic");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bb0d5d2607c597f054cd1f715a7c54a4", mod_consts.const_str_digest_bb0d5d2607c597f054cd1f715a7c54a4);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_bb0d5d2607c597f054cd1f715a7c54a4) && "mod_consts.const_str_digest_bb0d5d2607c597f054cd1f715a7c54a4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_95153bcb73e0c026788c0de3a9407b4f_tuple", mod_consts.const_tuple_str_digest_95153bcb73e0c026788c0de3a9407b4f_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_95153bcb73e0c026788c0de3a9407b4f_tuple) && "mod_consts.const_tuple_str_digest_95153bcb73e0c026788c0de3a9407b4f_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bd99b3c1b6162da9b8b28dfa94fcec92", mod_consts.const_str_digest_bd99b3c1b6162da9b8b28dfa94fcec92);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_bd99b3c1b6162da9b8b28dfa94fcec92) && "mod_consts.const_str_digest_bd99b3c1b6162da9b8b28dfa94fcec92");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_min", mod_consts.const_str_plain_min);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_min) && "mod_consts.const_str_plain_min");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3f07ed69f6413e7ed3abfbfc14915dc7", mod_consts.const_str_digest_3f07ed69f6413e7ed3abfbfc14915dc7);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_3f07ed69f6413e7ed3abfbfc14915dc7) && "mod_consts.const_str_digest_3f07ed69f6413e7ed3abfbfc14915dc7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_max", mod_consts.const_str_plain_max);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_max) && "mod_consts.const_str_plain_max");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_connect_duration", mod_consts.const_str_plain_get_connect_duration);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_connect_duration) && "mod_consts.const_str_plain_get_connect_duration");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_resolve_default_timeout", mod_consts.const_str_plain_resolve_default_timeout);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_resolve_default_timeout) && "mod_consts.const_str_plain_resolve_default_timeout");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0f1f383d34ce61e2d09e2e10bc6ac653", mod_consts.const_str_digest_0f1f383d34ce61e2d09e2e10bc6ac653);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_0f1f383d34ce61e2d09e2e10bc6ac653) && "mod_consts.const_str_digest_0f1f383d34ce61e2d09e2e10bc6ac653");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_typing", mod_consts.const_str_plain_typing);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing) && "mod_consts.const_str_plain_typing");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_enum", mod_consts.const_str_plain_enum);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_enum) && "mod_consts.const_str_plain_enum");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Enum_tuple", mod_consts.const_tuple_str_plain_Enum_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Enum_tuple) && "mod_consts.const_tuple_str_plain_Enum_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Enum", mod_consts.const_str_plain_Enum);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_Enum) && "mod_consts.const_str_plain_Enum");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_socket", mod_consts.const_str_plain_socket);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_socket) && "mod_consts.const_str_plain_socket");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_getdefaulttimeout_tuple", mod_consts.const_tuple_str_plain_getdefaulttimeout_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_getdefaulttimeout_tuple) && "mod_consts.const_tuple_str_plain_getdefaulttimeout_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exceptions", mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions) && "mod_consts.const_str_plain_exceptions");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_TimeoutStateError_tuple", mod_consts.const_tuple_str_plain_TimeoutStateError_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TimeoutStateError_tuple) && "mod_consts.const_tuple_str_plain_TimeoutStateError_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_int_pos_2) && "mod_consts.const_int_pos_2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__) && "mod_consts.const_str_plain___prepare__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__TYPE_DEFAULT", mod_consts.const_str_plain__TYPE_DEFAULT);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain__TYPE_DEFAULT) && "mod_consts.const_str_plain__TYPE_DEFAULT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__) && "mod_consts.const_str_plain___getitem__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295) && "mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass) && "mod_consts.const_str_angle_metaclass");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a82603375214fa180234243f5e1e4301", mod_consts.const_str_digest_a82603375214fa180234243f5e1e4301);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_a82603375214fa180234243f5e1e4301) && "mod_consts.const_str_digest_a82603375214fa180234243f5e1e4301");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_14", mod_consts.const_int_pos_14);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_int_pos_14) && "mod_consts.const_int_pos_14");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_token", mod_consts.const_str_plain_token);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_token) && "mod_consts.const_str_plain_token");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__) && "mod_consts.const_str_plain___orig_bases__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b615c7f1930dd0a835f557bcc712ff9c", mod_consts.const_str_digest_b615c7f1930dd0a835f557bcc712ff9c);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_b615c7f1930dd0a835f557bcc712ff9c) && "mod_consts.const_str_digest_b615c7f1930dd0a835f557bcc712ff9c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Optional", mod_consts.const_str_plain_Optional);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_Optional) && "mod_consts.const_str_plain_Optional");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Union", mod_consts.const_str_plain_Union);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union) && "mod_consts.const_str_plain_Union");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__TYPE_TIMEOUT", mod_consts.const_str_plain__TYPE_TIMEOUT);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain__TYPE_TIMEOUT) && "mod_consts.const_str_plain__TYPE_TIMEOUT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0e2f64c706149059d11789b57c7767b4", mod_consts.const_str_digest_0e2f64c706149059d11789b57c7767b4);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_0e2f64c706149059d11789b57c7767b4) && "mod_consts.const_str_digest_0e2f64c706149059d11789b57c7767b4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_25", mod_consts.const_int_pos_25);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_int_pos_25) && "mod_consts.const_int_pos_25");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DEFAULT_TIMEOUT", mod_consts.const_str_plain_DEFAULT_TIMEOUT);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_TIMEOUT) && "mod_consts.const_str_plain_DEFAULT_TIMEOUT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_3274c1098e00a4178f050ad8d873ecad", mod_consts.const_dict_3274c1098e00a4178f050ad8d873ecad);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_dict_3274c1098e00a4178f050ad8d873ecad) && "mod_consts.const_dict_3274c1098e00a4178f050ad8d873ecad");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f7b67c6705a16b8d911cf345acb733d8", mod_consts.const_str_digest_f7b67c6705a16b8d911cf345acb733d8);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_f7b67c6705a16b8d911cf345acb733d8) && "mod_consts.const_str_digest_f7b67c6705a16b8d911cf345acb733d8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b", mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b) && "mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___repr__", mod_consts.const_str_plain___repr__);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain___repr__) && "mod_consts.const_str_plain___repr__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_61e458e320209e369b72a6d0d5fa136b", mod_consts.const_str_digest_61e458e320209e369b72a6d0d5fa136b);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_61e458e320209e369b72a6d0d5fa136b) && "mod_consts.const_str_digest_61e458e320209e369b72a6d0d5fa136b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___str__", mod_consts.const_str_plain___str__);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain___str__) && "mod_consts.const_str_plain___str__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_87cc81cb1744a38fb3278e4b8850ae0d", mod_consts.const_dict_87cc81cb1744a38fb3278e4b8850ae0d);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_dict_87cc81cb1744a38fb3278e4b8850ae0d) && "mod_consts.const_dict_87cc81cb1744a38fb3278e4b8850ae0d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e2d5f9246526b73006aa09200cb2cbfb", mod_consts.const_str_digest_e2d5f9246526b73006aa09200cb2cbfb);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_e2d5f9246526b73006aa09200cb2cbfb) && "mod_consts.const_str_digest_e2d5f9246526b73006aa09200cb2cbfb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_a77ac95d5b4c53ec0673d2194cc663fa", mod_consts.const_dict_a77ac95d5b4c53ec0673d2194cc663fa);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_dict_a77ac95d5b4c53ec0673d2194cc663fa) && "mod_consts.const_dict_a77ac95d5b4c53ec0673d2194cc663fa");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_de3740d62fd80820559565b4f4c53af9", mod_consts.const_str_digest_de3740d62fd80820559565b4f4c53af9);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_de3740d62fd80820559565b4f4c53af9) && "mod_consts.const_str_digest_de3740d62fd80820559565b4f4c53af9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_4759046f786b4cff62c41e2f3c9ff8d0", mod_consts.const_dict_4759046f786b4cff62c41e2f3c9ff8d0);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_dict_4759046f786b4cff62c41e2f3c9ff8d0) && "mod_consts.const_dict_4759046f786b4cff62c41e2f3c9ff8d0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_from_float", mod_consts.const_str_plain_from_float);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_float) && "mod_consts.const_str_plain_from_float");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1f0a7be0eb223c3fb339f4f8d89c76c4", mod_consts.const_str_digest_1f0a7be0eb223c3fb339f4f8d89c76c4);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_digest_1f0a7be0eb223c3fb339f4f8d89c76c4) && "mod_consts.const_str_digest_1f0a7be0eb223c3fb339f4f8d89c76c4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_7a0c8558cbedac6d229d6ef8222b143a", mod_consts.const_dict_7a0c8558cbedac6d229d6ef8222b143a);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_dict_7a0c8558cbedac6d229d6ef8222b143a) && "mod_consts.const_dict_7a0c8558cbedac6d229d6ef8222b143a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_clone", mod_consts.const_str_plain_clone);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_clone) && "mod_consts.const_str_plain_clone");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2f1dd0fe2e3f6f70224ea80af8bf458a", mod_consts.const_str_digest_2f1dd0fe2e3f6f70224ea80af8bf458a);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_2f1dd0fe2e3f6f70224ea80af8bf458a) && "mod_consts.const_str_digest_2f1dd0fe2e3f6f70224ea80af8bf458a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6", mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6) && "mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_start_connect", mod_consts.const_str_plain_start_connect);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_start_connect) && "mod_consts.const_str_plain_start_connect");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_26f721d77f7e03a7561fccb69d4eb1a4", mod_consts.const_str_digest_26f721d77f7e03a7561fccb69d4eb1a4);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_26f721d77f7e03a7561fccb69d4eb1a4) && "mod_consts.const_str_digest_26f721d77f7e03a7561fccb69d4eb1a4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a9eab5f6a940c885b2cc9facaf38d440", mod_consts.const_str_digest_a9eab5f6a940c885b2cc9facaf38d440);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_a9eab5f6a940c885b2cc9facaf38d440) && "mod_consts.const_str_digest_a9eab5f6a940c885b2cc9facaf38d440");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_73043c26a18efbbb553f7889e0405b8f", mod_consts.const_dict_73043c26a18efbbb553f7889e0405b8f);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_dict_73043c26a18efbbb553f7889e0405b8f) && "mod_consts.const_dict_73043c26a18efbbb553f7889e0405b8f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connect_timeout", mod_consts.const_str_plain_connect_timeout);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_connect_timeout) && "mod_consts.const_str_plain_connect_timeout");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cfcbb8b2e672157769bd403fa94854d0", mod_consts.const_str_digest_cfcbb8b2e672157769bd403fa94854d0);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_cfcbb8b2e672157769bd403fa94854d0) && "mod_consts.const_str_digest_cfcbb8b2e672157769bd403fa94854d0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_db7decffacc19a524dc0bb9b22309b52", mod_consts.const_dict_db7decffacc19a524dc0bb9b22309b52);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_dict_db7decffacc19a524dc0bb9b22309b52) && "mod_consts.const_dict_db7decffacc19a524dc0bb9b22309b52");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_read_timeout", mod_consts.const_str_plain_read_timeout);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_read_timeout) && "mod_consts.const_str_plain_read_timeout");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_450defc94378d179d797255f208f6f07", mod_consts.const_str_digest_450defc94378d179d797255f208f6f07);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_450defc94378d179d797255f208f6f07) && "mod_consts.const_str_digest_450defc94378d179d797255f208f6f07");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_4a82a9e7ea2bd12e92935a3b5cdc9e56_tuple", mod_consts.const_tuple_4a82a9e7ea2bd12e92935a3b5cdc9e56_tuple);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_tuple_4a82a9e7ea2bd12e92935a3b5cdc9e56_tuple) && "mod_consts.const_tuple_4a82a9e7ea2bd12e92935a3b5cdc9e56_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a9c095d58de8dc953a26feab2ba202e2", mod_consts.const_str_digest_a9c095d58de8dc953a26feab2ba202e2);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_a9c095d58de8dc953a26feab2ba202e2) && "mod_consts.const_str_digest_a9c095d58de8dc953a26feab2ba202e2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_56c1d76d6fbf08b3cb8df1914efda274", mod_consts.const_str_digest_56c1d76d6fbf08b3cb8df1914efda274);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_56c1d76d6fbf08b3cb8df1914efda274) && "mod_consts.const_str_digest_56c1d76d6fbf08b3cb8df1914efda274");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple) && "mod_consts.const_tuple_str_plain___class___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_fc2cf7f0fd082347583a3ba7b55239dd_tuple", mod_consts.const_tuple_fc2cf7f0fd082347583a3ba7b55239dd_tuple);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_tuple_fc2cf7f0fd082347583a3ba7b55239dd_tuple) && "mod_consts.const_tuple_fc2cf7f0fd082347583a3ba7b55239dd_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple) && "mod_consts.const_tuple_str_plain_self_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_cls_str_plain_value_str_plain_name_tuple", mod_consts.const_tuple_str_plain_cls_str_plain_value_str_plain_name_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_value_str_plain_name_tuple) && "mod_consts.const_tuple_str_plain_cls_str_plain_value_str_plain_name_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_cls_str_plain_timeout_tuple", mod_consts.const_tuple_str_plain_cls_str_plain_timeout_tuple);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_timeout_tuple) && "mod_consts.const_tuple_str_plain_cls_str_plain_timeout_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_timeout_tuple", mod_consts.const_tuple_str_plain_timeout_tuple);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_timeout_tuple) && "mod_consts.const_tuple_str_plain_timeout_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 9
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
static PyObject *module_var_accessor_urllib3$util$timeout$Enum(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$timeout->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$timeout->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)mod_consts.const_str_plain_Enum);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$timeout->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Enum);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Enum, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Enum);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Enum, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)mod_consts.const_str_plain_Enum);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)mod_consts.const_str_plain_Enum);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Enum);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$timeout$Timeout(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$timeout->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$timeout->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)mod_consts.const_str_plain_Timeout);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$timeout->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Timeout);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Timeout, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Timeout);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Timeout, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)mod_consts.const_str_plain_Timeout);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)mod_consts.const_str_plain_Timeout);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Timeout);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$timeout$TimeoutStateError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$timeout->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$timeout->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeoutStateError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$timeout->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TimeoutStateError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TimeoutStateError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TimeoutStateError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TimeoutStateError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeoutStateError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeoutStateError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeoutStateError);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$timeout$_DEFAULT_TIMEOUT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$timeout->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$timeout->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_TIMEOUT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$timeout->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__DEFAULT_TIMEOUT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__DEFAULT_TIMEOUT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__DEFAULT_TIMEOUT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__DEFAULT_TIMEOUT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_TIMEOUT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_TIMEOUT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_TIMEOUT);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$timeout$_TYPE_DEFAULT(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$timeout->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$timeout->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)mod_consts.const_str_plain__TYPE_DEFAULT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$timeout->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__TYPE_DEFAULT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__TYPE_DEFAULT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__TYPE_DEFAULT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__TYPE_DEFAULT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)mod_consts.const_str_plain__TYPE_DEFAULT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)mod_consts.const_str_plain__TYPE_DEFAULT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__TYPE_DEFAULT);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$timeout$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$timeout->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$timeout->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$timeout->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___annotations__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___annotations__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___annotations__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___annotations__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$timeout$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$timeout->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$timeout->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$timeout->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$timeout$getdefaulttimeout(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$timeout->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$timeout->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)mod_consts.const_str_plain_getdefaulttimeout);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$timeout->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_getdefaulttimeout);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_getdefaulttimeout, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_getdefaulttimeout);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_getdefaulttimeout, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)mod_consts.const_str_plain_getdefaulttimeout);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)mod_consts.const_str_plain_getdefaulttimeout);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_getdefaulttimeout);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$timeout$time(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$timeout->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$timeout->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$timeout->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_time);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_time, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_time);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_time, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_7fdeebc9326e523d960c339bdf97d377;
static PyCodeObject *code_objects_6c45d97fdba8f586397a512648860512;
static PyCodeObject *code_objects_bdef150689fec1badebc9977a741eb43;
static PyCodeObject *code_objects_9989d323a7e7e58bcc13c274e467a790;
static PyCodeObject *code_objects_62043f46c0603dc2e2895f468d6a5f27;
static PyCodeObject *code_objects_390f0c6be83d8fc8584a126512c88100;
static PyCodeObject *code_objects_c113699f43eb4d6c215275e32037a28e;
static PyCodeObject *code_objects_dbe2811db620acc35c62c5a3bd1435ba;
static PyCodeObject *code_objects_bad80e8432033d34b72fb9e5126f1dde;
static PyCodeObject *code_objects_8b7fc67d42d21a945b8713e8f3c0759d;
static PyCodeObject *code_objects_0312d5ffcdd727126f6694d1a4882a33;
static PyCodeObject *code_objects_3a0ed25c824bebbb46879ef6a4edf7ec;
static PyCodeObject *code_objects_a2172e7219b19d9b4560ee94fdde7c7c;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_a9c095d58de8dc953a26feab2ba202e2); CHECK_OBJECT(module_filename_obj);
code_objects_7fdeebc9326e523d960c339bdf97d377 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_56c1d76d6fbf08b3cb8df1914efda274, mod_consts.const_str_digest_56c1d76d6fbf08b3cb8df1914efda274, NULL, NULL, 0, 0, 0);
code_objects_6c45d97fdba8f586397a512648860512 = MAKE_CODE_OBJECT(module_filename_obj, 25, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Timeout, mod_consts.const_str_plain_Timeout, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_bdef150689fec1badebc9977a741eb43 = MAKE_CODE_OBJECT(module_filename_obj, 14, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__TYPE_DEFAULT, mod_consts.const_str_plain__TYPE_DEFAULT, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_9989d323a7e7e58bcc13c274e467a790 = MAKE_CODE_OBJECT(module_filename_obj, 109, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_f7b67c6705a16b8d911cf345acb733d8, mod_consts.const_tuple_fc2cf7f0fd082347583a3ba7b55239dd_tuple, NULL, 4, 0, 0);
code_objects_62043f46c0603dc2e2895f468d6a5f27 = MAKE_CODE_OBJECT(module_filename_obj, 120, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_61e458e320209e369b72a6d0d5fa136b, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_390f0c6be83d8fc8584a126512c88100 = MAKE_CODE_OBJECT(module_filename_obj, 131, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__validate_timeout, mod_consts.const_str_digest_de3740d62fd80820559565b4f4c53af9, mod_consts.const_tuple_str_plain_cls_str_plain_value_str_plain_name_tuple, NULL, 3, 0, 0);
code_objects_c113699f43eb4d6c215275e32037a28e = MAKE_CODE_OBJECT(module_filename_obj, 188, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_clone, mod_consts.const_str_digest_2f1dd0fe2e3f6f70224ea80af8bf458a, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_dbe2811db620acc35c62c5a3bd1435ba = MAKE_CODE_OBJECT(module_filename_obj, 228, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_connect_timeout, mod_consts.const_str_digest_cfcbb8b2e672157769bd403fa94854d0, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_bad80e8432033d34b72fb9e5126f1dde = MAKE_CODE_OBJECT(module_filename_obj, 173, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_from_float, mod_consts.const_str_digest_1f0a7be0eb223c3fb339f4f8d89c76c4, mod_consts.const_tuple_str_plain_cls_str_plain_timeout_tuple, NULL, 2, 0, 0);
code_objects_8b7fc67d42d21a945b8713e8f3c0759d = MAKE_CODE_OBJECT(module_filename_obj, 213, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_connect_duration, mod_consts.const_str_digest_a9eab5f6a940c885b2cc9facaf38d440, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_0312d5ffcdd727126f6694d1a4882a33 = MAKE_CODE_OBJECT(module_filename_obj, 246, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_read_timeout, mod_consts.const_str_digest_450defc94378d179d797255f208f6f07, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_3a0ed25c824bebbb46879ef6a4edf7ec = MAKE_CODE_OBJECT(module_filename_obj, 127, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_resolve_default_timeout, mod_consts.const_str_digest_e2d5f9246526b73006aa09200cb2cbfb, mod_consts.const_tuple_str_plain_timeout_tuple, NULL, 1, 0, 0);
code_objects_a2172e7219b19d9b4560ee94fdde7c7c = MAKE_CODE_OBJECT(module_filename_obj, 202, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_start_connect, mod_consts.const_str_digest_26f721d77f7e03a7561fccb69d4eb1a4, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_urllib3$util$timeout$$$function__10_read_timeout(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$timeout$$$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$timeout$$$function__2___repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$timeout$$$function__3_resolve_default_timeout(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$timeout$$$function__4__validate_timeout(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$timeout$$$function__5_from_float(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$timeout$$$function__6_clone(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$timeout$$$function__7_start_connect(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$timeout$$$function__8_get_connect_duration(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$timeout$$$function__9_connect_timeout(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_urllib3$util$timeout$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_total = python_pars[1];
PyObject *par_connect = python_pars[2];
PyObject *par_read = python_pars[3];
struct Nuitka_FrameObject *frame_frame_urllib3$util$timeout$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$timeout$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$timeout$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$timeout$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$timeout$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$timeout$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_9989d323a7e7e58bcc13c274e467a790, module_urllib3$util$timeout, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$timeout$$$function__1___init__->m_type_description == NULL);
frame_frame_urllib3$util$timeout$$$function__1___init__ = cache_frame_frame_urllib3$util$timeout$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$timeout$$$function__1___init__);
assert(Py_REFCNT(frame_frame_urllib3$util$timeout$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_connect);
tmp_args_element_value_1 = par_connect;
tmp_args_element_value_2 = mod_consts.const_str_plain_connect;
frame_frame_urllib3$util$timeout$$$function__1___init__->m_frame.f_lineno = 115;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_ass_attr_value_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain__validate_timeout,
        call_args
    );
}

if (tmp_ass_attr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__connect, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_value_1);
Py_DECREF(tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_ass_attr_target_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(par_read);
tmp_args_element_value_3 = par_read;
tmp_args_element_value_4 = const_str_plain_read;
frame_frame_urllib3$util$timeout$$$function__1___init__->m_frame.f_lineno = 116;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_ass_attr_value_2 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain__validate_timeout,
        call_args
    );
}

if (tmp_ass_attr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain__read, tmp_ass_attr_value_2);
CHECK_OBJECT(tmp_ass_attr_value_2);
Py_DECREF(tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_ass_attr_target_3;
CHECK_OBJECT(par_self);
tmp_called_instance_3 = par_self;
CHECK_OBJECT(par_total);
tmp_args_element_value_5 = par_total;
tmp_args_element_value_6 = mod_consts.const_str_plain_total;
frame_frame_urllib3$util$timeout$$$function__1___init__->m_frame.f_lineno = 117;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_ass_attr_value_3 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain__validate_timeout,
        call_args
    );
}

if (tmp_ass_attr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain_total, tmp_ass_attr_value_3);
CHECK_OBJECT(tmp_ass_attr_value_3);
Py_DECREF(tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_4;
PyObject *tmp_ass_attr_target_4;
tmp_ass_attr_value_4 = Py_None;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_4, mod_consts.const_str_plain__start_connect, tmp_ass_attr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$timeout$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$timeout$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$timeout$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$timeout$$$function__1___init__,
    type_description_1,
    par_self,
    par_total,
    par_connect,
    par_read
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$timeout$$$function__1___init__ == cache_frame_frame_urllib3$util$timeout$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$timeout$$$function__1___init__);
    cache_frame_frame_urllib3$util$timeout$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_urllib3$util$timeout$$$function__1___init__);

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
CHECK_OBJECT(par_total);
Py_DECREF(par_total);
CHECK_OBJECT(par_connect);
Py_DECREF(par_connect);
CHECK_OBJECT(par_read);
Py_DECREF(par_read);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_total);
Py_DECREF(par_total);
CHECK_OBJECT(par_connect);
Py_DECREF(par_connect);
CHECK_OBJECT(par_read);
Py_DECREF(par_read);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$timeout$$$function__2___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_urllib3$util$timeout$$$function__2___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$timeout$$$function__2___repr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$timeout$$$function__2___repr__)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$timeout$$$function__2___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$timeout$$$function__2___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$timeout$$$function__2___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_62043f46c0603dc2e2895f468d6a5f27, module_urllib3$util$timeout, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$timeout$$$function__2___repr__->m_type_description == NULL);
frame_frame_urllib3$util$timeout$$$function__2___repr__ = cache_frame_frame_urllib3$util$timeout$$$function__2___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$timeout$$$function__2___repr__);
assert(Py_REFCNT(frame_frame_urllib3$util$timeout$$$function__2___repr__) == 2);

// Framed code:
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_format_spec_1;
CHECK_OBJECT(par_self);
tmp_type_arg_1 = par_self;
tmp_expression_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_expression_value_1 == NULL));
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 8);
{
PyObject *tmp_format_value_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_a9562b9ae2879d76dee7fa6f34427855;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__connect);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_a2e66ed84948d21be07b9aad5a0ca97d;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__read);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_value_3 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_b1f677bea1b8caf00c16fd199dd13b31;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_operand_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_total);
if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_value_4 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_format_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
CHECK_OBJECT(tmp_format_value_4);
Py_DECREF(tmp_format_value_4);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_41;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 7, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_return_value == NULL));
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$timeout$$$function__2___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$timeout$$$function__2___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$timeout$$$function__2___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$timeout$$$function__2___repr__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$timeout$$$function__2___repr__ == cache_frame_frame_urllib3$util$timeout$$$function__2___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$timeout$$$function__2___repr__);
    cache_frame_frame_urllib3$util$timeout$$$function__2___repr__ = NULL;
}

assertFrameObject(frame_frame_urllib3$util$timeout$$$function__2___repr__);

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


static PyObject *impl_urllib3$util$timeout$$$function__3_resolve_default_timeout(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_timeout = python_pars[0];
struct Nuitka_FrameObject *frame_frame_urllib3$util$timeout$$$function__3_resolve_default_timeout;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$timeout$$$function__3_resolve_default_timeout = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$timeout$$$function__3_resolve_default_timeout)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$timeout$$$function__3_resolve_default_timeout);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$timeout$$$function__3_resolve_default_timeout == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$timeout$$$function__3_resolve_default_timeout = MAKE_FUNCTION_FRAME(tstate, code_objects_3a0ed25c824bebbb46879ef6a4edf7ec, module_urllib3$util$timeout, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$timeout$$$function__3_resolve_default_timeout->m_type_description == NULL);
frame_frame_urllib3$util$timeout$$$function__3_resolve_default_timeout = cache_frame_frame_urllib3$util$timeout$$$function__3_resolve_default_timeout;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$timeout$$$function__3_resolve_default_timeout);
assert(Py_REFCNT(frame_frame_urllib3$util$timeout$$$function__3_resolve_default_timeout) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
CHECK_OBJECT(par_timeout);
tmp_cmp_expr_left_1 = par_timeout;
tmp_cmp_expr_right_1 = module_var_accessor_urllib3$util$timeout$_DEFAULT_TIMEOUT(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__DEFAULT_TIMEOUT);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 128;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_called_value_1 = module_var_accessor_urllib3$util$timeout$getdefaulttimeout(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getdefaulttimeout);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 128;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$timeout$$$function__3_resolve_default_timeout->m_frame.f_lineno = 128;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(par_timeout);
tmp_return_value = par_timeout;
Py_INCREF(tmp_return_value);
condexpr_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$timeout$$$function__3_resolve_default_timeout, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$timeout$$$function__3_resolve_default_timeout->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$timeout$$$function__3_resolve_default_timeout, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$timeout$$$function__3_resolve_default_timeout,
    type_description_1,
    par_timeout
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$timeout$$$function__3_resolve_default_timeout == cache_frame_frame_urllib3$util$timeout$$$function__3_resolve_default_timeout) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$timeout$$$function__3_resolve_default_timeout);
    cache_frame_frame_urllib3$util$timeout$$$function__3_resolve_default_timeout = NULL;
}

assertFrameObject(frame_frame_urllib3$util$timeout$$$function__3_resolve_default_timeout);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$timeout$$$function__4__validate_timeout(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *par_name = python_pars[2];
struct Nuitka_FrameObject *frame_frame_urllib3$util$timeout$$$function__4__validate_timeout;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$timeout$$$function__4__validate_timeout = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$timeout$$$function__4__validate_timeout)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$timeout$$$function__4__validate_timeout);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$timeout$$$function__4__validate_timeout == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$timeout$$$function__4__validate_timeout = MAKE_FUNCTION_FRAME(tstate, code_objects_390f0c6be83d8fc8584a126512c88100, module_urllib3$util$timeout, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$timeout$$$function__4__validate_timeout->m_type_description == NULL);
frame_frame_urllib3$util$timeout$$$function__4__validate_timeout = cache_frame_frame_urllib3$util$timeout$$$function__4__validate_timeout;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$timeout$$$function__4__validate_timeout);
assert(Py_REFCNT(frame_frame_urllib3$util$timeout$$$function__4__validate_timeout) == 2);

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
CHECK_OBJECT(par_value);
tmp_cmp_expr_left_1 = par_value;
tmp_cmp_expr_right_1 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_value);
tmp_cmp_expr_left_2 = par_value;
tmp_cmp_expr_right_2 = module_var_accessor_urllib3$util$timeout$_DEFAULT_TIMEOUT(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__DEFAULT_TIMEOUT);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 141;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
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
CHECK_OBJECT(par_value);
tmp_return_value = par_value;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_value);
tmp_isinstance_inst_1 = par_value;
tmp_isinstance_cls_1 = (PyObject *)&PyBool_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "ooo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_64e15dbee6c4146dbe7421c492ac7ba5;
frame_frame_urllib3$util$timeout$$$function__4__validate_timeout->m_frame.f_lineno = 145;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 145;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_2:;
// Tried code:
{
PyObject *tmp_float_arg_1;
PyObject *tmp_capi_result_1;
CHECK_OBJECT(par_value);
tmp_float_arg_1 = par_value;
tmp_capi_result_1 = TO_FLOAT(tmp_float_arg_1);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_capi_result_1);
Py_DECREF(tmp_capi_result_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$timeout$$$function__4__validate_timeout, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$timeout$$$function__4__validate_timeout, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = mod_consts.const_tuple_type_TypeError_type_ValueError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_raise_cause_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_d0928c9302966cb6030b0c893055e417;
CHECK_OBJECT(par_name);
tmp_tuple_element_1 = par_name;
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_value);
tmp_tuple_element_1 = par_value;
PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
frame_frame_urllib3$util$timeout$$$function__4__validate_timeout->m_frame.f_lineno = 152;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
tmp_raise_cause_1 = Py_None;
exception_state.exception_value = tmp_raise_type_2;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 155;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "ooo";
goto try_except_handler_2;
}
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 149;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$util$timeout$$$function__4__validate_timeout->m_frame)) {
        frame_frame_urllib3$util$timeout$$$function__4__validate_timeout->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_2;
branch_end_3:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
// End of try:
try_end_1:;
// Tried code:
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(par_value);
tmp_cmp_expr_left_4 = par_value;
tmp_cmp_expr_right_4 = const_int_0;
tmp_condition_result_4 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_a2b9211444a2d47df9bfa67db6d202fd;
CHECK_OBJECT(par_name);
tmp_tuple_element_2 = par_name;
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_value);
tmp_tuple_element_2 = par_value;
PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 1, tmp_tuple_element_2);
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
frame_frame_urllib3$util$timeout$$$function__4__validate_timeout->m_frame.f_lineno = 159;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 159;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto try_except_handler_3;
}
branch_no_4:;
goto try_end_2;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$timeout$$$function__4__validate_timeout, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$timeout$$$function__4__validate_timeout, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = EXC_TYPE(tstate);
tmp_cmp_expr_right_5 = PyExc_TypeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
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
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_tuple_element_3;
PyObject *tmp_raise_cause_2;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_d0928c9302966cb6030b0c893055e417;
CHECK_OBJECT(par_name);
tmp_tuple_element_3 = par_name;
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_mod_expr_right_3, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_value);
tmp_tuple_element_3 = par_value;
PyTuple_SET_ITEM0(tmp_mod_expr_right_3, 1, tmp_tuple_element_3);
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
frame_frame_urllib3$util$timeout$$$function__4__validate_timeout->m_frame.f_lineno = 165;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
tmp_raise_cause_2 = Py_None;
exception_state.exception_value = tmp_raise_type_4;
Py_INCREF(tmp_raise_cause_2);
exception_lineno = 168;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_2);
type_description_1 = "ooo";
goto try_except_handler_4;
}
goto branch_end_5;
branch_no_5:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 157;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$util$timeout$$$function__4__validate_timeout->m_frame)) {
        frame_frame_urllib3$util$timeout$$$function__4__validate_timeout->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_4;
branch_end_5:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
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
try_end_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$timeout$$$function__4__validate_timeout, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$timeout$$$function__4__validate_timeout->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$timeout$$$function__4__validate_timeout, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$timeout$$$function__4__validate_timeout,
    type_description_1,
    par_cls,
    par_value,
    par_name
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$timeout$$$function__4__validate_timeout == cache_frame_frame_urllib3$util$timeout$$$function__4__validate_timeout) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$timeout$$$function__4__validate_timeout);
    cache_frame_frame_urllib3$util$timeout$$$function__4__validate_timeout = NULL;
}

assertFrameObject(frame_frame_urllib3$util$timeout$$$function__4__validate_timeout);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(par_value);
tmp_return_value = par_value;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$timeout$$$function__5_from_float(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_timeout = python_pars[1];
struct Nuitka_FrameObject *frame_frame_urllib3$util$timeout$$$function__5_from_float;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$timeout$$$function__5_from_float = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$timeout$$$function__5_from_float)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$timeout$$$function__5_from_float);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$timeout$$$function__5_from_float == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$timeout$$$function__5_from_float = MAKE_FUNCTION_FRAME(tstate, code_objects_bad80e8432033d34b72fb9e5126f1dde, module_urllib3$util$timeout, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$timeout$$$function__5_from_float->m_type_description == NULL);
frame_frame_urllib3$util$timeout$$$function__5_from_float = cache_frame_frame_urllib3$util$timeout$$$function__5_from_float;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$timeout$$$function__5_from_float);
assert(Py_REFCNT(frame_frame_urllib3$util$timeout$$$function__5_from_float) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
tmp_called_value_1 = module_var_accessor_urllib3$util$timeout$Timeout(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Timeout);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 186;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_timeout);
tmp_kw_call_value_0_1 = par_timeout;
CHECK_OBJECT(par_timeout);
tmp_kw_call_value_1_1 = par_timeout;
frame_frame_urllib3$util$timeout$$$function__5_from_float->m_frame.f_lineno = 186;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_read_str_plain_connect_tuple);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$timeout$$$function__5_from_float, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$timeout$$$function__5_from_float->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$timeout$$$function__5_from_float, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$timeout$$$function__5_from_float,
    type_description_1,
    par_cls,
    par_timeout
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$timeout$$$function__5_from_float == cache_frame_frame_urllib3$util$timeout$$$function__5_from_float) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$timeout$$$function__5_from_float);
    cache_frame_frame_urllib3$util$timeout$$$function__5_from_float = NULL;
}

assertFrameObject(frame_frame_urllib3$util$timeout$$$function__5_from_float);

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
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$timeout$$$function__6_clone(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_urllib3$util$timeout$$$function__6_clone;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$timeout$$$function__6_clone = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$timeout$$$function__6_clone)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$timeout$$$function__6_clone);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$timeout$$$function__6_clone == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$timeout$$$function__6_clone = MAKE_FUNCTION_FRAME(tstate, code_objects_c113699f43eb4d6c215275e32037a28e, module_urllib3$util$timeout, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$timeout$$$function__6_clone->m_type_description == NULL);
frame_frame_urllib3$util$timeout$$$function__6_clone = cache_frame_frame_urllib3$util$timeout$$$function__6_clone;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$timeout$$$function__6_clone);
assert(Py_REFCNT(frame_frame_urllib3$util$timeout$$$function__6_clone) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_expression_value_3;
tmp_called_value_1 = module_var_accessor_urllib3$util$timeout$Timeout(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Timeout);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 200;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__connect);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__read);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 200;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_total);
if (tmp_kw_call_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);

exception_lineno = 200;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$timeout$$$function__6_clone->m_frame.f_lineno = 200;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_connect_str_plain_read_str_plain_total_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
CHECK_OBJECT(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_2_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$timeout$$$function__6_clone, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$timeout$$$function__6_clone->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$timeout$$$function__6_clone, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$timeout$$$function__6_clone,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$timeout$$$function__6_clone == cache_frame_frame_urllib3$util$timeout$$$function__6_clone) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$timeout$$$function__6_clone);
    cache_frame_frame_urllib3$util$timeout$$$function__6_clone = NULL;
}

assertFrameObject(frame_frame_urllib3$util$timeout$$$function__6_clone);

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


static PyObject *impl_urllib3$util$timeout$$$function__7_start_connect(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_urllib3$util$timeout$$$function__7_start_connect;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$timeout$$$function__7_start_connect = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$timeout$$$function__7_start_connect)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$timeout$$$function__7_start_connect);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$timeout$$$function__7_start_connect == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$timeout$$$function__7_start_connect = MAKE_FUNCTION_FRAME(tstate, code_objects_a2172e7219b19d9b4560ee94fdde7c7c, module_urllib3$util$timeout, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$timeout$$$function__7_start_connect->m_type_description == NULL);
frame_frame_urllib3$util$timeout$$$function__7_start_connect = cache_frame_frame_urllib3$util$timeout$$$function__7_start_connect;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$timeout$$$function__7_start_connect);
assert(Py_REFCNT(frame_frame_urllib3$util$timeout$$$function__7_start_connect) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__start_connect);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
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
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_urllib3$util$timeout$TimeoutStateError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TimeoutStateError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 209;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$timeout$$$function__7_start_connect->m_frame.f_lineno = 209;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_b6f4a8f71fe9ce5f9173564ff1edc89c_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 209;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_ass_attr_target_1;
tmp_called_instance_1 = module_var_accessor_urllib3$util$timeout$time(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_time);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 210;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$timeout$$$function__7_start_connect->m_frame.f_lineno = 210;
tmp_ass_attr_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_monotonic);
if (tmp_ass_attr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__start_connect, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_value_1);
Py_DECREF(tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__start_connect);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$timeout$$$function__7_start_connect, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$timeout$$$function__7_start_connect->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$timeout$$$function__7_start_connect, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$timeout$$$function__7_start_connect,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$timeout$$$function__7_start_connect == cache_frame_frame_urllib3$util$timeout$$$function__7_start_connect) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$timeout$$$function__7_start_connect);
    cache_frame_frame_urllib3$util$timeout$$$function__7_start_connect = NULL;
}

assertFrameObject(frame_frame_urllib3$util$timeout$$$function__7_start_connect);

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


static PyObject *impl_urllib3$util$timeout$$$function__8_get_connect_duration(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_urllib3$util$timeout$$$function__8_get_connect_duration;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$timeout$$$function__8_get_connect_duration = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$timeout$$$function__8_get_connect_duration)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$timeout$$$function__8_get_connect_duration);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$timeout$$$function__8_get_connect_duration == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$timeout$$$function__8_get_connect_duration = MAKE_FUNCTION_FRAME(tstate, code_objects_8b7fc67d42d21a945b8713e8f3c0759d, module_urllib3$util$timeout, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$timeout$$$function__8_get_connect_duration->m_type_description == NULL);
frame_frame_urllib3$util$timeout$$$function__8_get_connect_duration = cache_frame_frame_urllib3$util$timeout$$$function__8_get_connect_duration;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$timeout$$$function__8_get_connect_duration);
assert(Py_REFCNT(frame_frame_urllib3$util$timeout$$$function__8_get_connect_duration) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__start_connect);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "o";
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
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_urllib3$util$timeout$TimeoutStateError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TimeoutStateError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 222;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$timeout$$$function__8_get_connect_duration->m_frame.f_lineno = 222;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_95153bcb73e0c026788c0de3a9407b4f_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 222;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_2;
tmp_called_instance_1 = module_var_accessor_urllib3$util$timeout$time(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_time);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 225;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$timeout$$$function__8_get_connect_duration->m_frame.f_lineno = 225;
tmp_sub_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_monotonic);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__start_connect);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 225;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$timeout$$$function__8_get_connect_duration, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$timeout$$$function__8_get_connect_duration->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$timeout$$$function__8_get_connect_duration, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$timeout$$$function__8_get_connect_duration,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$timeout$$$function__8_get_connect_duration == cache_frame_frame_urllib3$util$timeout$$$function__8_get_connect_duration) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$timeout$$$function__8_get_connect_duration);
    cache_frame_frame_urllib3$util$timeout$$$function__8_get_connect_duration = NULL;
}

assertFrameObject(frame_frame_urllib3$util$timeout$$$function__8_get_connect_duration);

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


static PyObject *impl_urllib3$util$timeout$$$function__9_connect_timeout(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_urllib3$util$timeout$$$function__9_connect_timeout;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$timeout$$$function__9_connect_timeout = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$timeout$$$function__9_connect_timeout)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$timeout$$$function__9_connect_timeout);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$timeout$$$function__9_connect_timeout == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$timeout$$$function__9_connect_timeout = MAKE_FUNCTION_FRAME(tstate, code_objects_dbe2811db620acc35c62c5a3bd1435ba, module_urllib3$util$timeout, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$timeout$$$function__9_connect_timeout->m_type_description == NULL);
frame_frame_urllib3$util$timeout$$$function__9_connect_timeout = cache_frame_frame_urllib3$util$timeout$$$function__9_connect_timeout;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$timeout$$$function__9_connect_timeout);
assert(Py_REFCNT(frame_frame_urllib3$util$timeout$$$function__9_connect_timeout) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_total);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "o";
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
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__connect);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__connect);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__connect);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = module_var_accessor_urllib3$util$timeout$_DEFAULT_TIMEOUT(tstate);
if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__DEFAULT_TIMEOUT);
}

if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 240;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
tmp_condition_result_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_2 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_total);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_7;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_1 != NULL);
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__connect);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_total);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 243;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$timeout$$$function__9_connect_timeout->m_frame.f_lineno = 243;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$timeout$$$function__9_connect_timeout, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$timeout$$$function__9_connect_timeout->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$timeout$$$function__9_connect_timeout, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$timeout$$$function__9_connect_timeout,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$timeout$$$function__9_connect_timeout == cache_frame_frame_urllib3$util$timeout$$$function__9_connect_timeout) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$timeout$$$function__9_connect_timeout);
    cache_frame_frame_urllib3$util$timeout$$$function__9_connect_timeout = NULL;
}

assertFrameObject(frame_frame_urllib3$util$timeout$$$function__9_connect_timeout);

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


static PyObject *impl_urllib3$util$timeout$$$function__10_read_timeout(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_urllib3$util$timeout$$$function__10_read_timeout;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$timeout$$$function__10_read_timeout = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$timeout$$$function__10_read_timeout)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$timeout$$$function__10_read_timeout);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$timeout$$$function__10_read_timeout == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$timeout$$$function__10_read_timeout = MAKE_FUNCTION_FRAME(tstate, code_objects_0312d5ffcdd727126f6694d1a4882a33, module_urllib3$util$timeout, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$timeout$$$function__10_read_timeout->m_type_description == NULL);
frame_frame_urllib3$util$timeout$$$function__10_read_timeout = cache_frame_frame_urllib3$util$timeout$$$function__10_read_timeout;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$timeout$$$function__10_read_timeout);
assert(Py_REFCNT(frame_frame_urllib3$util$timeout$$$function__10_read_timeout) == 2);

// Framed code:
{
bool tmp_condition_result_1;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
int tmp_and_left_truth_2;
bool tmp_and_left_value_2;
bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
int tmp_and_left_truth_3;
bool tmp_and_left_value_3;
bool tmp_and_right_value_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_total);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "o";
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
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_total);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = module_var_accessor_urllib3$util$timeout$_DEFAULT_TIMEOUT(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__DEFAULT_TIMEOUT);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 264;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__read);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_and_left_value_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
tmp_and_left_truth_3 = tmp_and_left_value_3 != false ? 1 : 0;
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__read);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = module_var_accessor_urllib3$util$timeout$_DEFAULT_TIMEOUT(tstate);
if (unlikely(tmp_cmp_expr_right_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__DEFAULT_TIMEOUT);
}

if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_4);

exception_lineno = 266;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_right_value_3 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
tmp_and_right_value_2 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_and_right_value_2 = tmp_and_left_value_3;
and_end_3:;
tmp_and_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_and_right_value_1 = tmp_and_left_value_2;
and_end_2:;
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
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__start_connect);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__read);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_8;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_1 != NULL);
tmp_args_element_value_1 = const_int_0;
tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_2 != NULL);
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_total);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_urllib3$util$timeout$$$function__10_read_timeout->m_frame.f_lineno = 271;
tmp_sub_expr_right_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_connect_duration);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 271;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__read);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 271;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$timeout$$$function__10_read_timeout->m_frame.f_lineno = 271;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$timeout$$$function__10_read_timeout->m_frame.f_lineno = 271;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_3;
int tmp_and_left_truth_4;
bool tmp_and_left_value_4;
bool tmp_and_right_value_4;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_9;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_total);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = Py_None;
tmp_and_left_value_4 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
tmp_and_left_truth_4 = tmp_and_left_value_4 != false ? 1 : 0;
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_cmp_expr_left_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_total);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_7 = module_var_accessor_urllib3$util$timeout$_DEFAULT_TIMEOUT(tstate);
if (unlikely(tmp_cmp_expr_right_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__DEFAULT_TIMEOUT);
}

if (tmp_cmp_expr_right_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_7);

exception_lineno = 272;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_right_value_4 = (tmp_cmp_expr_left_7 != tmp_cmp_expr_right_7) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
tmp_condition_result_3 = tmp_and_right_value_4;
goto and_end_4;
and_left_4:;
tmp_condition_result_3 = tmp_and_left_value_4;
and_end_4:;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_expression_value_11;
PyObject *tmp_called_instance_2;
tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_3 != NULL);
tmp_args_element_value_5 = const_int_0;
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_sub_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_total);
if (tmp_sub_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_urllib3$util$timeout$$$function__10_read_timeout->m_frame.f_lineno = 273;
tmp_sub_expr_right_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_get_connect_duration);
if (tmp_sub_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_2);

exception_lineno = 273;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
CHECK_OBJECT(tmp_sub_expr_left_2);
Py_DECREF(tmp_sub_expr_left_2);
CHECK_OBJECT(tmp_sub_expr_right_2);
Py_DECREF(tmp_sub_expr_right_2);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$timeout$$$function__10_read_timeout->m_frame.f_lineno = 273;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_resolve_default_timeout);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_13 = par_self;
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain__read);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 275;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$timeout$$$function__10_read_timeout->m_frame.f_lineno = 275;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_end_3:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$timeout$$$function__10_read_timeout, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$timeout$$$function__10_read_timeout->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$timeout$$$function__10_read_timeout, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$timeout$$$function__10_read_timeout,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$timeout$$$function__10_read_timeout == cache_frame_frame_urllib3$util$timeout$$$function__10_read_timeout) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$timeout$$$function__10_read_timeout);
    cache_frame_frame_urllib3$util$timeout$$$function__10_read_timeout = NULL;
}

assertFrameObject(frame_frame_urllib3$util$timeout$$$function__10_read_timeout);

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



static PyObject *MAKE_FUNCTION_urllib3$util$timeout$$$function__10_read_timeout(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$timeout$$$function__10_read_timeout,
        mod_consts.const_str_plain_read_timeout,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_450defc94378d179d797255f208f6f07,
#endif
        code_objects_0312d5ffcdd727126f6694d1a4882a33,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$timeout,
        mod_consts.const_str_digest_0f1f383d34ce61e2d09e2e10bc6ac653,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$timeout$$$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$timeout$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f7b67c6705a16b8d911cf345acb733d8,
#endif
        code_objects_9989d323a7e7e58bcc13c274e467a790,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$timeout,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$timeout$$$function__2___repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$timeout$$$function__2___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_61e458e320209e369b72a6d0d5fa136b,
#endif
        code_objects_62043f46c0603dc2e2895f468d6a5f27,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$timeout,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$timeout$$$function__3_resolve_default_timeout(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$timeout$$$function__3_resolve_default_timeout,
        mod_consts.const_str_plain_resolve_default_timeout,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e2d5f9246526b73006aa09200cb2cbfb,
#endif
        code_objects_3a0ed25c824bebbb46879ef6a4edf7ec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$timeout,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$timeout$$$function__4__validate_timeout(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$timeout$$$function__4__validate_timeout,
        mod_consts.const_str_plain__validate_timeout,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_de3740d62fd80820559565b4f4c53af9,
#endif
        code_objects_390f0c6be83d8fc8584a126512c88100,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$timeout,
        mod_consts.const_str_digest_fba725f1baa66150f2573f535e7d7fa4,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$timeout$$$function__5_from_float(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$timeout$$$function__5_from_float,
        mod_consts.const_str_plain_from_float,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1f0a7be0eb223c3fb339f4f8d89c76c4,
#endif
        code_objects_bad80e8432033d34b72fb9e5126f1dde,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$timeout,
        mod_consts.const_str_digest_f5ae38040be454d73f943e895fb6715f,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$timeout$$$function__6_clone(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$timeout$$$function__6_clone,
        mod_consts.const_str_plain_clone,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2f1dd0fe2e3f6f70224ea80af8bf458a,
#endif
        code_objects_c113699f43eb4d6c215275e32037a28e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$timeout,
        mod_consts.const_str_digest_a1c5c41c25762b04296015b06f0d3fa2,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$timeout$$$function__7_start_connect(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$timeout$$$function__7_start_connect,
        mod_consts.const_str_plain_start_connect,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_26f721d77f7e03a7561fccb69d4eb1a4,
#endif
        code_objects_a2172e7219b19d9b4560ee94fdde7c7c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$timeout,
        mod_consts.const_str_digest_bb0d5d2607c597f054cd1f715a7c54a4,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$timeout$$$function__8_get_connect_duration(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$timeout$$$function__8_get_connect_duration,
        mod_consts.const_str_plain_get_connect_duration,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a9eab5f6a940c885b2cc9facaf38d440,
#endif
        code_objects_8b7fc67d42d21a945b8713e8f3c0759d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$timeout,
        mod_consts.const_str_digest_bd99b3c1b6162da9b8b28dfa94fcec92,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$timeout$$$function__9_connect_timeout(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$timeout$$$function__9_connect_timeout,
        mod_consts.const_str_plain_connect_timeout,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_cfcbb8b2e672157769bd403fa94854d0,
#endif
        code_objects_dbe2811db620acc35c62c5a3bd1435ba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$timeout,
        mod_consts.const_str_digest_3f07ed69f6413e7ed3abfbfc14915dc7,
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

static function_impl_code const function_table_urllib3$util$timeout[] = {
impl_urllib3$util$timeout$$$function__1___init__,
impl_urllib3$util$timeout$$$function__2___repr__,
impl_urllib3$util$timeout$$$function__3_resolve_default_timeout,
impl_urllib3$util$timeout$$$function__4__validate_timeout,
impl_urllib3$util$timeout$$$function__5_from_float,
impl_urllib3$util$timeout$$$function__6_clone,
impl_urllib3$util$timeout$$$function__7_start_connect,
impl_urllib3$util$timeout$$$function__8_get_connect_duration,
impl_urllib3$util$timeout$$$function__9_connect_timeout,
impl_urllib3$util$timeout$$$function__10_read_timeout,
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

    return Nuitka_Function_GetFunctionState(function, function_table_urllib3$util$timeout);
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
        module_urllib3$util$timeout,
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
        function_table_urllib3$util$timeout,
        sizeof(function_table_urllib3$util$timeout) / sizeof(function_impl_code)
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
static char const *module_full_name = "urllib3.util.timeout";
#endif

// Internal entry point for module code.
PyObject *module_code_urllib3$util$timeout(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("urllib3$util$timeout");

    // Store the module for future use.
    module_urllib3$util$timeout = module;

    moduledict_urllib3$util$timeout = MODULE_DICT(module_urllib3$util$timeout);

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
        PRINT_STRING("urllib3$util$timeout: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("urllib3$util$timeout: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("urllib3$util$timeout: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "urllib3.util.timeout" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initurllib3$util$timeout\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_urllib3$util$timeout,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_urllib3$util$timeout,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_urllib3$util$timeout,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$timeout,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$timeout,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_urllib3$util$timeout);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_urllib3$util$timeout);
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

        UPDATE_STRING_DICT1(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$timeout;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_urllib3$util$timeout$$$class__1__TYPE_DEFAULT_14 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_urllib3$util$timeout$$$class__1__TYPE_DEFAULT_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *locals_urllib3$util$timeout$$$class__2_Timeout_25 = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$timeout$$$class__2_Timeout_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_urllib3$util$timeout = MAKE_MODULE_FRAME(code_objects_7fdeebc9326e523d960c339bdf97d377, module_urllib3$util$timeout);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$timeout);
assert(Py_REFCNT(frame_frame_urllib3$util$timeout) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_urllib3$util$timeout$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_urllib3$util$timeout$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT1(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_time;
tmp_globals_arg_value_1 = (PyObject *)moduledict_urllib3$util$timeout;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_urllib3$util$timeout->m_frame.f_lineno = 3;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)mod_consts.const_str_plain_time, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_8 == NULL));
UPDATE_STRING_DICT0(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_enum;
tmp_globals_arg_value_2 = (PyObject *)moduledict_urllib3$util$timeout;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Enum_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_urllib3$util$timeout->m_frame.f_lineno = 5;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_urllib3$util$timeout,
        mod_consts.const_str_plain_Enum,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Enum);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)mod_consts.const_str_plain_Enum, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_socket;
tmp_globals_arg_value_3 = (PyObject *)moduledict_urllib3$util$timeout;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_getdefaulttimeout_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_urllib3$util$timeout->m_frame.f_lineno = 6;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_urllib3$util$timeout,
        mod_consts.const_str_plain_getdefaulttimeout,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_getdefaulttimeout);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)mod_consts.const_str_plain_getdefaulttimeout, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_exceptions;
tmp_globals_arg_value_4 = (PyObject *)moduledict_urllib3$util$timeout;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_TimeoutStateError_tuple;
tmp_level_value_4 = mod_consts.const_int_pos_2;
frame_frame_urllib3$util$timeout->m_frame.f_lineno = 8;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_urllib3$util$timeout,
        mod_consts.const_str_plain_TimeoutStateError,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_TimeoutStateError);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeoutStateError, tmp_assign_source_11);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_urllib3$util$timeout$Enum(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Enum);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 14;

    goto try_except_handler_1;
}
tmp_assign_source_12 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_12, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_13 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
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


exception_lineno = 14;

    goto try_except_handler_1;
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


exception_lineno = 14;

    goto try_except_handler_1;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_15 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_15;
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


exception_lineno = 14;

    goto try_except_handler_1;
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
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
tmp_tuple_element_2 = mod_consts.const_str_plain__TYPE_DEFAULT;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_urllib3$util$timeout->m_frame.f_lineno = 14;
tmp_assign_source_16 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_16;
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


exception_lineno = 14;

    goto try_except_handler_1;
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
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_5 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_5, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
frame_frame_urllib3$util$timeout->m_frame.f_lineno = 14;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 14;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_17;
}
branch_end_1:;
{
PyObject *tmp_assign_source_18;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_urllib3$util$timeout$$$class__1__TYPE_DEFAULT_14 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_a82603375214fa180234243f5e1e4301;
tmp_res = PyObject_SetItem(locals_urllib3$util$timeout$$$class__1__TYPE_DEFAULT_14, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_plain__TYPE_DEFAULT;
tmp_res = PyObject_SetItem(locals_urllib3$util$timeout$$$class__1__TYPE_DEFAULT_14, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_int_pos_14;
tmp_res = PyObject_SetItem(locals_urllib3$util$timeout$$$class__1__TYPE_DEFAULT_14, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_3;
}
frame_frame_urllib3$util$timeout$$$class__1__TYPE_DEFAULT_2 = MAKE_CLASS_FRAME(tstate, code_objects_bdef150689fec1badebc9977a741eb43, module_urllib3$util$timeout, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_urllib3$util$timeout$$$class__1__TYPE_DEFAULT_2, locals_urllib3$util$timeout$$$class__1__TYPE_DEFAULT_14);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$timeout$$$class__1__TYPE_DEFAULT_2);
assert(Py_REFCNT(frame_frame_urllib3$util$timeout$$$class__1__TYPE_DEFAULT_2) == 2);

// Framed code:
tmp_dictset_value = const_int_neg_1;
tmp_res = PyObject_SetItem(locals_urllib3$util$timeout$$$class__1__TYPE_DEFAULT_14, mod_consts.const_str_plain_token, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;
type_description_2 = "o";
    goto frame_exception_exit_2;
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_urllib3$util$timeout$$$class__1__TYPE_DEFAULT_2);


goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$timeout$$$class__1__TYPE_DEFAULT_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$timeout$$$class__1__TYPE_DEFAULT_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$timeout$$$class__1__TYPE_DEFAULT_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$timeout$$$class__1__TYPE_DEFAULT_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_urllib3$util$timeout$$$class__1__TYPE_DEFAULT_2);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_urllib3$util$timeout$$$class__1__TYPE_DEFAULT_2);


// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_3;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_urllib3$util$timeout$$$class__1__TYPE_DEFAULT_14, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_3;
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


exception_lineno = 14;

    goto try_except_handler_3;
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
tmp_res = PyObject_SetItem(locals_urllib3$util$timeout$$$class__1__TYPE_DEFAULT_14, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_3;
}
branch_no_3:;
{
PyObject *tmp_assign_source_19;
PyObject *tmp_metaclass_value_2;
PyObject *tmp_name_value_6;
PyObject *tmp_bases_value_2;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_metaclass_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_6 = mod_consts.const_str_plain__TYPE_DEFAULT;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_1__bases;
tmp_dict_arg_value_1 = locals_urllib3$util$timeout$$$class__1__TYPE_DEFAULT_14;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_6, tmp_bases_value_2, tmp_dict_arg_value_1);
tmp_assign_source_19 = CALL_FUNCTION(tstate, tmp_metaclass_value_2, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_3;
}
{
    PyObject *old = outline_0_var___class__;
    outline_0_var___class__ = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_18 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_18);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_urllib3$util$timeout$$$class__1__TYPE_DEFAULT_14);
locals_urllib3$util$timeout$$$class__1__TYPE_DEFAULT_14 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_urllib3$util$timeout$$$class__1__TYPE_DEFAULT_14);
locals_urllib3$util$timeout$$$class__1__TYPE_DEFAULT_14 = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 14;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)mod_consts.const_str_plain__TYPE_DEFAULT, tmp_assign_source_18);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
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
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
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
PyObject *tmp_assign_source_20;
PyObject *tmp_expression_value_7;
tmp_expression_value_7 = module_var_accessor_urllib3$util$timeout$_TYPE_DEFAULT(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__TYPE_DEFAULT);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 20;

    goto frame_exception_exit_1;
}
tmp_assign_source_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_token);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_TIMEOUT, tmp_assign_source_20);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_b615c7f1930dd0a835f557bcc712ff9c;
tmp_ass_subscribed_1 = module_var_accessor_urllib3$util$timeout$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 20;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain__DEFAULT_TIMEOUT;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_3;
PyObject *tmp_tuple_element_4;
tmp_expression_value_9 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_9 == NULL));
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_Optional);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
tmp_expression_value_11 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_11 == NULL));
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_Union);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_8);

exception_lineno = 22;

    goto frame_exception_exit_1;
}
tmp_tuple_element_4 = (PyObject *)&PyFloat_Type;
tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_3, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = module_var_accessor_urllib3$util$timeout$_TYPE_DEFAULT(tstate);
if (unlikely(tmp_tuple_element_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__TYPE_DEFAULT);
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 22;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_subscript_value_3, 1, tmp_tuple_element_4);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_10);
Py_DECREF(tmp_subscript_value_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_subscript_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_subscript_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_8);

exception_lineno = 22;

    goto frame_exception_exit_1;
}
tmp_assign_source_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)mod_consts.const_str_plain__TYPE_TIMEOUT, tmp_assign_source_21);
}
{
PyObject *tmp_outline_return_value_2;
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_23;
}
// Tried code:
{
PyObject *tmp_assign_source_24;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_urllib3$util$timeout$$$class__2_Timeout_25 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
tmp_dictset_value = mod_consts.const_str_digest_a82603375214fa180234243f5e1e4301;
tmp_result = DICT_SET_ITEM(locals_urllib3$util$timeout$$$class__2_Timeout_25, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_0e2f64c706149059d11789b57c7767b4;
tmp_result = DICT_SET_ITEM(locals_urllib3$util$timeout$$$class__2_Timeout_25, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_Timeout;
tmp_result = DICT_SET_ITEM(locals_urllib3$util$timeout$$$class__2_Timeout_25, const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_25;
tmp_result = DICT_SET_ITEM(locals_urllib3$util$timeout$$$class__2_Timeout_25, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_result = DICT_SET_ITEM(locals_urllib3$util$timeout$$$class__2_Timeout_25, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_urllib3$util$timeout$$$class__2_Timeout_3 = MAKE_CLASS_FRAME(tstate, code_objects_6c45d97fdba8f586397a512648860512, module_urllib3$util$timeout, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_urllib3$util$timeout$$$class__2_Timeout_3, locals_urllib3$util$timeout$$$class__2_Timeout_25);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$timeout$$$class__2_Timeout_3);
assert(Py_REFCNT(frame_frame_urllib3$util$timeout$$$class__2_Timeout_3) == 2);

// Framed code:
tmp_dictset_value = module_var_accessor_urllib3$util$timeout$_DEFAULT_TIMEOUT(tstate);
if (unlikely(tmp_dictset_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__DEFAULT_TIMEOUT);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 107;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_result = DICT_SET_ITEM(locals_urllib3$util$timeout$$$class__2_Timeout_25, mod_consts.const_str_plain_DEFAULT_TIMEOUT, tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_plain__TYPE_TIMEOUT;
tmp_ass_subscribed_2 = DICT_GET_ITEM0(tstate, locals_urllib3$util$timeout$$$class__2_Timeout_25, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 107;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_DEFAULT_TIMEOUT;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_defaults_1;
PyObject *tmp_tuple_element_5;
PyObject *tmp_annotations_1;
tmp_tuple_element_5 = Py_None;
tmp_defaults_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_5);
tmp_tuple_element_5 = module_var_accessor_urllib3$util$timeout$_DEFAULT_TIMEOUT(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__DEFAULT_TIMEOUT);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 112;
type_description_2 = "o";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM0(tmp_defaults_1, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = module_var_accessor_urllib3$util$timeout$_DEFAULT_TIMEOUT(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__DEFAULT_TIMEOUT);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_2 = "o";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM0(tmp_defaults_1, 2, tmp_tuple_element_5);
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_defaults_1);
goto frame_exception_exit_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_3274c1098e00a4178f050ad8d873ecad);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$timeout$$$function__1___init__(tstate, tmp_defaults_1, tmp_annotations_1);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$timeout$$$class__2_Timeout_25, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$timeout$$$function__2___repr__(tstate, tmp_annotations_2);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$timeout$$$class__2_Timeout_25, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = DICT_GET_ITEM0(tstate, locals_urllib3$util$timeout$$$class__2_Timeout_25, mod_consts.const_str_plain___repr__);

if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain___repr__);

exception_lineno = 124;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_result = DICT_SET_ITEM(locals_urllib3$util$timeout$$$class__2_Timeout_25, mod_consts.const_str_plain___str__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_staticmethod_arg_1;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_87cc81cb1744a38fb3278e4b8850ae0d);

tmp_staticmethod_arg_1 = MAKE_FUNCTION_urllib3$util$timeout$$$function__3_resolve_default_timeout(tstate, tmp_annotations_3);

tmp_dictset_value = BUILTIN_STATICMETHOD(tstate, tmp_staticmethod_arg_1);
CHECK_OBJECT(tmp_staticmethod_arg_1);
Py_DECREF(tmp_staticmethod_arg_1);
assert(!(tmp_dictset_value == NULL));
tmp_result = DICT_SET_ITEM(locals_urllib3$util$timeout$$$class__2_Timeout_25, mod_consts.const_str_plain_resolve_default_timeout, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_classmethod_arg_1;
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_a77ac95d5b4c53ec0673d2194cc663fa);

tmp_classmethod_arg_1 = MAKE_FUNCTION_urllib3$util$timeout$$$function__4__validate_timeout(tstate, tmp_annotations_4);

tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_1);
CHECK_OBJECT(tmp_classmethod_arg_1);
Py_DECREF(tmp_classmethod_arg_1);
assert(!(tmp_dictset_value == NULL));
tmp_result = DICT_SET_ITEM(locals_urllib3$util$timeout$$$class__2_Timeout_25, mod_consts.const_str_plain__validate_timeout, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_classmethod_arg_2;
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_4759046f786b4cff62c41e2f3c9ff8d0);

tmp_classmethod_arg_2 = MAKE_FUNCTION_urllib3$util$timeout$$$function__5_from_float(tstate, tmp_annotations_5);

tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_2);
CHECK_OBJECT(tmp_classmethod_arg_2);
Py_DECREF(tmp_classmethod_arg_2);
assert(!(tmp_dictset_value == NULL));
tmp_result = DICT_SET_ITEM(locals_urllib3$util$timeout$$$class__2_Timeout_25, mod_consts.const_str_plain_from_float, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_7a0c8558cbedac6d229d6ef8222b143a);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$timeout$$$function__6_clone(tstate, tmp_annotations_6);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$timeout$$$class__2_Timeout_25, mod_consts.const_str_plain_clone, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$timeout$$$function__7_start_connect(tstate, tmp_annotations_7);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$timeout$$$class__2_Timeout_25, mod_consts.const_str_plain_start_connect, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$timeout$$$function__8_get_connect_duration(tstate, tmp_annotations_8);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$timeout$$$class__2_Timeout_25, mod_consts.const_str_plain_get_connect_duration, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_9;
tmp_called_value_2 = (PyObject *)&PyProperty_Type;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_73043c26a18efbbb553f7889e0405b8f);

tmp_args_element_value_1 = MAKE_FUNCTION_urllib3$util$timeout$$$function__9_connect_timeout(tstate, tmp_annotations_9);

frame_frame_urllib3$util$timeout$$$class__2_Timeout_3->m_frame.f_lineno = 227;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_result = DICT_SET_ITEM(locals_urllib3$util$timeout$$$class__2_Timeout_25, mod_consts.const_str_plain_connect_timeout, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_10;
tmp_called_value_3 = (PyObject *)&PyProperty_Type;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_db7decffacc19a524dc0bb9b22309b52);

tmp_args_element_value_2 = MAKE_FUNCTION_urllib3$util$timeout$$$function__10_read_timeout(tstate, tmp_annotations_10);

frame_frame_urllib3$util$timeout$$$class__2_Timeout_3->m_frame.f_lineno = 245;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_result = DICT_SET_ITEM(locals_urllib3$util$timeout$$$class__2_Timeout_25, mod_consts.const_str_plain_read_timeout, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_urllib3$util$timeout$$$class__2_Timeout_3);


goto frame_no_exception_2;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$timeout$$$class__2_Timeout_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$timeout$$$class__2_Timeout_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$timeout$$$class__2_Timeout_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$timeout$$$class__2_Timeout_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_urllib3$util$timeout$$$class__2_Timeout_3);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_urllib3$util$timeout$$$class__2_Timeout_3);


// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_6;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_4a82a9e7ea2bd12e92935a3b5cdc9e56_tuple;
tmp_result = DICT_SET_ITEM(locals_urllib3$util$timeout$$$class__2_Timeout_25, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_25;
PyObject *tmp_metaclass_value_3;
PyObject *tmp_name_value_7;
PyObject *tmp_bases_value_3;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_class_decl_dict_value_2;
PyObject *tmp_metaclass_args_2;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
tmp_name_value_7 = mod_consts.const_str_plain_Timeout;
tmp_bases_value_3 = const_tuple_empty;
tmp_dict_arg_value_2 = locals_urllib3$util$timeout$$$class__2_Timeout_25;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_decl_dict_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_metaclass_args_2 = MAKE_TUPLE3(tstate, tmp_name_value_7, tmp_bases_value_3, tmp_dict_arg_value_2);
tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_metaclass_value_3, tmp_metaclass_args_2, tmp_class_decl_dict_value_2);
CHECK_OBJECT(tmp_metaclass_args_2);
Py_DECREF(tmp_metaclass_args_2);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_6;
}
{
    PyObject *old = outline_1_var___class__;
    outline_1_var___class__ = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_24 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_24);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_urllib3$util$timeout$$$class__2_Timeout_25);
locals_urllib3$util$timeout$$$class__2_Timeout_25 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_urllib3$util$timeout$$$class__2_Timeout_25);
locals_urllib3$util$timeout$$$class__2_Timeout_25 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 25;
goto try_except_handler_4;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)mod_consts.const_str_plain_Timeout, tmp_assign_source_24);
}
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
Py_DECREF(tmp_class_container$class_creation_2__prepared);
tmp_class_container$class_creation_2__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$timeout, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$timeout->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$timeout, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_urllib3$util$timeout);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_3:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("urllib3$util$timeout", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "urllib3.util.timeout" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_urllib3$util$timeout);
    return module_urllib3$util$timeout;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$timeout, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("urllib3$util$timeout", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
