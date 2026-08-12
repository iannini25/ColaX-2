/* Generated code for Python module 'charset_normalizer'
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



/* The "module_charset_normalizer" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_charset_normalizer;
PyDictObject *moduledict_charset_normalizer;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_624e1b0102b67e8f820ad6c7ad82b42d;
PyObject *const_str_plain_environ;
PyObject *const_tuple_76e5b36ec3db8a360dc75b483723941e_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_submodule_search_locations;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_logging;
PyObject *const_str_plain_api;
PyObject *const_tuple_f34f7f36d98b650339f4841355d39776_tuple;
PyObject *const_str_plain_from_bytes;
PyObject *const_str_plain_from_fp;
PyObject *const_str_plain_from_path;
PyObject *const_str_plain_is_binary;
PyObject *const_str_plain_legacy;
PyObject *const_tuple_str_plain_detect_tuple;
PyObject *const_str_plain_detect;
PyObject *const_str_plain_models;
PyObject *const_tuple_str_plain_CharsetMatch_str_plain_CharsetMatches_tuple;
PyObject *const_str_plain_CharsetMatch;
PyObject *const_str_plain_CharsetMatches;
PyObject *const_str_plain_utils;
PyObject *const_tuple_str_plain_set_logging_handler_tuple;
PyObject *const_str_plain_set_logging_handler;
PyObject *const_str_plain_version;
PyObject *const_tuple_str_plain_VERSION_str_plain___version___tuple;
PyObject *const_str_plain_VERSION;
PyObject *const_str_plain___version__;
PyObject *const_tuple_b7aee1d6cb086c9c9717187b3a997282_tuple;
PyObject *const_str_plain_getLogger;
PyObject *const_tuple_str_plain_charset_normalizer_tuple;
PyObject *const_str_plain_addHandler;
PyObject *const_str_plain_NullHandler;
PyObject *const_str_digest_a11f78e23c4f6ade0c1f255e14a271cb;
PyObject *const_str_digest_a2cc74632543f44b0e8362c2590d8f7e;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[35];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("charset_normalizer"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 35) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 35 values, got %d\n",
                    UN_TRANSLATE("charset_normalizer"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_624e1b0102b67e8f820ad6c7ad82b42d", mod_consts.const_str_digest_624e1b0102b67e8f820ad6c7ad82b42d);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_624e1b0102b67e8f820ad6c7ad82b42d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_environ", mod_consts.const_str_plain_environ);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_76e5b36ec3db8a360dc75b483723941e_tuple", mod_consts.const_tuple_76e5b36ec3db8a360dc75b483723941e_tuple);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_tuple_76e5b36ec3db8a360dc75b483723941e_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_submodule_search_locations", mod_consts.const_str_plain_submodule_search_locations);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_logging", mod_consts.const_str_plain_logging);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_api", mod_consts.const_str_plain_api);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_api);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_f34f7f36d98b650339f4841355d39776_tuple", mod_consts.const_tuple_f34f7f36d98b650339f4841355d39776_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_tuple_f34f7f36d98b650339f4841355d39776_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_from_bytes", mod_consts.const_str_plain_from_bytes);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_bytes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_from_fp", mod_consts.const_str_plain_from_fp);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_fp);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_from_path", mod_consts.const_str_plain_from_path);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_path);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_binary", mod_consts.const_str_plain_is_binary);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_binary);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_legacy", mod_consts.const_str_plain_legacy);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_legacy);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_detect_tuple", mod_consts.const_tuple_str_plain_detect_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_detect_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_detect", mod_consts.const_str_plain_detect);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_detect);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_models", mod_consts.const_str_plain_models);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_models);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_CharsetMatch_str_plain_CharsetMatches_tuple", mod_consts.const_tuple_str_plain_CharsetMatch_str_plain_CharsetMatches_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CharsetMatch_str_plain_CharsetMatches_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CharsetMatch", mod_consts.const_str_plain_CharsetMatch);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_CharsetMatch);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CharsetMatches", mod_consts.const_str_plain_CharsetMatches);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_CharsetMatches);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_utils", mod_consts.const_str_plain_utils);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_utils);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_set_logging_handler_tuple", mod_consts.const_tuple_str_plain_set_logging_handler_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_set_logging_handler_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_set_logging_handler", mod_consts.const_str_plain_set_logging_handler);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_logging_handler);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_version", mod_consts.const_str_plain_version);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_version);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_VERSION_str_plain___version___tuple", mod_consts.const_tuple_str_plain_VERSION_str_plain___version___tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_VERSION_str_plain___version___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_VERSION", mod_consts.const_str_plain_VERSION);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_VERSION);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___version__", mod_consts.const_str_plain___version__);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain___version__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_b7aee1d6cb086c9c9717187b3a997282_tuple", mod_consts.const_tuple_b7aee1d6cb086c9c9717187b3a997282_tuple);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_b7aee1d6cb086c9c9717187b3a997282_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getLogger", mod_consts.const_str_plain_getLogger);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_charset_normalizer_tuple", mod_consts.const_tuple_str_plain_charset_normalizer_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_charset_normalizer_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_addHandler", mod_consts.const_str_plain_addHandler);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_addHandler);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NullHandler", mod_consts.const_str_plain_NullHandler);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_NullHandler);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a11f78e23c4f6ade0c1f255e14a271cb", mod_consts.const_str_digest_a11f78e23c4f6ade0c1f255e14a271cb);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_a11f78e23c4f6ade0c1f255e14a271cb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a2cc74632543f44b0e8362c2590d8f7e", mod_consts.const_str_digest_a2cc74632543f44b0e8362c2590d8f7e);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_a2cc74632543f44b0e8362c2590d8f7e);
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
void checkModuleConstants_charset_normalizer(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_624e1b0102b67e8f820ad6c7ad82b42d", mod_consts.const_str_digest_624e1b0102b67e8f820ad6c7ad82b42d);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_624e1b0102b67e8f820ad6c7ad82b42d) && "mod_consts.const_str_digest_624e1b0102b67e8f820ad6c7ad82b42d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_environ", mod_consts.const_str_plain_environ);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ) && "mod_consts.const_str_plain_environ");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_76e5b36ec3db8a360dc75b483723941e_tuple", mod_consts.const_tuple_76e5b36ec3db8a360dc75b483723941e_tuple);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_tuple_76e5b36ec3db8a360dc75b483723941e_tuple) && "mod_consts.const_tuple_76e5b36ec3db8a360dc75b483723941e_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_submodule_search_locations", mod_consts.const_str_plain_submodule_search_locations);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations) && "mod_consts.const_str_plain_submodule_search_locations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_logging", mod_consts.const_str_plain_logging);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging) && "mod_consts.const_str_plain_logging");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_api", mod_consts.const_str_plain_api);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_api) && "mod_consts.const_str_plain_api");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_f34f7f36d98b650339f4841355d39776_tuple", mod_consts.const_tuple_f34f7f36d98b650339f4841355d39776_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_tuple_f34f7f36d98b650339f4841355d39776_tuple) && "mod_consts.const_tuple_f34f7f36d98b650339f4841355d39776_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_from_bytes", mod_consts.const_str_plain_from_bytes);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_bytes) && "mod_consts.const_str_plain_from_bytes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_from_fp", mod_consts.const_str_plain_from_fp);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_fp) && "mod_consts.const_str_plain_from_fp");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_from_path", mod_consts.const_str_plain_from_path);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_path) && "mod_consts.const_str_plain_from_path");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_binary", mod_consts.const_str_plain_is_binary);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_binary) && "mod_consts.const_str_plain_is_binary");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_legacy", mod_consts.const_str_plain_legacy);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_legacy) && "mod_consts.const_str_plain_legacy");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_detect_tuple", mod_consts.const_tuple_str_plain_detect_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_detect_tuple) && "mod_consts.const_tuple_str_plain_detect_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_detect", mod_consts.const_str_plain_detect);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_detect) && "mod_consts.const_str_plain_detect");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_models", mod_consts.const_str_plain_models);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_models) && "mod_consts.const_str_plain_models");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_CharsetMatch_str_plain_CharsetMatches_tuple", mod_consts.const_tuple_str_plain_CharsetMatch_str_plain_CharsetMatches_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CharsetMatch_str_plain_CharsetMatches_tuple) && "mod_consts.const_tuple_str_plain_CharsetMatch_str_plain_CharsetMatches_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CharsetMatch", mod_consts.const_str_plain_CharsetMatch);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_CharsetMatch) && "mod_consts.const_str_plain_CharsetMatch");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CharsetMatches", mod_consts.const_str_plain_CharsetMatches);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_CharsetMatches) && "mod_consts.const_str_plain_CharsetMatches");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_utils", mod_consts.const_str_plain_utils);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_utils) && "mod_consts.const_str_plain_utils");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_set_logging_handler_tuple", mod_consts.const_tuple_str_plain_set_logging_handler_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_set_logging_handler_tuple) && "mod_consts.const_tuple_str_plain_set_logging_handler_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_set_logging_handler", mod_consts.const_str_plain_set_logging_handler);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_logging_handler) && "mod_consts.const_str_plain_set_logging_handler");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_version", mod_consts.const_str_plain_version);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_version) && "mod_consts.const_str_plain_version");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_VERSION_str_plain___version___tuple", mod_consts.const_tuple_str_plain_VERSION_str_plain___version___tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_VERSION_str_plain___version___tuple) && "mod_consts.const_tuple_str_plain_VERSION_str_plain___version___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_VERSION", mod_consts.const_str_plain_VERSION);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_VERSION) && "mod_consts.const_str_plain_VERSION");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___version__", mod_consts.const_str_plain___version__);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain___version__) && "mod_consts.const_str_plain___version__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_b7aee1d6cb086c9c9717187b3a997282_tuple", mod_consts.const_tuple_b7aee1d6cb086c9c9717187b3a997282_tuple);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_b7aee1d6cb086c9c9717187b3a997282_tuple) && "mod_consts.const_tuple_b7aee1d6cb086c9c9717187b3a997282_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getLogger", mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger) && "mod_consts.const_str_plain_getLogger");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_charset_normalizer_tuple", mod_consts.const_tuple_str_plain_charset_normalizer_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_charset_normalizer_tuple) && "mod_consts.const_tuple_str_plain_charset_normalizer_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_addHandler", mod_consts.const_str_plain_addHandler);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_addHandler) && "mod_consts.const_str_plain_addHandler");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NullHandler", mod_consts.const_str_plain_NullHandler);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_NullHandler) && "mod_consts.const_str_plain_NullHandler");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a11f78e23c4f6ade0c1f255e14a271cb", mod_consts.const_str_digest_a11f78e23c4f6ade0c1f255e14a271cb);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_a11f78e23c4f6ade0c1f255e14a271cb) && "mod_consts.const_str_digest_a11f78e23c4f6ade0c1f255e14a271cb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a2cc74632543f44b0e8362c2590d8f7e", mod_consts.const_str_digest_a2cc74632543f44b0e8362c2590d8f7e);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_a2cc74632543f44b0e8362c2590d8f7e) && "mod_consts.const_str_digest_a2cc74632543f44b0e8362c2590d8f7e");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 3
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
static PyObject *module_var_accessor_charset_normalizer$__path__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer, (Nuitka_StringObject *)const_str_plain___path__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer, (Nuitka_StringObject *)const_str_plain___path__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer, (Nuitka_StringObject *)const_str_plain___path__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___path__);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$logging(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_logging);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_logging, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_logging);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_logging, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_4ef789219a4c04e2ae3c427e4fc7ee64;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_a11f78e23c4f6ade0c1f255e14a271cb); CHECK_OBJECT(module_filename_obj);
code_objects_4ef789219a4c04e2ae3c427e4fc7ee64 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_a2cc74632543f44b0e8362c2590d8f7e, mod_consts.const_str_digest_a2cc74632543f44b0e8362c2590d8f7e, NULL, NULL, 0, 0, 0);
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

static function_impl_code const function_table_charset_normalizer[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_charset_normalizer);
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
        module_charset_normalizer,
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
        function_table_charset_normalizer,
        sizeof(function_table_charset_normalizer) / sizeof(function_impl_code)
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
static char const *module_full_name = "charset_normalizer";
#endif

// Internal entry point for module code.
PyObject *module_code_charset_normalizer(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("charset_normalizer");

    // Store the module for future use.
    module_charset_normalizer = module;

    moduledict_charset_normalizer = MODULE_DICT(module_charset_normalizer);

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
        PRINT_STRING("charset_normalizer: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("charset_normalizer: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("charset_normalizer: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "charset_normalizer" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initcharset_normalizer\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_charset_normalizer, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_charset_normalizer,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_charset_normalizer,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_charset_normalizer, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_charset_normalizer,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_charset_normalizer, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_charset_normalizer,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_charset_normalizer, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_charset_normalizer,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_charset_normalizer);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_charset_normalizer, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_charset_normalizer, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_charset_normalizer, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_charset_normalizer, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_charset_normalizer);
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

        UPDATE_STRING_DICT1(moduledict_charset_normalizer, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
struct Nuitka_FrameObject *frame_frame_charset_normalizer;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_624e1b0102b67e8f820ad6c7ad82b42d;
UPDATE_STRING_DICT0(moduledict_charset_normalizer, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_charset_normalizer, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_charset_normalizer = MAKE_MODULE_FRAME(code_objects_4ef789219a4c04e2ae3c427e4fc7ee64, module_charset_normalizer);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_charset_normalizer);
assert(Py_REFCNT(frame_frame_charset_normalizer) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
frame_frame_charset_normalizer->m_frame.f_lineno = 1;
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
frame_frame_charset_normalizer->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
frame_frame_charset_normalizer->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


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
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_charset_normalizer->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_76e5b36ec3db8a360dc75b483723941e_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_assign_source_3);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_charset_normalizer, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
}
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_charset_normalizer$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_charset_normalizer$__spec__(tstate);
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
tmp_ass_attr_value_3 = module_var_accessor_charset_normalizer$__path__(tstate);
if (unlikely(tmp_ass_attr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___path__);
}

if (tmp_ass_attr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_ass_attr_target_3 = module_var_accessor_charset_normalizer$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_charset_normalizer, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_charset_normalizer, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT1(moduledict_charset_normalizer, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_1 = (PyObject *)moduledict_charset_normalizer;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_charset_normalizer->m_frame.f_lineno = 24;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_api;
tmp_globals_arg_value_2 = (PyObject *)moduledict_charset_normalizer;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_f34f7f36d98b650339f4841355d39776_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_charset_normalizer->m_frame.f_lineno = 26;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
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
        (PyObject *)moduledict_charset_normalizer,
        mod_consts.const_str_plain_from_bytes,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_from_bytes);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer, (Nuitka_StringObject *)mod_consts.const_str_plain_from_bytes, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_charset_normalizer,
        mod_consts.const_str_plain_from_fp,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_from_fp);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer, (Nuitka_StringObject *)mod_consts.const_str_plain_from_fp, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_charset_normalizer,
        mod_consts.const_str_plain_from_path,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_from_path);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer, (Nuitka_StringObject *)mod_consts.const_str_plain_from_path, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_charset_normalizer,
        mod_consts.const_str_plain_is_binary,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_is_binary);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer, (Nuitka_StringObject *)mod_consts.const_str_plain_is_binary, tmp_assign_source_12);
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
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_legacy;
tmp_globals_arg_value_3 = (PyObject *)moduledict_charset_normalizer;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_detect_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_charset_normalizer->m_frame.f_lineno = 27;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_charset_normalizer,
        mod_consts.const_str_plain_detect,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_detect);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer, (Nuitka_StringObject *)mod_consts.const_str_plain_detect, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_models;
tmp_globals_arg_value_4 = (PyObject *)moduledict_charset_normalizer;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_CharsetMatch_str_plain_CharsetMatches_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_charset_normalizer->m_frame.f_lineno = 28;
tmp_assign_source_14 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_14;
}
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_charset_normalizer,
        mod_consts.const_str_plain_CharsetMatch,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_CharsetMatch);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer, (Nuitka_StringObject *)mod_consts.const_str_plain_CharsetMatch, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_charset_normalizer,
        mod_consts.const_str_plain_CharsetMatches,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_CharsetMatches);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer, (Nuitka_StringObject *)mod_consts.const_str_plain_CharsetMatches, tmp_assign_source_16);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_2__module);
CHECK_OBJECT(tmp_import_from_2__module);
Py_DECREF(tmp_import_from_2__module);
tmp_import_from_2__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_import_from_2__module);
CHECK_OBJECT(tmp_import_from_2__module);
Py_DECREF(tmp_import_from_2__module);
tmp_import_from_2__module = NULL;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_utils;
tmp_globals_arg_value_5 = (PyObject *)moduledict_charset_normalizer;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_set_logging_handler_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_charset_normalizer->m_frame.f_lineno = 29;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_charset_normalizer,
        mod_consts.const_str_plain_set_logging_handler,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_set_logging_handler);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer, (Nuitka_StringObject *)mod_consts.const_str_plain_set_logging_handler, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_version;
tmp_globals_arg_value_6 = (PyObject *)moduledict_charset_normalizer;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_VERSION_str_plain___version___tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_charset_normalizer->m_frame.f_lineno = 30;
tmp_assign_source_18 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_18;
}
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_9 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_charset_normalizer,
        mod_consts.const_str_plain_VERSION,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_VERSION);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer, (Nuitka_StringObject *)mod_consts.const_str_plain_VERSION, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_10 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_charset_normalizer,
        mod_consts.const_str_plain___version__,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain___version__);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer, (Nuitka_StringObject *)mod_consts.const_str_plain___version__, tmp_assign_source_20);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = mod_consts.const_tuple_b7aee1d6cb086c9c9717187b3a997282_tuple;
UPDATE_STRING_DICT0(moduledict_charset_normalizer, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_21);
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_instance_2;
tmp_called_instance_1 = module_var_accessor_charset_normalizer$logging(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;

    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer->m_frame.f_lineno = 48;
tmp_expression_value_3 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_charset_normalizer_tuple, 0)
);

if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_addHandler);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
tmp_called_instance_2 = module_var_accessor_charset_normalizer$logging(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 48;

    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer->m_frame.f_lineno = 48;
tmp_args_element_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_NullHandler);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 48;

    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer->m_frame.f_lineno = 48;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_charset_normalizer->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_charset_normalizer);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("charset_normalizer", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "charset_normalizer" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_charset_normalizer);
    return module_charset_normalizer;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_charset_normalizer, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("charset_normalizer", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
