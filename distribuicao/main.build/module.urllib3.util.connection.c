/* Generated code for Python module 'urllib3$util$connection'
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



/* The "module_urllib3$util$connection" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$util$connection;
PyDictObject *moduledict_urllib3$util$connection;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_is_connected;
PyObject *const_str_digest_629662ae0efb080f235e4206951ffe20;
PyObject *const_str_plain_startswith;
PyObject *const_tuple_str_chr_91_tuple;
PyObject *const_str_plain_strip;
PyObject *const_tuple_str_digest_9613c3fc04783ef5920752aa27696d66_tuple;
PyObject *const_str_plain_allowed_gai_family;
PyObject *const_str_plain_host;
PyObject *const_str_plain_encode;
PyObject *const_tuple_str_plain_idna_tuple;
PyObject *const_str_plain_LocationParseError;
PyObject *const_str_chr_39;
PyObject *const_str_digest_dd043f7aaaab48b46fd0955ae24597f5;
PyObject *const_str_plain_socket;
PyObject *const_str_plain_getaddrinfo;
PyObject *const_str_plain_SOCK_STREAM;
PyObject *const_str_plain__set_socket_options;
PyObject *const_str_plain_socket_options;
PyObject *const_str_plain_timeout;
PyObject *const_str_plain__DEFAULT_TIMEOUT;
PyObject *const_str_plain_settimeout;
PyObject *const_str_plain_source_address;
PyObject *const_str_plain_bind;
PyObject *const_str_plain_connect;
PyObject *const_str_plain_sock;
PyObject *const_str_plain_err;
PyObject *const_str_digest_d3595e84d8b1645204321774ba0ba260;
PyObject *const_str_digest_fdb01d82d60186d3812b009102259d1e;
PyObject *const_str_plain_setsockopt;
PyObject *const_str_plain_AF_INET;
PyObject *const_str_plain_HAS_IPV6;
PyObject *const_str_plain_AF_UNSPEC;
PyObject *const_str_digest_fd9e06b160161212aff03b5b4dc7aa13;
PyObject *const_str_plain_has_ipv6;
PyObject *const_str_plain_AF_INET6;
PyObject *const_str_digest_d2c4edd87fa98b6977865f8b05399c97;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_typing;
PyObject *const_str_plain_exceptions;
PyObject *const_tuple_str_plain_LocationParseError_tuple;
PyObject *const_int_pos_2;
PyObject *const_tuple_str_plain__DEFAULT_TIMEOUT_str_plain__TYPE_TIMEOUT_tuple;
PyObject *const_str_plain__TYPE_TIMEOUT;
PyObject *const_str_plain_Union;
PyObject *const_tuple_type_int_type_bytes_tuple;
PyObject *const_str_plain__TYPE_SOCKET_OPTIONS;
PyObject *const_dict_80abd8616c080929ab7ef0c22226f0c6;
PyObject *const_str_plain_is_connection_dropped;
PyObject *const_dict_cba218346f2c099ee5c5715dceb2afbf;
PyObject *const_str_plain_create_connection;
PyObject *const_dict_43dfd4c1a05e6bc8230dba2321f08560;
PyObject *const_dict_a4b2f91846ff07595c6fbda8a2a47566;
PyObject *const_dict_469ba7213dddbe426a616490f5f99893;
PyObject *const_str_plain__has_ipv6;
PyObject *const_tuple_str_digest_3f9fec55820f857461da4f1e12840da5_tuple;
PyObject *const_str_digest_214d8c16e379b5855d84720173c03406;
PyObject *const_str_digest_7ae26a9ac4203d9df210c0bb52d7bd2e;
PyObject *const_tuple_str_plain_host_str_plain_sock_str_plain_has_ipv6_tuple;
PyObject *const_tuple_str_plain_sock_str_plain_options_str_plain_opt_tuple;
PyObject *const_tuple_str_plain_family_tuple;
PyObject *const_tuple_63f209313f03503abf2efd3fad79696f_tuple;
PyObject *const_tuple_str_plain_conn_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[64];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("urllib3.util.connection"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 64) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 64 values, got %d\n",
                    UN_TRANSLATE("urllib3.util.connection"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_connected", mod_consts.const_str_plain_is_connected);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_connected);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_629662ae0efb080f235e4206951ffe20", mod_consts.const_str_digest_629662ae0efb080f235e4206951ffe20);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_digest_629662ae0efb080f235e4206951ffe20);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_startswith", mod_consts.const_str_plain_startswith);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_startswith);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_chr_91_tuple", mod_consts.const_tuple_str_chr_91_tuple);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_91_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_strip", mod_consts.const_str_plain_strip);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_strip);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_9613c3fc04783ef5920752aa27696d66_tuple", mod_consts.const_tuple_str_digest_9613c3fc04783ef5920752aa27696d66_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_9613c3fc04783ef5920752aa27696d66_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_allowed_gai_family", mod_consts.const_str_plain_allowed_gai_family);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_allowed_gai_family);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_host", mod_consts.const_str_plain_host);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_host);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encode", mod_consts.const_str_plain_encode);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_idna_tuple", mod_consts.const_tuple_str_plain_idna_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_idna_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LocationParseError", mod_consts.const_str_plain_LocationParseError);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_LocationParseError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_39", mod_consts.const_str_chr_39);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_chr_39);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dd043f7aaaab48b46fd0955ae24597f5", mod_consts.const_str_digest_dd043f7aaaab48b46fd0955ae24597f5);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_dd043f7aaaab48b46fd0955ae24597f5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_socket", mod_consts.const_str_plain_socket);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_socket);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getaddrinfo", mod_consts.const_str_plain_getaddrinfo);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_getaddrinfo);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SOCK_STREAM", mod_consts.const_str_plain_SOCK_STREAM);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_SOCK_STREAM);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__set_socket_options", mod_consts.const_str_plain__set_socket_options);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain__set_socket_options);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_socket_options", mod_consts.const_str_plain_socket_options);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_socket_options);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_timeout", mod_consts.const_str_plain_timeout);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_timeout);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__DEFAULT_TIMEOUT", mod_consts.const_str_plain__DEFAULT_TIMEOUT);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain__DEFAULT_TIMEOUT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_settimeout", mod_consts.const_str_plain_settimeout);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_settimeout);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_source_address", mod_consts.const_str_plain_source_address);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_source_address);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_bind", mod_consts.const_str_plain_bind);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_bind);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connect", mod_consts.const_str_plain_connect);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_connect);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sock", mod_consts.const_str_plain_sock);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_sock);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_err", mod_consts.const_str_plain_err);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_err);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d3595e84d8b1645204321774ba0ba260", mod_consts.const_str_digest_d3595e84d8b1645204321774ba0ba260);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_d3595e84d8b1645204321774ba0ba260);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fdb01d82d60186d3812b009102259d1e", mod_consts.const_str_digest_fdb01d82d60186d3812b009102259d1e);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_fdb01d82d60186d3812b009102259d1e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_setsockopt", mod_consts.const_str_plain_setsockopt);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_setsockopt);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AF_INET", mod_consts.const_str_plain_AF_INET);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_AF_INET);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HAS_IPV6", mod_consts.const_str_plain_HAS_IPV6);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_HAS_IPV6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AF_UNSPEC", mod_consts.const_str_plain_AF_UNSPEC);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_AF_UNSPEC);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fd9e06b160161212aff03b5b4dc7aa13", mod_consts.const_str_digest_fd9e06b160161212aff03b5b4dc7aa13);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_fd9e06b160161212aff03b5b4dc7aa13);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_ipv6", mod_consts.const_str_plain_has_ipv6);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_ipv6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AF_INET6", mod_consts.const_str_plain_AF_INET6);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_AF_INET6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d2c4edd87fa98b6977865f8b05399c97", mod_consts.const_str_digest_d2c4edd87fa98b6977865f8b05399c97);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_d2c4edd87fa98b6977865f8b05399c97);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_typing", mod_consts.const_str_plain_typing);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exceptions", mod_consts.const_str_plain_exceptions);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_LocationParseError_tuple", mod_consts.const_tuple_str_plain_LocationParseError_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_LocationParseError_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__DEFAULT_TIMEOUT_str_plain__TYPE_TIMEOUT_tuple", mod_consts.const_tuple_str_plain__DEFAULT_TIMEOUT_str_plain__TYPE_TIMEOUT_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__DEFAULT_TIMEOUT_str_plain__TYPE_TIMEOUT_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__TYPE_TIMEOUT", mod_consts.const_str_plain__TYPE_TIMEOUT);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain__TYPE_TIMEOUT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Union", mod_consts.const_str_plain_Union);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_int_type_bytes_tuple", mod_consts.const_tuple_type_int_type_bytes_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_type_int_type_bytes_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__TYPE_SOCKET_OPTIONS", mod_consts.const_str_plain__TYPE_SOCKET_OPTIONS);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain__TYPE_SOCKET_OPTIONS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_80abd8616c080929ab7ef0c22226f0c6", mod_consts.const_dict_80abd8616c080929ab7ef0c22226f0c6);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_dict_80abd8616c080929ab7ef0c22226f0c6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_connection_dropped", mod_consts.const_str_plain_is_connection_dropped);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_connection_dropped);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_cba218346f2c099ee5c5715dceb2afbf", mod_consts.const_dict_cba218346f2c099ee5c5715dceb2afbf);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_dict_cba218346f2c099ee5c5715dceb2afbf);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_create_connection", mod_consts.const_str_plain_create_connection);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_connection);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_43dfd4c1a05e6bc8230dba2321f08560", mod_consts.const_dict_43dfd4c1a05e6bc8230dba2321f08560);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_dict_43dfd4c1a05e6bc8230dba2321f08560);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_a4b2f91846ff07595c6fbda8a2a47566", mod_consts.const_dict_a4b2f91846ff07595c6fbda8a2a47566);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_dict_a4b2f91846ff07595c6fbda8a2a47566);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_469ba7213dddbe426a616490f5f99893", mod_consts.const_dict_469ba7213dddbe426a616490f5f99893);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_dict_469ba7213dddbe426a616490f5f99893);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__has_ipv6", mod_consts.const_str_plain__has_ipv6);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain__has_ipv6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_3f9fec55820f857461da4f1e12840da5_tuple", mod_consts.const_tuple_str_digest_3f9fec55820f857461da4f1e12840da5_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_3f9fec55820f857461da4f1e12840da5_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_214d8c16e379b5855d84720173c03406", mod_consts.const_str_digest_214d8c16e379b5855d84720173c03406);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_214d8c16e379b5855d84720173c03406);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7ae26a9ac4203d9df210c0bb52d7bd2e", mod_consts.const_str_digest_7ae26a9ac4203d9df210c0bb52d7bd2e);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_7ae26a9ac4203d9df210c0bb52d7bd2e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_host_str_plain_sock_str_plain_has_ipv6_tuple", mod_consts.const_tuple_str_plain_host_str_plain_sock_str_plain_has_ipv6_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_host_str_plain_sock_str_plain_has_ipv6_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_sock_str_plain_options_str_plain_opt_tuple", mod_consts.const_tuple_str_plain_sock_str_plain_options_str_plain_opt_tuple);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_sock_str_plain_options_str_plain_opt_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_family_tuple", mod_consts.const_tuple_str_plain_family_tuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_family_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_63f209313f03503abf2efd3fad79696f_tuple", mod_consts.const_tuple_63f209313f03503abf2efd3fad79696f_tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_63f209313f03503abf2efd3fad79696f_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_conn_tuple", mod_consts.const_tuple_str_plain_conn_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_conn_tuple);
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
void checkModuleConstants_urllib3$util$connection(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_connected", mod_consts.const_str_plain_is_connected);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_connected) && "mod_consts.const_str_plain_is_connected");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_629662ae0efb080f235e4206951ffe20", mod_consts.const_str_digest_629662ae0efb080f235e4206951ffe20);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_digest_629662ae0efb080f235e4206951ffe20) && "mod_consts.const_str_digest_629662ae0efb080f235e4206951ffe20");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_startswith", mod_consts.const_str_plain_startswith);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_startswith) && "mod_consts.const_str_plain_startswith");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_chr_91_tuple", mod_consts.const_tuple_str_chr_91_tuple);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_91_tuple) && "mod_consts.const_tuple_str_chr_91_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_strip", mod_consts.const_str_plain_strip);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_strip) && "mod_consts.const_str_plain_strip");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_9613c3fc04783ef5920752aa27696d66_tuple", mod_consts.const_tuple_str_digest_9613c3fc04783ef5920752aa27696d66_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_9613c3fc04783ef5920752aa27696d66_tuple) && "mod_consts.const_tuple_str_digest_9613c3fc04783ef5920752aa27696d66_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_allowed_gai_family", mod_consts.const_str_plain_allowed_gai_family);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_allowed_gai_family) && "mod_consts.const_str_plain_allowed_gai_family");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_host", mod_consts.const_str_plain_host);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_host) && "mod_consts.const_str_plain_host");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encode", mod_consts.const_str_plain_encode);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode) && "mod_consts.const_str_plain_encode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_idna_tuple", mod_consts.const_tuple_str_plain_idna_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_idna_tuple) && "mod_consts.const_tuple_str_plain_idna_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LocationParseError", mod_consts.const_str_plain_LocationParseError);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_LocationParseError) && "mod_consts.const_str_plain_LocationParseError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_39", mod_consts.const_str_chr_39);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_chr_39) && "mod_consts.const_str_chr_39");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dd043f7aaaab48b46fd0955ae24597f5", mod_consts.const_str_digest_dd043f7aaaab48b46fd0955ae24597f5);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_dd043f7aaaab48b46fd0955ae24597f5) && "mod_consts.const_str_digest_dd043f7aaaab48b46fd0955ae24597f5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_socket", mod_consts.const_str_plain_socket);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_socket) && "mod_consts.const_str_plain_socket");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getaddrinfo", mod_consts.const_str_plain_getaddrinfo);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_getaddrinfo) && "mod_consts.const_str_plain_getaddrinfo");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SOCK_STREAM", mod_consts.const_str_plain_SOCK_STREAM);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_SOCK_STREAM) && "mod_consts.const_str_plain_SOCK_STREAM");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__set_socket_options", mod_consts.const_str_plain__set_socket_options);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain__set_socket_options) && "mod_consts.const_str_plain__set_socket_options");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_socket_options", mod_consts.const_str_plain_socket_options);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_socket_options) && "mod_consts.const_str_plain_socket_options");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_timeout", mod_consts.const_str_plain_timeout);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_timeout) && "mod_consts.const_str_plain_timeout");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__DEFAULT_TIMEOUT", mod_consts.const_str_plain__DEFAULT_TIMEOUT);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain__DEFAULT_TIMEOUT) && "mod_consts.const_str_plain__DEFAULT_TIMEOUT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_settimeout", mod_consts.const_str_plain_settimeout);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_settimeout) && "mod_consts.const_str_plain_settimeout");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_source_address", mod_consts.const_str_plain_source_address);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_source_address) && "mod_consts.const_str_plain_source_address");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_bind", mod_consts.const_str_plain_bind);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_bind) && "mod_consts.const_str_plain_bind");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connect", mod_consts.const_str_plain_connect);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_connect) && "mod_consts.const_str_plain_connect");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sock", mod_consts.const_str_plain_sock);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_sock) && "mod_consts.const_str_plain_sock");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_err", mod_consts.const_str_plain_err);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_err) && "mod_consts.const_str_plain_err");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d3595e84d8b1645204321774ba0ba260", mod_consts.const_str_digest_d3595e84d8b1645204321774ba0ba260);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_d3595e84d8b1645204321774ba0ba260) && "mod_consts.const_str_digest_d3595e84d8b1645204321774ba0ba260");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fdb01d82d60186d3812b009102259d1e", mod_consts.const_str_digest_fdb01d82d60186d3812b009102259d1e);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_fdb01d82d60186d3812b009102259d1e) && "mod_consts.const_str_digest_fdb01d82d60186d3812b009102259d1e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_setsockopt", mod_consts.const_str_plain_setsockopt);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_setsockopt) && "mod_consts.const_str_plain_setsockopt");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AF_INET", mod_consts.const_str_plain_AF_INET);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_AF_INET) && "mod_consts.const_str_plain_AF_INET");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HAS_IPV6", mod_consts.const_str_plain_HAS_IPV6);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_HAS_IPV6) && "mod_consts.const_str_plain_HAS_IPV6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AF_UNSPEC", mod_consts.const_str_plain_AF_UNSPEC);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_AF_UNSPEC) && "mod_consts.const_str_plain_AF_UNSPEC");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fd9e06b160161212aff03b5b4dc7aa13", mod_consts.const_str_digest_fd9e06b160161212aff03b5b4dc7aa13);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_fd9e06b160161212aff03b5b4dc7aa13) && "mod_consts.const_str_digest_fd9e06b160161212aff03b5b4dc7aa13");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_ipv6", mod_consts.const_str_plain_has_ipv6);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_ipv6) && "mod_consts.const_str_plain_has_ipv6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AF_INET6", mod_consts.const_str_plain_AF_INET6);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_AF_INET6) && "mod_consts.const_str_plain_AF_INET6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d2c4edd87fa98b6977865f8b05399c97", mod_consts.const_str_digest_d2c4edd87fa98b6977865f8b05399c97);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_d2c4edd87fa98b6977865f8b05399c97) && "mod_consts.const_str_digest_d2c4edd87fa98b6977865f8b05399c97");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_typing", mod_consts.const_str_plain_typing);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing) && "mod_consts.const_str_plain_typing");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exceptions", mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions) && "mod_consts.const_str_plain_exceptions");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_LocationParseError_tuple", mod_consts.const_tuple_str_plain_LocationParseError_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_LocationParseError_tuple) && "mod_consts.const_tuple_str_plain_LocationParseError_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_int_pos_2) && "mod_consts.const_int_pos_2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__DEFAULT_TIMEOUT_str_plain__TYPE_TIMEOUT_tuple", mod_consts.const_tuple_str_plain__DEFAULT_TIMEOUT_str_plain__TYPE_TIMEOUT_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__DEFAULT_TIMEOUT_str_plain__TYPE_TIMEOUT_tuple) && "mod_consts.const_tuple_str_plain__DEFAULT_TIMEOUT_str_plain__TYPE_TIMEOUT_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__TYPE_TIMEOUT", mod_consts.const_str_plain__TYPE_TIMEOUT);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain__TYPE_TIMEOUT) && "mod_consts.const_str_plain__TYPE_TIMEOUT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Union", mod_consts.const_str_plain_Union);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union) && "mod_consts.const_str_plain_Union");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_int_type_bytes_tuple", mod_consts.const_tuple_type_int_type_bytes_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_type_int_type_bytes_tuple) && "mod_consts.const_tuple_type_int_type_bytes_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__TYPE_SOCKET_OPTIONS", mod_consts.const_str_plain__TYPE_SOCKET_OPTIONS);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain__TYPE_SOCKET_OPTIONS) && "mod_consts.const_str_plain__TYPE_SOCKET_OPTIONS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_80abd8616c080929ab7ef0c22226f0c6", mod_consts.const_dict_80abd8616c080929ab7ef0c22226f0c6);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_dict_80abd8616c080929ab7ef0c22226f0c6) && "mod_consts.const_dict_80abd8616c080929ab7ef0c22226f0c6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_connection_dropped", mod_consts.const_str_plain_is_connection_dropped);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_connection_dropped) && "mod_consts.const_str_plain_is_connection_dropped");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_cba218346f2c099ee5c5715dceb2afbf", mod_consts.const_dict_cba218346f2c099ee5c5715dceb2afbf);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_dict_cba218346f2c099ee5c5715dceb2afbf) && "mod_consts.const_dict_cba218346f2c099ee5c5715dceb2afbf");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_create_connection", mod_consts.const_str_plain_create_connection);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_connection) && "mod_consts.const_str_plain_create_connection");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_43dfd4c1a05e6bc8230dba2321f08560", mod_consts.const_dict_43dfd4c1a05e6bc8230dba2321f08560);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_dict_43dfd4c1a05e6bc8230dba2321f08560) && "mod_consts.const_dict_43dfd4c1a05e6bc8230dba2321f08560");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_a4b2f91846ff07595c6fbda8a2a47566", mod_consts.const_dict_a4b2f91846ff07595c6fbda8a2a47566);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_dict_a4b2f91846ff07595c6fbda8a2a47566) && "mod_consts.const_dict_a4b2f91846ff07595c6fbda8a2a47566");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_469ba7213dddbe426a616490f5f99893", mod_consts.const_dict_469ba7213dddbe426a616490f5f99893);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_dict_469ba7213dddbe426a616490f5f99893) && "mod_consts.const_dict_469ba7213dddbe426a616490f5f99893");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__has_ipv6", mod_consts.const_str_plain__has_ipv6);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain__has_ipv6) && "mod_consts.const_str_plain__has_ipv6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_3f9fec55820f857461da4f1e12840da5_tuple", mod_consts.const_tuple_str_digest_3f9fec55820f857461da4f1e12840da5_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_3f9fec55820f857461da4f1e12840da5_tuple) && "mod_consts.const_tuple_str_digest_3f9fec55820f857461da4f1e12840da5_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_214d8c16e379b5855d84720173c03406", mod_consts.const_str_digest_214d8c16e379b5855d84720173c03406);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_214d8c16e379b5855d84720173c03406) && "mod_consts.const_str_digest_214d8c16e379b5855d84720173c03406");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7ae26a9ac4203d9df210c0bb52d7bd2e", mod_consts.const_str_digest_7ae26a9ac4203d9df210c0bb52d7bd2e);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_7ae26a9ac4203d9df210c0bb52d7bd2e) && "mod_consts.const_str_digest_7ae26a9ac4203d9df210c0bb52d7bd2e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_host_str_plain_sock_str_plain_has_ipv6_tuple", mod_consts.const_tuple_str_plain_host_str_plain_sock_str_plain_has_ipv6_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_host_str_plain_sock_str_plain_has_ipv6_tuple) && "mod_consts.const_tuple_str_plain_host_str_plain_sock_str_plain_has_ipv6_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_sock_str_plain_options_str_plain_opt_tuple", mod_consts.const_tuple_str_plain_sock_str_plain_options_str_plain_opt_tuple);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_sock_str_plain_options_str_plain_opt_tuple) && "mod_consts.const_tuple_str_plain_sock_str_plain_options_str_plain_opt_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_family_tuple", mod_consts.const_tuple_str_plain_family_tuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_family_tuple) && "mod_consts.const_tuple_str_plain_family_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_63f209313f03503abf2efd3fad79696f_tuple", mod_consts.const_tuple_63f209313f03503abf2efd3fad79696f_tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_63f209313f03503abf2efd3fad79696f_tuple) && "mod_consts.const_tuple_63f209313f03503abf2efd3fad79696f_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_conn_tuple", mod_consts.const_tuple_str_plain_conn_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_conn_tuple) && "mod_consts.const_tuple_str_plain_conn_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 8
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
static PyObject *module_var_accessor_urllib3$util$connection$HAS_IPV6(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_HAS_IPV6);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HAS_IPV6);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HAS_IPV6, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HAS_IPV6);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HAS_IPV6, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_HAS_IPV6);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_HAS_IPV6);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HAS_IPV6);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$connection$LocationParseError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_LocationParseError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LocationParseError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LocationParseError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LocationParseError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LocationParseError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_LocationParseError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_LocationParseError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_LocationParseError);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$connection$_DEFAULT_TIMEOUT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_TIMEOUT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$connection->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_TIMEOUT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_TIMEOUT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_TIMEOUT);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$connection$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$connection->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$connection$_has_ipv6(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)mod_consts.const_str_plain__has_ipv6);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__has_ipv6);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__has_ipv6, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__has_ipv6);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__has_ipv6, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)mod_consts.const_str_plain__has_ipv6);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)mod_consts.const_str_plain__has_ipv6);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__has_ipv6);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$connection$_set_socket_options(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)mod_consts.const_str_plain__set_socket_options);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__set_socket_options);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__set_socket_options, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__set_socket_options);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__set_socket_options, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)mod_consts.const_str_plain__set_socket_options);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)mod_consts.const_str_plain__set_socket_options);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__set_socket_options);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$connection$allowed_gai_family(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_allowed_gai_family);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_allowed_gai_family);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_allowed_gai_family, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_allowed_gai_family);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_allowed_gai_family, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_allowed_gai_family);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_allowed_gai_family);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_allowed_gai_family);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$connection$socket(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$connection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$connection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_socket);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$connection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_socket);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_socket, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_socket);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_socket, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_socket);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_socket);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_socket);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_b61e9d61f699936a1f1be8e50be0c2eb;
static PyCodeObject *code_objects_414bf512aa43691ced82945a79298d56;
static PyCodeObject *code_objects_f07ec1368f5aca528fa03d2519a1b080;
static PyCodeObject *code_objects_a5feec85dc13e0c7fb762992a0e27b39;
static PyCodeObject *code_objects_f2246f41a4d650547aff453a8c49e20e;
static PyCodeObject *code_objects_802ae1f2391dfcaf780264822c36e1c6;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_214d8c16e379b5855d84720173c03406); CHECK_OBJECT(module_filename_obj);
code_objects_b61e9d61f699936a1f1be8e50be0c2eb = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_7ae26a9ac4203d9df210c0bb52d7bd2e, mod_consts.const_str_digest_7ae26a9ac4203d9df210c0bb52d7bd2e, NULL, NULL, 0, 0, 0);
code_objects_414bf512aa43691ced82945a79298d56 = MAKE_CODE_OBJECT(module_filename_obj, 114, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__has_ipv6, mod_consts.const_str_plain__has_ipv6, mod_consts.const_tuple_str_plain_host_str_plain_sock_str_plain_has_ipv6_tuple, NULL, 1, 0, 0);
code_objects_f07ec1368f5aca528fa03d2519a1b080 = MAKE_CODE_OBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__set_socket_options, mod_consts.const_str_plain__set_socket_options, mod_consts.const_tuple_str_plain_sock_str_plain_options_str_plain_opt_tuple, NULL, 2, 0, 0);
code_objects_a5feec85dc13e0c7fb762992a0e27b39 = MAKE_CODE_OBJECT(module_filename_obj, 103, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_allowed_gai_family, mod_consts.const_str_plain_allowed_gai_family, mod_consts.const_tuple_str_plain_family_tuple, NULL, 0, 0, 0);
code_objects_f2246f41a4d650547aff453a8c49e20e = MAKE_CODE_OBJECT(module_filename_obj, 27, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create_connection, mod_consts.const_str_plain_create_connection, mod_consts.const_tuple_63f209313f03503abf2efd3fad79696f_tuple, NULL, 4, 0, 0);
code_objects_802ae1f2391dfcaf780264822c36e1c6 = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_connection_dropped, mod_consts.const_str_plain_is_connection_dropped, mod_consts.const_tuple_str_plain_conn_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function__1_is_connection_dropped(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function__2_create_connection(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function__3__set_socket_options(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function__4_allowed_gai_family(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function__5__has_ipv6(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_urllib3$util$connection$$$function__1_is_connection_dropped(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_conn = python_pars[0];
struct Nuitka_FrameObject *frame_frame_urllib3$util$connection$$$function__1_is_connection_dropped;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$connection$$$function__1_is_connection_dropped = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$connection$$$function__1_is_connection_dropped)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$connection$$$function__1_is_connection_dropped);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$connection$$$function__1_is_connection_dropped == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$connection$$$function__1_is_connection_dropped = MAKE_FUNCTION_FRAME(tstate, code_objects_802ae1f2391dfcaf780264822c36e1c6, module_urllib3$util$connection, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$connection$$$function__1_is_connection_dropped->m_type_description == NULL);
frame_frame_urllib3$util$connection$$$function__1_is_connection_dropped = cache_frame_frame_urllib3$util$connection$$$function__1_is_connection_dropped;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$connection$$$function__1_is_connection_dropped);
assert(Py_REFCNT(frame_frame_urllib3$util$connection$$$function__1_is_connection_dropped) == 2);

// Framed code:
{
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_conn);
tmp_expression_value_1 = par_conn;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_is_connected);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = (tmp_res == 0) ? Py_True : Py_False;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$connection$$$function__1_is_connection_dropped, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$connection$$$function__1_is_connection_dropped->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$connection$$$function__1_is_connection_dropped, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$connection$$$function__1_is_connection_dropped,
    type_description_1,
    par_conn
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$connection$$$function__1_is_connection_dropped == cache_frame_frame_urllib3$util$connection$$$function__1_is_connection_dropped) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$connection$$$function__1_is_connection_dropped);
    cache_frame_frame_urllib3$util$connection$$$function__1_is_connection_dropped = NULL;
}

assertFrameObject(frame_frame_urllib3$util$connection$$$function__1_is_connection_dropped);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_conn);
Py_DECREF(par_conn);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_conn);
Py_DECREF(par_conn);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$connection$$$function__2_create_connection(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_address = python_pars[0];
PyObject *par_timeout = python_pars[1];
PyObject *par_source_address = python_pars[2];
PyObject *par_socket_options = python_pars[3];
PyObject *var_host = NULL;
PyObject *var_port = NULL;
PyObject *var_err = NULL;
PyObject *var_family = NULL;
PyObject *var_res = NULL;
PyObject *var_af = NULL;
PyObject *var_socktype = NULL;
PyObject *var_proto = NULL;
PyObject *var_canonname = NULL;
PyObject *var_sa = NULL;
PyObject *var_sock = NULL;
PyObject *var__ = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__element_3 = NULL;
PyObject *tmp_tuple_unpack_2__element_4 = NULL;
PyObject *tmp_tuple_unpack_2__element_5 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$connection$$$function__2_create_connection;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionStackItem exception_preserved_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$connection$$$function__2_create_connection = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$connection$$$function__2_create_connection)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$connection$$$function__2_create_connection);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$connection$$$function__2_create_connection == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$connection$$$function__2_create_connection = MAKE_FUNCTION_FRAME(tstate, code_objects_f2246f41a4d650547aff453a8c49e20e, module_urllib3$util$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$connection$$$function__2_create_connection->m_type_description == NULL);
frame_frame_urllib3$util$connection$$$function__2_create_connection = cache_frame_frame_urllib3$util$connection$$$function__2_create_connection;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$connection$$$function__2_create_connection);
assert(Py_REFCNT(frame_frame_urllib3$util$connection$$$function__2_create_connection) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_address);
tmp_iter_arg_1 = par_address;
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 45;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 45;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
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



exception_lineno = 45;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_3;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
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

goto try_except_handler_2;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
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

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_host;
    var_host = tmp_assign_source_4;
    Py_INCREF(var_host);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_port;
    var_port = tmp_assign_source_5;
    Py_INCREF(var_port);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_host);
tmp_expression_value_1 = var_host;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_startswith);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$connection$$$function__2_create_connection->m_frame.f_lineno = 46;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_chr_91_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 46;
type_description_1 = "oooooooooooooooo";
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
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_host);
tmp_expression_value_2 = var_host;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_strip);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$connection$$$function__2_create_connection->m_frame.f_lineno = 47;
tmp_assign_source_6 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_9613c3fc04783ef5920752aa27696d66_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_host;
    assert(old != NULL);
    var_host = tmp_assign_source_6;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = Py_None;
{
    PyObject *old = var_err;
    var_err = tmp_assign_source_7;
    Py_INCREF(var_err);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_urllib3$util$connection$allowed_gai_family(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_allowed_gai_family);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$connection$$$function__2_create_connection->m_frame.f_lineno = 53;
tmp_assign_source_8 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_family;
    var_family = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_2;
if (var_host == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_host);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 56;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_3 = var_host;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_encode);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_4;
}
frame_frame_urllib3$util$connection$$$function__2_create_connection->m_frame.f_lineno = 56;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_plain_idna_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$connection$$$function__2_create_connection, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$connection$$$function__2_create_connection, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_UnicodeError;
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
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_raise_cause_1;
tmp_called_value_5 = module_var_accessor_urllib3$util$connection$LocationParseError(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LocationParseError);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_5;
}
tmp_tuple_element_1 = mod_consts.const_str_chr_39;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
if (var_host == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_host);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 58;
type_description_1 = "oooooooooooooooo";
    goto tuple_build_exception_1;
}

tmp_format_value_1 = var_host;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_dd043f7aaaab48b46fd0955ae24597f5;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_1 == NULL));
frame_frame_urllib3$util$connection$$$function__2_create_connection->m_frame.f_lineno = 58;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_5;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_5;
}
tmp_raise_cause_1 = Py_None;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 58;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oooooooooooooooo";
goto try_except_handler_5;
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 55;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$util$connection$$$function__2_create_connection->m_frame)) {
        frame_frame_urllib3$util$connection$$$function__2_create_connection->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooooooo";
goto try_except_handler_5;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_3:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_5;
tmp_expression_value_4 = module_var_accessor_urllib3$util$connection$socket(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_socket);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_getaddrinfo);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_host == NULL) {
Py_DECREF(tmp_called_value_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_host);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 60;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = var_host;
CHECK_OBJECT(var_port);
tmp_args_element_value_3 = var_port;
CHECK_OBJECT(var_family);
tmp_args_element_value_4 = var_family;
tmp_expression_value_5 = module_var_accessor_urllib3$util$connection$socket(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_socket);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 60;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_SOCK_STREAM);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 60;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$connection$$$function__2_create_connection->m_frame.f_lineno = 60;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_9 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_10 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooo";
exception_lineno = 60;
        goto try_except_handler_6;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_11 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_res;
    var_res = tmp_assign_source_11;
    Py_INCREF(var_res);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(var_res);
tmp_iter_arg_3 = var_res;
tmp_assign_source_12 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_2__source_iter;
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_13 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 5);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 61;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_1;
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_14 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 5);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 61;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_2;
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_15 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 2, 5);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 61;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_3;
    tmp_tuple_unpack_2__element_3 = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_16 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 3, 5);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 61;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_4;
    tmp_tuple_unpack_2__element_4 = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_unpack_7;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_7 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_17 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 4, 5);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 61;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_5;
    tmp_tuple_unpack_2__element_5 = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 5);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 61;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
}
}
goto try_end_4;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_7;
// End of try:
try_end_4:;
goto try_end_5;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_3);
tmp_tuple_unpack_2__element_3 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_4);
tmp_tuple_unpack_2__element_4 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_5);
tmp_tuple_unpack_2__element_5 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_6;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_18;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_18 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = var_af;
    var_af = tmp_assign_source_18;
    Py_INCREF(var_af);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_19;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_19 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var_socktype;
    var_socktype = tmp_assign_source_19;
    Py_INCREF(var_socktype);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_assign_source_20;
CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
tmp_assign_source_20 = tmp_tuple_unpack_2__element_3;
{
    PyObject *old = var_proto;
    var_proto = tmp_assign_source_20;
    Py_INCREF(var_proto);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_3);
tmp_tuple_unpack_2__element_3 = NULL;

{
PyObject *tmp_assign_source_21;
CHECK_OBJECT(tmp_tuple_unpack_2__element_4);
tmp_assign_source_21 = tmp_tuple_unpack_2__element_4;
{
    PyObject *old = var_canonname;
    var_canonname = tmp_assign_source_21;
    Py_INCREF(var_canonname);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_4);
tmp_tuple_unpack_2__element_4 = NULL;

{
PyObject *tmp_assign_source_22;
CHECK_OBJECT(tmp_tuple_unpack_2__element_5);
tmp_assign_source_22 = tmp_tuple_unpack_2__element_5;
{
    PyObject *old = var_sa;
    var_sa = tmp_assign_source_22;
    Py_INCREF(var_sa);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_5);
tmp_tuple_unpack_2__element_5 = NULL;

{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = Py_None;
{
    PyObject *old = var_sock;
    var_sock = tmp_assign_source_23;
    Py_INCREF(var_sock);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
tmp_called_instance_1 = module_var_accessor_urllib3$util$connection$socket(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_socket);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 64;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(var_af);
tmp_args_element_value_6 = var_af;
CHECK_OBJECT(var_socktype);
tmp_args_element_value_7 = var_socktype;
CHECK_OBJECT(var_proto);
tmp_args_element_value_8 = var_proto;
frame_frame_urllib3$util$connection$$$function__2_create_connection->m_frame.f_lineno = 64;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assign_source_24 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_socket,
        call_args
    );
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = var_sock;
    assert(old != NULL);
    var_sock = tmp_assign_source_24;
    Py_DECREF(old);
}

}
{
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
tmp_called_value_7 = module_var_accessor_urllib3$util$connection$_set_socket_options(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__set_socket_options);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(var_sock);
tmp_args_element_value_9 = var_sock;
if (par_socket_options == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_socket_options);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 67;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_9;
}

tmp_args_element_value_10 = par_socket_options;
frame_frame_urllib3$util$connection$$$function__2_create_connection->m_frame.f_lineno = 67;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
if (par_timeout == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 69;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_9;
}

tmp_cmp_expr_left_2 = par_timeout;
tmp_cmp_expr_right_2 = module_var_accessor_urllib3$util$connection$_DEFAULT_TIMEOUT(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__DEFAULT_TIMEOUT);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_9;
}
tmp_condition_result_3 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_11;
CHECK_OBJECT(var_sock);
tmp_expression_value_6 = var_sock;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_settimeout);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_9;
}
if (par_timeout == NULL) {
Py_DECREF(tmp_called_value_8);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 70;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_9;
}

tmp_args_element_value_11 = par_timeout;
frame_frame_urllib3$util$connection$$$function__2_create_connection->m_frame.f_lineno = 70;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_2;
if (par_source_address == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_source_address);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 71;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_9;
}

tmp_truth_name_2 = CHECK_IF_TRUE(par_source_address);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_9;
}
tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_12;
CHECK_OBJECT(var_sock);
tmp_expression_value_7 = var_sock;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_bind);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_9;
}
if (par_source_address == NULL) {
Py_DECREF(tmp_called_value_9);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_source_address);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 72;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_9;
}

tmp_args_element_value_12 = par_source_address;
frame_frame_urllib3$util$connection$$$function__2_create_connection->m_frame.f_lineno = 72;
tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_no_4:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_13;
CHECK_OBJECT(var_sock);
tmp_called_instance_2 = var_sock;
CHECK_OBJECT(var_sa);
tmp_args_element_value_13 = var_sa;
frame_frame_urllib3$util$connection$$$function__2_create_connection->m_frame.f_lineno = 73;
tmp_call_result_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_connect, tmp_args_element_value_13);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
Py_XDECREF(var_err);
var_err = NULL;

CHECK_OBJECT(var_sock);
tmp_return_value = var_sock;
Py_INCREF(tmp_return_value);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$connection$$$function__2_create_connection, exception_keeper_lineno_7);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7, exception_tb);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$connection$$$function__2_create_connection, exception_keeper_lineno_7);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_7);
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = PyExc_OSError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
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
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_25); 
{
    PyObject *old = var__;
    var__ = tmp_assign_source_25;
    Py_INCREF(var__);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_26;
CHECK_OBJECT(var__);
tmp_assign_source_26 = var__;
{
    PyObject *old = var_err;
    var_err = tmp_assign_source_26;
    Py_INCREF(var_err);
    Py_XDECREF(old);
}

}
// Tried code:
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
if (var_sock == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sock);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 80;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}

tmp_cmp_expr_left_4 = var_sock;
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_6 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_7;
if (var_sock == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sock);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 81;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}

tmp_called_instance_3 = var_sock;
frame_frame_urllib3$util$connection$$$function__2_create_connection->m_frame.f_lineno = 81;
tmp_call_result_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, const_str_plain_close);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
branch_no_6:;
goto try_end_6;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var__);
var__ = NULL;

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_10;
// End of try:
try_end_6:;
Py_XDECREF(var__);
var__ = NULL;

goto branch_end_5;
branch_no_5:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 63;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$util$connection$$$function__2_create_connection->m_frame)) {
        frame_frame_urllib3$util$connection$$$function__2_create_connection->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooooooo";
goto try_except_handler_10;
branch_end_5:;
goto try_end_7;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_6;
// End of try:
try_end_7:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_8;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_8:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_6;
}
goto loop_start_1;
loop_end_1:;
goto try_end_9;
// Return handler code:
try_return_handler_6:;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
CHECK_OBJECT(tmp_for_loop_1__iter_value);
Py_DECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
goto frame_return_exit_1;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_9:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
if (var_err == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_err);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 83;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_5 = var_err;
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_7 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
// Tried code:
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
if (var_err == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_err);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 85;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_12;
}

tmp_raise_type_input_2 = var_err;
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_12;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 85;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooo";
goto try_except_handler_12;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 3.
exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_11);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$connection$$$function__2_create_connection, exception_keeper_lineno_11);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_11, exception_tb);
    } else if (exception_keeper_lineno_11 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$connection$$$function__2_create_connection, exception_keeper_lineno_11);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_11, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_11);
Py_XDECREF(var_err);
var_err = NULL;

// Tried code:
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 84;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$util$connection$$$function__2_create_connection->m_frame)) {
        frame_frame_urllib3$util$connection$$$function__2_create_connection->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooooooo";
goto try_except_handler_13;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto frame_exception_exit_1;
// End of try:
// End of try:
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_d3595e84d8b1645204321774ba0ba260;
frame_frame_urllib3$util$connection$$$function__2_create_connection->m_frame.f_lineno = 90;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_OSError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 90;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooo";
goto frame_exception_exit_1;
}
branch_end_7:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$connection$$$function__2_create_connection, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$connection$$$function__2_create_connection->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$connection$$$function__2_create_connection, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$connection$$$function__2_create_connection,
    type_description_1,
    par_address,
    par_timeout,
    par_source_address,
    par_socket_options,
    var_host,
    var_port,
    var_err,
    var_family,
    var_res,
    var_af,
    var_socktype,
    var_proto,
    var_canonname,
    var_sa,
    var_sock,
    var__
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$connection$$$function__2_create_connection == cache_frame_frame_urllib3$util$connection$$$function__2_create_connection) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$connection$$$function__2_create_connection);
    cache_frame_frame_urllib3$util$connection$$$function__2_create_connection = NULL;
}

assertFrameObject(frame_frame_urllib3$util$connection$$$function__2_create_connection);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_host);
var_host = NULL;
CHECK_OBJECT(var_port);
CHECK_OBJECT(var_port);
Py_DECREF(var_port);
var_port = NULL;
CHECK_OBJECT(var_family);
CHECK_OBJECT(var_family);
Py_DECREF(var_family);
var_family = NULL;
CHECK_OBJECT(var_res);
CHECK_OBJECT(var_res);
Py_DECREF(var_res);
var_res = NULL;
CHECK_OBJECT(var_af);
CHECK_OBJECT(var_af);
Py_DECREF(var_af);
var_af = NULL;
CHECK_OBJECT(var_socktype);
CHECK_OBJECT(var_socktype);
Py_DECREF(var_socktype);
var_socktype = NULL;
CHECK_OBJECT(var_proto);
CHECK_OBJECT(var_proto);
Py_DECREF(var_proto);
var_proto = NULL;
CHECK_OBJECT(var_canonname);
CHECK_OBJECT(var_canonname);
Py_DECREF(var_canonname);
var_canonname = NULL;
CHECK_OBJECT(var_sa);
CHECK_OBJECT(var_sa);
Py_DECREF(var_sa);
var_sa = NULL;
CHECK_OBJECT(var_sock);
CHECK_OBJECT(var_sock);
Py_DECREF(var_sock);
var_sock = NULL;
Py_XDECREF(var__);
var__ = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_host);
var_host = NULL;
Py_XDECREF(var_port);
var_port = NULL;
Py_XDECREF(var_err);
var_err = NULL;
Py_XDECREF(var_family);
var_family = NULL;
Py_XDECREF(var_res);
var_res = NULL;
Py_XDECREF(var_af);
var_af = NULL;
Py_XDECREF(var_socktype);
var_socktype = NULL;
Py_XDECREF(var_proto);
var_proto = NULL;
Py_XDECREF(var_canonname);
var_canonname = NULL;
Py_XDECREF(var_sa);
var_sa = NULL;
Py_XDECREF(var_sock);
var_sock = NULL;
Py_XDECREF(var__);
var__ = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_address);
Py_DECREF(par_address);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_source_address);
Py_DECREF(par_source_address);
CHECK_OBJECT(par_socket_options);
Py_DECREF(par_socket_options);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_address);
Py_DECREF(par_address);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_source_address);
Py_DECREF(par_source_address);
CHECK_OBJECT(par_socket_options);
Py_DECREF(par_socket_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$connection$$$function__3__set_socket_options(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_sock = python_pars[0];
PyObject *par_options = python_pars[1];
PyObject *var_opt = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$connection$$$function__3__set_socket_options;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$connection$$$function__3__set_socket_options = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_options);
tmp_cmp_expr_left_1 = par_options;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
branch_no_1:;
if (isFrameUnusable(cache_frame_frame_urllib3$util$connection$$$function__3__set_socket_options)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$connection$$$function__3__set_socket_options);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$connection$$$function__3__set_socket_options == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$connection$$$function__3__set_socket_options = MAKE_FUNCTION_FRAME(tstate, code_objects_f07ec1368f5aca528fa03d2519a1b080, module_urllib3$util$connection, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$connection$$$function__3__set_socket_options->m_type_description == NULL);
frame_frame_urllib3$util$connection$$$function__3__set_socket_options = cache_frame_frame_urllib3$util$connection$$$function__3__set_socket_options;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$connection$$$function__3__set_socket_options);
assert(Py_REFCNT(frame_frame_urllib3$util$connection$$$function__3__set_socket_options) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_options);
tmp_iter_arg_1 = par_options;
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooo";
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
type_description_1 = "ooo";
exception_lineno = 99;
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
    PyObject *old = var_opt;
    var_opt = tmp_assign_source_3;
    Py_INCREF(var_opt);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_call_result_1;
if (par_sock == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sock);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 100;
type_description_1 = "ooo";
    goto try_except_handler_2;
}

tmp_expression_value_1 = par_sock;
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_setsockopt);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_opt);
tmp_direct_call_arg2_1 = var_opt;
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_call_result_1 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooo";
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$connection$$$function__3__set_socket_options, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$connection$$$function__3__set_socket_options->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$connection$$$function__3__set_socket_options, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$connection$$$function__3__set_socket_options,
    type_description_1,
    par_sock,
    par_options,
    var_opt
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$connection$$$function__3__set_socket_options == cache_frame_frame_urllib3$util$connection$$$function__3__set_socket_options) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$connection$$$function__3__set_socket_options);
    cache_frame_frame_urllib3$util$connection$$$function__3__set_socket_options = NULL;
}

assertFrameObject(frame_frame_urllib3$util$connection$$$function__3__set_socket_options);

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
Py_XDECREF(var_opt);
var_opt = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_opt);
var_opt = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_sock);
Py_DECREF(par_sock);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_sock);
Py_DECREF(par_sock);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$connection$$$function__4_allowed_gai_family(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_family = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$connection$$$function__4_allowed_gai_family;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$connection$$$function__4_allowed_gai_family = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$connection$$$function__4_allowed_gai_family)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$connection$$$function__4_allowed_gai_family);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$connection$$$function__4_allowed_gai_family == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$connection$$$function__4_allowed_gai_family = MAKE_FUNCTION_FRAME(tstate, code_objects_a5feec85dc13e0c7fb762992a0e27b39, module_urllib3$util$connection, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$connection$$$function__4_allowed_gai_family->m_type_description == NULL);
frame_frame_urllib3$util$connection$$$function__4_allowed_gai_family = cache_frame_frame_urllib3$util$connection$$$function__4_allowed_gai_family;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$connection$$$function__4_allowed_gai_family);
assert(Py_REFCNT(frame_frame_urllib3$util$connection$$$function__4_allowed_gai_family) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_urllib3$util$connection$socket(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_socket);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 108;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_AF_INET);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_family;
    var_family = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_mvar_value_1;
int tmp_truth_name_1;
tmp_mvar_value_1 = module_var_accessor_urllib3$util$connection$HAS_IPV6(tstate);
if (unlikely(tmp_mvar_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HAS_IPV6);
}

if (tmp_mvar_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 109;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "o";
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
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = module_var_accessor_urllib3$util$connection$socket(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_socket);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 110;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_AF_UNSPEC);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_family;
    assert(old != NULL);
    var_family = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$connection$$$function__4_allowed_gai_family, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$connection$$$function__4_allowed_gai_family->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$connection$$$function__4_allowed_gai_family, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$connection$$$function__4_allowed_gai_family,
    type_description_1,
    var_family
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$connection$$$function__4_allowed_gai_family == cache_frame_frame_urllib3$util$connection$$$function__4_allowed_gai_family) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$connection$$$function__4_allowed_gai_family);
    cache_frame_frame_urllib3$util$connection$$$function__4_allowed_gai_family = NULL;
}

assertFrameObject(frame_frame_urllib3$util$connection$$$function__4_allowed_gai_family);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_family);
tmp_return_value = var_family;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_family);
CHECK_OBJECT(var_family);
Py_DECREF(var_family);
var_family = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_family);
var_family = NULL;
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


static PyObject *impl_urllib3$util$connection$$$function__5__has_ipv6(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_host = python_pars[0];
PyObject *var_sock = NULL;
nuitka_bool var_has_ipv6 = NUITKA_BOOL_UNASSIGNED;
struct Nuitka_FrameObject *frame_frame_urllib3$util$connection$$$function__5__has_ipv6;
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
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$connection$$$function__5__has_ipv6 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
{
    PyObject *old = var_sock;
    var_sock = tmp_assign_source_1;
    Py_INCREF(var_sock);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_assign_source_2;
tmp_assign_source_2 = NUITKA_BOOL_FALSE;
var_has_ipv6 = tmp_assign_source_2;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$connection$$$function__5__has_ipv6)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$connection$$$function__5__has_ipv6);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$connection$$$function__5__has_ipv6 == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$connection$$$function__5__has_ipv6 = MAKE_FUNCTION_FRAME(tstate, code_objects_414bf512aa43691ced82945a79298d56, module_urllib3$util$connection, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$connection$$$function__5__has_ipv6->m_type_description == NULL);
frame_frame_urllib3$util$connection$$$function__5__has_ipv6 = cache_frame_frame_urllib3$util$connection$$$function__5__has_ipv6;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$connection$$$function__5__has_ipv6);
assert(Py_REFCNT(frame_frame_urllib3$util$connection$$$function__5__has_ipv6) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
tmp_expression_value_1 = module_var_accessor_urllib3$util$connection$socket(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_socket);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 119;
type_description_1 = "oob";
    goto frame_exception_exit_1;
}
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_has_ipv6);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oob";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 119;
type_description_1 = "oob";
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
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_3;
tmp_expression_value_2 = module_var_accessor_urllib3$util$connection$socket(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_socket);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 126;
type_description_1 = "oob";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_socket);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oob";
    goto try_except_handler_2;
}
tmp_expression_value_3 = module_var_accessor_urllib3$util$connection$socket(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_socket);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 126;
type_description_1 = "oob";
    goto try_except_handler_2;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_AF_INET6);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 126;
type_description_1 = "oob";
    goto try_except_handler_2;
}
frame_frame_urllib3$util$connection$$$function__5__has_ipv6->m_frame.f_lineno = 126;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oob";
    goto try_except_handler_2;
}
{
    PyObject *old = var_sock;
    assert(old != NULL);
    var_sock = tmp_assign_source_3;
    Py_DECREF(old);
}

}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_sock);
tmp_called_instance_1 = var_sock;
CHECK_OBJECT(par_host);
tmp_tuple_element_1 = par_host;
tmp_args_element_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_element_value_2, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_int_0;
PyTuple_SET_ITEM0(tmp_args_element_value_2, 1, tmp_tuple_element_1);
frame_frame_urllib3$util$connection$$$function__5__has_ipv6->m_frame.f_lineno = 127;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_bind, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oob";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
var_has_ipv6 = tmp_assign_source_4;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$connection$$$function__5__has_ipv6, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$connection$$$function__5__has_ipv6, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_Exception;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
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
    exception_lineno = 125;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$util$connection$$$function__5__has_ipv6->m_frame)) {
        frame_frame_urllib3$util$connection$$$function__5__has_ipv6->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oob";
goto try_except_handler_3;
branch_no_2:;
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
branch_no_1:;
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_2;
if (var_sock == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sock);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 132;
type_description_1 = "oob";
    goto frame_exception_exit_1;
}

tmp_truth_name_2 = CHECK_IF_TRUE(var_sock);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "oob";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
if (var_sock == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sock);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 133;
type_description_1 = "oob";
    goto frame_exception_exit_1;
}

tmp_called_instance_2 = var_sock;
frame_frame_urllib3$util$connection$$$function__5__has_ipv6->m_frame.f_lineno = 133;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, const_str_plain_close);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "oob";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_3:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$connection$$$function__5__has_ipv6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$connection$$$function__5__has_ipv6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$connection$$$function__5__has_ipv6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$connection$$$function__5__has_ipv6,
    type_description_1,
    par_host,
    var_sock,
    (int)var_has_ipv6
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$connection$$$function__5__has_ipv6 == cache_frame_frame_urllib3$util$connection$$$function__5__has_ipv6) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$connection$$$function__5__has_ipv6);
    cache_frame_frame_urllib3$util$connection$$$function__5__has_ipv6 = NULL;
}

assertFrameObject(frame_frame_urllib3$util$connection$$$function__5__has_ipv6);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
assert(var_has_ipv6 != NUITKA_BOOL_UNASSIGNED);
tmp_return_value = (var_has_ipv6 == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_sock);
var_sock = NULL;
assert(var_has_ipv6 != NUITKA_BOOL_UNASSIGNED);
var_has_ipv6 = NUITKA_BOOL_UNASSIGNED;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_sock);
var_sock = NULL;
assert(var_has_ipv6 != NUITKA_BOOL_UNASSIGNED);
var_has_ipv6 = NUITKA_BOOL_UNASSIGNED;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_host);
Py_DECREF(par_host);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_host);
Py_DECREF(par_host);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function__1_is_connection_dropped(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$connection$$$function__1_is_connection_dropped,
        mod_consts.const_str_plain_is_connection_dropped,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_802ae1f2391dfcaf780264822c36e1c6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$connection,
        mod_consts.const_str_digest_629662ae0efb080f235e4206951ffe20,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function__2_create_connection(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$connection$$$function__2_create_connection,
        mod_consts.const_str_plain_create_connection,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f2246f41a4d650547aff453a8c49e20e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$connection,
        mod_consts.const_str_digest_fdb01d82d60186d3812b009102259d1e,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function__3__set_socket_options(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$connection$$$function__3__set_socket_options,
        mod_consts.const_str_plain__set_socket_options,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f07ec1368f5aca528fa03d2519a1b080,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$connection,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function__4_allowed_gai_family(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$connection$$$function__4_allowed_gai_family,
        mod_consts.const_str_plain_allowed_gai_family,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a5feec85dc13e0c7fb762992a0e27b39,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$connection,
        mod_consts.const_str_digest_fd9e06b160161212aff03b5b4dc7aa13,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function__5__has_ipv6(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$connection$$$function__5__has_ipv6,
        mod_consts.const_str_plain__has_ipv6,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_414bf512aa43691ced82945a79298d56,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$connection,
        mod_consts.const_str_digest_d2c4edd87fa98b6977865f8b05399c97,
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

static function_impl_code const function_table_urllib3$util$connection[] = {
impl_urllib3$util$connection$$$function__1_is_connection_dropped,
impl_urllib3$util$connection$$$function__2_create_connection,
impl_urllib3$util$connection$$$function__3__set_socket_options,
impl_urllib3$util$connection$$$function__4_allowed_gai_family,
impl_urllib3$util$connection$$$function__5__has_ipv6,
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

    return Nuitka_Function_GetFunctionState(function, function_table_urllib3$util$connection);
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
        module_urllib3$util$connection,
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
        function_table_urllib3$util$connection,
        sizeof(function_table_urllib3$util$connection) / sizeof(function_impl_code)
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
static char const *module_full_name = "urllib3.util.connection";
#endif

// Internal entry point for module code.
PyObject *module_code_urllib3$util$connection(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("urllib3$util$connection");

    // Store the module for future use.
    module_urllib3$util$connection = module;

    moduledict_urllib3$util$connection = MODULE_DICT(module_urllib3$util$connection);

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
        PRINT_STRING("urllib3$util$connection: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("urllib3$util$connection: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("urllib3$util$connection: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "urllib3.util.connection" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initurllib3$util$connection\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_urllib3$util$connection,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_urllib3$util$connection,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_urllib3$util$connection,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$connection,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$connection,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_urllib3$util$connection);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_urllib3$util$connection);
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

        UPDATE_STRING_DICT1(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$connection;
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
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_urllib3$util$connection = MAKE_MODULE_FRAME(code_objects_b61e9d61f699936a1f1be8e50be0c2eb, module_urllib3$util$connection);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$connection);
assert(Py_REFCNT(frame_frame_urllib3$util$connection) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_urllib3$util$connection$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_urllib3$util$connection$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_urllib3$util$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_socket;
tmp_globals_arg_value_1 = (PyObject *)moduledict_urllib3$util$connection;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_urllib3$util$connection->m_frame.f_lineno = 3;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_socket, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT0(moduledict_urllib3$util$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_exceptions;
tmp_globals_arg_value_2 = (PyObject *)moduledict_urllib3$util$connection;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_LocationParseError_tuple;
tmp_level_value_2 = mod_consts.const_int_pos_2;
frame_frame_urllib3$util$connection->m_frame.f_lineno = 6;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_urllib3$util$connection,
        mod_consts.const_str_plain_LocationParseError,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_LocationParseError);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_LocationParseError, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_timeout;
tmp_globals_arg_value_3 = (PyObject *)moduledict_urllib3$util$connection;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain__DEFAULT_TIMEOUT_str_plain__TYPE_TIMEOUT_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_urllib3$util$connection->m_frame.f_lineno = 7;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_urllib3$util$connection,
        mod_consts.const_str_plain__DEFAULT_TIMEOUT,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain__DEFAULT_TIMEOUT);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$connection, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_TIMEOUT, tmp_assign_source_10);
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
        (PyObject *)moduledict_urllib3$util$connection,
        mod_consts.const_str_plain__TYPE_TIMEOUT,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain__TYPE_TIMEOUT);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$connection, (Nuitka_StringObject *)mod_consts.const_str_plain__TYPE_TIMEOUT, tmp_assign_source_11);
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
PyObject *tmp_assign_source_12;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
PyObject *tmp_tuple_element_1;
tmp_expression_value_1 = (PyObject *)&PyList_Type;
tmp_expression_value_2 = (PyObject *)&PyTuple_Type;
tmp_tuple_element_1 = (PyObject *)&PyLong_Type;
tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_3;
PyTuple_SET_ITEM0(tmp_subscript_value_2, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = (PyObject *)&PyLong_Type;
PyTuple_SET_ITEM0(tmp_subscript_value_2, 1, tmp_tuple_element_1);
tmp_expression_value_4 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_4 == NULL));
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_Union);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto tuple_build_exception_1;
}
tmp_subscript_value_3 = mod_consts.const_tuple_type_int_type_bytes_tuple;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_subscript_value_2, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_subscript_value_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_subscript_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_subscript_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
tmp_assign_source_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$connection, (Nuitka_StringObject *)mod_consts.const_str_plain__TYPE_SOCKET_OPTIONS, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_80abd8616c080929ab7ef0c22226f0c6);

tmp_assign_source_13 = MAKE_FUNCTION_urllib3$util$connection$$$function__1_is_connection_dropped(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_urllib3$util$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_is_connection_dropped, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_defaults_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_annotations_2;
tmp_tuple_element_2 = module_var_accessor_urllib3$util$connection$_DEFAULT_TIMEOUT(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__DEFAULT_TIMEOUT);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;

    goto frame_exception_exit_1;
}
tmp_defaults_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_1, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_1, 2, tmp_tuple_element_2);
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_cba218346f2c099ee5c5715dceb2afbf);

tmp_assign_source_14 = MAKE_FUNCTION_urllib3$util$connection$$$function__2_create_connection(tstate, tmp_defaults_1, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_urllib3$util$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_create_connection, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_43dfd4c1a05e6bc8230dba2321f08560);

tmp_assign_source_15 = MAKE_FUNCTION_urllib3$util$connection$$$function__3__set_socket_options(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_urllib3$util$connection, (Nuitka_StringObject *)mod_consts.const_str_plain__set_socket_options, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_a4b2f91846ff07595c6fbda8a2a47566);

tmp_assign_source_16 = MAKE_FUNCTION_urllib3$util$connection$$$function__4_allowed_gai_family(tstate, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_urllib3$util$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_allowed_gai_family, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_469ba7213dddbe426a616490f5f99893);

tmp_assign_source_17 = MAKE_FUNCTION_urllib3$util$connection$$$function__5__has_ipv6(tstate, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_urllib3$util$connection, (Nuitka_StringObject *)mod_consts.const_str_plain__has_ipv6, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_urllib3$util$connection$_has_ipv6(tstate);
assert(!(tmp_called_value_1 == NULL));
frame_frame_urllib3$util$connection->m_frame.f_lineno = 137;
tmp_assign_source_18 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_3f9fec55820f857461da4f1e12840da5_tuple);

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$connection, (Nuitka_StringObject *)mod_consts.const_str_plain_HAS_IPV6, tmp_assign_source_18);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$connection, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$connection->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$connection, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_urllib3$util$connection);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("urllib3$util$connection", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "urllib3.util.connection" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_urllib3$util$connection);
    return module_urllib3$util$connection;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("urllib3$util$connection", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
