/* Generated code for Python module 'requests$_internal_utils'
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



/* The "module_requests$_internal_utils" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_requests$_internal_utils;
PyDictObject *moduledict_requests$_internal_utils;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_builtin_str;
PyObject *const_str_plain_decode;
PyObject *const_str_digest_8d05e532d7bf608195b669ce9c19d17c;
PyObject *const_str_plain_encode;
PyObject *const_tuple_str_plain_ascii_tuple;
PyObject *const_str_digest_66cd85c53225da4bdbe49b619c7b9e85;
PyObject *const_str_digest_2fa34edd9a10db28dbff6bd50c8c04de;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_re;
PyObject *const_str_plain_compat;
PyObject *const_tuple_str_plain_builtin_str_tuple;
PyObject *const_tuple_bytes_digest_965dbb84ac00dbea90402d3f10aee8fb_tuple;
PyObject *const_str_plain__VALID_HEADER_NAME_RE_BYTE;
PyObject *const_tuple_str_digest_89d199f0b345b74ff97841a75e8fb2b4_tuple;
PyObject *const_str_plain__VALID_HEADER_NAME_RE_STR;
PyObject *const_tuple_bytes_digest_d3ff1d0fa1627a63e6b473928037d105_tuple;
PyObject *const_str_plain__VALID_HEADER_VALUE_RE_BYTE;
PyObject *const_tuple_str_digest_ce29dd3d34b480c67aeb6fec5f5e2a44_tuple;
PyObject *const_str_plain__VALID_HEADER_VALUE_RE_STR;
PyObject *const_str_plain__HEADER_VALIDATORS_STR;
PyObject *const_str_plain__HEADER_VALIDATORS_BYTE;
PyObject *const_str_plain_HEADER_VALIDATORS;
PyObject *const_dict_73e8aba6999b2a656767fbded093003f;
PyObject *const_str_plain_to_native_string;
PyObject *const_dict_85b96275cc4db1ece9b098713d79fdb4;
PyObject *const_str_plain_unicode_is_ascii;
PyObject *const_str_digest_84b2a03bcc451e059a2057d06a17bf17;
PyObject *const_str_digest_081265ccdb15a2fe6d5955409d46032e;
PyObject *const_tuple_str_plain_string_str_plain_encoding_str_plain_out_tuple;
PyObject *const_tuple_str_plain_u_string_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[31];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("requests._internal_utils"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 31) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 31 values, got %d\n",
                    UN_TRANSLATE("requests._internal_utils"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_builtin_str", mod_consts.const_str_plain_builtin_str);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_builtin_str);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decode", mod_consts.const_str_plain_decode);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8d05e532d7bf608195b669ce9c19d17c", mod_consts.const_str_digest_8d05e532d7bf608195b669ce9c19d17c);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_8d05e532d7bf608195b669ce9c19d17c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encode", mod_consts.const_str_plain_encode);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ascii_tuple", mod_consts.const_tuple_str_plain_ascii_tuple);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_66cd85c53225da4bdbe49b619c7b9e85", mod_consts.const_str_digest_66cd85c53225da4bdbe49b619c7b9e85);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_66cd85c53225da4bdbe49b619c7b9e85);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2fa34edd9a10db28dbff6bd50c8c04de", mod_consts.const_str_digest_2fa34edd9a10db28dbff6bd50c8c04de);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_2fa34edd9a10db28dbff6bd50c8c04de);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_re", mod_consts.const_str_plain_re);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_compat", mod_consts.const_str_plain_compat);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_compat);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_builtin_str_tuple", mod_consts.const_tuple_str_plain_builtin_str_tuple);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_builtin_str_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_bytes_digest_965dbb84ac00dbea90402d3f10aee8fb_tuple", mod_consts.const_tuple_bytes_digest_965dbb84ac00dbea90402d3f10aee8fb_tuple);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_bytes_digest_965dbb84ac00dbea90402d3f10aee8fb_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__VALID_HEADER_NAME_RE_BYTE", mod_consts.const_str_plain__VALID_HEADER_NAME_RE_BYTE);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain__VALID_HEADER_NAME_RE_BYTE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_89d199f0b345b74ff97841a75e8fb2b4_tuple", mod_consts.const_tuple_str_digest_89d199f0b345b74ff97841a75e8fb2b4_tuple);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_89d199f0b345b74ff97841a75e8fb2b4_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__VALID_HEADER_NAME_RE_STR", mod_consts.const_str_plain__VALID_HEADER_NAME_RE_STR);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain__VALID_HEADER_NAME_RE_STR);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_bytes_digest_d3ff1d0fa1627a63e6b473928037d105_tuple", mod_consts.const_tuple_bytes_digest_d3ff1d0fa1627a63e6b473928037d105_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_tuple_bytes_digest_d3ff1d0fa1627a63e6b473928037d105_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__VALID_HEADER_VALUE_RE_BYTE", mod_consts.const_str_plain__VALID_HEADER_VALUE_RE_BYTE);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain__VALID_HEADER_VALUE_RE_BYTE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_ce29dd3d34b480c67aeb6fec5f5e2a44_tuple", mod_consts.const_tuple_str_digest_ce29dd3d34b480c67aeb6fec5f5e2a44_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ce29dd3d34b480c67aeb6fec5f5e2a44_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__VALID_HEADER_VALUE_RE_STR", mod_consts.const_str_plain__VALID_HEADER_VALUE_RE_STR);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain__VALID_HEADER_VALUE_RE_STR);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__HEADER_VALIDATORS_STR", mod_consts.const_str_plain__HEADER_VALIDATORS_STR);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain__HEADER_VALIDATORS_STR);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__HEADER_VALIDATORS_BYTE", mod_consts.const_str_plain__HEADER_VALIDATORS_BYTE);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain__HEADER_VALIDATORS_BYTE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HEADER_VALIDATORS", mod_consts.const_str_plain_HEADER_VALIDATORS);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_HEADER_VALIDATORS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_73e8aba6999b2a656767fbded093003f", mod_consts.const_dict_73e8aba6999b2a656767fbded093003f);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_dict_73e8aba6999b2a656767fbded093003f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_to_native_string", mod_consts.const_str_plain_to_native_string);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_native_string);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_85b96275cc4db1ece9b098713d79fdb4", mod_consts.const_dict_85b96275cc4db1ece9b098713d79fdb4);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_dict_85b96275cc4db1ece9b098713d79fdb4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unicode_is_ascii", mod_consts.const_str_plain_unicode_is_ascii);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_unicode_is_ascii);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_84b2a03bcc451e059a2057d06a17bf17", mod_consts.const_str_digest_84b2a03bcc451e059a2057d06a17bf17);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_84b2a03bcc451e059a2057d06a17bf17);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_081265ccdb15a2fe6d5955409d46032e", mod_consts.const_str_digest_081265ccdb15a2fe6d5955409d46032e);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_081265ccdb15a2fe6d5955409d46032e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_string_str_plain_encoding_str_plain_out_tuple", mod_consts.const_tuple_str_plain_string_str_plain_encoding_str_plain_out_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_string_str_plain_encoding_str_plain_out_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_u_string_tuple", mod_consts.const_tuple_str_plain_u_string_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_u_string_tuple);
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
void checkModuleConstants_requests$_internal_utils(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_builtin_str", mod_consts.const_str_plain_builtin_str);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_builtin_str) && "mod_consts.const_str_plain_builtin_str");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decode", mod_consts.const_str_plain_decode);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode) && "mod_consts.const_str_plain_decode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8d05e532d7bf608195b669ce9c19d17c", mod_consts.const_str_digest_8d05e532d7bf608195b669ce9c19d17c);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_8d05e532d7bf608195b669ce9c19d17c) && "mod_consts.const_str_digest_8d05e532d7bf608195b669ce9c19d17c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encode", mod_consts.const_str_plain_encode);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode) && "mod_consts.const_str_plain_encode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ascii_tuple", mod_consts.const_tuple_str_plain_ascii_tuple);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_tuple) && "mod_consts.const_tuple_str_plain_ascii_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_66cd85c53225da4bdbe49b619c7b9e85", mod_consts.const_str_digest_66cd85c53225da4bdbe49b619c7b9e85);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_66cd85c53225da4bdbe49b619c7b9e85) && "mod_consts.const_str_digest_66cd85c53225da4bdbe49b619c7b9e85");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2fa34edd9a10db28dbff6bd50c8c04de", mod_consts.const_str_digest_2fa34edd9a10db28dbff6bd50c8c04de);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_2fa34edd9a10db28dbff6bd50c8c04de) && "mod_consts.const_str_digest_2fa34edd9a10db28dbff6bd50c8c04de");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_re", mod_consts.const_str_plain_re);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_re) && "mod_consts.const_str_plain_re");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_compat", mod_consts.const_str_plain_compat);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_compat) && "mod_consts.const_str_plain_compat");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_builtin_str_tuple", mod_consts.const_tuple_str_plain_builtin_str_tuple);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_builtin_str_tuple) && "mod_consts.const_tuple_str_plain_builtin_str_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_bytes_digest_965dbb84ac00dbea90402d3f10aee8fb_tuple", mod_consts.const_tuple_bytes_digest_965dbb84ac00dbea90402d3f10aee8fb_tuple);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_bytes_digest_965dbb84ac00dbea90402d3f10aee8fb_tuple) && "mod_consts.const_tuple_bytes_digest_965dbb84ac00dbea90402d3f10aee8fb_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__VALID_HEADER_NAME_RE_BYTE", mod_consts.const_str_plain__VALID_HEADER_NAME_RE_BYTE);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain__VALID_HEADER_NAME_RE_BYTE) && "mod_consts.const_str_plain__VALID_HEADER_NAME_RE_BYTE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_89d199f0b345b74ff97841a75e8fb2b4_tuple", mod_consts.const_tuple_str_digest_89d199f0b345b74ff97841a75e8fb2b4_tuple);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_89d199f0b345b74ff97841a75e8fb2b4_tuple) && "mod_consts.const_tuple_str_digest_89d199f0b345b74ff97841a75e8fb2b4_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__VALID_HEADER_NAME_RE_STR", mod_consts.const_str_plain__VALID_HEADER_NAME_RE_STR);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain__VALID_HEADER_NAME_RE_STR) && "mod_consts.const_str_plain__VALID_HEADER_NAME_RE_STR");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_bytes_digest_d3ff1d0fa1627a63e6b473928037d105_tuple", mod_consts.const_tuple_bytes_digest_d3ff1d0fa1627a63e6b473928037d105_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_tuple_bytes_digest_d3ff1d0fa1627a63e6b473928037d105_tuple) && "mod_consts.const_tuple_bytes_digest_d3ff1d0fa1627a63e6b473928037d105_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__VALID_HEADER_VALUE_RE_BYTE", mod_consts.const_str_plain__VALID_HEADER_VALUE_RE_BYTE);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain__VALID_HEADER_VALUE_RE_BYTE) && "mod_consts.const_str_plain__VALID_HEADER_VALUE_RE_BYTE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_ce29dd3d34b480c67aeb6fec5f5e2a44_tuple", mod_consts.const_tuple_str_digest_ce29dd3d34b480c67aeb6fec5f5e2a44_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ce29dd3d34b480c67aeb6fec5f5e2a44_tuple) && "mod_consts.const_tuple_str_digest_ce29dd3d34b480c67aeb6fec5f5e2a44_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__VALID_HEADER_VALUE_RE_STR", mod_consts.const_str_plain__VALID_HEADER_VALUE_RE_STR);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain__VALID_HEADER_VALUE_RE_STR) && "mod_consts.const_str_plain__VALID_HEADER_VALUE_RE_STR");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__HEADER_VALIDATORS_STR", mod_consts.const_str_plain__HEADER_VALIDATORS_STR);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain__HEADER_VALIDATORS_STR) && "mod_consts.const_str_plain__HEADER_VALIDATORS_STR");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__HEADER_VALIDATORS_BYTE", mod_consts.const_str_plain__HEADER_VALIDATORS_BYTE);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain__HEADER_VALIDATORS_BYTE) && "mod_consts.const_str_plain__HEADER_VALIDATORS_BYTE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HEADER_VALIDATORS", mod_consts.const_str_plain_HEADER_VALIDATORS);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_HEADER_VALIDATORS) && "mod_consts.const_str_plain_HEADER_VALIDATORS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_73e8aba6999b2a656767fbded093003f", mod_consts.const_dict_73e8aba6999b2a656767fbded093003f);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_dict_73e8aba6999b2a656767fbded093003f) && "mod_consts.const_dict_73e8aba6999b2a656767fbded093003f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_to_native_string", mod_consts.const_str_plain_to_native_string);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_native_string) && "mod_consts.const_str_plain_to_native_string");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_85b96275cc4db1ece9b098713d79fdb4", mod_consts.const_dict_85b96275cc4db1ece9b098713d79fdb4);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_dict_85b96275cc4db1ece9b098713d79fdb4) && "mod_consts.const_dict_85b96275cc4db1ece9b098713d79fdb4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unicode_is_ascii", mod_consts.const_str_plain_unicode_is_ascii);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_unicode_is_ascii) && "mod_consts.const_str_plain_unicode_is_ascii");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_84b2a03bcc451e059a2057d06a17bf17", mod_consts.const_str_digest_84b2a03bcc451e059a2057d06a17bf17);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_84b2a03bcc451e059a2057d06a17bf17) && "mod_consts.const_str_digest_84b2a03bcc451e059a2057d06a17bf17");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_081265ccdb15a2fe6d5955409d46032e", mod_consts.const_str_digest_081265ccdb15a2fe6d5955409d46032e);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_081265ccdb15a2fe6d5955409d46032e) && "mod_consts.const_str_digest_081265ccdb15a2fe6d5955409d46032e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_string_str_plain_encoding_str_plain_out_tuple", mod_consts.const_tuple_str_plain_string_str_plain_encoding_str_plain_out_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_string_str_plain_encoding_str_plain_out_tuple) && "mod_consts.const_tuple_str_plain_string_str_plain_encoding_str_plain_out_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_u_string_tuple", mod_consts.const_tuple_str_plain_u_string_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_u_string_tuple) && "mod_consts.const_tuple_str_plain_u_string_tuple");
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
static PyObject *module_var_accessor_requests$_internal_utils$_HEADER_VALIDATORS_BYTE(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$_internal_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$_internal_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$_internal_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__HEADER_VALIDATORS_BYTE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$_internal_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__HEADER_VALIDATORS_BYTE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__HEADER_VALIDATORS_BYTE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__HEADER_VALIDATORS_BYTE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__HEADER_VALIDATORS_BYTE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$_internal_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__HEADER_VALIDATORS_BYTE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$_internal_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__HEADER_VALIDATORS_BYTE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__HEADER_VALIDATORS_BYTE);
    }

    return result;
}

static PyObject *module_var_accessor_requests$_internal_utils$_HEADER_VALIDATORS_STR(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$_internal_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$_internal_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$_internal_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__HEADER_VALIDATORS_STR);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$_internal_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__HEADER_VALIDATORS_STR);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__HEADER_VALIDATORS_STR, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__HEADER_VALIDATORS_STR);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__HEADER_VALIDATORS_STR, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$_internal_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__HEADER_VALIDATORS_STR);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$_internal_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__HEADER_VALIDATORS_STR);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__HEADER_VALIDATORS_STR);
    }

    return result;
}

static PyObject *module_var_accessor_requests$_internal_utils$_VALID_HEADER_NAME_RE_BYTE(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$_internal_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$_internal_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$_internal_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__VALID_HEADER_NAME_RE_BYTE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$_internal_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__VALID_HEADER_NAME_RE_BYTE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__VALID_HEADER_NAME_RE_BYTE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__VALID_HEADER_NAME_RE_BYTE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__VALID_HEADER_NAME_RE_BYTE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$_internal_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__VALID_HEADER_NAME_RE_BYTE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$_internal_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__VALID_HEADER_NAME_RE_BYTE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__VALID_HEADER_NAME_RE_BYTE);
    }

    return result;
}

static PyObject *module_var_accessor_requests$_internal_utils$_VALID_HEADER_NAME_RE_STR(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$_internal_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$_internal_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$_internal_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__VALID_HEADER_NAME_RE_STR);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$_internal_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__VALID_HEADER_NAME_RE_STR);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__VALID_HEADER_NAME_RE_STR, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__VALID_HEADER_NAME_RE_STR);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__VALID_HEADER_NAME_RE_STR, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$_internal_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__VALID_HEADER_NAME_RE_STR);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$_internal_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__VALID_HEADER_NAME_RE_STR);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__VALID_HEADER_NAME_RE_STR);
    }

    return result;
}

static PyObject *module_var_accessor_requests$_internal_utils$_VALID_HEADER_VALUE_RE_BYTE(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$_internal_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$_internal_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$_internal_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__VALID_HEADER_VALUE_RE_BYTE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$_internal_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__VALID_HEADER_VALUE_RE_BYTE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__VALID_HEADER_VALUE_RE_BYTE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__VALID_HEADER_VALUE_RE_BYTE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__VALID_HEADER_VALUE_RE_BYTE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$_internal_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__VALID_HEADER_VALUE_RE_BYTE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$_internal_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__VALID_HEADER_VALUE_RE_BYTE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__VALID_HEADER_VALUE_RE_BYTE);
    }

    return result;
}

static PyObject *module_var_accessor_requests$_internal_utils$_VALID_HEADER_VALUE_RE_STR(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$_internal_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$_internal_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$_internal_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__VALID_HEADER_VALUE_RE_STR);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$_internal_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__VALID_HEADER_VALUE_RE_STR);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__VALID_HEADER_VALUE_RE_STR, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__VALID_HEADER_VALUE_RE_STR);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__VALID_HEADER_VALUE_RE_STR, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$_internal_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__VALID_HEADER_VALUE_RE_STR);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$_internal_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__VALID_HEADER_VALUE_RE_STR);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__VALID_HEADER_VALUE_RE_STR);
    }

    return result;
}

static PyObject *module_var_accessor_requests$_internal_utils$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$_internal_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$_internal_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$_internal_utils, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$_internal_utils->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_requests$_internal_utils, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$_internal_utils, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_requests$_internal_utils$builtin_str(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$_internal_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$_internal_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$_internal_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_builtin_str);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$_internal_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_builtin_str);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_builtin_str, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_builtin_str);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_builtin_str, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$_internal_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_builtin_str);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$_internal_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_builtin_str);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_builtin_str);
    }

    return result;
}

static PyObject *module_var_accessor_requests$_internal_utils$re(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$_internal_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$_internal_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$_internal_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$_internal_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_re);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_re, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_re);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_re, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$_internal_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$_internal_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_3580093ce57f51f70ad9e71f982967e8;
static PyCodeObject *code_objects_f8e8fc29b2df8e20e886c2f4e33b2da5;
static PyCodeObject *code_objects_233520dfbe7707853631d821b960d274;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_84b2a03bcc451e059a2057d06a17bf17); CHECK_OBJECT(module_filename_obj);
code_objects_3580093ce57f51f70ad9e71f982967e8 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_081265ccdb15a2fe6d5955409d46032e, mod_consts.const_str_digest_081265ccdb15a2fe6d5955409d46032e, NULL, NULL, 0, 0, 0);
code_objects_f8e8fc29b2df8e20e886c2f4e33b2da5 = MAKE_CODE_OBJECT(module_filename_obj, 26, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_to_native_string, mod_consts.const_str_plain_to_native_string, mod_consts.const_tuple_str_plain_string_str_plain_encoding_str_plain_out_tuple, NULL, 2, 0, 0);
code_objects_233520dfbe7707853631d821b960d274 = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_unicode_is_ascii, mod_consts.const_str_plain_unicode_is_ascii, mod_consts.const_tuple_str_plain_u_string_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_requests$_internal_utils$$$function__1_to_native_string(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$_internal_utils$$$function__2_unicode_is_ascii(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_requests$_internal_utils$$$function__1_to_native_string(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_string = python_pars[0];
PyObject *par_encoding = python_pars[1];
PyObject *var_out = NULL;
struct Nuitka_FrameObject *frame_frame_requests$_internal_utils$$$function__1_to_native_string;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_requests$_internal_utils$$$function__1_to_native_string = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$_internal_utils$$$function__1_to_native_string)) {
    Py_XDECREF(cache_frame_frame_requests$_internal_utils$$$function__1_to_native_string);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$_internal_utils$$$function__1_to_native_string == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$_internal_utils$$$function__1_to_native_string = MAKE_FUNCTION_FRAME(tstate, code_objects_f8e8fc29b2df8e20e886c2f4e33b2da5, module_requests$_internal_utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$_internal_utils$$$function__1_to_native_string->m_type_description == NULL);
frame_frame_requests$_internal_utils$$$function__1_to_native_string = cache_frame_frame_requests$_internal_utils$$$function__1_to_native_string;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$_internal_utils$$$function__1_to_native_string);
assert(Py_REFCNT(frame_frame_requests$_internal_utils$$$function__1_to_native_string) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_string);
tmp_isinstance_inst_1 = par_string;
tmp_isinstance_cls_1 = module_var_accessor_requests$_internal_utils$builtin_str(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_builtin_str);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 31;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_1;
CHECK_OBJECT(par_string);
tmp_assign_source_1 = par_string;
{
    PyObject *old = var_out;
    var_out = tmp_assign_source_1;
    Py_INCREF(var_out);
    Py_XDECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_string);
tmp_expression_value_1 = par_string;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_decode);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_encoding);
tmp_args_element_value_1 = par_encoding;
frame_frame_requests$_internal_utils$$$function__1_to_native_string->m_frame.f_lineno = 34;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_out;
    var_out = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$_internal_utils$$$function__1_to_native_string, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$_internal_utils$$$function__1_to_native_string->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$_internal_utils$$$function__1_to_native_string, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$_internal_utils$$$function__1_to_native_string,
    type_description_1,
    par_string,
    par_encoding,
    var_out
);


// Release cached frame if used for exception.
if (frame_frame_requests$_internal_utils$$$function__1_to_native_string == cache_frame_frame_requests$_internal_utils$$$function__1_to_native_string) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$_internal_utils$$$function__1_to_native_string);
    cache_frame_frame_requests$_internal_utils$$$function__1_to_native_string = NULL;
}

assertFrameObject(frame_frame_requests$_internal_utils$$$function__1_to_native_string);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_out);
tmp_return_value = var_out;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_out);
CHECK_OBJECT(var_out);
Py_DECREF(var_out);
var_out = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_string);
Py_DECREF(par_string);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_string);
Py_DECREF(par_string);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$_internal_utils$$$function__2_unicode_is_ascii(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_u_string = python_pars[0];
struct Nuitka_FrameObject *frame_frame_requests$_internal_utils$$$function__2_unicode_is_ascii;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_requests$_internal_utils$$$function__2_unicode_is_ascii = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$_internal_utils$$$function__2_unicode_is_ascii)) {
    Py_XDECREF(cache_frame_frame_requests$_internal_utils$$$function__2_unicode_is_ascii);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$_internal_utils$$$function__2_unicode_is_ascii == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$_internal_utils$$$function__2_unicode_is_ascii = MAKE_FUNCTION_FRAME(tstate, code_objects_233520dfbe7707853631d821b960d274, module_requests$_internal_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$_internal_utils$$$function__2_unicode_is_ascii->m_type_description == NULL);
frame_frame_requests$_internal_utils$$$function__2_unicode_is_ascii = cache_frame_frame_requests$_internal_utils$$$function__2_unicode_is_ascii;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$_internal_utils$$$function__2_unicode_is_ascii);
assert(Py_REFCNT(frame_frame_requests$_internal_utils$$$function__2_unicode_is_ascii) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_u_string);
tmp_isinstance_inst_1 = par_u_string;
tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "o";
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
frame_frame_requests$_internal_utils$$$function__2_unicode_is_ascii->m_frame.f_lineno = 46;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 46;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
branch_no_1:;
// Tried code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_u_string);
tmp_expression_value_1 = par_u_string;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_encode);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "o";
    goto try_except_handler_1;
}
frame_frame_requests$_internal_utils$$$function__2_unicode_is_ascii->m_frame.f_lineno = 48;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_ascii_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$_internal_utils$$$function__2_unicode_is_ascii, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$_internal_utils$$$function__2_unicode_is_ascii, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_UnicodeEncodeError;
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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_2;
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 47;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_requests$_internal_utils$$$function__2_unicode_is_ascii->m_frame)) {
        frame_frame_requests$_internal_utils$$$function__2_unicode_is_ascii->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "o";
goto try_except_handler_2;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto frame_return_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$_internal_utils$$$function__2_unicode_is_ascii, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$_internal_utils$$$function__2_unicode_is_ascii->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$_internal_utils$$$function__2_unicode_is_ascii, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$_internal_utils$$$function__2_unicode_is_ascii,
    type_description_1,
    par_u_string
);


// Release cached frame if used for exception.
if (frame_frame_requests$_internal_utils$$$function__2_unicode_is_ascii == cache_frame_frame_requests$_internal_utils$$$function__2_unicode_is_ascii) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$_internal_utils$$$function__2_unicode_is_ascii);
    cache_frame_frame_requests$_internal_utils$$$function__2_unicode_is_ascii = NULL;
}

assertFrameObject(frame_frame_requests$_internal_utils$$$function__2_unicode_is_ascii);

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
CHECK_OBJECT(par_u_string);
Py_DECREF(par_u_string);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_u_string);
Py_DECREF(par_u_string);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_requests$_internal_utils$$$function__1_to_native_string(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$_internal_utils$$$function__1_to_native_string,
        mod_consts.const_str_plain_to_native_string,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f8e8fc29b2df8e20e886c2f4e33b2da5,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$_internal_utils,
        mod_consts.const_str_digest_8d05e532d7bf608195b669ce9c19d17c,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$_internal_utils$$$function__2_unicode_is_ascii(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$_internal_utils$$$function__2_unicode_is_ascii,
        mod_consts.const_str_plain_unicode_is_ascii,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_233520dfbe7707853631d821b960d274,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$_internal_utils,
        mod_consts.const_str_digest_66cd85c53225da4bdbe49b619c7b9e85,
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

static function_impl_code const function_table_requests$_internal_utils[] = {
impl_requests$_internal_utils$$$function__1_to_native_string,
impl_requests$_internal_utils$$$function__2_unicode_is_ascii,
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

    return Nuitka_Function_GetFunctionState(function, function_table_requests$_internal_utils);
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
        module_requests$_internal_utils,
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
        function_table_requests$_internal_utils,
        sizeof(function_table_requests$_internal_utils) / sizeof(function_impl_code)
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
static char const *module_full_name = "requests._internal_utils";
#endif

// Internal entry point for module code.
PyObject *module_code_requests$_internal_utils(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("requests$_internal_utils");

    // Store the module for future use.
    module_requests$_internal_utils = module;

    moduledict_requests$_internal_utils = MODULE_DICT(module_requests$_internal_utils);

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
        PRINT_STRING("requests$_internal_utils: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("requests$_internal_utils: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("requests$_internal_utils: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "requests._internal_utils" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initrequests$_internal_utils\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$_internal_utils, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_requests$_internal_utils,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_requests$_internal_utils,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$_internal_utils, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_requests$_internal_utils,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$_internal_utils, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_requests$_internal_utils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$_internal_utils, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_requests$_internal_utils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_requests$_internal_utils);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_requests$_internal_utils, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_requests$_internal_utils, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_requests$_internal_utils, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_requests$_internal_utils, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_requests$_internal_utils);
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

        UPDATE_STRING_DICT1(moduledict_requests$_internal_utils, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_requests$_internal_utils;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_2fa34edd9a10db28dbff6bd50c8c04de;
UPDATE_STRING_DICT0(moduledict_requests$_internal_utils, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_requests$_internal_utils, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_requests$_internal_utils = MAKE_MODULE_FRAME(code_objects_3580093ce57f51f70ad9e71f982967e8, module_requests$_internal_utils);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$_internal_utils);
assert(Py_REFCNT(frame_frame_requests$_internal_utils) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_requests$_internal_utils$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_requests$_internal_utils$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_requests$_internal_utils, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_requests$_internal_utils, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_1 = (PyObject *)moduledict_requests$_internal_utils;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_requests$_internal_utils->m_frame.f_lineno = 9;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$_internal_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_re, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_compat;
tmp_globals_arg_value_2 = (PyObject *)moduledict_requests$_internal_utils;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_builtin_str_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_requests$_internal_utils->m_frame.f_lineno = 11;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_requests$_internal_utils,
        mod_consts.const_str_plain_builtin_str,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_builtin_str);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$_internal_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_builtin_str, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_requests$_internal_utils$re(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 13;

    goto frame_exception_exit_1;
}
frame_frame_requests$_internal_utils->m_frame.f_lineno = 13;
tmp_assign_source_7 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_bytes_digest_965dbb84ac00dbea90402d3f10aee8fb_tuple, 0)
);

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$_internal_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__VALID_HEADER_NAME_RE_BYTE, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = module_var_accessor_requests$_internal_utils$re(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 14;

    goto frame_exception_exit_1;
}
frame_frame_requests$_internal_utils->m_frame.f_lineno = 14;
tmp_assign_source_8 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_89d199f0b345b74ff97841a75e8fb2b4_tuple, 0)
);

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$_internal_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__VALID_HEADER_NAME_RE_STR, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_instance_3;
tmp_called_instance_3 = module_var_accessor_requests$_internal_utils$re(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 15;

    goto frame_exception_exit_1;
}
frame_frame_requests$_internal_utils->m_frame.f_lineno = 15;
tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_bytes_digest_d3ff1d0fa1627a63e6b473928037d105_tuple, 0)
);

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$_internal_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__VALID_HEADER_VALUE_RE_BYTE, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_instance_4;
tmp_called_instance_4 = module_var_accessor_requests$_internal_utils$re(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 16;

    goto frame_exception_exit_1;
}
frame_frame_requests$_internal_utils->m_frame.f_lineno = 16;
tmp_assign_source_10 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_4,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_ce29dd3d34b480c67aeb6fec5f5e2a44_tuple, 0)
);

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$_internal_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__VALID_HEADER_VALUE_RE_STR, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_requests$_internal_utils$_VALID_HEADER_NAME_RE_STR(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__VALID_HEADER_NAME_RE_STR);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 18;

    goto frame_exception_exit_1;
}
tmp_assign_source_11 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assign_source_11, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_requests$_internal_utils$_VALID_HEADER_VALUE_RE_STR(tstate);
assert(!(tmp_tuple_element_1 == NULL));
PyTuple_SET_ITEM0(tmp_assign_source_11, 1, tmp_tuple_element_1);
UPDATE_STRING_DICT1(moduledict_requests$_internal_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__HEADER_VALIDATORS_STR, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = module_var_accessor_requests$_internal_utils$_VALID_HEADER_NAME_RE_BYTE(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__VALID_HEADER_NAME_RE_BYTE);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 19;

    goto frame_exception_exit_1;
}
tmp_assign_source_12 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assign_source_12, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_requests$_internal_utils$_VALID_HEADER_VALUE_RE_BYTE(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__VALID_HEADER_VALUE_RE_BYTE);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 19;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_assign_source_12, 1, tmp_tuple_element_2);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_assign_source_12);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_requests$_internal_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__HEADER_VALIDATORS_BYTE, tmp_assign_source_12);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$_internal_utils, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$_internal_utils->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$_internal_utils, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_requests$_internal_utils);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = (PyObject *)&PyBytes_Type;
tmp_dict_value_1 = module_var_accessor_requests$_internal_utils$_HEADER_VALIDATORS_BYTE(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_assign_source_13 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = (PyObject *)&PyUnicode_Type;
tmp_dict_value_1 = module_var_accessor_requests$_internal_utils$_HEADER_VALIDATORS_STR(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
UPDATE_STRING_DICT1(moduledict_requests$_internal_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_HEADER_VALIDATORS, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_1;
tmp_defaults_1 = mod_consts.const_tuple_str_plain_ascii_tuple;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_73e8aba6999b2a656767fbded093003f);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_14 = MAKE_FUNCTION_requests$_internal_utils$$$function__1_to_native_string(tstate, tmp_defaults_1, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_requests$_internal_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_to_native_string, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_85b96275cc4db1ece9b098713d79fdb4);

tmp_assign_source_15 = MAKE_FUNCTION_requests$_internal_utils$$$function__2_unicode_is_ascii(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_requests$_internal_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_unicode_is_ascii, tmp_assign_source_15);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("requests$_internal_utils", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "requests._internal_utils" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_requests$_internal_utils);
    return module_requests$_internal_utils;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$_internal_utils, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("requests$_internal_utils", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
