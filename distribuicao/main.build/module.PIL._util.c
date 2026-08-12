/* Generated code for Python module 'PIL$_util'
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



/* The "module_PIL$_util" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_PIL$_util;
PyDictObject *moduledict_PIL$_util;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_PathLike;
PyObject *const_str_plain_ex;
PyObject *const_str_plain_DeferredError;
PyObject *const_str_digest_a99a4db173146c036bcffa4f20395573;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_os;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_dict_a6ecc61c9d89efceb06a271f9bd51cb1;
PyObject *const_str_plain_is_path;
PyObject *const_str_digest_55f32188f83a55c7a6893b4ae7d8955e;
PyObject *const_int_pos_16;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_94d64428026f8f59f22559eab086a04a;
PyObject *const_str_digest_6dd30aba7db56abca2d0614e780eccb9;
PyObject *const_dict_d592b29c2a245f961cab24cb14200338;
PyObject *const_str_plain___getattr__;
PyObject *const_str_digest_4546caac7ef4625cee1b06e4dbef1ea1;
PyObject *const_dict_184be1dfd122af438bcd906834eff26b;
PyObject *const_str_plain_new;
PyObject *const_str_digest_560e1429482e9c696af772b789f2c16b;
PyObject *const_tuple_str_plain_ex_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_digest_fc567ccc566ef0a896f3b426aebb1981;
PyObject *const_str_digest_1109bdcc2690bfb246bb9b880f6a0a9a;
PyObject *const_tuple_str_plain_self_str_plain_elt_tuple;
PyObject *const_tuple_str_plain_self_str_plain_ex_tuple;
PyObject *const_tuple_str_plain_f_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[29];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("PIL._util"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 29) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 29 values, got %d\n",
                    UN_TRANSLATE("PIL._util"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PathLike", mod_consts.const_str_plain_PathLike);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_PathLike);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ex", mod_consts.const_str_plain_ex);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_ex);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DeferredError", mod_consts.const_str_plain_DeferredError);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_DeferredError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a99a4db173146c036bcffa4f20395573", mod_consts.const_str_digest_a99a4db173146c036bcffa4f20395573);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_a99a4db173146c036bcffa4f20395573);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_os", mod_consts.const_str_plain_os);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TYPE_CHECKING", mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_a6ecc61c9d89efceb06a271f9bd51cb1", mod_consts.const_dict_a6ecc61c9d89efceb06a271f9bd51cb1);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_dict_a6ecc61c9d89efceb06a271f9bd51cb1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_path", mod_consts.const_str_plain_is_path);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_path);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_55f32188f83a55c7a6893b4ae7d8955e", mod_consts.const_str_digest_55f32188f83a55c7a6893b4ae7d8955e);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_55f32188f83a55c7a6893b4ae7d8955e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16", mod_consts.const_int_pos_16);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_int_pos_16);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_94d64428026f8f59f22559eab086a04a", mod_consts.const_dict_94d64428026f8f59f22559eab086a04a);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_dict_94d64428026f8f59f22559eab086a04a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6dd30aba7db56abca2d0614e780eccb9", mod_consts.const_str_digest_6dd30aba7db56abca2d0614e780eccb9);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_6dd30aba7db56abca2d0614e780eccb9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_d592b29c2a245f961cab24cb14200338", mod_consts.const_dict_d592b29c2a245f961cab24cb14200338);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_dict_d592b29c2a245f961cab24cb14200338);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getattr__", mod_consts.const_str_plain___getattr__);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain___getattr__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4546caac7ef4625cee1b06e4dbef1ea1", mod_consts.const_str_digest_4546caac7ef4625cee1b06e4dbef1ea1);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_4546caac7ef4625cee1b06e4dbef1ea1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_184be1dfd122af438bcd906834eff26b", mod_consts.const_dict_184be1dfd122af438bcd906834eff26b);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_dict_184be1dfd122af438bcd906834eff26b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_new", mod_consts.const_str_plain_new);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_new);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_560e1429482e9c696af772b789f2c16b", mod_consts.const_str_digest_560e1429482e9c696af772b789f2c16b);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_560e1429482e9c696af772b789f2c16b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ex_tuple", mod_consts.const_tuple_str_plain_ex_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ex_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fc567ccc566ef0a896f3b426aebb1981", mod_consts.const_str_digest_fc567ccc566ef0a896f3b426aebb1981);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_fc567ccc566ef0a896f3b426aebb1981);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1109bdcc2690bfb246bb9b880f6a0a9a", mod_consts.const_str_digest_1109bdcc2690bfb246bb9b880f6a0a9a);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_1109bdcc2690bfb246bb9b880f6a0a9a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_elt_tuple", mod_consts.const_tuple_str_plain_self_str_plain_elt_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_elt_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_ex_tuple", mod_consts.const_tuple_str_plain_self_str_plain_ex_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_ex_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_f_tuple", mod_consts.const_tuple_str_plain_f_tuple);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_f_tuple);
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
void checkModuleConstants_PIL$_util(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PathLike", mod_consts.const_str_plain_PathLike);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_PathLike) && "mod_consts.const_str_plain_PathLike");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ex", mod_consts.const_str_plain_ex);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_ex) && "mod_consts.const_str_plain_ex");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DeferredError", mod_consts.const_str_plain_DeferredError);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_DeferredError) && "mod_consts.const_str_plain_DeferredError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a99a4db173146c036bcffa4f20395573", mod_consts.const_str_digest_a99a4db173146c036bcffa4f20395573);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_a99a4db173146c036bcffa4f20395573) && "mod_consts.const_str_digest_a99a4db173146c036bcffa4f20395573");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_os", mod_consts.const_str_plain_os);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_os) && "mod_consts.const_str_plain_os");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TYPE_CHECKING", mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING) && "mod_consts.const_str_plain_TYPE_CHECKING");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_a6ecc61c9d89efceb06a271f9bd51cb1", mod_consts.const_dict_a6ecc61c9d89efceb06a271f9bd51cb1);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_dict_a6ecc61c9d89efceb06a271f9bd51cb1) && "mod_consts.const_dict_a6ecc61c9d89efceb06a271f9bd51cb1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_path", mod_consts.const_str_plain_is_path);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_path) && "mod_consts.const_str_plain_is_path");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_55f32188f83a55c7a6893b4ae7d8955e", mod_consts.const_str_digest_55f32188f83a55c7a6893b4ae7d8955e);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_55f32188f83a55c7a6893b4ae7d8955e) && "mod_consts.const_str_digest_55f32188f83a55c7a6893b4ae7d8955e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16", mod_consts.const_int_pos_16);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_int_pos_16) && "mod_consts.const_int_pos_16");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_94d64428026f8f59f22559eab086a04a", mod_consts.const_dict_94d64428026f8f59f22559eab086a04a);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_dict_94d64428026f8f59f22559eab086a04a) && "mod_consts.const_dict_94d64428026f8f59f22559eab086a04a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6dd30aba7db56abca2d0614e780eccb9", mod_consts.const_str_digest_6dd30aba7db56abca2d0614e780eccb9);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_6dd30aba7db56abca2d0614e780eccb9) && "mod_consts.const_str_digest_6dd30aba7db56abca2d0614e780eccb9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_d592b29c2a245f961cab24cb14200338", mod_consts.const_dict_d592b29c2a245f961cab24cb14200338);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_dict_d592b29c2a245f961cab24cb14200338) && "mod_consts.const_dict_d592b29c2a245f961cab24cb14200338");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getattr__", mod_consts.const_str_plain___getattr__);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain___getattr__) && "mod_consts.const_str_plain___getattr__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4546caac7ef4625cee1b06e4dbef1ea1", mod_consts.const_str_digest_4546caac7ef4625cee1b06e4dbef1ea1);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_4546caac7ef4625cee1b06e4dbef1ea1) && "mod_consts.const_str_digest_4546caac7ef4625cee1b06e4dbef1ea1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_184be1dfd122af438bcd906834eff26b", mod_consts.const_dict_184be1dfd122af438bcd906834eff26b);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_dict_184be1dfd122af438bcd906834eff26b) && "mod_consts.const_dict_184be1dfd122af438bcd906834eff26b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_new", mod_consts.const_str_plain_new);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_new) && "mod_consts.const_str_plain_new");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_560e1429482e9c696af772b789f2c16b", mod_consts.const_str_digest_560e1429482e9c696af772b789f2c16b);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_560e1429482e9c696af772b789f2c16b) && "mod_consts.const_str_digest_560e1429482e9c696af772b789f2c16b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ex_tuple", mod_consts.const_tuple_str_plain_ex_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ex_tuple) && "mod_consts.const_tuple_str_plain_ex_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fc567ccc566ef0a896f3b426aebb1981", mod_consts.const_str_digest_fc567ccc566ef0a896f3b426aebb1981);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_fc567ccc566ef0a896f3b426aebb1981) && "mod_consts.const_str_digest_fc567ccc566ef0a896f3b426aebb1981");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1109bdcc2690bfb246bb9b880f6a0a9a", mod_consts.const_str_digest_1109bdcc2690bfb246bb9b880f6a0a9a);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_1109bdcc2690bfb246bb9b880f6a0a9a) && "mod_consts.const_str_digest_1109bdcc2690bfb246bb9b880f6a0a9a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_elt_tuple", mod_consts.const_tuple_str_plain_self_str_plain_elt_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_elt_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_elt_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_ex_tuple", mod_consts.const_tuple_str_plain_self_str_plain_ex_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_ex_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_ex_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_f_tuple", mod_consts.const_tuple_str_plain_f_tuple);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_f_tuple) && "mod_consts.const_tuple_str_plain_f_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 2
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
static PyObject *module_var_accessor_PIL$_util$DeferredError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$_util->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$_util->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_DeferredError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$_util->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DeferredError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DeferredError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DeferredError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DeferredError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_DeferredError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_DeferredError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DeferredError);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$_util$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$_util->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$_util->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$_util->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_3f57d4fb8c362961495326ce2579eda9;
static PyCodeObject *code_objects_8a66dcf70d523149763f3bb98b0c5bc6;
static PyCodeObject *code_objects_6b031000e0211ce24cd7f7a4d0a3c962;
static PyCodeObject *code_objects_cb035e25e2935076dbd3c9fdfdf69d38;
static PyCodeObject *code_objects_b62dadf3007f3159a021fbe692ada189;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_fc567ccc566ef0a896f3b426aebb1981); CHECK_OBJECT(module_filename_obj);
code_objects_3f57d4fb8c362961495326ce2579eda9 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_1109bdcc2690bfb246bb9b880f6a0a9a, mod_consts.const_str_digest_1109bdcc2690bfb246bb9b880f6a0a9a, NULL, NULL, 0, 0, 0);
code_objects_8a66dcf70d523149763f3bb98b0c5bc6 = MAKE_CODE_OBJECT(module_filename_obj, 20, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___getattr__, mod_consts.const_str_digest_4546caac7ef4625cee1b06e4dbef1ea1, mod_consts.const_tuple_str_plain_self_str_plain_elt_tuple, NULL, 2, 0, 0);
code_objects_6b031000e0211ce24cd7f7a4d0a3c962 = MAKE_CODE_OBJECT(module_filename_obj, 17, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_6dd30aba7db56abca2d0614e780eccb9, mod_consts.const_tuple_str_plain_self_str_plain_ex_tuple, NULL, 2, 0, 0);
code_objects_cb035e25e2935076dbd3c9fdfdf69d38 = MAKE_CODE_OBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_path, mod_consts.const_str_plain_is_path, mod_consts.const_tuple_str_plain_f_tuple, NULL, 1, 0, 0);
code_objects_b62dadf3007f3159a021fbe692ada189 = MAKE_CODE_OBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_new, mod_consts.const_str_digest_560e1429482e9c696af772b789f2c16b, mod_consts.const_tuple_str_plain_ex_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_PIL$_util$$$function__1_is_path(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$_util$$$function__2___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$_util$$$function__3___getattr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$_util$$$function__4_new(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_PIL$_util$$$function__1_is_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_f = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$_util$$$function__1_is_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$_util$$$function__1_is_path = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$_util$$$function__1_is_path)) {
    Py_XDECREF(cache_frame_frame_PIL$_util$$$function__1_is_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$_util$$$function__1_is_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$_util$$$function__1_is_path = MAKE_FUNCTION_FRAME(tstate, code_objects_cb035e25e2935076dbd3c9fdfdf69d38, module_PIL$_util, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$_util$$$function__1_is_path->m_type_description == NULL);
frame_frame_PIL$_util$$$function__1_is_path = cache_frame_frame_PIL$_util$$$function__1_is_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$_util$$$function__1_is_path);
assert(Py_REFCNT(frame_frame_PIL$_util$$$function__1_is_path) == 2);

// Framed code:
{
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_f);
tmp_isinstance_inst_1 = par_f;
tmp_tuple_element_1 = (PyObject *)&PyBytes_Type;
tmp_isinstance_cls_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_1;
PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = (PyObject *)&PyUnicode_Type;
PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 1, tmp_tuple_element_1);
tmp_expression_value_1 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_1 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_PathLike);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_isinstance_cls_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_isinstance_cls_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$_util$$$function__1_is_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$_util$$$function__1_is_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$_util$$$function__1_is_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$_util$$$function__1_is_path,
    type_description_1,
    par_f
);


// Release cached frame if used for exception.
if (frame_frame_PIL$_util$$$function__1_is_path == cache_frame_frame_PIL$_util$$$function__1_is_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$_util$$$function__1_is_path);
    cache_frame_frame_PIL$_util$$$function__1_is_path = NULL;
}

assertFrameObject(frame_frame_PIL$_util$$$function__1_is_path);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_f);
Py_DECREF(par_f);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_f);
Py_DECREF(par_f);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$_util$$$function__2___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_ex = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$_util$$$function__2___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$_util$$$function__2___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$_util$$$function__2___init__)) {
    Py_XDECREF(cache_frame_frame_PIL$_util$$$function__2___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$_util$$$function__2___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$_util$$$function__2___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_6b031000e0211ce24cd7f7a4d0a3c962, module_PIL$_util, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$_util$$$function__2___init__->m_type_description == NULL);
frame_frame_PIL$_util$$$function__2___init__ = cache_frame_frame_PIL$_util$$$function__2___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$_util$$$function__2___init__);
assert(Py_REFCNT(frame_frame_PIL$_util$$$function__2___init__) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(par_ex);
tmp_ass_attr_value_1 = par_ex;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_ex, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$_util$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$_util$$$function__2___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$_util$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$_util$$$function__2___init__,
    type_description_1,
    par_self,
    par_ex
);


// Release cached frame if used for exception.
if (frame_frame_PIL$_util$$$function__2___init__ == cache_frame_frame_PIL$_util$$$function__2___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$_util$$$function__2___init__);
    cache_frame_frame_PIL$_util$$$function__2___init__ = NULL;
}

assertFrameObject(frame_frame_PIL$_util$$$function__2___init__);

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
CHECK_OBJECT(par_ex);
Py_DECREF(par_ex);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_ex);
Py_DECREF(par_ex);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$_util$$$function__3___getattr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_elt = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$_util$$$function__3___getattr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$_util$$$function__3___getattr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$_util$$$function__3___getattr__)) {
    Py_XDECREF(cache_frame_frame_PIL$_util$$$function__3___getattr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$_util$$$function__3___getattr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$_util$$$function__3___getattr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_8a66dcf70d523149763f3bb98b0c5bc6, module_PIL$_util, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$_util$$$function__3___getattr__->m_type_description == NULL);
frame_frame_PIL$_util$$$function__3___getattr__ = cache_frame_frame_PIL$_util$$$function__3___getattr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$_util$$$function__3___getattr__);
assert(Py_REFCNT(frame_frame_PIL$_util$$$function__3___getattr__) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_raise_type_input_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ex);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 21;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$_util$$$function__3___getattr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$_util$$$function__3___getattr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$_util$$$function__3___getattr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$_util$$$function__3___getattr__,
    type_description_1,
    par_self,
    par_elt
);


// Release cached frame if used for exception.
if (frame_frame_PIL$_util$$$function__3___getattr__ == cache_frame_frame_PIL$_util$$$function__3___getattr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$_util$$$function__3___getattr__);
    cache_frame_frame_PIL$_util$$$function__3___getattr__ = NULL;
}

assertFrameObject(frame_frame_PIL$_util$$$function__3___getattr__);

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
CHECK_OBJECT(par_elt);
Py_DECREF(par_elt);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_PIL$_util$$$function__4_new(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_ex = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$_util$$$function__4_new;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$_util$$$function__4_new = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$_util$$$function__4_new)) {
    Py_XDECREF(cache_frame_frame_PIL$_util$$$function__4_new);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$_util$$$function__4_new == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$_util$$$function__4_new = MAKE_FUNCTION_FRAME(tstate, code_objects_b62dadf3007f3159a021fbe692ada189, module_PIL$_util, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$_util$$$function__4_new->m_type_description == NULL);
frame_frame_PIL$_util$$$function__4_new = cache_frame_frame_PIL$_util$$$function__4_new;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$_util$$$function__4_new);
assert(Py_REFCNT(frame_frame_PIL$_util$$$function__4_new) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_PIL$_util$DeferredError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DeferredError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ex);
tmp_args_element_value_1 = par_ex;
frame_frame_PIL$_util$$$function__4_new->m_frame.f_lineno = 29;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$_util$$$function__4_new, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$_util$$$function__4_new->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$_util$$$function__4_new, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$_util$$$function__4_new,
    type_description_1,
    par_ex
);


// Release cached frame if used for exception.
if (frame_frame_PIL$_util$$$function__4_new == cache_frame_frame_PIL$_util$$$function__4_new) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$_util$$$function__4_new);
    cache_frame_frame_PIL$_util$$$function__4_new = NULL;
}

assertFrameObject(frame_frame_PIL$_util$$$function__4_new);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_ex);
Py_DECREF(par_ex);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_ex);
Py_DECREF(par_ex);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_PIL$_util$$$function__1_is_path(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_util$$$function__1_is_path,
        mod_consts.const_str_plain_is_path,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_cb035e25e2935076dbd3c9fdfdf69d38,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$_util,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_util$$$function__2___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_util$$$function__2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6dd30aba7db56abca2d0614e780eccb9,
#endif
        code_objects_6b031000e0211ce24cd7f7a4d0a3c962,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$_util,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_util$$$function__3___getattr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_util$$$function__3___getattr__,
        mod_consts.const_str_plain___getattr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4546caac7ef4625cee1b06e4dbef1ea1,
#endif
        code_objects_8a66dcf70d523149763f3bb98b0c5bc6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$_util,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_util$$$function__4_new(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_util$$$function__4_new,
        mod_consts.const_str_plain_new,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_560e1429482e9c696af772b789f2c16b,
#endif
        code_objects_b62dadf3007f3159a021fbe692ada189,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$_util,
        mod_consts.const_str_digest_a99a4db173146c036bcffa4f20395573,
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

static function_impl_code const function_table_PIL$_util[] = {
impl_PIL$_util$$$function__1_is_path,
impl_PIL$_util$$$function__2___init__,
impl_PIL$_util$$$function__3___getattr__,
impl_PIL$_util$$$function__4_new,
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

    return Nuitka_Function_GetFunctionState(function, function_table_PIL$_util);
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
        module_PIL$_util,
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
        function_table_PIL$_util,
        sizeof(function_table_PIL$_util) / sizeof(function_impl_code)
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
static char const *module_full_name = "PIL._util";
#endif

// Internal entry point for module code.
PyObject *module_code_PIL$_util(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("PIL$_util");

    // Store the module for future use.
    module_PIL$_util = module;

    moduledict_PIL$_util = MODULE_DICT(module_PIL$_util);

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
        PRINT_STRING("PIL$_util: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("PIL$_util: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("PIL$_util: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL._util" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initPIL$_util\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_PIL$_util,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_PIL$_util,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_PIL$_util,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$_util,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$_util,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_PIL$_util);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_PIL$_util);
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

        UPDATE_STRING_DICT1(moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$_util;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_PIL$_util$$$class__1_DeferredError_16 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_PIL$_util = MAKE_MODULE_FRAME(code_objects_3f57d4fb8c362961495326ce2579eda9, module_PIL$_util);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$_util);
assert(Py_REFCNT(frame_frame_PIL$_util) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_PIL$_util$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_PIL$_util$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_PIL$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_PIL$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = Py_False;
UPDATE_STRING_DICT0(moduledict_PIL$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_a6ecc61c9d89efceb06a271f9bd51cb1);

tmp_assign_source_8 = MAKE_FUNCTION_PIL$_util$$$function__1_is_path(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_PIL$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_is_path, tmp_assign_source_8);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_10;
}
// Tried code:
{
PyObject *tmp_assign_source_11;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_PIL$_util$$$class__1_DeferredError_16 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_55f32188f83a55c7a6893b4ae7d8955e;
tmp_result = DICT_SET_ITEM(locals_PIL$_util$$$class__1_DeferredError_16, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_DeferredError;
tmp_result = DICT_SET_ITEM(locals_PIL$_util$$$class__1_DeferredError_16, const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_16;
tmp_result = DICT_SET_ITEM(locals_PIL$_util$$$class__1_DeferredError_16, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_94d64428026f8f59f22559eab086a04a);

tmp_dictset_value = MAKE_FUNCTION_PIL$_util$$$function__2___init__(tstate, tmp_annotations_2);

tmp_result = DICT_SET_ITEM(locals_PIL$_util$$$class__1_DeferredError_16, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_d592b29c2a245f961cab24cb14200338);

tmp_dictset_value = MAKE_FUNCTION_PIL$_util$$$function__3___getattr__(tstate, tmp_annotations_3);

tmp_result = DICT_SET_ITEM(locals_PIL$_util$$$class__1_DeferredError_16, mod_consts.const_str_plain___getattr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_staticmethod_arg_1;
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_184be1dfd122af438bcd906834eff26b);

tmp_staticmethod_arg_1 = MAKE_FUNCTION_PIL$_util$$$function__4_new(tstate, tmp_annotations_4);

tmp_dictset_value = BUILTIN_STATICMETHOD(tstate, tmp_staticmethod_arg_1);
CHECK_OBJECT(tmp_staticmethod_arg_1);
Py_DECREF(tmp_staticmethod_arg_1);
assert(!(tmp_dictset_value == NULL));
tmp_result = DICT_SET_ITEM(locals_PIL$_util$$$class__1_DeferredError_16, mod_consts.const_str_plain_new, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_str_plain_ex_tuple;
tmp_result = DICT_SET_ITEM(locals_PIL$_util$$$class__1_DeferredError_16, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_metaclass_value_1;
PyObject *tmp_name_value_1;
PyObject *tmp_bases_value_1;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
tmp_name_value_1 = mod_consts.const_str_plain_DeferredError;
tmp_bases_value_1 = const_tuple_empty;
tmp_dict_arg_value_1 = locals_PIL$_util$$$class__1_DeferredError_16;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_1, tmp_bases_value_1, tmp_dict_arg_value_1);
tmp_assign_source_12 = CALL_FUNCTION(tstate, tmp_metaclass_value_1, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_3;
}
{
    PyObject *old = outline_0_var___class__;
    outline_0_var___class__ = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_11 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_11);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_PIL$_util$$$class__1_DeferredError_16);
locals_PIL$_util$$$class__1_DeferredError_16 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_PIL$_util$$$class__1_DeferredError_16);
locals_PIL$_util$$$class__1_DeferredError_16 = NULL;
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
exception_lineno = 16;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_PIL$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_DeferredError, tmp_assign_source_11);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
Py_DECREF(tmp_class_container$class_creation_1__prepared);
tmp_class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
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

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$_util, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$_util->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$_util, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_PIL$_util);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("PIL$_util", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL._util" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_PIL$_util);
    return module_PIL$_util;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$_util, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("PIL$_util", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
