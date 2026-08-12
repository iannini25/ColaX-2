/* Generated code for Python module 'requests$api'
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



/* The "module_requests$api" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_requests$api;
PyDictObject *moduledict_requests$api;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_sessions;
PyObject *const_str_plain_Session;
PyObject *const_str_plain_request;
PyObject *const_str_plain_method;
PyObject *const_str_plain_url;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_digest_ec664b3fb1b3319cf10c5991b6c05f74;
PyObject *const_str_plain_params;
PyObject *const_str_digest_276107dad0b38194fb0b040c6dbb15ec;
PyObject *const_str_plain_options;
PyObject *const_str_digest_cae14719162f8d25632f36871021aaaf;
PyObject *const_str_plain_allow_redirects;
PyObject *const_str_plain_head;
PyObject *const_str_digest_dcb82a09e023c7d797c67d041207964d;
PyObject *const_str_plain_post;
PyObject *const_str_plain_data;
PyObject *const_str_plain_json;
PyObject *const_str_digest_d8119d09c2e467d4ded663600b20d96a;
PyObject *const_str_plain_put;
PyObject *const_str_digest_c55a37109c5424c9e3f9192b88da0d44;
PyObject *const_str_plain_patch;
PyObject *const_str_digest_2823b659ea1a3a7d2acc5b467c5b00b5;
PyObject *const_str_plain_delete;
PyObject *const_str_digest_c1ec17d8ceaaa6ed18f5bd6653da2b27;
PyObject *const_str_digest_e93fbdf55e7e8cffd006aa137660fb1c;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_tuple_str_plain_sessions_tuple;
PyObject *const_str_plain_models;
PyObject *const_tuple_str_plain_Response_tuple;
PyObject *const_str_plain_Response;
PyObject *const_dict_9a0686fa60a0d818df33cc9715724501;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_0aa1d0ec29e7a9c2623db2e24770bb73;
PyObject *const_dict_f801c0d3b7cb9135f2cfc91b878b7b5d;
PyObject *const_tuple_none_none_tuple;
PyObject *const_dict_c8fa56ce8517f6945094c1ad037783ee;
PyObject *const_dict_098b073421ddc4dd0c047c0b743f9707;
PyObject *const_str_digest_99dc40c27a3fef4fc5730c424f667aa5;
PyObject *const_str_digest_c7e50f7358fbded8067696c085603681;
PyObject *const_tuple_str_plain_url_str_plain_kwargs_tuple;
PyObject *const_tuple_str_plain_url_str_plain_params_str_plain_kwargs_tuple;
PyObject *const_tuple_str_plain_url_str_plain_data_str_plain_kwargs_tuple;
PyObject *const_tuple_str_plain_url_str_plain_data_str_plain_json_str_plain_kwargs_tuple;
PyObject *const_tuple_130b606459c7852087a8cbb86273aea5_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[47];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("requests.api"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 47) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 47 values, got %d\n",
                    UN_TRANSLATE("requests.api"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sessions", mod_consts.const_str_plain_sessions);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_sessions);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Session", mod_consts.const_str_plain_Session);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_Session);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_request", mod_consts.const_str_plain_request);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_request);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_method", mod_consts.const_str_plain_method);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_method);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_url", mod_consts.const_str_plain_url);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_url);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_none_tuple", mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ec664b3fb1b3319cf10c5991b6c05f74", mod_consts.const_str_digest_ec664b3fb1b3319cf10c5991b6c05f74);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_ec664b3fb1b3319cf10c5991b6c05f74);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_params", mod_consts.const_str_plain_params);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_params);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_276107dad0b38194fb0b040c6dbb15ec", mod_consts.const_str_digest_276107dad0b38194fb0b040c6dbb15ec);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_276107dad0b38194fb0b040c6dbb15ec);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_options", mod_consts.const_str_plain_options);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_options);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cae14719162f8d25632f36871021aaaf", mod_consts.const_str_digest_cae14719162f8d25632f36871021aaaf);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_cae14719162f8d25632f36871021aaaf);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_allow_redirects", mod_consts.const_str_plain_allow_redirects);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_allow_redirects);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_head", mod_consts.const_str_plain_head);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_head);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dcb82a09e023c7d797c67d041207964d", mod_consts.const_str_digest_dcb82a09e023c7d797c67d041207964d);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_dcb82a09e023c7d797c67d041207964d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_post", mod_consts.const_str_plain_post);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_post);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_data", mod_consts.const_str_plain_data);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_data);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_json", mod_consts.const_str_plain_json);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_json);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d8119d09c2e467d4ded663600b20d96a", mod_consts.const_str_digest_d8119d09c2e467d4ded663600b20d96a);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_d8119d09c2e467d4ded663600b20d96a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_put", mod_consts.const_str_plain_put);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_put);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c55a37109c5424c9e3f9192b88da0d44", mod_consts.const_str_digest_c55a37109c5424c9e3f9192b88da0d44);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_c55a37109c5424c9e3f9192b88da0d44);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_patch", mod_consts.const_str_plain_patch);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_patch);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2823b659ea1a3a7d2acc5b467c5b00b5", mod_consts.const_str_digest_2823b659ea1a3a7d2acc5b467c5b00b5);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_2823b659ea1a3a7d2acc5b467c5b00b5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_delete", mod_consts.const_str_plain_delete);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_delete);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c1ec17d8ceaaa6ed18f5bd6653da2b27", mod_consts.const_str_digest_c1ec17d8ceaaa6ed18f5bd6653da2b27);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_c1ec17d8ceaaa6ed18f5bd6653da2b27);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e93fbdf55e7e8cffd006aa137660fb1c", mod_consts.const_str_digest_e93fbdf55e7e8cffd006aa137660fb1c);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_e93fbdf55e7e8cffd006aa137660fb1c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TYPE_CHECKING", mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_sessions_tuple", mod_consts.const_tuple_str_plain_sessions_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_sessions_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_models", mod_consts.const_str_plain_models);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_models);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Response_tuple", mod_consts.const_tuple_str_plain_Response_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Response_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Response", mod_consts.const_str_plain_Response);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_Response);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_9a0686fa60a0d818df33cc9715724501", mod_consts.const_dict_9a0686fa60a0d818df33cc9715724501);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_dict_9a0686fa60a0d818df33cc9715724501);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0aa1d0ec29e7a9c2623db2e24770bb73", mod_consts.const_dict_0aa1d0ec29e7a9c2623db2e24770bb73);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_dict_0aa1d0ec29e7a9c2623db2e24770bb73);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_f801c0d3b7cb9135f2cfc91b878b7b5d", mod_consts.const_dict_f801c0d3b7cb9135f2cfc91b878b7b5d);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_dict_f801c0d3b7cb9135f2cfc91b878b7b5d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_tuple", mod_consts.const_tuple_none_none_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c8fa56ce8517f6945094c1ad037783ee", mod_consts.const_dict_c8fa56ce8517f6945094c1ad037783ee);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_dict_c8fa56ce8517f6945094c1ad037783ee);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_098b073421ddc4dd0c047c0b743f9707", mod_consts.const_dict_098b073421ddc4dd0c047c0b743f9707);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_dict_098b073421ddc4dd0c047c0b743f9707);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_99dc40c27a3fef4fc5730c424f667aa5", mod_consts.const_str_digest_99dc40c27a3fef4fc5730c424f667aa5);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_99dc40c27a3fef4fc5730c424f667aa5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c7e50f7358fbded8067696c085603681", mod_consts.const_str_digest_c7e50f7358fbded8067696c085603681);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_c7e50f7358fbded8067696c085603681);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_url_str_plain_kwargs_tuple", mod_consts.const_tuple_str_plain_url_str_plain_kwargs_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_url_str_plain_kwargs_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_url_str_plain_params_str_plain_kwargs_tuple", mod_consts.const_tuple_str_plain_url_str_plain_params_str_plain_kwargs_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_url_str_plain_params_str_plain_kwargs_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_url_str_plain_data_str_plain_kwargs_tuple", mod_consts.const_tuple_str_plain_url_str_plain_data_str_plain_kwargs_tuple);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_url_str_plain_data_str_plain_kwargs_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_url_str_plain_data_str_plain_json_str_plain_kwargs_tuple", mod_consts.const_tuple_str_plain_url_str_plain_data_str_plain_json_str_plain_kwargs_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_url_str_plain_data_str_plain_json_str_plain_kwargs_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_130b606459c7852087a8cbb86273aea5_tuple", mod_consts.const_tuple_130b606459c7852087a8cbb86273aea5_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_130b606459c7852087a8cbb86273aea5_tuple);
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
void checkModuleConstants_requests$api(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sessions", mod_consts.const_str_plain_sessions);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_sessions) && "mod_consts.const_str_plain_sessions");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Session", mod_consts.const_str_plain_Session);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_Session) && "mod_consts.const_str_plain_Session");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_request", mod_consts.const_str_plain_request);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_request) && "mod_consts.const_str_plain_request");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_method", mod_consts.const_str_plain_method);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_method) && "mod_consts.const_str_plain_method");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_url", mod_consts.const_str_plain_url);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_url) && "mod_consts.const_str_plain_url");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_none_tuple", mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple) && "mod_consts.const_tuple_none_none_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ec664b3fb1b3319cf10c5991b6c05f74", mod_consts.const_str_digest_ec664b3fb1b3319cf10c5991b6c05f74);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_ec664b3fb1b3319cf10c5991b6c05f74) && "mod_consts.const_str_digest_ec664b3fb1b3319cf10c5991b6c05f74");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_params", mod_consts.const_str_plain_params);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_params) && "mod_consts.const_str_plain_params");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_276107dad0b38194fb0b040c6dbb15ec", mod_consts.const_str_digest_276107dad0b38194fb0b040c6dbb15ec);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_276107dad0b38194fb0b040c6dbb15ec) && "mod_consts.const_str_digest_276107dad0b38194fb0b040c6dbb15ec");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_options", mod_consts.const_str_plain_options);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_options) && "mod_consts.const_str_plain_options");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cae14719162f8d25632f36871021aaaf", mod_consts.const_str_digest_cae14719162f8d25632f36871021aaaf);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_cae14719162f8d25632f36871021aaaf) && "mod_consts.const_str_digest_cae14719162f8d25632f36871021aaaf");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_allow_redirects", mod_consts.const_str_plain_allow_redirects);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_allow_redirects) && "mod_consts.const_str_plain_allow_redirects");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_head", mod_consts.const_str_plain_head);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_head) && "mod_consts.const_str_plain_head");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dcb82a09e023c7d797c67d041207964d", mod_consts.const_str_digest_dcb82a09e023c7d797c67d041207964d);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_dcb82a09e023c7d797c67d041207964d) && "mod_consts.const_str_digest_dcb82a09e023c7d797c67d041207964d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_post", mod_consts.const_str_plain_post);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_post) && "mod_consts.const_str_plain_post");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_data", mod_consts.const_str_plain_data);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_data) && "mod_consts.const_str_plain_data");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_json", mod_consts.const_str_plain_json);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_json) && "mod_consts.const_str_plain_json");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d8119d09c2e467d4ded663600b20d96a", mod_consts.const_str_digest_d8119d09c2e467d4ded663600b20d96a);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_d8119d09c2e467d4ded663600b20d96a) && "mod_consts.const_str_digest_d8119d09c2e467d4ded663600b20d96a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_put", mod_consts.const_str_plain_put);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_put) && "mod_consts.const_str_plain_put");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c55a37109c5424c9e3f9192b88da0d44", mod_consts.const_str_digest_c55a37109c5424c9e3f9192b88da0d44);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_c55a37109c5424c9e3f9192b88da0d44) && "mod_consts.const_str_digest_c55a37109c5424c9e3f9192b88da0d44");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_patch", mod_consts.const_str_plain_patch);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_patch) && "mod_consts.const_str_plain_patch");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2823b659ea1a3a7d2acc5b467c5b00b5", mod_consts.const_str_digest_2823b659ea1a3a7d2acc5b467c5b00b5);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_2823b659ea1a3a7d2acc5b467c5b00b5) && "mod_consts.const_str_digest_2823b659ea1a3a7d2acc5b467c5b00b5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_delete", mod_consts.const_str_plain_delete);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_delete) && "mod_consts.const_str_plain_delete");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c1ec17d8ceaaa6ed18f5bd6653da2b27", mod_consts.const_str_digest_c1ec17d8ceaaa6ed18f5bd6653da2b27);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_c1ec17d8ceaaa6ed18f5bd6653da2b27) && "mod_consts.const_str_digest_c1ec17d8ceaaa6ed18f5bd6653da2b27");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e93fbdf55e7e8cffd006aa137660fb1c", mod_consts.const_str_digest_e93fbdf55e7e8cffd006aa137660fb1c);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_e93fbdf55e7e8cffd006aa137660fb1c) && "mod_consts.const_str_digest_e93fbdf55e7e8cffd006aa137660fb1c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TYPE_CHECKING", mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING) && "mod_consts.const_str_plain_TYPE_CHECKING");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_sessions_tuple", mod_consts.const_tuple_str_plain_sessions_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_sessions_tuple) && "mod_consts.const_tuple_str_plain_sessions_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_models", mod_consts.const_str_plain_models);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_models) && "mod_consts.const_str_plain_models");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Response_tuple", mod_consts.const_tuple_str_plain_Response_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Response_tuple) && "mod_consts.const_tuple_str_plain_Response_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Response", mod_consts.const_str_plain_Response);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_Response) && "mod_consts.const_str_plain_Response");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_9a0686fa60a0d818df33cc9715724501", mod_consts.const_dict_9a0686fa60a0d818df33cc9715724501);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_dict_9a0686fa60a0d818df33cc9715724501) && "mod_consts.const_dict_9a0686fa60a0d818df33cc9715724501");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple) && "mod_consts.const_tuple_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0aa1d0ec29e7a9c2623db2e24770bb73", mod_consts.const_dict_0aa1d0ec29e7a9c2623db2e24770bb73);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_dict_0aa1d0ec29e7a9c2623db2e24770bb73) && "mod_consts.const_dict_0aa1d0ec29e7a9c2623db2e24770bb73");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_f801c0d3b7cb9135f2cfc91b878b7b5d", mod_consts.const_dict_f801c0d3b7cb9135f2cfc91b878b7b5d);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_dict_f801c0d3b7cb9135f2cfc91b878b7b5d) && "mod_consts.const_dict_f801c0d3b7cb9135f2cfc91b878b7b5d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_tuple", mod_consts.const_tuple_none_none_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple) && "mod_consts.const_tuple_none_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c8fa56ce8517f6945094c1ad037783ee", mod_consts.const_dict_c8fa56ce8517f6945094c1ad037783ee);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_dict_c8fa56ce8517f6945094c1ad037783ee) && "mod_consts.const_dict_c8fa56ce8517f6945094c1ad037783ee");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_098b073421ddc4dd0c047c0b743f9707", mod_consts.const_dict_098b073421ddc4dd0c047c0b743f9707);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_dict_098b073421ddc4dd0c047c0b743f9707) && "mod_consts.const_dict_098b073421ddc4dd0c047c0b743f9707");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_99dc40c27a3fef4fc5730c424f667aa5", mod_consts.const_str_digest_99dc40c27a3fef4fc5730c424f667aa5);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_99dc40c27a3fef4fc5730c424f667aa5) && "mod_consts.const_str_digest_99dc40c27a3fef4fc5730c424f667aa5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c7e50f7358fbded8067696c085603681", mod_consts.const_str_digest_c7e50f7358fbded8067696c085603681);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_c7e50f7358fbded8067696c085603681) && "mod_consts.const_str_digest_c7e50f7358fbded8067696c085603681");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_url_str_plain_kwargs_tuple", mod_consts.const_tuple_str_plain_url_str_plain_kwargs_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_url_str_plain_kwargs_tuple) && "mod_consts.const_tuple_str_plain_url_str_plain_kwargs_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_url_str_plain_params_str_plain_kwargs_tuple", mod_consts.const_tuple_str_plain_url_str_plain_params_str_plain_kwargs_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_url_str_plain_params_str_plain_kwargs_tuple) && "mod_consts.const_tuple_str_plain_url_str_plain_params_str_plain_kwargs_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_url_str_plain_data_str_plain_kwargs_tuple", mod_consts.const_tuple_str_plain_url_str_plain_data_str_plain_kwargs_tuple);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_url_str_plain_data_str_plain_kwargs_tuple) && "mod_consts.const_tuple_str_plain_url_str_plain_data_str_plain_kwargs_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_url_str_plain_data_str_plain_json_str_plain_kwargs_tuple", mod_consts.const_tuple_str_plain_url_str_plain_data_str_plain_json_str_plain_kwargs_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_url_str_plain_data_str_plain_json_str_plain_kwargs_tuple) && "mod_consts.const_tuple_str_plain_url_str_plain_data_str_plain_json_str_plain_kwargs_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_130b606459c7852087a8cbb86273aea5_tuple", mod_consts.const_tuple_130b606459c7852087a8cbb86273aea5_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_130b606459c7852087a8cbb86273aea5_tuple) && "mod_consts.const_tuple_130b606459c7852087a8cbb86273aea5_tuple");
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
static PyObject *module_var_accessor_requests$api$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$api->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_requests$api$request(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$api, (Nuitka_StringObject *)mod_consts.const_str_plain_request);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_request);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_request, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_request);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_request, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$api, (Nuitka_StringObject *)mod_consts.const_str_plain_request);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$api, (Nuitka_StringObject *)mod_consts.const_str_plain_request);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_request);
    }

    return result;
}

static PyObject *module_var_accessor_requests$api$sessions(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$api, (Nuitka_StringObject *)mod_consts.const_str_plain_sessions);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_sessions);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_sessions, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_sessions);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_sessions, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$api, (Nuitka_StringObject *)mod_consts.const_str_plain_sessions);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$api, (Nuitka_StringObject *)mod_consts.const_str_plain_sessions);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_sessions);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_3142992a78d28d2877bb3f7c9fdfdda0;
static PyCodeObject *code_objects_817a76f3421db63d6fe31bf3da44f434;
static PyCodeObject *code_objects_bb0fbe2b9f7465a3b60b2a8279e719fe;
static PyCodeObject *code_objects_23120f86bdb73b31815ad72b9c8480fe;
static PyCodeObject *code_objects_e1df3a43b692a4dcf2f0377a565b8df7;
static PyCodeObject *code_objects_32401814539493efd9f032cb19642386;
static PyCodeObject *code_objects_040ab051407634d5e0e853b2997a2beb;
static PyCodeObject *code_objects_c7e6ce504fc60c07c948ebec4207b784;
static PyCodeObject *code_objects_e319f7ad96b7309d626ec5ce162ffdcc;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_99dc40c27a3fef4fc5730c424f667aa5); CHECK_OBJECT(module_filename_obj);
code_objects_3142992a78d28d2877bb3f7c9fdfdda0 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_c7e50f7358fbded8067696c085603681, mod_consts.const_str_digest_c7e50f7358fbded8067696c085603681, NULL, NULL, 0, 0, 0);
code_objects_817a76f3421db63d6fe31bf3da44f434 = MAKE_CODE_OBJECT(module_filename_obj, 171, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_delete, mod_consts.const_str_plain_delete, mod_consts.const_tuple_str_plain_url_str_plain_kwargs_tuple, NULL, 1, 0, 0);
code_objects_bb0fbe2b9f7465a3b60b2a8279e719fe = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, const_str_plain_get, const_str_plain_get, mod_consts.const_tuple_str_plain_url_str_plain_params_str_plain_kwargs_tuple, NULL, 2, 0, 0);
code_objects_23120f86bdb73b31815ad72b9c8480fe = MAKE_CODE_OBJECT(module_filename_obj, 102, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_head, mod_consts.const_str_plain_head, mod_consts.const_tuple_str_plain_url_str_plain_kwargs_tuple, NULL, 1, 0, 0);
code_objects_e1df3a43b692a4dcf2f0377a565b8df7 = MAKE_CODE_OBJECT(module_filename_obj, 90, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_options, mod_consts.const_str_plain_options, mod_consts.const_tuple_str_plain_url_str_plain_kwargs_tuple, NULL, 1, 0, 0);
code_objects_32401814539493efd9f032cb19642386 = MAKE_CODE_OBJECT(module_filename_obj, 154, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_patch, mod_consts.const_str_plain_patch, mod_consts.const_tuple_str_plain_url_str_plain_data_str_plain_kwargs_tuple, NULL, 2, 0, 0);
code_objects_040ab051407634d5e0e853b2997a2beb = MAKE_CODE_OBJECT(module_filename_obj, 117, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_post, mod_consts.const_str_plain_post, mod_consts.const_tuple_str_plain_url_str_plain_data_str_plain_json_str_plain_kwargs_tuple, NULL, 3, 0, 0);
code_objects_c7e6ce504fc60c07c948ebec4207b784 = MAKE_CODE_OBJECT(module_filename_obj, 137, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_put, mod_consts.const_str_plain_put, mod_consts.const_tuple_str_plain_url_str_plain_data_str_plain_kwargs_tuple, NULL, 2, 0, 0);
code_objects_e319f7ad96b7309d626ec5ce162ffdcc = MAKE_CODE_OBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_request, mod_consts.const_str_plain_request, mod_consts.const_tuple_130b606459c7852087a8cbb86273aea5_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_requests$api$$$function__1_request(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$api$$$function__2_get(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$api$$$function__3_options(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$api$$$function__4_head(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$api$$$function__5_post(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$api$$$function__6_put(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$api$$$function__7_patch(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$api$$$function__8_delete(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_requests$api$$$function__1_request(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_method = python_pars[0];
PyObject *par_url = python_pars[1];
PyObject *par_kwargs = python_pars[2];
PyObject *var_session = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_requests$api$$$function__1_request;
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
static struct Nuitka_FrameObject *cache_frame_frame_requests$api$$$function__1_request = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$api$$$function__1_request)) {
    Py_XDECREF(cache_frame_frame_requests$api$$$function__1_request);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$api$$$function__1_request == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$api$$$function__1_request = MAKE_FUNCTION_FRAME(tstate, code_objects_e319f7ad96b7309d626ec5ce162ffdcc, module_requests$api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$api$$$function__1_request->m_type_description == NULL);
frame_frame_requests$api$$$function__1_request = cache_frame_frame_requests$api$$$function__1_request;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$api$$$function__1_request);
assert(Py_REFCNT(frame_frame_requests$api$$$function__1_request) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_requests$api$sessions(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sessions);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_requests$api$$$function__1_request->m_frame.f_lineno = 70;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_Session);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oooo";
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
PyObject *tmp_expression_value_1;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_1 = tmp_with_1__source;
tmp_assign_source_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___exit__);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oooo";
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
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_requests$api$$$function__1_request->m_frame.f_lineno = 70;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oooo";
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
    PyObject *old = var_session;
    var_session = tmp_assign_source_5;
    Py_INCREF(var_session);
    Py_XDECREF(old);
}

}
// Tried code:
// Tried code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_direct_call_arg3_1;
CHECK_OBJECT(var_session);
tmp_expression_value_3 = var_session;
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_request);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
tmp_dict_key_1 = mod_consts.const_str_plain_method;
CHECK_OBJECT(par_method);
tmp_dict_value_1 = par_method;
tmp_direct_call_arg2_1 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_url;
CHECK_OBJECT(par_url);
tmp_dict_value_1 = par_url;
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg3_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$api$$$function__1_request, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$api$$$function__1_request, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
frame_frame_requests$api$$$function__1_request->m_frame.f_lineno = 70;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oooo";
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
    exception_lineno = 70;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_requests$api$$$function__1_request->m_frame)) {
        frame_frame_requests$api$$$function__1_request->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_5;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 70;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_requests$api$$$function__1_request->m_frame)) {
        frame_frame_requests$api$$$function__1_request->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
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
frame_frame_requests$api$$$function__1_request->m_frame.f_lineno = 70;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_3, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oooo";
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
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_with_1__indicator;
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
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_requests$api$$$function__1_request->m_frame.f_lineno = 70;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 70;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$api$$$function__1_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$api$$$function__1_request->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$api$$$function__1_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$api$$$function__1_request,
    type_description_1,
    par_method,
    par_url,
    par_kwargs,
    var_session
);


// Release cached frame if used for exception.
if (frame_frame_requests$api$$$function__1_request == cache_frame_frame_requests$api$$$function__1_request) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$api$$$function__1_request);
    cache_frame_frame_requests$api$$$function__1_request = NULL;
}

assertFrameObject(frame_frame_requests$api$$$function__1_request);

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
CHECK_OBJECT(var_session);
CHECK_OBJECT(var_session);
Py_DECREF(var_session);
var_session = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_session);
var_session = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$api$$$function__2_get(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_url = python_pars[0];
PyObject *par_params = python_pars[1];
PyObject *par_kwargs = python_pars[2];
struct Nuitka_FrameObject *frame_frame_requests$api$$$function__2_get;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_requests$api$$$function__2_get = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$api$$$function__2_get)) {
    Py_XDECREF(cache_frame_frame_requests$api$$$function__2_get);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$api$$$function__2_get == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$api$$$function__2_get = MAKE_FUNCTION_FRAME(tstate, code_objects_bb0fbe2b9f7465a3b60b2a8279e719fe, module_requests$api, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$api$$$function__2_get->m_type_description == NULL);
frame_frame_requests$api$$$function__2_get = cache_frame_frame_requests$api$$$function__2_get;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$api$$$function__2_get);
assert(Py_REFCNT(frame_frame_requests$api$$$function__2_get) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_direct_call_arg4_1;
tmp_direct_call_arg1_1 = module_var_accessor_requests$api$request(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = const_str_plain_get;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_url);
tmp_tuple_element_1 = par_url;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_1);
tmp_dict_key_1 = mod_consts.const_str_plain_params;
CHECK_OBJECT(par_params);
tmp_dict_value_1 = par_params;
tmp_direct_call_arg3_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg4_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg4_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$api$$$function__2_get, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$api$$$function__2_get->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$api$$$function__2_get, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$api$$$function__2_get,
    type_description_1,
    par_url,
    par_params,
    par_kwargs
);


// Release cached frame if used for exception.
if (frame_frame_requests$api$$$function__2_get == cache_frame_frame_requests$api$$$function__2_get) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$api$$$function__2_get);
    cache_frame_frame_requests$api$$$function__2_get = NULL;
}

assertFrameObject(frame_frame_requests$api$$$function__2_get);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_params);
Py_DECREF(par_params);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_params);
Py_DECREF(par_params);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$api$$$function__3_options(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_url = python_pars[0];
PyObject *par_kwargs = python_pars[1];
struct Nuitka_FrameObject *frame_frame_requests$api$$$function__3_options;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$api$$$function__3_options = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$api$$$function__3_options)) {
    Py_XDECREF(cache_frame_frame_requests$api$$$function__3_options);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$api$$$function__3_options == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$api$$$function__3_options = MAKE_FUNCTION_FRAME(tstate, code_objects_e1df3a43b692a4dcf2f0377a565b8df7, module_requests$api, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$api$$$function__3_options->m_type_description == NULL);
frame_frame_requests$api$$$function__3_options = cache_frame_frame_requests$api$$$function__3_options;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$api$$$function__3_options);
assert(Py_REFCNT(frame_frame_requests$api$$$function__3_options) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
tmp_direct_call_arg1_1 = module_var_accessor_requests$api$request(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 99;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_plain_options;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_url);
tmp_tuple_element_1 = par_url;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg3_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$api$$$function__3_options, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$api$$$function__3_options->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$api$$$function__3_options, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$api$$$function__3_options,
    type_description_1,
    par_url,
    par_kwargs
);


// Release cached frame if used for exception.
if (frame_frame_requests$api$$$function__3_options == cache_frame_frame_requests$api$$$function__3_options) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$api$$$function__3_options);
    cache_frame_frame_requests$api$$$function__3_options = NULL;
}

assertFrameObject(frame_frame_requests$api$$$function__3_options);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$api$$$function__4_head(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_url = python_pars[0];
PyObject *par_kwargs = python_pars[1];
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_FrameObject *frame_frame_requests$api$$$function__4_head;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$api$$$function__4_head = NULL;

    // Actual function body.
{
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
PyObject *tmp_default_value_1;
PyObject *tmp_capi_result_1;
CHECK_OBJECT(par_kwargs);
tmp_dict_arg_value_1 = par_kwargs;
tmp_key_value_1 = mod_consts.const_str_plain_allow_redirects;
tmp_default_value_1 = Py_False;
tmp_capi_result_1 = DICT_SETDEFAULT3(tstate, tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
assert(!(tmp_capi_result_1 == NULL));
CHECK_OBJECT(tmp_capi_result_1);
Py_DECREF(tmp_capi_result_1);
}
if (isFrameUnusable(cache_frame_frame_requests$api$$$function__4_head)) {
    Py_XDECREF(cache_frame_frame_requests$api$$$function__4_head);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$api$$$function__4_head == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$api$$$function__4_head = MAKE_FUNCTION_FRAME(tstate, code_objects_23120f86bdb73b31815ad72b9c8480fe, module_requests$api, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$api$$$function__4_head->m_type_description == NULL);
frame_frame_requests$api$$$function__4_head = cache_frame_frame_requests$api$$$function__4_head;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$api$$$function__4_head);
assert(Py_REFCNT(frame_frame_requests$api$$$function__4_head) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
tmp_direct_call_arg1_1 = module_var_accessor_requests$api$request(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 114;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_plain_head;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_url);
tmp_tuple_element_1 = par_url;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg3_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$api$$$function__4_head, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$api$$$function__4_head->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$api$$$function__4_head, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$api$$$function__4_head,
    type_description_1,
    par_url,
    par_kwargs
);


// Release cached frame if used for exception.
if (frame_frame_requests$api$$$function__4_head == cache_frame_frame_requests$api$$$function__4_head) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$api$$$function__4_head);
    cache_frame_frame_requests$api$$$function__4_head = NULL;
}

assertFrameObject(frame_frame_requests$api$$$function__4_head);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$api$$$function__5_post(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_url = python_pars[0];
PyObject *par_data = python_pars[1];
PyObject *par_json = python_pars[2];
PyObject *par_kwargs = python_pars[3];
struct Nuitka_FrameObject *frame_frame_requests$api$$$function__5_post;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_requests$api$$$function__5_post = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$api$$$function__5_post)) {
    Py_XDECREF(cache_frame_frame_requests$api$$$function__5_post);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$api$$$function__5_post == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$api$$$function__5_post = MAKE_FUNCTION_FRAME(tstate, code_objects_040ab051407634d5e0e853b2997a2beb, module_requests$api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$api$$$function__5_post->m_type_description == NULL);
frame_frame_requests$api$$$function__5_post = cache_frame_frame_requests$api$$$function__5_post;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$api$$$function__5_post);
assert(Py_REFCNT(frame_frame_requests$api$$$function__5_post) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_direct_call_arg4_1;
tmp_direct_call_arg1_1 = module_var_accessor_requests$api$request(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 134;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_plain_post;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_url);
tmp_tuple_element_1 = par_url;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_1);
tmp_dict_key_1 = mod_consts.const_str_plain_data;
CHECK_OBJECT(par_data);
tmp_dict_value_1 = par_data;
tmp_direct_call_arg3_1 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_json;
CHECK_OBJECT(par_json);
tmp_dict_value_1 = par_json;
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg4_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg4_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$api$$$function__5_post, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$api$$$function__5_post->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$api$$$function__5_post, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$api$$$function__5_post,
    type_description_1,
    par_url,
    par_data,
    par_json,
    par_kwargs
);


// Release cached frame if used for exception.
if (frame_frame_requests$api$$$function__5_post == cache_frame_frame_requests$api$$$function__5_post) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$api$$$function__5_post);
    cache_frame_frame_requests$api$$$function__5_post = NULL;
}

assertFrameObject(frame_frame_requests$api$$$function__5_post);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_json);
Py_DECREF(par_json);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_json);
Py_DECREF(par_json);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$api$$$function__6_put(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_url = python_pars[0];
PyObject *par_data = python_pars[1];
PyObject *par_kwargs = python_pars[2];
struct Nuitka_FrameObject *frame_frame_requests$api$$$function__6_put;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_requests$api$$$function__6_put = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$api$$$function__6_put)) {
    Py_XDECREF(cache_frame_frame_requests$api$$$function__6_put);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$api$$$function__6_put == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$api$$$function__6_put = MAKE_FUNCTION_FRAME(tstate, code_objects_c7e6ce504fc60c07c948ebec4207b784, module_requests$api, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$api$$$function__6_put->m_type_description == NULL);
frame_frame_requests$api$$$function__6_put = cache_frame_frame_requests$api$$$function__6_put;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$api$$$function__6_put);
assert(Py_REFCNT(frame_frame_requests$api$$$function__6_put) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_direct_call_arg4_1;
tmp_direct_call_arg1_1 = module_var_accessor_requests$api$request(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 151;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_plain_put;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_url);
tmp_tuple_element_1 = par_url;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_1);
tmp_dict_key_1 = mod_consts.const_str_plain_data;
CHECK_OBJECT(par_data);
tmp_dict_value_1 = par_data;
tmp_direct_call_arg3_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg4_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg4_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$api$$$function__6_put, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$api$$$function__6_put->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$api$$$function__6_put, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$api$$$function__6_put,
    type_description_1,
    par_url,
    par_data,
    par_kwargs
);


// Release cached frame if used for exception.
if (frame_frame_requests$api$$$function__6_put == cache_frame_frame_requests$api$$$function__6_put) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$api$$$function__6_put);
    cache_frame_frame_requests$api$$$function__6_put = NULL;
}

assertFrameObject(frame_frame_requests$api$$$function__6_put);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$api$$$function__7_patch(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_url = python_pars[0];
PyObject *par_data = python_pars[1];
PyObject *par_kwargs = python_pars[2];
struct Nuitka_FrameObject *frame_frame_requests$api$$$function__7_patch;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_requests$api$$$function__7_patch = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$api$$$function__7_patch)) {
    Py_XDECREF(cache_frame_frame_requests$api$$$function__7_patch);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$api$$$function__7_patch == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$api$$$function__7_patch = MAKE_FUNCTION_FRAME(tstate, code_objects_32401814539493efd9f032cb19642386, module_requests$api, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$api$$$function__7_patch->m_type_description == NULL);
frame_frame_requests$api$$$function__7_patch = cache_frame_frame_requests$api$$$function__7_patch;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$api$$$function__7_patch);
assert(Py_REFCNT(frame_frame_requests$api$$$function__7_patch) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_direct_call_arg4_1;
tmp_direct_call_arg1_1 = module_var_accessor_requests$api$request(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 168;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_plain_patch;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_url);
tmp_tuple_element_1 = par_url;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_1);
tmp_dict_key_1 = mod_consts.const_str_plain_data;
CHECK_OBJECT(par_data);
tmp_dict_value_1 = par_data;
tmp_direct_call_arg3_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg4_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg4_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$api$$$function__7_patch, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$api$$$function__7_patch->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$api$$$function__7_patch, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$api$$$function__7_patch,
    type_description_1,
    par_url,
    par_data,
    par_kwargs
);


// Release cached frame if used for exception.
if (frame_frame_requests$api$$$function__7_patch == cache_frame_frame_requests$api$$$function__7_patch) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$api$$$function__7_patch);
    cache_frame_frame_requests$api$$$function__7_patch = NULL;
}

assertFrameObject(frame_frame_requests$api$$$function__7_patch);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$api$$$function__8_delete(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_url = python_pars[0];
PyObject *par_kwargs = python_pars[1];
struct Nuitka_FrameObject *frame_frame_requests$api$$$function__8_delete;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$api$$$function__8_delete = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$api$$$function__8_delete)) {
    Py_XDECREF(cache_frame_frame_requests$api$$$function__8_delete);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$api$$$function__8_delete == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$api$$$function__8_delete = MAKE_FUNCTION_FRAME(tstate, code_objects_817a76f3421db63d6fe31bf3da44f434, module_requests$api, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$api$$$function__8_delete->m_type_description == NULL);
frame_frame_requests$api$$$function__8_delete = cache_frame_frame_requests$api$$$function__8_delete;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$api$$$function__8_delete);
assert(Py_REFCNT(frame_frame_requests$api$$$function__8_delete) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
tmp_direct_call_arg1_1 = module_var_accessor_requests$api$request(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 180;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_plain_delete;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_url);
tmp_tuple_element_1 = par_url;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg3_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$api$$$function__8_delete, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$api$$$function__8_delete->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$api$$$function__8_delete, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$api$$$function__8_delete,
    type_description_1,
    par_url,
    par_kwargs
);


// Release cached frame if used for exception.
if (frame_frame_requests$api$$$function__8_delete == cache_frame_frame_requests$api$$$function__8_delete) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$api$$$function__8_delete);
    cache_frame_frame_requests$api$$$function__8_delete = NULL;
}

assertFrameObject(frame_frame_requests$api$$$function__8_delete);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_requests$api$$$function__1_request(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$api$$$function__1_request,
        mod_consts.const_str_plain_request,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e319f7ad96b7309d626ec5ce162ffdcc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$api,
        mod_consts.const_str_digest_ec664b3fb1b3319cf10c5991b6c05f74,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$api$$$function__2_get(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$api$$$function__2_get,
        const_str_plain_get,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_bb0fbe2b9f7465a3b60b2a8279e719fe,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$api,
        mod_consts.const_str_digest_276107dad0b38194fb0b040c6dbb15ec,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$api$$$function__3_options(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$api$$$function__3_options,
        mod_consts.const_str_plain_options,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e1df3a43b692a4dcf2f0377a565b8df7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$api,
        mod_consts.const_str_digest_cae14719162f8d25632f36871021aaaf,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$api$$$function__4_head(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$api$$$function__4_head,
        mod_consts.const_str_plain_head,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_23120f86bdb73b31815ad72b9c8480fe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$api,
        mod_consts.const_str_digest_dcb82a09e023c7d797c67d041207964d,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$api$$$function__5_post(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$api$$$function__5_post,
        mod_consts.const_str_plain_post,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_040ab051407634d5e0e853b2997a2beb,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$api,
        mod_consts.const_str_digest_d8119d09c2e467d4ded663600b20d96a,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$api$$$function__6_put(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$api$$$function__6_put,
        mod_consts.const_str_plain_put,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c7e6ce504fc60c07c948ebec4207b784,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$api,
        mod_consts.const_str_digest_c55a37109c5424c9e3f9192b88da0d44,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$api$$$function__7_patch(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$api$$$function__7_patch,
        mod_consts.const_str_plain_patch,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_32401814539493efd9f032cb19642386,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$api,
        mod_consts.const_str_digest_2823b659ea1a3a7d2acc5b467c5b00b5,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$api$$$function__8_delete(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$api$$$function__8_delete,
        mod_consts.const_str_plain_delete,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_817a76f3421db63d6fe31bf3da44f434,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$api,
        mod_consts.const_str_digest_c1ec17d8ceaaa6ed18f5bd6653da2b27,
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

static function_impl_code const function_table_requests$api[] = {
impl_requests$api$$$function__1_request,
impl_requests$api$$$function__2_get,
impl_requests$api$$$function__3_options,
impl_requests$api$$$function__4_head,
impl_requests$api$$$function__5_post,
impl_requests$api$$$function__6_put,
impl_requests$api$$$function__7_patch,
impl_requests$api$$$function__8_delete,
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

    return Nuitka_Function_GetFunctionState(function, function_table_requests$api);
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
        module_requests$api,
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
        function_table_requests$api,
        sizeof(function_table_requests$api) / sizeof(function_impl_code)
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
static char const *module_full_name = "requests.api";
#endif

// Internal entry point for module code.
PyObject *module_code_requests$api(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("requests$api");

    // Store the module for future use.
    module_requests$api = module;

    moduledict_requests$api = MODULE_DICT(module_requests$api);

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
        PRINT_STRING("requests$api: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("requests$api: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("requests$api: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "requests.api" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initrequests$api\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_requests$api,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_requests$api,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_requests$api,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_requests$api,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_requests$api,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_requests$api);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_requests$api);
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

        UPDATE_STRING_DICT1(moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_requests$api;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_e93fbdf55e7e8cffd006aa137660fb1c;
UPDATE_STRING_DICT0(moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_requests$api = MAKE_MODULE_FRAME(code_objects_3142992a78d28d2877bb3f7c9fdfdda0, module_requests$api);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$api);
assert(Py_REFCNT(frame_frame_requests$api) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_requests$api$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_requests$api$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_requests$api, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = Py_False;
UPDATE_STRING_DICT0(moduledict_requests$api, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = const_str_empty;
tmp_globals_arg_value_1 = (PyObject *)moduledict_requests$api;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_sessions_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_requests$api->m_frame.f_lineno = 15;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_requests$api,
        mod_consts.const_str_plain_sessions,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_sessions);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$api, (Nuitka_StringObject *)mod_consts.const_str_plain_sessions, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_models;
tmp_globals_arg_value_2 = (PyObject *)moduledict_requests$api;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Response_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_requests$api->m_frame.f_lineno = 16;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_requests$api,
        mod_consts.const_str_plain_Response,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Response);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$api, (Nuitka_StringObject *)mod_consts.const_str_plain_Response, tmp_assign_source_8);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$api, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$api->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$api, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_requests$api);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_9a0686fa60a0d818df33cc9715724501);

tmp_assign_source_9 = MAKE_FUNCTION_requests$api$$$function__1_request(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_requests$api, (Nuitka_StringObject *)mod_consts.const_str_plain_request, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_2;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_0aa1d0ec29e7a9c2623db2e24770bb73);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_10 = MAKE_FUNCTION_requests$api$$$function__2_get(tstate, tmp_defaults_1, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_requests$api, (Nuitka_StringObject *)const_str_plain_get, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_f801c0d3b7cb9135f2cfc91b878b7b5d);

tmp_assign_source_11 = MAKE_FUNCTION_requests$api$$$function__3_options(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_requests$api, (Nuitka_StringObject *)mod_consts.const_str_plain_options, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_f801c0d3b7cb9135f2cfc91b878b7b5d);

tmp_assign_source_12 = MAKE_FUNCTION_requests$api$$$function__4_head(tstate, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_requests$api, (Nuitka_StringObject *)mod_consts.const_str_plain_head, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_5;
tmp_defaults_2 = mod_consts.const_tuple_none_none_tuple;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_c8fa56ce8517f6945094c1ad037783ee);
Py_INCREF(tmp_defaults_2);

tmp_assign_source_13 = MAKE_FUNCTION_requests$api$$$function__5_post(tstate, tmp_defaults_2, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_requests$api, (Nuitka_StringObject *)mod_consts.const_str_plain_post, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_6;
tmp_defaults_3 = mod_consts.const_tuple_none_tuple;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_098b073421ddc4dd0c047c0b743f9707);
Py_INCREF(tmp_defaults_3);

tmp_assign_source_14 = MAKE_FUNCTION_requests$api$$$function__6_put(tstate, tmp_defaults_3, tmp_annotations_6);

UPDATE_STRING_DICT1(moduledict_requests$api, (Nuitka_StringObject *)mod_consts.const_str_plain_put, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_defaults_4;
PyObject *tmp_annotations_7;
tmp_defaults_4 = mod_consts.const_tuple_none_tuple;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_098b073421ddc4dd0c047c0b743f9707);
Py_INCREF(tmp_defaults_4);

tmp_assign_source_15 = MAKE_FUNCTION_requests$api$$$function__7_patch(tstate, tmp_defaults_4, tmp_annotations_7);

UPDATE_STRING_DICT1(moduledict_requests$api, (Nuitka_StringObject *)mod_consts.const_str_plain_patch, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_f801c0d3b7cb9135f2cfc91b878b7b5d);

tmp_assign_source_16 = MAKE_FUNCTION_requests$api$$$function__8_delete(tstate, tmp_annotations_8);

UPDATE_STRING_DICT1(moduledict_requests$api, (Nuitka_StringObject *)mod_consts.const_str_plain_delete, tmp_assign_source_16);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("requests$api", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "requests.api" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_requests$api);
    return module_requests$api;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("requests$api", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
