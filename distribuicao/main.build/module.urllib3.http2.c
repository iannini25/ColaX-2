/* Generated code for Python module 'urllib3$http2'
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



/* The "module_urllib3$http2" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$http2;
PyDictObject *moduledict_urllib3$http2;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_h2;
PyObject *const_str_plain_version;
PyObject *const_str_plain_startswith;
PyObject *const_tuple_str_digest_3728aa07771ef8e37206b7163d03da3f_tuple;
PyObject *const_str_digest_6cb2451fbcbc6f9bf768b9f48543d5c6;
PyObject *const_str_digest_8186f1e2f4bc653348cc6418e46dff63;
PyObject *const_tuple_str_plain_connection_tuple;
PyObject *const_int_pos_2;
PyObject *const_str_plain_connection;
PyObject *const_tuple_str_plain_util_tuple;
PyObject *const_str_plain_util;
PyObject *const_str_plain_connectionpool;
PyObject *const_tuple_str_plain_HTTPSConnectionPool_tuple;
PyObject *const_str_plain_HTTPSConnectionPool;
PyObject *const_tuple_str_plain_ssl__tuple;
PyObject *const_str_plain_ssl_;
PyObject *const_tuple_str_plain_HTTP2Connection_tuple;
PyObject *const_str_plain_HTTP2Connection;
PyObject *const_str_plain_HTTPSConnection;
PyObject *const_str_plain_orig_HTTPSConnection;
PyObject *const_str_plain_ConnectionCls;
PyObject *const_str_plain_ALPN_PROTOCOLS;
PyObject *const_str_digest_d70237e35c994fd4ee6ee104a7cdf8ac;
PyObject *const_str_plain_join;
PyObject *const_str_plain_environ;
PyObject *const_tuple_26fa1486fe392293dd8a9753a8cd3484_tuple;
PyObject *const_str_plain_http2;
PyObject *const_tuple_f4cc742a020538e2c3afc6c23cecc736_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_submodule_search_locations;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_inject_into_urllib3;
PyObject *const_str_plain_extract_from_urllib3;
PyObject *const_str_plain_typing;
PyObject *const_str_digest_9dd6de0c0fb523d81e729f02ef9160c4;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_digest_f38b218a70858f9448a19c6be2b26947;
PyObject *const_str_digest_08ca402eb00b73e7d7ad10f511498e2c;
PyObject *const_tuple_448def365e91be9dacfe7868415eeb8b_tuple;
PyObject *const_tuple_be3c4bd0d159352376c3df8ec079acee_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[41];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("urllib3.http2"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 41) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 41 values, got %d\n",
                    UN_TRANSLATE("urllib3.http2"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_h2", mod_consts.const_str_plain_h2);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_h2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_version", mod_consts.const_str_plain_version);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_version);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_startswith", mod_consts.const_str_plain_startswith);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_startswith);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_3728aa07771ef8e37206b7163d03da3f_tuple", mod_consts.const_tuple_str_digest_3728aa07771ef8e37206b7163d03da3f_tuple);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_3728aa07771ef8e37206b7163d03da3f_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6cb2451fbcbc6f9bf768b9f48543d5c6", mod_consts.const_str_digest_6cb2451fbcbc6f9bf768b9f48543d5c6);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_6cb2451fbcbc6f9bf768b9f48543d5c6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8186f1e2f4bc653348cc6418e46dff63", mod_consts.const_str_digest_8186f1e2f4bc653348cc6418e46dff63);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_8186f1e2f4bc653348cc6418e46dff63);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_connection_tuple", mod_consts.const_tuple_str_plain_connection_tuple);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_connection_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connection", mod_consts.const_str_plain_connection);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_connection);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_util_tuple", mod_consts.const_tuple_str_plain_util_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_util_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_util", mod_consts.const_str_plain_util);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_util);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connectionpool", mod_consts.const_str_plain_connectionpool);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_connectionpool);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_HTTPSConnectionPool_tuple", mod_consts.const_tuple_str_plain_HTTPSConnectionPool_tuple);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HTTPSConnectionPool_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTPSConnectionPool", mod_consts.const_str_plain_HTTPSConnectionPool);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPSConnectionPool);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ssl__tuple", mod_consts.const_tuple_str_plain_ssl__tuple);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ssl__tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ssl_", mod_consts.const_str_plain_ssl_);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_ssl_);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_HTTP2Connection_tuple", mod_consts.const_tuple_str_plain_HTTP2Connection_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HTTP2Connection_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTP2Connection", mod_consts.const_str_plain_HTTP2Connection);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTTP2Connection);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTPSConnection", mod_consts.const_str_plain_HTTPSConnection);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPSConnection);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_orig_HTTPSConnection", mod_consts.const_str_plain_orig_HTTPSConnection);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_orig_HTTPSConnection);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ConnectionCls", mod_consts.const_str_plain_ConnectionCls);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionCls);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ALPN_PROTOCOLS", mod_consts.const_str_plain_ALPN_PROTOCOLS);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_ALPN_PROTOCOLS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d70237e35c994fd4ee6ee104a7cdf8ac", mod_consts.const_str_digest_d70237e35c994fd4ee6ee104a7cdf8ac);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_d70237e35c994fd4ee6ee104a7cdf8ac);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_join", mod_consts.const_str_plain_join);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_join);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_environ", mod_consts.const_str_plain_environ);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_26fa1486fe392293dd8a9753a8cd3484_tuple", mod_consts.const_tuple_26fa1486fe392293dd8a9753a8cd3484_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_26fa1486fe392293dd8a9753a8cd3484_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_http2", mod_consts.const_str_plain_http2);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_http2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_f4cc742a020538e2c3afc6c23cecc736_tuple", mod_consts.const_tuple_f4cc742a020538e2c3afc6c23cecc736_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_f4cc742a020538e2c3afc6c23cecc736_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_submodule_search_locations", mod_consts.const_str_plain_submodule_search_locations);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_inject_into_urllib3", mod_consts.const_str_plain_inject_into_urllib3);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_inject_into_urllib3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_extract_from_urllib3", mod_consts.const_str_plain_extract_from_urllib3);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_extract_from_urllib3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_typing", mod_consts.const_str_plain_typing);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9dd6de0c0fb523d81e729f02ef9160c4", mod_consts.const_str_digest_9dd6de0c0fb523d81e729f02ef9160c4);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_9dd6de0c0fb523d81e729f02ef9160c4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb", mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f38b218a70858f9448a19c6be2b26947", mod_consts.const_str_digest_f38b218a70858f9448a19c6be2b26947);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_f38b218a70858f9448a19c6be2b26947);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_08ca402eb00b73e7d7ad10f511498e2c", mod_consts.const_str_digest_08ca402eb00b73e7d7ad10f511498e2c);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_08ca402eb00b73e7d7ad10f511498e2c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_448def365e91be9dacfe7868415eeb8b_tuple", mod_consts.const_tuple_448def365e91be9dacfe7868415eeb8b_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_tuple_448def365e91be9dacfe7868415eeb8b_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_be3c4bd0d159352376c3df8ec079acee_tuple", mod_consts.const_tuple_be3c4bd0d159352376c3df8ec079acee_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_be3c4bd0d159352376c3df8ec079acee_tuple);
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
void checkModuleConstants_urllib3$http2(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_h2", mod_consts.const_str_plain_h2);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_h2) && "mod_consts.const_str_plain_h2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_version", mod_consts.const_str_plain_version);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_version) && "mod_consts.const_str_plain_version");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_startswith", mod_consts.const_str_plain_startswith);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_startswith) && "mod_consts.const_str_plain_startswith");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_3728aa07771ef8e37206b7163d03da3f_tuple", mod_consts.const_tuple_str_digest_3728aa07771ef8e37206b7163d03da3f_tuple);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_3728aa07771ef8e37206b7163d03da3f_tuple) && "mod_consts.const_tuple_str_digest_3728aa07771ef8e37206b7163d03da3f_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6cb2451fbcbc6f9bf768b9f48543d5c6", mod_consts.const_str_digest_6cb2451fbcbc6f9bf768b9f48543d5c6);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_6cb2451fbcbc6f9bf768b9f48543d5c6) && "mod_consts.const_str_digest_6cb2451fbcbc6f9bf768b9f48543d5c6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8186f1e2f4bc653348cc6418e46dff63", mod_consts.const_str_digest_8186f1e2f4bc653348cc6418e46dff63);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_8186f1e2f4bc653348cc6418e46dff63) && "mod_consts.const_str_digest_8186f1e2f4bc653348cc6418e46dff63");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_connection_tuple", mod_consts.const_tuple_str_plain_connection_tuple);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_connection_tuple) && "mod_consts.const_tuple_str_plain_connection_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_int_pos_2) && "mod_consts.const_int_pos_2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connection", mod_consts.const_str_plain_connection);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_connection) && "mod_consts.const_str_plain_connection");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_util_tuple", mod_consts.const_tuple_str_plain_util_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_util_tuple) && "mod_consts.const_tuple_str_plain_util_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_util", mod_consts.const_str_plain_util);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_util) && "mod_consts.const_str_plain_util");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connectionpool", mod_consts.const_str_plain_connectionpool);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_connectionpool) && "mod_consts.const_str_plain_connectionpool");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_HTTPSConnectionPool_tuple", mod_consts.const_tuple_str_plain_HTTPSConnectionPool_tuple);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HTTPSConnectionPool_tuple) && "mod_consts.const_tuple_str_plain_HTTPSConnectionPool_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTPSConnectionPool", mod_consts.const_str_plain_HTTPSConnectionPool);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPSConnectionPool) && "mod_consts.const_str_plain_HTTPSConnectionPool");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ssl__tuple", mod_consts.const_tuple_str_plain_ssl__tuple);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ssl__tuple) && "mod_consts.const_tuple_str_plain_ssl__tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ssl_", mod_consts.const_str_plain_ssl_);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_ssl_) && "mod_consts.const_str_plain_ssl_");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_HTTP2Connection_tuple", mod_consts.const_tuple_str_plain_HTTP2Connection_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HTTP2Connection_tuple) && "mod_consts.const_tuple_str_plain_HTTP2Connection_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTP2Connection", mod_consts.const_str_plain_HTTP2Connection);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTTP2Connection) && "mod_consts.const_str_plain_HTTP2Connection");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTPSConnection", mod_consts.const_str_plain_HTTPSConnection);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPSConnection) && "mod_consts.const_str_plain_HTTPSConnection");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_orig_HTTPSConnection", mod_consts.const_str_plain_orig_HTTPSConnection);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_orig_HTTPSConnection) && "mod_consts.const_str_plain_orig_HTTPSConnection");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ConnectionCls", mod_consts.const_str_plain_ConnectionCls);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionCls) && "mod_consts.const_str_plain_ConnectionCls");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ALPN_PROTOCOLS", mod_consts.const_str_plain_ALPN_PROTOCOLS);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_ALPN_PROTOCOLS) && "mod_consts.const_str_plain_ALPN_PROTOCOLS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d70237e35c994fd4ee6ee104a7cdf8ac", mod_consts.const_str_digest_d70237e35c994fd4ee6ee104a7cdf8ac);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_d70237e35c994fd4ee6ee104a7cdf8ac) && "mod_consts.const_str_digest_d70237e35c994fd4ee6ee104a7cdf8ac");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_join", mod_consts.const_str_plain_join);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_join) && "mod_consts.const_str_plain_join");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_environ", mod_consts.const_str_plain_environ);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ) && "mod_consts.const_str_plain_environ");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_26fa1486fe392293dd8a9753a8cd3484_tuple", mod_consts.const_tuple_26fa1486fe392293dd8a9753a8cd3484_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_26fa1486fe392293dd8a9753a8cd3484_tuple) && "mod_consts.const_tuple_26fa1486fe392293dd8a9753a8cd3484_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_http2", mod_consts.const_str_plain_http2);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_http2) && "mod_consts.const_str_plain_http2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_f4cc742a020538e2c3afc6c23cecc736_tuple", mod_consts.const_tuple_f4cc742a020538e2c3afc6c23cecc736_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_f4cc742a020538e2c3afc6c23cecc736_tuple) && "mod_consts.const_tuple_f4cc742a020538e2c3afc6c23cecc736_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_submodule_search_locations", mod_consts.const_str_plain_submodule_search_locations);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations) && "mod_consts.const_str_plain_submodule_search_locations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_inject_into_urllib3", mod_consts.const_str_plain_inject_into_urllib3);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_inject_into_urllib3) && "mod_consts.const_str_plain_inject_into_urllib3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_extract_from_urllib3", mod_consts.const_str_plain_extract_from_urllib3);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_extract_from_urllib3) && "mod_consts.const_str_plain_extract_from_urllib3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_typing", mod_consts.const_str_plain_typing);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing) && "mod_consts.const_str_plain_typing");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9dd6de0c0fb523d81e729f02ef9160c4", mod_consts.const_str_digest_9dd6de0c0fb523d81e729f02ef9160c4);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_9dd6de0c0fb523d81e729f02ef9160c4) && "mod_consts.const_str_digest_9dd6de0c0fb523d81e729f02ef9160c4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb", mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb) && "mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f38b218a70858f9448a19c6be2b26947", mod_consts.const_str_digest_f38b218a70858f9448a19c6be2b26947);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_f38b218a70858f9448a19c6be2b26947) && "mod_consts.const_str_digest_f38b218a70858f9448a19c6be2b26947");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_08ca402eb00b73e7d7ad10f511498e2c", mod_consts.const_str_digest_08ca402eb00b73e7d7ad10f511498e2c);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_08ca402eb00b73e7d7ad10f511498e2c) && "mod_consts.const_str_digest_08ca402eb00b73e7d7ad10f511498e2c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_448def365e91be9dacfe7868415eeb8b_tuple", mod_consts.const_tuple_448def365e91be9dacfe7868415eeb8b_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_tuple_448def365e91be9dacfe7868415eeb8b_tuple) && "mod_consts.const_tuple_448def365e91be9dacfe7868415eeb8b_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_be3c4bd0d159352376c3df8ec079acee_tuple", mod_consts.const_tuple_be3c4bd0d159352376c3df8ec079acee_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_be3c4bd0d159352376c3df8ec079acee_tuple) && "mod_consts.const_tuple_be3c4bd0d159352376c3df8ec079acee_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 4
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
static PyObject *module_var_accessor_urllib3$http2$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$http2->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$http2->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$http2->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$http2$__path__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$http2->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$http2->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2, (Nuitka_StringObject *)const_str_plain___path__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$http2->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2, (Nuitka_StringObject *)const_str_plain___path__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2, (Nuitka_StringObject *)const_str_plain___path__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___path__);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$http2$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$http2->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$http2->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$http2->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$http2$orig_HTTPSConnection(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$http2->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$http2->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2, (Nuitka_StringObject *)mod_consts.const_str_plain_orig_HTTPSConnection);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$http2->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_orig_HTTPSConnection);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_orig_HTTPSConnection, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_orig_HTTPSConnection);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_orig_HTTPSConnection, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2, (Nuitka_StringObject *)mod_consts.const_str_plain_orig_HTTPSConnection);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$http2, (Nuitka_StringObject *)mod_consts.const_str_plain_orig_HTTPSConnection);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_orig_HTTPSConnection);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_56ae030ac9cc8b7cab51218c0f6ca035;
static PyCodeObject *code_objects_306ceb0f6d1f662568795c99d1b923a2;
static PyCodeObject *code_objects_640d9611434aa4110a8cd05743f6a6e5;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_f38b218a70858f9448a19c6be2b26947); CHECK_OBJECT(module_filename_obj);
code_objects_56ae030ac9cc8b7cab51218c0f6ca035 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_08ca402eb00b73e7d7ad10f511498e2c, mod_consts.const_str_digest_08ca402eb00b73e7d7ad10f511498e2c, NULL, NULL, 0, 0, 0);
code_objects_306ceb0f6d1f662568795c99d1b923a2 = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_extract_from_urllib3, mod_consts.const_str_plain_extract_from_urllib3, mod_consts.const_tuple_448def365e91be9dacfe7868415eeb8b_tuple, NULL, 0, 0, 0);
code_objects_640d9611434aa4110a8cd05743f6a6e5 = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_inject_into_urllib3, mod_consts.const_str_plain_inject_into_urllib3, mod_consts.const_tuple_be3c4bd0d159352376c3df8ec079acee_tuple, NULL, 0, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_urllib3$http2$$$function__1_inject_into_urllib3(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$http2$$$function__2_extract_from_urllib3(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_urllib3$http2$$$function__1_inject_into_urllib3(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_h2_version = NULL;
PyObject *var_urllib3_connection = NULL;
PyObject *var_urllib3_util = NULL;
PyObject *var_HTTPSConnectionPool = NULL;
PyObject *var_urllib3_util_ssl = NULL;
PyObject *var_HTTP2Connection = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$http2$$$function__1_inject_into_urllib3;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_importlib_metadata_version_function;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$http2$$$function__1_inject_into_urllib3 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$http2$$$function__1_inject_into_urllib3)) {
    Py_XDECREF(cache_frame_frame_urllib3$http2$$$function__1_inject_into_urllib3);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$http2$$$function__1_inject_into_urllib3 == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$http2$$$function__1_inject_into_urllib3 = MAKE_FUNCTION_FRAME(tstate, code_objects_640d9611434aa4110a8cd05743f6a6e5, module_urllib3$http2, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$http2$$$function__1_inject_into_urllib3->m_type_description == NULL);
frame_frame_urllib3$http2$$$function__1_inject_into_urllib3 = cache_frame_frame_urllib3$http2$$$function__1_inject_into_urllib3;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$http2$$$function__1_inject_into_urllib3);
assert(Py_REFCNT(frame_frame_urllib3$http2$$$function__1_inject_into_urllib3) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_distribution_name_value_1;
tmp_distribution_name_value_1 = mod_consts.const_str_plain_h2;
{
    PyObject *hard_module = IMPORT_HARD_IMPORTLIB__METADATA();
    tmp_importlib_metadata_version_function = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_version);
}
assert(!(tmp_importlib_metadata_version_function == NULL));
frame_frame_urllib3$http2$$$function__1_inject_into_urllib3->m_frame.f_lineno = 17;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_importlib_metadata_version_function, tmp_distribution_name_value_1);
CHECK_OBJECT(tmp_importlib_metadata_version_function);
Py_DECREF(tmp_importlib_metadata_version_function);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_h2_version;
    var_h2_version = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_h2_version);
tmp_expression_value_1 = var_h2_version;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_startswith);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$http2$$$function__1_inject_into_urllib3->m_frame.f_lineno = 18;
tmp_operand_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_3728aa07771ef8e37206b7163d03da3f_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;
type_description_1 = "oooooo";
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
PyObject *tmp_raise_type_input_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_6cb2451fbcbc6f9bf768b9f48543d5c6;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_h2_version);
tmp_operand_value_2 = var_h2_version;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_8186f1e2f4bc653348cc6418e46dff63;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_urllib3$http2$$$function__1_inject_into_urllib3->m_frame.f_lineno = 19;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ImportError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_input_1 == NULL));
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 19;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = const_str_empty;
tmp_globals_arg_value_1 = (PyObject *)moduledict_urllib3$http2;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_connection_tuple;
tmp_level_value_1 = mod_consts.const_int_pos_2;
frame_frame_urllib3$http2$$$function__1_inject_into_urllib3->m_frame.f_lineno = 26;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_urllib3$http2,
        mod_consts.const_str_plain_connection,
        const_int_0
    );
} else {
    tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_connection);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_urllib3_connection;
    var_urllib3_connection = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = const_str_empty;
tmp_globals_arg_value_2 = (PyObject *)moduledict_urllib3$http2;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_util_tuple;
tmp_level_value_2 = mod_consts.const_int_pos_2;
frame_frame_urllib3$http2$$$function__1_inject_into_urllib3->m_frame.f_lineno = 27;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_urllib3$http2,
        mod_consts.const_str_plain_util,
        const_int_0
    );
} else {
    tmp_assign_source_3 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_util);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_urllib3_util;
    var_urllib3_util = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_connectionpool;
tmp_globals_arg_value_3 = (PyObject *)moduledict_urllib3$http2;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_HTTPSConnectionPool_tuple;
tmp_level_value_3 = mod_consts.const_int_pos_2;
frame_frame_urllib3$http2$$$function__1_inject_into_urllib3->m_frame.f_lineno = 28;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_urllib3$http2,
        mod_consts.const_str_plain_HTTPSConnectionPool,
        const_int_0
    );
} else {
    tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_HTTPSConnectionPool);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_HTTPSConnectionPool;
    var_HTTPSConnectionPool = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_util;
tmp_globals_arg_value_4 = (PyObject *)moduledict_urllib3$http2;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_ssl__tuple;
tmp_level_value_4 = mod_consts.const_int_pos_2;
frame_frame_urllib3$http2$$$function__1_inject_into_urllib3->m_frame.f_lineno = 29;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_urllib3$http2,
        mod_consts.const_str_plain_ssl_,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_ssl_);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_urllib3_util_ssl;
    var_urllib3_util_ssl = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_connection;
tmp_globals_arg_value_5 = (PyObject *)moduledict_urllib3$http2;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_HTTP2Connection_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_urllib3$http2$$$function__1_inject_into_urllib3->m_frame.f_lineno = 30;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_urllib3$http2,
        mod_consts.const_str_plain_HTTP2Connection,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_HTTP2Connection);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_HTTP2Connection;
    var_HTTP2Connection = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_urllib3_connection);
tmp_expression_value_2 = var_urllib3_connection;
tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_HTTPSConnection);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$http2, (Nuitka_StringObject *)mod_consts.const_str_plain_orig_HTTPSConnection, tmp_assign_source_7);
}
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(var_HTTP2Connection);
tmp_ass_attr_value_1 = var_HTTP2Connection;
CHECK_OBJECT(var_HTTPSConnectionPool);
tmp_ass_attr_target_1 = var_HTTPSConnectionPool;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_ConnectionCls, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_ass_attr_target_2;
CHECK_OBJECT(var_HTTP2Connection);
tmp_ass_attr_value_2 = var_HTTP2Connection;
CHECK_OBJECT(var_urllib3_connection);
tmp_ass_attr_target_2 = var_urllib3_connection;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain_HTTPSConnection, tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_ass_attr_target_3;
tmp_ass_attr_value_3 = MAKE_LIST1(tstate, mod_consts.const_str_plain_h2);
CHECK_OBJECT(var_urllib3_util);
tmp_ass_attr_target_3 = var_urllib3_util;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain_ALPN_PROTOCOLS, tmp_ass_attr_value_3);
CHECK_OBJECT(tmp_ass_attr_value_3);
Py_DECREF(tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_4;
PyObject *tmp_ass_attr_target_4;
tmp_ass_attr_value_4 = MAKE_LIST1(tstate, mod_consts.const_str_plain_h2);
CHECK_OBJECT(var_urllib3_util_ssl);
tmp_ass_attr_target_4 = var_urllib3_util_ssl;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_4, mod_consts.const_str_plain_ALPN_PROTOCOLS, tmp_ass_attr_value_4);
CHECK_OBJECT(tmp_ass_attr_value_4);
Py_DECREF(tmp_ass_attr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$http2$$$function__1_inject_into_urllib3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$http2$$$function__1_inject_into_urllib3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$http2$$$function__1_inject_into_urllib3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$http2$$$function__1_inject_into_urllib3,
    type_description_1,
    var_h2_version,
    var_urllib3_connection,
    var_urllib3_util,
    var_HTTPSConnectionPool,
    var_urllib3_util_ssl,
    var_HTTP2Connection
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$http2$$$function__1_inject_into_urllib3 == cache_frame_frame_urllib3$http2$$$function__1_inject_into_urllib3) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$http2$$$function__1_inject_into_urllib3);
    cache_frame_frame_urllib3$http2$$$function__1_inject_into_urllib3 = NULL;
}

assertFrameObject(frame_frame_urllib3$http2$$$function__1_inject_into_urllib3);

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
CHECK_OBJECT(var_h2_version);
CHECK_OBJECT(var_h2_version);
Py_DECREF(var_h2_version);
var_h2_version = NULL;
CHECK_OBJECT(var_urllib3_connection);
CHECK_OBJECT(var_urllib3_connection);
Py_DECREF(var_urllib3_connection);
var_urllib3_connection = NULL;
CHECK_OBJECT(var_urllib3_util);
CHECK_OBJECT(var_urllib3_util);
Py_DECREF(var_urllib3_util);
var_urllib3_util = NULL;
CHECK_OBJECT(var_HTTPSConnectionPool);
CHECK_OBJECT(var_HTTPSConnectionPool);
Py_DECREF(var_HTTPSConnectionPool);
var_HTTPSConnectionPool = NULL;
CHECK_OBJECT(var_urllib3_util_ssl);
CHECK_OBJECT(var_urllib3_util_ssl);
Py_DECREF(var_urllib3_util_ssl);
var_urllib3_util_ssl = NULL;
CHECK_OBJECT(var_HTTP2Connection);
CHECK_OBJECT(var_HTTP2Connection);
Py_DECREF(var_HTTP2Connection);
var_HTTP2Connection = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_h2_version);
var_h2_version = NULL;
Py_XDECREF(var_urllib3_connection);
var_urllib3_connection = NULL;
Py_XDECREF(var_urllib3_util);
var_urllib3_util = NULL;
Py_XDECREF(var_HTTPSConnectionPool);
var_HTTPSConnectionPool = NULL;
Py_XDECREF(var_urllib3_util_ssl);
var_urllib3_util_ssl = NULL;
Py_XDECREF(var_HTTP2Connection);
var_HTTP2Connection = NULL;
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


static PyObject *impl_urllib3$http2$$$function__2_extract_from_urllib3(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_urllib3_connection = NULL;
PyObject *var_urllib3_util = NULL;
PyObject *var_HTTPSConnectionPool = NULL;
PyObject *var_urllib3_util_ssl = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$http2$$$function__2_extract_from_urllib3;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$http2$$$function__2_extract_from_urllib3 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$http2$$$function__2_extract_from_urllib3)) {
    Py_XDECREF(cache_frame_frame_urllib3$http2$$$function__2_extract_from_urllib3);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$http2$$$function__2_extract_from_urllib3 == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$http2$$$function__2_extract_from_urllib3 = MAKE_FUNCTION_FRAME(tstate, code_objects_306ceb0f6d1f662568795c99d1b923a2, module_urllib3$http2, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$http2$$$function__2_extract_from_urllib3->m_type_description == NULL);
frame_frame_urllib3$http2$$$function__2_extract_from_urllib3 = cache_frame_frame_urllib3$http2$$$function__2_extract_from_urllib3;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$http2$$$function__2_extract_from_urllib3);
assert(Py_REFCNT(frame_frame_urllib3$http2$$$function__2_extract_from_urllib3) == 2);

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
tmp_globals_arg_value_1 = (PyObject *)moduledict_urllib3$http2;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_connection_tuple;
tmp_level_value_1 = mod_consts.const_int_pos_2;
frame_frame_urllib3$http2$$$function__2_extract_from_urllib3->m_frame.f_lineno = 44;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_urllib3$http2,
        mod_consts.const_str_plain_connection,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_connection);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_urllib3_connection;
    var_urllib3_connection = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = const_str_empty;
tmp_globals_arg_value_2 = (PyObject *)moduledict_urllib3$http2;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_util_tuple;
tmp_level_value_2 = mod_consts.const_int_pos_2;
frame_frame_urllib3$http2$$$function__2_extract_from_urllib3->m_frame.f_lineno = 45;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_urllib3$http2,
        mod_consts.const_str_plain_util,
        const_int_0
    );
} else {
    tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_util);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_urllib3_util;
    var_urllib3_util = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_connectionpool;
tmp_globals_arg_value_3 = (PyObject *)moduledict_urllib3$http2;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_HTTPSConnectionPool_tuple;
tmp_level_value_3 = mod_consts.const_int_pos_2;
frame_frame_urllib3$http2$$$function__2_extract_from_urllib3->m_frame.f_lineno = 46;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_urllib3$http2,
        mod_consts.const_str_plain_HTTPSConnectionPool,
        const_int_0
    );
} else {
    tmp_assign_source_3 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_HTTPSConnectionPool);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_HTTPSConnectionPool;
    var_HTTPSConnectionPool = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_util;
tmp_globals_arg_value_4 = (PyObject *)moduledict_urllib3$http2;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_ssl__tuple;
tmp_level_value_4 = mod_consts.const_int_pos_2;
frame_frame_urllib3$http2$$$function__2_extract_from_urllib3->m_frame.f_lineno = 47;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_urllib3$http2,
        mod_consts.const_str_plain_ssl_,
        const_int_0
    );
} else {
    tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_ssl_);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_urllib3_util_ssl;
    var_urllib3_util_ssl = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_var_accessor_urllib3$http2$orig_HTTPSConnection(tstate);
if (unlikely(tmp_ass_attr_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_orig_HTTPSConnection);
}

if (tmp_ass_attr_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_HTTPSConnectionPool);
tmp_ass_attr_target_1 = var_HTTPSConnectionPool;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_ConnectionCls, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_ass_attr_target_2;
tmp_ass_attr_value_2 = module_var_accessor_urllib3$http2$orig_HTTPSConnection(tstate);
if (unlikely(tmp_ass_attr_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_orig_HTTPSConnection);
}

if (tmp_ass_attr_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 50;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_urllib3_connection);
tmp_ass_attr_target_2 = var_urllib3_connection;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain_HTTPSConnection, tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_ass_attr_target_3;
tmp_ass_attr_value_3 = MAKE_LIST1(tstate, mod_consts.const_str_digest_d70237e35c994fd4ee6ee104a7cdf8ac);
CHECK_OBJECT(var_urllib3_util);
tmp_ass_attr_target_3 = var_urllib3_util;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain_ALPN_PROTOCOLS, tmp_ass_attr_value_3);
CHECK_OBJECT(tmp_ass_attr_value_3);
Py_DECREF(tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_4;
PyObject *tmp_ass_attr_target_4;
tmp_ass_attr_value_4 = MAKE_LIST1(tstate, mod_consts.const_str_digest_d70237e35c994fd4ee6ee104a7cdf8ac);
CHECK_OBJECT(var_urllib3_util_ssl);
tmp_ass_attr_target_4 = var_urllib3_util_ssl;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_4, mod_consts.const_str_plain_ALPN_PROTOCOLS, tmp_ass_attr_value_4);
CHECK_OBJECT(tmp_ass_attr_value_4);
Py_DECREF(tmp_ass_attr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$http2$$$function__2_extract_from_urllib3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$http2$$$function__2_extract_from_urllib3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$http2$$$function__2_extract_from_urllib3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$http2$$$function__2_extract_from_urllib3,
    type_description_1,
    var_urllib3_connection,
    var_urllib3_util,
    var_HTTPSConnectionPool,
    var_urllib3_util_ssl
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$http2$$$function__2_extract_from_urllib3 == cache_frame_frame_urllib3$http2$$$function__2_extract_from_urllib3) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$http2$$$function__2_extract_from_urllib3);
    cache_frame_frame_urllib3$http2$$$function__2_extract_from_urllib3 = NULL;
}

assertFrameObject(frame_frame_urllib3$http2$$$function__2_extract_from_urllib3);

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
CHECK_OBJECT(var_urllib3_connection);
CHECK_OBJECT(var_urllib3_connection);
Py_DECREF(var_urllib3_connection);
var_urllib3_connection = NULL;
CHECK_OBJECT(var_urllib3_util);
CHECK_OBJECT(var_urllib3_util);
Py_DECREF(var_urllib3_util);
var_urllib3_util = NULL;
CHECK_OBJECT(var_HTTPSConnectionPool);
CHECK_OBJECT(var_HTTPSConnectionPool);
Py_DECREF(var_HTTPSConnectionPool);
var_HTTPSConnectionPool = NULL;
CHECK_OBJECT(var_urllib3_util_ssl);
CHECK_OBJECT(var_urllib3_util_ssl);
Py_DECREF(var_urllib3_util_ssl);
var_urllib3_util_ssl = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_urllib3_connection);
var_urllib3_connection = NULL;
Py_XDECREF(var_urllib3_util);
var_urllib3_util = NULL;
Py_XDECREF(var_HTTPSConnectionPool);
var_HTTPSConnectionPool = NULL;
Py_XDECREF(var_urllib3_util_ssl);
var_urllib3_util_ssl = NULL;
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



static PyObject *MAKE_FUNCTION_urllib3$http2$$$function__1_inject_into_urllib3(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$http2$$$function__1_inject_into_urllib3,
        mod_consts.const_str_plain_inject_into_urllib3,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_640d9611434aa4110a8cd05743f6a6e5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$http2,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$http2$$$function__2_extract_from_urllib3(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$http2$$$function__2_extract_from_urllib3,
        mod_consts.const_str_plain_extract_from_urllib3,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_306ceb0f6d1f662568795c99d1b923a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$http2,
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

static function_impl_code const function_table_urllib3$http2[] = {
impl_urllib3$http2$$$function__1_inject_into_urllib3,
impl_urllib3$http2$$$function__2_extract_from_urllib3,
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

    return Nuitka_Function_GetFunctionState(function, function_table_urllib3$http2);
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
        module_urllib3$http2,
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
        function_table_urllib3$http2,
        sizeof(function_table_urllib3$http2) / sizeof(function_impl_code)
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
static char const *module_full_name = "urllib3.http2";
#endif

// Internal entry point for module code.
PyObject *module_code_urllib3$http2(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("urllib3$http2");

    // Store the module for future use.
    module_urllib3$http2 = module;

    moduledict_urllib3$http2 = MODULE_DICT(module_urllib3$http2);

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
        PRINT_STRING("urllib3$http2: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("urllib3$http2: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("urllib3$http2: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "urllib3.http2" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initurllib3$http2\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$http2, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_urllib3$http2,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_urllib3$http2,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$http2, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_urllib3$http2,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$http2, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$http2,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$http2, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$http2,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_urllib3$http2);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_urllib3$http2, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_urllib3$http2, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_urllib3$http2, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_urllib3$http2, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_urllib3$http2);
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

        UPDATE_STRING_DICT1(moduledict_urllib3$http2, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_urllib3$http2;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
int tmp_res;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_urllib3$http2, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_urllib3$http2, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_urllib3$http2 = MAKE_MODULE_FRAME(code_objects_56ae030ac9cc8b7cab51218c0f6ca035, module_urllib3$http2);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$http2);
assert(Py_REFCNT(frame_frame_urllib3$http2) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
frame_frame_urllib3$http2->m_frame.f_lineno = 1;
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
frame_frame_urllib3$http2->m_frame.f_lineno = 1;
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
frame_frame_urllib3$http2->m_frame.f_lineno = 1;
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
frame_frame_urllib3$http2->m_frame.f_lineno = 1;
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
frame_frame_urllib3$http2->m_frame.f_lineno = 1;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_3, mod_consts.const_tuple_26fa1486fe392293dd8a9753a8cd3484_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_args_element_value_3 = mod_consts.const_str_plain_http2;
frame_frame_urllib3$http2->m_frame.f_lineno = 1;
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
frame_frame_urllib3$http2->m_frame.f_lineno = 1;
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
frame_frame_urllib3$http2->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_4, mod_consts.const_tuple_f4cc742a020538e2c3afc6c23cecc736_tuple);

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
UPDATE_STRING_DICT1(moduledict_urllib3$http2, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
}
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_urllib3$http2$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_urllib3$http2$__spec__(tstate);
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
tmp_ass_attr_value_3 = module_var_accessor_urllib3$http2$__path__(tstate);
if (unlikely(tmp_ass_attr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___path__);
}

if (tmp_ass_attr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_ass_attr_target_3 = module_var_accessor_urllib3$http2$__spec__(tstate);
assert(!(tmp_ass_attr_target_3 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain_submodule_search_locations, tmp_ass_attr_value_3);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$http2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$http2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$http2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_urllib3$http2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Py_None;
UPDATE_STRING_DICT0(moduledict_urllib3$http2, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_urllib3$http2, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_urllib3$http2, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT1(moduledict_urllib3$http2, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
{
    PyObject *hard_module = IMPORT_HARD_IMPORTLIB__METADATA();
    tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_version);
}
assert(!(tmp_assign_source_8 == NULL));
UPDATE_STRING_DICT1(moduledict_urllib3$http2, (Nuitka_StringObject *)mod_consts.const_str_plain_version, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = MAKE_LIST2(tstate, mod_consts.const_str_plain_inject_into_urllib3,mod_consts.const_str_plain_extract_from_urllib3);
UPDATE_STRING_DICT1(moduledict_urllib3$http2, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_10 == NULL));
UPDATE_STRING_DICT0(moduledict_urllib3$http2, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = Py_None;
UPDATE_STRING_DICT0(moduledict_urllib3$http2, (Nuitka_StringObject *)mod_consts.const_str_plain_orig_HTTPSConnection, tmp_assign_source_11);
}
tmp_dictset_value = mod_consts.const_str_digest_9dd6de0c0fb523d81e729f02ef9160c4;
tmp_dictset_dict = module_var_accessor_urllib3$http2$__annotations__(tstate);
assert(!(tmp_dictset_dict == NULL));
tmp_dictset_key = mod_consts.const_str_plain_orig_HTTPSConnection;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
{
PyObject *tmp_assign_source_12;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_assign_source_12 = MAKE_FUNCTION_urllib3$http2$$$function__1_inject_into_urllib3(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_urllib3$http2, (Nuitka_StringObject *)mod_consts.const_str_plain_inject_into_urllib3, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_assign_source_13 = MAKE_FUNCTION_urllib3$http2$$$function__2_extract_from_urllib3(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_urllib3$http2, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_from_urllib3, tmp_assign_source_13);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("urllib3$http2", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "urllib3.http2" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_urllib3$http2);
    return module_urllib3$http2;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$http2, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("urllib3$http2", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
