/* Generated code for Python module 'certifi$core'
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



/* The "module_certifi$core" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_certifi$core;
PyDictObject *moduledict_certifi$core;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain__CACERT_CTX;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain__CACERT_PATH;
PyObject *const_str_plain_certifi;
PyObject *const_str_plain_files;
PyObject *const_str_plain_joinpath;
PyObject *const_tuple_str_digest_17996ef8d8cba664fbfd1662d6aeb8d1_tuple;
PyObject *const_str_plain_atexit;
PyObject *const_str_plain_exit_cacert_ctx;
PyObject *const_str_plain_read_text;
PyObject *const_tuple_str_plain_ascii_tuple;
PyObject *const_tuple_str_plain_encoding_tuple;
PyObject *const_str_digest_48d424f086d82f72b78220bac5da6f96;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_sys;
PyObject *const_dict_056a293e2058d56276328e53ff09a8b9;
PyObject *const_dict_ba22db58249aba2a980f7e215437b978;
PyObject *const_str_plain_where;
PyObject *const_str_plain_contents;
PyObject *const_str_digest_22fba61e72a42c2a75ce29a0b3e85f1c;
PyObject *const_str_digest_991032b577f29ca82fd22db635f29f74;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[22];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("certifi.core"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 22) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 22 values, got %d\n",
                    UN_TRANSLATE("certifi.core"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__CACERT_CTX", mod_consts.const_str_plain__CACERT_CTX);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain__CACERT_CTX);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_none_tuple", mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__CACERT_PATH", mod_consts.const_str_plain__CACERT_PATH);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain__CACERT_PATH);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_certifi", mod_consts.const_str_plain_certifi);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_certifi);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_files", mod_consts.const_str_plain_files);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_files);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_joinpath", mod_consts.const_str_plain_joinpath);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_joinpath);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_17996ef8d8cba664fbfd1662d6aeb8d1_tuple", mod_consts.const_tuple_str_digest_17996ef8d8cba664fbfd1662d6aeb8d1_tuple);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_17996ef8d8cba664fbfd1662d6aeb8d1_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_atexit", mod_consts.const_str_plain_atexit);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_atexit);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exit_cacert_ctx", mod_consts.const_str_plain_exit_cacert_ctx);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_exit_cacert_ctx);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_read_text", mod_consts.const_str_plain_read_text);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_read_text);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ascii_tuple", mod_consts.const_tuple_str_plain_ascii_tuple);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_encoding_tuple", mod_consts.const_tuple_str_plain_encoding_tuple);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_encoding_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_48d424f086d82f72b78220bac5da6f96", mod_consts.const_str_digest_48d424f086d82f72b78220bac5da6f96);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_48d424f086d82f72b78220bac5da6f96);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sys", mod_consts.const_str_plain_sys);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9", mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_ba22db58249aba2a980f7e215437b978", mod_consts.const_dict_ba22db58249aba2a980f7e215437b978);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_dict_ba22db58249aba2a980f7e215437b978);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_where", mod_consts.const_str_plain_where);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_where);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_contents", mod_consts.const_str_plain_contents);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_contents);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_22fba61e72a42c2a75ce29a0b3e85f1c", mod_consts.const_str_digest_22fba61e72a42c2a75ce29a0b3e85f1c);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_22fba61e72a42c2a75ce29a0b3e85f1c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_991032b577f29ca82fd22db635f29f74", mod_consts.const_str_digest_991032b577f29ca82fd22db635f29f74);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_991032b577f29ca82fd22db635f29f74);
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
void checkModuleConstants_certifi$core(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__CACERT_CTX", mod_consts.const_str_plain__CACERT_CTX);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain__CACERT_CTX) && "mod_consts.const_str_plain__CACERT_CTX");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_none_tuple", mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple) && "mod_consts.const_tuple_none_none_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__CACERT_PATH", mod_consts.const_str_plain__CACERT_PATH);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain__CACERT_PATH) && "mod_consts.const_str_plain__CACERT_PATH");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_certifi", mod_consts.const_str_plain_certifi);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_certifi) && "mod_consts.const_str_plain_certifi");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_files", mod_consts.const_str_plain_files);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_files) && "mod_consts.const_str_plain_files");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_joinpath", mod_consts.const_str_plain_joinpath);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_joinpath) && "mod_consts.const_str_plain_joinpath");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_17996ef8d8cba664fbfd1662d6aeb8d1_tuple", mod_consts.const_tuple_str_digest_17996ef8d8cba664fbfd1662d6aeb8d1_tuple);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_17996ef8d8cba664fbfd1662d6aeb8d1_tuple) && "mod_consts.const_tuple_str_digest_17996ef8d8cba664fbfd1662d6aeb8d1_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_atexit", mod_consts.const_str_plain_atexit);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_atexit) && "mod_consts.const_str_plain_atexit");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exit_cacert_ctx", mod_consts.const_str_plain_exit_cacert_ctx);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_exit_cacert_ctx) && "mod_consts.const_str_plain_exit_cacert_ctx");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_read_text", mod_consts.const_str_plain_read_text);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_read_text) && "mod_consts.const_str_plain_read_text");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ascii_tuple", mod_consts.const_tuple_str_plain_ascii_tuple);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_tuple) && "mod_consts.const_tuple_str_plain_ascii_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_encoding_tuple", mod_consts.const_tuple_str_plain_encoding_tuple);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_encoding_tuple) && "mod_consts.const_tuple_str_plain_encoding_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_48d424f086d82f72b78220bac5da6f96", mod_consts.const_str_digest_48d424f086d82f72b78220bac5da6f96);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_48d424f086d82f72b78220bac5da6f96) && "mod_consts.const_str_digest_48d424f086d82f72b78220bac5da6f96");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sys", mod_consts.const_str_plain_sys);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys) && "mod_consts.const_str_plain_sys");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9", mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9) && "mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_ba22db58249aba2a980f7e215437b978", mod_consts.const_dict_ba22db58249aba2a980f7e215437b978);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_dict_ba22db58249aba2a980f7e215437b978) && "mod_consts.const_dict_ba22db58249aba2a980f7e215437b978");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_where", mod_consts.const_str_plain_where);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_where) && "mod_consts.const_str_plain_where");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_contents", mod_consts.const_str_plain_contents);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_contents) && "mod_consts.const_str_plain_contents");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_22fba61e72a42c2a75ce29a0b3e85f1c", mod_consts.const_str_digest_22fba61e72a42c2a75ce29a0b3e85f1c);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_22fba61e72a42c2a75ce29a0b3e85f1c) && "mod_consts.const_str_digest_22fba61e72a42c2a75ce29a0b3e85f1c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_991032b577f29ca82fd22db635f29f74", mod_consts.const_str_digest_991032b577f29ca82fd22db635f29f74);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_991032b577f29ca82fd22db635f29f74) && "mod_consts.const_str_digest_991032b577f29ca82fd22db635f29f74");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 6
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
static PyObject *module_var_accessor_certifi$core$_CACERT_CTX(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_certifi$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_certifi$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_certifi$core, (Nuitka_StringObject *)mod_consts.const_str_plain__CACERT_CTX);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_certifi$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__CACERT_CTX);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__CACERT_CTX, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__CACERT_CTX);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__CACERT_CTX, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_certifi$core, (Nuitka_StringObject *)mod_consts.const_str_plain__CACERT_CTX);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_certifi$core, (Nuitka_StringObject *)mod_consts.const_str_plain__CACERT_CTX);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__CACERT_CTX);
    }

    return result;
}

static PyObject *module_var_accessor_certifi$core$_CACERT_PATH(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_certifi$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_certifi$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_certifi$core, (Nuitka_StringObject *)mod_consts.const_str_plain__CACERT_PATH);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_certifi$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__CACERT_PATH);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__CACERT_PATH, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__CACERT_PATH);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__CACERT_PATH, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_certifi$core, (Nuitka_StringObject *)mod_consts.const_str_plain__CACERT_PATH);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_certifi$core, (Nuitka_StringObject *)mod_consts.const_str_plain__CACERT_PATH);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__CACERT_PATH);
    }

    return result;
}

static PyObject *module_var_accessor_certifi$core$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_certifi$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_certifi$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_certifi$core->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_certifi$core$as_file(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_certifi$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_certifi$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain_as_file);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_certifi$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_as_file);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_as_file, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_as_file);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_as_file, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain_as_file);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain_as_file);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_as_file);
    }

    return result;
}

static PyObject *module_var_accessor_certifi$core$atexit(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_certifi$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_certifi$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_certifi$core, (Nuitka_StringObject *)mod_consts.const_str_plain_atexit);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_certifi$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_atexit);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_atexit, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_atexit);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_atexit, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_certifi$core, (Nuitka_StringObject *)mod_consts.const_str_plain_atexit);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_certifi$core, (Nuitka_StringObject *)mod_consts.const_str_plain_atexit);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_atexit);
    }

    return result;
}

static PyObject *module_var_accessor_certifi$core$exit_cacert_ctx(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_certifi$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_certifi$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_certifi$core, (Nuitka_StringObject *)mod_consts.const_str_plain_exit_cacert_ctx);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_certifi$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_exit_cacert_ctx);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_exit_cacert_ctx, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_exit_cacert_ctx);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_exit_cacert_ctx, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_certifi$core, (Nuitka_StringObject *)mod_consts.const_str_plain_exit_cacert_ctx);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_certifi$core, (Nuitka_StringObject *)mod_consts.const_str_plain_exit_cacert_ctx);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_exit_cacert_ctx);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_2e03288a2a610fe089d05f5f6f26c6bc;
static PyCodeObject *code_objects_9e7a873fa6854f05798fc5f1c85c067a;
static PyCodeObject *code_objects_ddecfa7ac7d1dc340f40a3c734eb81be;
static PyCodeObject *code_objects_44764c6e909b7b8e7f8abecf2dc152fb;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_22fba61e72a42c2a75ce29a0b3e85f1c); CHECK_OBJECT(module_filename_obj);
code_objects_2e03288a2a610fe089d05f5f6f26c6bc = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_991032b577f29ca82fd22db635f29f74, mod_consts.const_str_digest_991032b577f29ca82fd22db635f29f74, NULL, NULL, 0, 0, 0);
code_objects_9e7a873fa6854f05798fc5f1c85c067a = MAKE_CODE_OBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_contents, mod_consts.const_str_plain_contents, NULL, NULL, 0, 0, 0);
code_objects_ddecfa7ac7d1dc340f40a3c734eb81be = MAKE_CODE_OBJECT(module_filename_obj, 10, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_exit_cacert_ctx, mod_consts.const_str_plain_exit_cacert_ctx, NULL, NULL, 0, 0, 0);
code_objects_44764c6e909b7b8e7f8abecf2dc152fb = MAKE_CODE_OBJECT(module_filename_obj, 21, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_where, mod_consts.const_str_plain_where, NULL, NULL, 0, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_certifi$core$$$function__1_exit_cacert_ctx(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_certifi$core$$$function__2_where(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_certifi$core$$$function__3_contents(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_certifi$core$$$function__1_exit_cacert_ctx(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_certifi$core$$$function__1_exit_cacert_ctx;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_certifi$core$$$function__1_exit_cacert_ctx = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_certifi$core$$$function__1_exit_cacert_ctx)) {
    Py_XDECREF(cache_frame_frame_certifi$core$$$function__1_exit_cacert_ctx);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_certifi$core$$$function__1_exit_cacert_ctx == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_certifi$core$$$function__1_exit_cacert_ctx = MAKE_FUNCTION_FRAME(tstate, code_objects_ddecfa7ac7d1dc340f40a3c734eb81be, module_certifi$core, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_certifi$core$$$function__1_exit_cacert_ctx->m_type_description == NULL);
frame_frame_certifi$core$$$function__1_exit_cacert_ctx = cache_frame_frame_certifi$core$$$function__1_exit_cacert_ctx;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_certifi$core$$$function__1_exit_cacert_ctx);
assert(Py_REFCNT(frame_frame_certifi$core$$$function__1_exit_cacert_ctx) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
tmp_called_instance_1 = module_var_accessor_certifi$core$_CACERT_CTX(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__CACERT_CTX);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 11;

    goto frame_exception_exit_1;
}
frame_frame_certifi$core$$$function__1_exit_cacert_ctx->m_frame.f_lineno = 11;
tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
    tstate,
    tmp_called_instance_1,
    const_str_plain___exit__,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_none_none_none_tuple, 0)
);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_certifi$core$$$function__1_exit_cacert_ctx, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_certifi$core$$$function__1_exit_cacert_ctx->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_certifi$core$$$function__1_exit_cacert_ctx, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_certifi$core$$$function__1_exit_cacert_ctx,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_certifi$core$$$function__1_exit_cacert_ctx == cache_frame_frame_certifi$core$$$function__1_exit_cacert_ctx) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_certifi$core$$$function__1_exit_cacert_ctx);
    cache_frame_frame_certifi$core$$$function__1_exit_cacert_ctx = NULL;
}

assertFrameObject(frame_frame_certifi$core$$$function__1_exit_cacert_ctx);

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


static PyObject *impl_certifi$core$$$function__2_where(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_certifi$core$$$function__2_where;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_files_function;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_certifi$core$$$function__2_where = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_certifi$core$$$function__2_where)) {
    Py_XDECREF(cache_frame_frame_certifi$core$$$function__2_where);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_certifi$core$$$function__2_where == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_certifi$core$$$function__2_where = MAKE_FUNCTION_FRAME(tstate, code_objects_44764c6e909b7b8e7f8abecf2dc152fb, module_certifi$core, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_certifi$core$$$function__2_where->m_type_description == NULL);
frame_frame_certifi$core$$$function__2_where = cache_frame_frame_certifi$core$$$function__2_where;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_certifi$core$$$function__2_where);
assert(Py_REFCNT(frame_frame_certifi$core$$$function__2_where) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = module_var_accessor_certifi$core$_CACERT_PATH(tstate);
if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__CACERT_PATH);
}

if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;

    goto frame_exception_exit_1;
}
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_package_name_value_1;
tmp_called_value_1 = module_var_accessor_certifi$core$as_file(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_as_file);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 40;

    goto frame_exception_exit_1;
}
tmp_package_name_value_1 = mod_consts.const_str_plain_certifi;
{
    PyObject *hard_module = IMPORT_HARD_IMPORTLIB__RESOURCES();
    tmp_files_function = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_files);
}
assert(!(tmp_files_function == NULL));
frame_frame_certifi$core$$$function__2_where->m_frame.f_lineno = 40;
tmp_called_instance_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_files_function, tmp_package_name_value_1);
CHECK_OBJECT(tmp_files_function);
Py_DECREF(tmp_files_function);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
frame_frame_certifi$core$$$function__2_where->m_frame.f_lineno = 40;
tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_joinpath,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_17996ef8d8cba664fbfd1662d6aeb8d1_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
frame_frame_certifi$core$$$function__2_where->m_frame.f_lineno = 40;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_certifi$core, (Nuitka_StringObject *)mod_consts.const_str_plain__CACERT_CTX, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_unicode_arg_1;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = module_var_accessor_certifi$core$_CACERT_CTX(tstate);
assert(!(tmp_called_instance_2 == NULL));
frame_frame_certifi$core$$$function__2_where->m_frame.f_lineno = 41;
tmp_unicode_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, const_str_plain___enter__);
if (tmp_unicode_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
tmp_assign_source_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
CHECK_OBJECT(tmp_unicode_arg_1);
Py_DECREF(tmp_unicode_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_certifi$core, (Nuitka_StringObject *)mod_consts.const_str_plain__CACERT_PATH, tmp_assign_source_2);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_1 = module_var_accessor_certifi$core$atexit(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_atexit);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;

    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_register);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_certifi$core$exit_cacert_ctx(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exit_cacert_ctx);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 42;

    goto frame_exception_exit_1;
}
frame_frame_certifi$core$$$function__2_where->m_frame.f_lineno = 42;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
tmp_return_value = module_var_accessor_certifi$core$_CACERT_PATH(tstate);
if (unlikely(tmp_return_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__CACERT_PATH);
}

if (tmp_return_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 44;

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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_certifi$core$$$function__2_where, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_certifi$core$$$function__2_where->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_certifi$core$$$function__2_where, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_certifi$core$$$function__2_where,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_certifi$core$$$function__2_where == cache_frame_frame_certifi$core$$$function__2_where) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_certifi$core$$$function__2_where);
    cache_frame_frame_certifi$core$$$function__2_where = NULL;
}

assertFrameObject(frame_frame_certifi$core$$$function__2_where);

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


static PyObject *impl_certifi$core$$$function__3_contents(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_certifi$core$$$function__3_contents;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
PyObject *tmp_files_function;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_certifi$core$$$function__3_contents = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_certifi$core$$$function__3_contents)) {
    Py_XDECREF(cache_frame_frame_certifi$core$$$function__3_contents);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_certifi$core$$$function__3_contents == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_certifi$core$$$function__3_contents = MAKE_FUNCTION_FRAME(tstate, code_objects_9e7a873fa6854f05798fc5f1c85c067a, module_certifi$core, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_certifi$core$$$function__3_contents->m_type_description == NULL);
frame_frame_certifi$core$$$function__3_contents = cache_frame_frame_certifi$core$$$function__3_contents;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_certifi$core$$$function__3_contents);
assert(Py_REFCNT(frame_frame_certifi$core$$$function__3_contents) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_package_name_value_1;
tmp_package_name_value_1 = mod_consts.const_str_plain_certifi;
{
    PyObject *hard_module = IMPORT_HARD_IMPORTLIB__RESOURCES();
    tmp_files_function = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_files);
}
assert(!(tmp_files_function == NULL));
frame_frame_certifi$core$$$function__3_contents->m_frame.f_lineno = 47;
tmp_called_instance_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_files_function, tmp_package_name_value_1);
CHECK_OBJECT(tmp_files_function);
Py_DECREF(tmp_files_function);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto frame_exception_exit_1;
}
frame_frame_certifi$core$$$function__3_contents->m_frame.f_lineno = 47;
tmp_expression_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_joinpath,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_17996ef8d8cba664fbfd1662d6aeb8d1_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_read_text);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto frame_exception_exit_1;
}
frame_frame_certifi$core$$$function__3_contents->m_frame.f_lineno = 47;
tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_ascii_tuple, 0), mod_consts.const_tuple_str_plain_encoding_tuple);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_certifi$core$$$function__3_contents, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_certifi$core$$$function__3_contents->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_certifi$core$$$function__3_contents, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_certifi$core$$$function__3_contents,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_certifi$core$$$function__3_contents == cache_frame_frame_certifi$core$$$function__3_contents) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_certifi$core$$$function__3_contents);
    cache_frame_frame_certifi$core$$$function__3_contents = NULL;
}

assertFrameObject(frame_frame_certifi$core$$$function__3_contents);

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



static PyObject *MAKE_FUNCTION_certifi$core$$$function__1_exit_cacert_ctx(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_certifi$core$$$function__1_exit_cacert_ctx,
        mod_consts.const_str_plain_exit_cacert_ctx,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ddecfa7ac7d1dc340f40a3c734eb81be,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_certifi$core,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_certifi$core$$$function__2_where(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_certifi$core$$$function__2_where,
        mod_consts.const_str_plain_where,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_44764c6e909b7b8e7f8abecf2dc152fb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_certifi$core,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_certifi$core$$$function__3_contents(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_certifi$core$$$function__3_contents,
        mod_consts.const_str_plain_contents,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9e7a873fa6854f05798fc5f1c85c067a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_certifi$core,
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

static function_impl_code const function_table_certifi$core[] = {
impl_certifi$core$$$function__1_exit_cacert_ctx,
impl_certifi$core$$$function__2_where,
impl_certifi$core$$$function__3_contents,
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

    return Nuitka_Function_GetFunctionState(function, function_table_certifi$core);
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
        module_certifi$core,
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
        function_table_certifi$core,
        sizeof(function_table_certifi$core) / sizeof(function_impl_code)
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
static char const *module_full_name = "certifi.core";
#endif

// Internal entry point for module code.
PyObject *module_code_certifi$core(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("certifi$core");

    // Store the module for future use.
    module_certifi$core = module;

    moduledict_certifi$core = MODULE_DICT(module_certifi$core);

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
        PRINT_STRING("certifi$core: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("certifi$core: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("certifi$core: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "certifi.core" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initcertifi$core\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_certifi$core,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_certifi$core,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_certifi$core,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_certifi$core,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_certifi$core,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_certifi$core);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_certifi$core);
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

        UPDATE_STRING_DICT1(moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_certifi$core;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_48d424f086d82f72b78220bac5da6f96;
UPDATE_STRING_DICT0(moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_certifi$core = MAKE_MODULE_FRAME(code_objects_2e03288a2a610fe089d05f5f6f26c6bc, module_certifi$core);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_certifi$core);
assert(Py_REFCNT(frame_frame_certifi$core) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_certifi$core$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_certifi$core$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict_certifi$core, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_atexit;
tmp_globals_arg_value_1 = (PyObject *)moduledict_certifi$core;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_certifi$core->m_frame.f_lineno = 8;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_certifi$core, (Nuitka_StringObject *)mod_consts.const_str_plain_atexit, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);

tmp_assign_source_7 = MAKE_FUNCTION_certifi$core$$$function__1_exit_cacert_ctx(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_certifi$core, (Nuitka_StringObject *)mod_consts.const_str_plain_exit_cacert_ctx, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_IMPORTLIB__RESOURCES();
assert(!(tmp_assign_source_8 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_8);
tmp_import_from_1__module = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_certifi$core,
        const_str_plain_as_file,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, const_str_plain_as_file);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain_as_file, tmp_assign_source_9);
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_certifi$core, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_certifi$core->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_certifi$core, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_certifi$core);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_10;
{
    PyObject *hard_module = IMPORT_HARD_IMPORTLIB__RESOURCES();
    tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_files);
}
assert(!(tmp_assign_source_10 == NULL));
UPDATE_STRING_DICT1(moduledict_certifi$core, (Nuitka_StringObject *)mod_consts.const_str_plain_files, tmp_assign_source_10);
}
CHECK_OBJECT(tmp_import_from_1__module);
CHECK_OBJECT(tmp_import_from_1__module);
Py_DECREF(tmp_import_from_1__module);
tmp_import_from_1__module = NULL;
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = Py_None;
UPDATE_STRING_DICT0(moduledict_certifi$core, (Nuitka_StringObject *)mod_consts.const_str_plain__CACERT_CTX, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = Py_None;
UPDATE_STRING_DICT0(moduledict_certifi$core, (Nuitka_StringObject *)mod_consts.const_str_plain__CACERT_PATH, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_ba22db58249aba2a980f7e215437b978);

tmp_assign_source_13 = MAKE_FUNCTION_certifi$core$$$function__2_where(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_certifi$core, (Nuitka_StringObject *)mod_consts.const_str_plain_where, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_ba22db58249aba2a980f7e215437b978);

tmp_assign_source_14 = MAKE_FUNCTION_certifi$core$$$function__3_contents(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_certifi$core, (Nuitka_StringObject *)mod_consts.const_str_plain_contents, tmp_assign_source_14);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("certifi$core", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "certifi.core" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_certifi$core);
    return module_certifi$core;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("certifi$core", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
