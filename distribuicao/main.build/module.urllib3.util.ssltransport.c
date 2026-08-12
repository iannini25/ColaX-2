/* Generated code for Python module 'urllib3$util$ssltransport'
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



/* The "module_urllib3$util$ssltransport" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$util$ssltransport;
PyDictObject *moduledict_urllib3$util$ssltransport;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_wrap_bio;
PyObject *const_str_plain_ProxySchemeUnsupported;
PyObject *const_tuple_str_digest_a112848159e46580d55c9935e74da7e6_tuple;
PyObject *const_str_digest_061852b76b1704f8c2fc53b3a010ee1e;
PyObject *const_str_plain_ssl;
PyObject *const_str_plain_MemoryBIO;
PyObject *const_str_plain_incoming;
PyObject *const_str_plain_outgoing;
PyObject *const_str_plain_suppress_ragged_eofs;
PyObject *const_str_plain_socket;
PyObject *const_tuple_str_plain_server_hostname_tuple;
PyObject *const_str_plain_sslobj;
PyObject *const_str_plain__ssl_io_loop;
PyObject *const_str_plain_do_handshake;
PyObject *const_str_digest_b473cbaded27903f3fd7a967b151a31d;
PyObject *const_str_plain__wrap_ssl_read;
PyObject *const_str_digest_f5907d1953e4c81926367a875b9068f4;
PyObject *const_str_digest_58b6ee6d40d0be9a28d966f53bcc6a1b;
PyObject *const_str_digest_2e5c7bcd7654bd30a3dbe3d1bcb82ba9;
PyObject *const_str_plain_cast;
PyObject *const_tuple_str_plain_B_tuple;
PyObject *const_str_plain_count;
PyObject *const_str_plain_self;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_digest_ae0010517f0f5ba1b4d7e7de0c86a25f;
PyObject *const_str_plain_write;
PyObject *const_set_38ac54b0a8a995c7edae10aa18c58dad;
PyObject *const_str_digest_ed3208d107536d41d627d96a338acb63;
PyObject *const_str_digest_8600cd96cda1dad314813b0352cbdec5;
PyObject *const_str_plain_SocketIO;
PyObject *const_str_plain__io_refs;
PyObject *const_str_plain_DEFAULT_BUFFER_SIZE;
PyObject *const_str_digest_397bad4f1f82195a3ed46c76f3f81db2;
PyObject *const_str_plain_BufferedRWPair;
PyObject *const_str_plain_BufferedReader;
PyObject *const_str_plain_BufferedWriter;
PyObject *const_str_plain_TextIOWrapper;
PyObject *const_str_plain_mode;
PyObject *const_str_digest_6e912304cc47aaf5aa16b32778f0085c;
PyObject *const_str_plain_unwrap;
PyObject *const_str_plain_getpeercert;
PyObject *const_str_plain_version;
PyObject *const_str_plain_cipher;
PyObject *const_str_plain_selected_alpn_protocol;
PyObject *const_str_plain_shared_ciphers;
PyObject *const_str_plain_compression;
PyObject *const_str_plain_settimeout;
PyObject *const_str_plain_gettimeout;
PyObject *const_str_plain__decref_socketios;
PyObject *const_str_plain_SSLError;
PyObject *const_str_plain_errno;
PyObject *const_str_plain_SSL_ERROR_EOF;
PyObject *const_str_plain_should_loop;
PyObject *const_str_plain_arg1;
PyObject *const_str_plain_arg2;
PyObject *const_str_plain_func;
PyObject *const_str_plain_SSL_ERROR_WANT_READ;
PyObject *const_str_plain_SSL_ERROR_WANT_WRITE;
PyObject *const_str_plain_sendall;
PyObject *const_str_plain_recv;
PyObject *const_str_plain_SSL_BLOCKSIZE;
PyObject *const_str_plain_write_eof;
PyObject *const_str_plain__ReturnValue;
PyObject *const_str_plain_ret;
PyObject *const_str_digest_33b398202dbf7c54ddd4ec2ecd716168;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_io;
PyObject *const_str_plain_typing;
PyObject *const_str_plain_exceptions;
PyObject *const_tuple_str_plain_ProxySchemeUnsupported_tuple;
PyObject *const_int_pos_2;
PyObject *const_str_plain_Union;
PyObject *const_tuple_type_bytearray_type_memoryview_tuple;
PyObject *const_str_plain__WriteBuffer;
PyObject *const_str_plain_TypeVar;
PyObject *const_tuple_str_plain__ReturnValue_tuple;
PyObject *const_int_pos_16384;
PyObject *const_str_digest_2c29860d05cd0f70ce2a7aa252d7abab;
PyObject *const_str_digest_17b936ec84f90ef2ceb009bf3ae87305;
PyObject *const_str_plain_SSLTransport;
PyObject *const_int_pos_22;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_3b9dc660740346b94603dc8b405c9bc2;
PyObject *const_str_plain__validate_ssl_context_for_tls_in_tls;
PyObject *const_str_digest_beed7828015b058e5bd0ec35067d0d81;
PyObject *const_tuple_none_true_tuple;
PyObject *const_dict_4fff830355357b589f7a4ca9e2388b16;
PyObject *const_str_digest_53f15f47455fd0edd9e007023ca79b28;
PyObject *const_dict_71adc2ba5737c82f5bb97b4d3b034ead;
PyObject *const_str_digest_f5df8061b1f344fa865cf4121fe1de11;
PyObject *const_dict_13a755637c2f9d75083d4a744c6110ea;
PyObject *const_str_digest_6487bc96292b1c7b592c78c6a546adc9;
PyObject *const_dict_85b825f4db9c19f334e726fd877a8261;
PyObject *const_str_digest_2866f307e85513f9d45eb3e07b9778a4;
PyObject *const_tuple_int_pos_1024_none_tuple;
PyObject *const_dict_d271f2c8d0bdce4e5eb7feb19f476388;
PyObject *const_str_digest_e5c02be6b5703820d444a6caf78ce3aa;
PyObject *const_tuple_int_pos_1024_int_0_tuple;
PyObject *const_dict_aeb76f3b38d3e4ccac913698834b1ff8;
PyObject *const_str_digest_6e982273ed6594c56e59708bc717a559;
PyObject *const_tuple_none_int_0_tuple;
PyObject *const_dict_7d39ad0b502f2117f82fecb4f5b5834b;
PyObject *const_str_plain_recv_into;
PyObject *const_str_digest_6be9ad68af3587dfb654c5d7ccdd6256;
PyObject *const_tuple_int_0_tuple;
PyObject *const_dict_d4d7a65a2ce6438480576e81b1a42b1a;
PyObject *const_str_digest_2a8adc5022e16ff4a45571b5138d856d;
PyObject *const_dict_185f2e2f0150ebfb4d7cb1239b0c8b71;
PyObject *const_str_digest_d4b885a810fc8f78c524bfcc62f67f47;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_4943746162ff4a7e2531a4e46f999ee4;
PyObject *const_dict_9ebb29186c967c0ff0cc2318af1921b4;
PyObject *const_str_plain_makefile;
PyObject *const_str_digest_e2ca366709c92ea36d1cf068966574ab;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_digest_7a201e48fcbb2e4a3fe293437029a84d;
PyObject *const_str_digest_8a933ac923910b22f88c0294a3e717a2;
PyObject *const_str_plain_overload;
PyObject *const_tuple_ellipsis_tuple;
PyObject *const_dict_780fe9cbfec162e2db078532c930f208;
PyObject *const_str_digest_6167fe1c698a03bebfc2a50dfc064495;
PyObject *const_dict_b16ccc0f0d6c0b9fce0bf19e952737db;
PyObject *const_tuple_false_tuple;
PyObject *const_dict_7a237afe69cca399fb38fa51fe0a8825;
PyObject *const_dict_fb2aef63cbe899ae3db5a90391a96071;
PyObject *const_str_digest_9be10114a6296958277ace143227d15d;
PyObject *const_dict_2256e10b9ff9e3202801e32b00d2665d;
PyObject *const_str_digest_c3f2b7cceb73824fef1bad37229f5942;
PyObject *const_str_digest_dc908cf90cc6a5f2a5db310cd04f7330;
PyObject *const_dict_e11d384d77b1f3f69d3cea2c8863295b;
PyObject *const_str_digest_ed12867892805cc3edfcd62ce355a47d;
PyObject *const_str_digest_d9230878b21d3316542d1b7aba5b391e;
PyObject *const_dict_186d8b6261a894f17d141ea2fe94c71f;
PyObject *const_str_digest_aeb0f82511ae06f3df16270cadc26672;
PyObject *const_dict_db7decffacc19a524dc0bb9b22309b52;
PyObject *const_str_digest_7039b726d187d45b79e8366a29db2241;
PyObject *const_str_digest_5c97b0757d3a35986fcab7a9a805f7a2;
PyObject *const_dict_affb0a54cd9bab244f60da2111ce4a4d;
PyObject *const_str_digest_c57c02e66ad506bd06df355b0e76d2ec;
PyObject *const_dict_027f3b46cbd5305a22425539c139edf8;
PyObject *const_str_digest_4c4369abc9b798df8fc3818a222085d2;
PyObject *const_dict_12e86a24afbffdf8f59caf6d5a1ef557;
PyObject *const_dict_e2e568c7d717b6cf609c0027ed1ac3e4;
PyObject *const_tuple_none_none_tuple;
PyObject *const_dict_953c401f035074b70dcfab5234f66116;
PyObject *const_tuple_268c19830aae6d57b5dfef7ecc01f801_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_digest_a832f867d4dc987634dc141072e2905a;
PyObject *const_str_digest_db075caf482153b5f9d1ae2a251036c0;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_underscore_tuple;
PyObject *const_tuple_69f31fc43fd9d48091e384f3fceae4b3_tuple;
PyObject *const_tuple_str_plain_self_str_plain_func_tuple;
PyObject *const_tuple_str_plain_self_str_plain_func_str_plain_arg1_tuple;
PyObject *const_tuple_str_plain_self_str_plain_func_str_plain_arg1_str_plain_arg2_tuple;
PyObject *const_tuple_ec7470e2c9c2c39e847c70d927161aef_tuple;
PyObject *const_tuple_str_plain_ssl_context_tuple;
PyObject *const_tuple_str_plain_self_str_plain_len_str_plain_buffer_str_plain_e_tuple;
PyObject *const_tuple_str_plain_self_str_plain_binary_form_tuple;
PyObject *const_tuple_712c1b050ab3009195093ff0988cd435_tuple;
PyObject *const_tuple_str_plain_self_str_plain_len_str_plain_buffer_tuple;
PyObject *const_tuple_str_plain_self_str_plain_buflen_str_plain_flags_tuple;
PyObject *const_tuple_cbf6c250f999c2b551306c5895bbcdba_tuple;
PyObject *const_tuple_str_plain_self_str_plain_data_str_plain_flags_tuple;
PyObject *const_tuple_554a29f49c2be0efb946d2c5e1d2787e_tuple;
PyObject *const_tuple_str_plain_self_str_plain_value_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[169];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("urllib3.util.ssltransport"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 169) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 169 values, got %d\n",
                    UN_TRANSLATE("urllib3.util.ssltransport"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wrap_bio", mod_consts.const_str_plain_wrap_bio);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_wrap_bio);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProxySchemeUnsupported", mod_consts.const_str_plain_ProxySchemeUnsupported);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProxySchemeUnsupported);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_a112848159e46580d55c9935e74da7e6_tuple", mod_consts.const_tuple_str_digest_a112848159e46580d55c9935e74da7e6_tuple);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a112848159e46580d55c9935e74da7e6_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_061852b76b1704f8c2fc53b3a010ee1e", mod_consts.const_str_digest_061852b76b1704f8c2fc53b3a010ee1e);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_061852b76b1704f8c2fc53b3a010ee1e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ssl", mod_consts.const_str_plain_ssl);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_ssl);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MemoryBIO", mod_consts.const_str_plain_MemoryBIO);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_MemoryBIO);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_incoming", mod_consts.const_str_plain_incoming);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_incoming);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_outgoing", mod_consts.const_str_plain_outgoing);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_outgoing);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_suppress_ragged_eofs", mod_consts.const_str_plain_suppress_ragged_eofs);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_suppress_ragged_eofs);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_socket", mod_consts.const_str_plain_socket);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_socket);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_server_hostname_tuple", mod_consts.const_tuple_str_plain_server_hostname_tuple);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_server_hostname_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sslobj", mod_consts.const_str_plain_sslobj);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_sslobj);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__ssl_io_loop", mod_consts.const_str_plain__ssl_io_loop);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain__ssl_io_loop);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_do_handshake", mod_consts.const_str_plain_do_handshake);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_do_handshake);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b473cbaded27903f3fd7a967b151a31d", mod_consts.const_str_digest_b473cbaded27903f3fd7a967b151a31d);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_b473cbaded27903f3fd7a967b151a31d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__wrap_ssl_read", mod_consts.const_str_plain__wrap_ssl_read);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain__wrap_ssl_read);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f5907d1953e4c81926367a875b9068f4", mod_consts.const_str_digest_f5907d1953e4c81926367a875b9068f4);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_f5907d1953e4c81926367a875b9068f4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_58b6ee6d40d0be9a28d966f53bcc6a1b", mod_consts.const_str_digest_58b6ee6d40d0be9a28d966f53bcc6a1b);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_58b6ee6d40d0be9a28d966f53bcc6a1b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2e5c7bcd7654bd30a3dbe3d1bcb82ba9", mod_consts.const_str_digest_2e5c7bcd7654bd30a3dbe3d1bcb82ba9);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_2e5c7bcd7654bd30a3dbe3d1bcb82ba9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cast", mod_consts.const_str_plain_cast);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_cast);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_B_tuple", mod_consts.const_tuple_str_plain_B_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_B_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_count", mod_consts.const_str_plain_count);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_count);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_self", mod_consts.const_str_plain_self);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_none_tuple", mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ae0010517f0f5ba1b4d7e7de0c86a25f", mod_consts.const_str_digest_ae0010517f0f5ba1b4d7e7de0c86a25f);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_ae0010517f0f5ba1b4d7e7de0c86a25f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_write", mod_consts.const_str_plain_write);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_write);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_set_38ac54b0a8a995c7edae10aa18c58dad", mod_consts.const_set_38ac54b0a8a995c7edae10aa18c58dad);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_set_38ac54b0a8a995c7edae10aa18c58dad);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ed3208d107536d41d627d96a338acb63", mod_consts.const_str_digest_ed3208d107536d41d627d96a338acb63);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_ed3208d107536d41d627d96a338acb63);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8600cd96cda1dad314813b0352cbdec5", mod_consts.const_str_digest_8600cd96cda1dad314813b0352cbdec5);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_8600cd96cda1dad314813b0352cbdec5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SocketIO", mod_consts.const_str_plain_SocketIO);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_SocketIO);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__io_refs", mod_consts.const_str_plain__io_refs);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain__io_refs);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DEFAULT_BUFFER_SIZE", mod_consts.const_str_plain_DEFAULT_BUFFER_SIZE);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_BUFFER_SIZE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_397bad4f1f82195a3ed46c76f3f81db2", mod_consts.const_str_digest_397bad4f1f82195a3ed46c76f3f81db2);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_397bad4f1f82195a3ed46c76f3f81db2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BufferedRWPair", mod_consts.const_str_plain_BufferedRWPair);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_BufferedRWPair);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BufferedReader", mod_consts.const_str_plain_BufferedReader);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_BufferedReader);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BufferedWriter", mod_consts.const_str_plain_BufferedWriter);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_BufferedWriter);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TextIOWrapper", mod_consts.const_str_plain_TextIOWrapper);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_TextIOWrapper);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mode", mod_consts.const_str_plain_mode);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_mode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6e912304cc47aaf5aa16b32778f0085c", mod_consts.const_str_digest_6e912304cc47aaf5aa16b32778f0085c);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_6e912304cc47aaf5aa16b32778f0085c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unwrap", mod_consts.const_str_plain_unwrap);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_unwrap);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getpeercert", mod_consts.const_str_plain_getpeercert);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_getpeercert);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_version", mod_consts.const_str_plain_version);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_version);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cipher", mod_consts.const_str_plain_cipher);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_cipher);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_selected_alpn_protocol", mod_consts.const_str_plain_selected_alpn_protocol);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_selected_alpn_protocol);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_shared_ciphers", mod_consts.const_str_plain_shared_ciphers);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_shared_ciphers);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_compression", mod_consts.const_str_plain_compression);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_compression);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_settimeout", mod_consts.const_str_plain_settimeout);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_settimeout);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_gettimeout", mod_consts.const_str_plain_gettimeout);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_gettimeout);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__decref_socketios", mod_consts.const_str_plain__decref_socketios);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain__decref_socketios);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSLError", mod_consts.const_str_plain_SSLError);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSLError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_errno", mod_consts.const_str_plain_errno);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_errno);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_ERROR_EOF", mod_consts.const_str_plain_SSL_ERROR_EOF);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_ERROR_EOF);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_should_loop", mod_consts.const_str_plain_should_loop);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_should_loop);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_arg1", mod_consts.const_str_plain_arg1);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_arg1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_arg2", mod_consts.const_str_plain_arg2);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_arg2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_func", mod_consts.const_str_plain_func);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_func);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_ERROR_WANT_READ", mod_consts.const_str_plain_SSL_ERROR_WANT_READ);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_ERROR_WANT_READ);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_ERROR_WANT_WRITE", mod_consts.const_str_plain_SSL_ERROR_WANT_WRITE);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_ERROR_WANT_WRITE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sendall", mod_consts.const_str_plain_sendall);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_sendall);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_recv", mod_consts.const_str_plain_recv);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_recv);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_BLOCKSIZE", mod_consts.const_str_plain_SSL_BLOCKSIZE);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_BLOCKSIZE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_write_eof", mod_consts.const_str_plain_write_eof);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_write_eof);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__ReturnValue", mod_consts.const_str_plain__ReturnValue);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain__ReturnValue);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ret", mod_consts.const_str_plain_ret);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_ret);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_33b398202dbf7c54ddd4ec2ecd716168", mod_consts.const_str_digest_33b398202dbf7c54ddd4ec2ecd716168);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_33b398202dbf7c54ddd4ec2ecd716168);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_io", mod_consts.const_str_plain_io);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_io);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_typing", mod_consts.const_str_plain_typing);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exceptions", mod_consts.const_str_plain_exceptions);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ProxySchemeUnsupported_tuple", mod_consts.const_tuple_str_plain_ProxySchemeUnsupported_tuple);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ProxySchemeUnsupported_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Union", mod_consts.const_str_plain_Union);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_bytearray_type_memoryview_tuple", mod_consts.const_tuple_type_bytearray_type_memoryview_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_type_bytearray_type_memoryview_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__WriteBuffer", mod_consts.const_str_plain__WriteBuffer);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain__WriteBuffer);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TypeVar", mod_consts.const_str_plain_TypeVar);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__ReturnValue_tuple", mod_consts.const_tuple_str_plain__ReturnValue_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__ReturnValue_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16384", mod_consts.const_int_pos_16384);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_int_pos_16384);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2c29860d05cd0f70ce2a7aa252d7abab", mod_consts.const_str_digest_2c29860d05cd0f70ce2a7aa252d7abab);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_2c29860d05cd0f70ce2a7aa252d7abab);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_17b936ec84f90ef2ceb009bf3ae87305", mod_consts.const_str_digest_17b936ec84f90ef2ceb009bf3ae87305);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_17b936ec84f90ef2ceb009bf3ae87305);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSLTransport", mod_consts.const_str_plain_SSLTransport);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSLTransport);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_22", mod_consts.const_int_pos_22);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_int_pos_22);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_3b9dc660740346b94603dc8b405c9bc2", mod_consts.const_dict_3b9dc660740346b94603dc8b405c9bc2);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_dict_3b9dc660740346b94603dc8b405c9bc2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__validate_ssl_context_for_tls_in_tls", mod_consts.const_str_plain__validate_ssl_context_for_tls_in_tls);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain__validate_ssl_context_for_tls_in_tls);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_beed7828015b058e5bd0ec35067d0d81", mod_consts.const_str_digest_beed7828015b058e5bd0ec35067d0d81);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_beed7828015b058e5bd0ec35067d0d81);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_true_tuple", mod_consts.const_tuple_none_true_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_tuple_none_true_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_4fff830355357b589f7a4ca9e2388b16", mod_consts.const_dict_4fff830355357b589f7a4ca9e2388b16);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_dict_4fff830355357b589f7a4ca9e2388b16);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_53f15f47455fd0edd9e007023ca79b28", mod_consts.const_str_digest_53f15f47455fd0edd9e007023ca79b28);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_53f15f47455fd0edd9e007023ca79b28);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_71adc2ba5737c82f5bb97b4d3b034ead", mod_consts.const_dict_71adc2ba5737c82f5bb97b4d3b034ead);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_dict_71adc2ba5737c82f5bb97b4d3b034ead);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f5df8061b1f344fa865cf4121fe1de11", mod_consts.const_str_digest_f5df8061b1f344fa865cf4121fe1de11);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_digest_f5df8061b1f344fa865cf4121fe1de11);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_13a755637c2f9d75083d4a744c6110ea", mod_consts.const_dict_13a755637c2f9d75083d4a744c6110ea);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_dict_13a755637c2f9d75083d4a744c6110ea);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6487bc96292b1c7b592c78c6a546adc9", mod_consts.const_str_digest_6487bc96292b1c7b592c78c6a546adc9);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_6487bc96292b1c7b592c78c6a546adc9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261", mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2866f307e85513f9d45eb3e07b9778a4", mod_consts.const_str_digest_2866f307e85513f9d45eb3e07b9778a4);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_2866f307e85513f9d45eb3e07b9778a4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_1024_none_tuple", mod_consts.const_tuple_int_pos_1024_none_tuple);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1024_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_d271f2c8d0bdce4e5eb7feb19f476388", mod_consts.const_dict_d271f2c8d0bdce4e5eb7feb19f476388);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_dict_d271f2c8d0bdce4e5eb7feb19f476388);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e5c02be6b5703820d444a6caf78ce3aa", mod_consts.const_str_digest_e5c02be6b5703820d444a6caf78ce3aa);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_digest_e5c02be6b5703820d444a6caf78ce3aa);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_1024_int_0_tuple", mod_consts.const_tuple_int_pos_1024_int_0_tuple);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1024_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_aeb76f3b38d3e4ccac913698834b1ff8", mod_consts.const_dict_aeb76f3b38d3e4ccac913698834b1ff8);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_dict_aeb76f3b38d3e4ccac913698834b1ff8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6e982273ed6594c56e59708bc717a559", mod_consts.const_str_digest_6e982273ed6594c56e59708bc717a559);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_digest_6e982273ed6594c56e59708bc717a559);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_int_0_tuple", mod_consts.const_tuple_none_int_0_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_tuple_none_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_7d39ad0b502f2117f82fecb4f5b5834b", mod_consts.const_dict_7d39ad0b502f2117f82fecb4f5b5834b);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_dict_7d39ad0b502f2117f82fecb4f5b5834b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_recv_into", mod_consts.const_str_plain_recv_into);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_recv_into);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6be9ad68af3587dfb654c5d7ccdd6256", mod_consts.const_str_digest_6be9ad68af3587dfb654c5d7ccdd6256);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_digest_6be9ad68af3587dfb654c5d7ccdd6256);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_tuple", mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_d4d7a65a2ce6438480576e81b1a42b1a", mod_consts.const_dict_d4d7a65a2ce6438480576e81b1a42b1a);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_dict_d4d7a65a2ce6438480576e81b1a42b1a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2a8adc5022e16ff4a45571b5138d856d", mod_consts.const_str_digest_2a8adc5022e16ff4a45571b5138d856d);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_2a8adc5022e16ff4a45571b5138d856d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_185f2e2f0150ebfb4d7cb1239b0c8b71", mod_consts.const_dict_185f2e2f0150ebfb4d7cb1239b0c8b71);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_dict_185f2e2f0150ebfb4d7cb1239b0c8b71);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d4b885a810fc8f78c524bfcc62f67f47", mod_consts.const_str_digest_d4b885a810fc8f78c524bfcc62f67f47);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_d4b885a810fc8f78c524bfcc62f67f47);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_4943746162ff4a7e2531a4e46f999ee4", mod_consts.const_dict_4943746162ff4a7e2531a4e46f999ee4);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_dict_4943746162ff4a7e2531a4e46f999ee4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_9ebb29186c967c0ff0cc2318af1921b4", mod_consts.const_dict_9ebb29186c967c0ff0cc2318af1921b4);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_dict_9ebb29186c967c0ff0cc2318af1921b4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_makefile", mod_consts.const_str_plain_makefile);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_makefile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e2ca366709c92ea36d1cf068966574ab", mod_consts.const_str_digest_e2ca366709c92ea36d1cf068966574ab);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_e2ca366709c92ea36d1cf068966574ab);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb", mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7a201e48fcbb2e4a3fe293437029a84d", mod_consts.const_str_digest_7a201e48fcbb2e4a3fe293437029a84d);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_7a201e48fcbb2e4a3fe293437029a84d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8a933ac923910b22f88c0294a3e717a2", mod_consts.const_str_digest_8a933ac923910b22f88c0294a3e717a2);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_digest_8a933ac923910b22f88c0294a3e717a2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_overload", mod_consts.const_str_plain_overload);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_overload);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_ellipsis_tuple", mod_consts.const_tuple_ellipsis_tuple);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_ellipsis_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_780fe9cbfec162e2db078532c930f208", mod_consts.const_dict_780fe9cbfec162e2db078532c930f208);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_dict_780fe9cbfec162e2db078532c930f208);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6167fe1c698a03bebfc2a50dfc064495", mod_consts.const_str_digest_6167fe1c698a03bebfc2a50dfc064495);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_digest_6167fe1c698a03bebfc2a50dfc064495);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b16ccc0f0d6c0b9fce0bf19e952737db", mod_consts.const_dict_b16ccc0f0d6c0b9fce0bf19e952737db);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_dict_b16ccc0f0d6c0b9fce0bf19e952737db);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_false_tuple", mod_consts.const_tuple_false_tuple);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_7a237afe69cca399fb38fa51fe0a8825", mod_consts.const_dict_7a237afe69cca399fb38fa51fe0a8825);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_dict_7a237afe69cca399fb38fa51fe0a8825);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071", mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9be10114a6296958277ace143227d15d", mod_consts.const_str_digest_9be10114a6296958277ace143227d15d);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_9be10114a6296958277ace143227d15d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_2256e10b9ff9e3202801e32b00d2665d", mod_consts.const_dict_2256e10b9ff9e3202801e32b00d2665d);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_dict_2256e10b9ff9e3202801e32b00d2665d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c3f2b7cceb73824fef1bad37229f5942", mod_consts.const_str_digest_c3f2b7cceb73824fef1bad37229f5942);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_c3f2b7cceb73824fef1bad37229f5942);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dc908cf90cc6a5f2a5db310cd04f7330", mod_consts.const_str_digest_dc908cf90cc6a5f2a5db310cd04f7330);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc908cf90cc6a5f2a5db310cd04f7330);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e11d384d77b1f3f69d3cea2c8863295b", mod_consts.const_dict_e11d384d77b1f3f69d3cea2c8863295b);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_dict_e11d384d77b1f3f69d3cea2c8863295b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ed12867892805cc3edfcd62ce355a47d", mod_consts.const_str_digest_ed12867892805cc3edfcd62ce355a47d);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_digest_ed12867892805cc3edfcd62ce355a47d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d9230878b21d3316542d1b7aba5b391e", mod_consts.const_str_digest_d9230878b21d3316542d1b7aba5b391e);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_d9230878b21d3316542d1b7aba5b391e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_186d8b6261a894f17d141ea2fe94c71f", mod_consts.const_dict_186d8b6261a894f17d141ea2fe94c71f);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_dict_186d8b6261a894f17d141ea2fe94c71f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_aeb0f82511ae06f3df16270cadc26672", mod_consts.const_str_digest_aeb0f82511ae06f3df16270cadc26672);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_aeb0f82511ae06f3df16270cadc26672);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_db7decffacc19a524dc0bb9b22309b52", mod_consts.const_dict_db7decffacc19a524dc0bb9b22309b52);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_dict_db7decffacc19a524dc0bb9b22309b52);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7039b726d187d45b79e8366a29db2241", mod_consts.const_str_digest_7039b726d187d45b79e8366a29db2241);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_digest_7039b726d187d45b79e8366a29db2241);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5c97b0757d3a35986fcab7a9a805f7a2", mod_consts.const_str_digest_5c97b0757d3a35986fcab7a9a805f7a2);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_digest_5c97b0757d3a35986fcab7a9a805f7a2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_affb0a54cd9bab244f60da2111ce4a4d", mod_consts.const_dict_affb0a54cd9bab244f60da2111ce4a4d);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_dict_affb0a54cd9bab244f60da2111ce4a4d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c57c02e66ad506bd06df355b0e76d2ec", mod_consts.const_str_digest_c57c02e66ad506bd06df355b0e76d2ec);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_digest_c57c02e66ad506bd06df355b0e76d2ec);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_027f3b46cbd5305a22425539c139edf8", mod_consts.const_dict_027f3b46cbd5305a22425539c139edf8);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_dict_027f3b46cbd5305a22425539c139edf8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4c4369abc9b798df8fc3818a222085d2", mod_consts.const_str_digest_4c4369abc9b798df8fc3818a222085d2);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_digest_4c4369abc9b798df8fc3818a222085d2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_12e86a24afbffdf8f59caf6d5a1ef557", mod_consts.const_dict_12e86a24afbffdf8f59caf6d5a1ef557);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_dict_12e86a24afbffdf8f59caf6d5a1ef557);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e2e568c7d717b6cf609c0027ed1ac3e4", mod_consts.const_dict_e2e568c7d717b6cf609c0027ed1ac3e4);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_dict_e2e568c7d717b6cf609c0027ed1ac3e4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_tuple", mod_consts.const_tuple_none_none_tuple);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_953c401f035074b70dcfab5234f66116", mod_consts.const_dict_953c401f035074b70dcfab5234f66116);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_dict_953c401f035074b70dcfab5234f66116);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_268c19830aae6d57b5dfef7ecc01f801_tuple", mod_consts.const_tuple_268c19830aae6d57b5dfef7ecc01f801_tuple);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_tuple_268c19830aae6d57b5dfef7ecc01f801_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a832f867d4dc987634dc141072e2905a", mod_consts.const_str_digest_a832f867d4dc987634dc141072e2905a);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_digest_a832f867d4dc987634dc141072e2905a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_db075caf482153b5f9d1ae2a251036c0", mod_consts.const_str_digest_db075caf482153b5f9d1ae2a251036c0);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_digest_db075caf482153b5f9d1ae2a251036c0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_underscore_tuple", mod_consts.const_tuple_str_plain_self_str_underscore_tuple);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_underscore_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_69f31fc43fd9d48091e384f3fceae4b3_tuple", mod_consts.const_tuple_69f31fc43fd9d48091e384f3fceae4b3_tuple);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_tuple_69f31fc43fd9d48091e384f3fceae4b3_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_func_tuple", mod_consts.const_tuple_str_plain_self_str_plain_func_tuple);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_func_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_func_str_plain_arg1_tuple", mod_consts.const_tuple_str_plain_self_str_plain_func_str_plain_arg1_tuple);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_func_str_plain_arg1_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_func_str_plain_arg1_str_plain_arg2_tuple", mod_consts.const_tuple_str_plain_self_str_plain_func_str_plain_arg1_str_plain_arg2_tuple);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_func_str_plain_arg1_str_plain_arg2_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_ec7470e2c9c2c39e847c70d927161aef_tuple", mod_consts.const_tuple_ec7470e2c9c2c39e847c70d927161aef_tuple);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_tuple_ec7470e2c9c2c39e847c70d927161aef_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ssl_context_tuple", mod_consts.const_tuple_str_plain_ssl_context_tuple);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ssl_context_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_len_str_plain_buffer_str_plain_e_tuple", mod_consts.const_tuple_str_plain_self_str_plain_len_str_plain_buffer_str_plain_e_tuple);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_len_str_plain_buffer_str_plain_e_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_binary_form_tuple", mod_consts.const_tuple_str_plain_self_str_plain_binary_form_tuple);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_binary_form_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_712c1b050ab3009195093ff0988cd435_tuple", mod_consts.const_tuple_712c1b050ab3009195093ff0988cd435_tuple);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_tuple_712c1b050ab3009195093ff0988cd435_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_len_str_plain_buffer_tuple", mod_consts.const_tuple_str_plain_self_str_plain_len_str_plain_buffer_tuple);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_len_str_plain_buffer_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_buflen_str_plain_flags_tuple", mod_consts.const_tuple_str_plain_self_str_plain_buflen_str_plain_flags_tuple);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_buflen_str_plain_flags_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_cbf6c250f999c2b551306c5895bbcdba_tuple", mod_consts.const_tuple_cbf6c250f999c2b551306c5895bbcdba_tuple);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_tuple_cbf6c250f999c2b551306c5895bbcdba_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_flags_tuple", mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_flags_tuple);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_flags_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_554a29f49c2be0efb946d2c5e1d2787e_tuple", mod_consts.const_tuple_554a29f49c2be0efb946d2c5e1d2787e_tuple);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_tuple_554a29f49c2be0efb946d2c5e1d2787e_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_value_tuple", mod_consts.const_tuple_str_plain_self_str_plain_value_tuple);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple);
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
void checkModuleConstants_urllib3$util$ssltransport(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wrap_bio", mod_consts.const_str_plain_wrap_bio);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_wrap_bio) && "mod_consts.const_str_plain_wrap_bio");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProxySchemeUnsupported", mod_consts.const_str_plain_ProxySchemeUnsupported);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProxySchemeUnsupported) && "mod_consts.const_str_plain_ProxySchemeUnsupported");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_a112848159e46580d55c9935e74da7e6_tuple", mod_consts.const_tuple_str_digest_a112848159e46580d55c9935e74da7e6_tuple);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a112848159e46580d55c9935e74da7e6_tuple) && "mod_consts.const_tuple_str_digest_a112848159e46580d55c9935e74da7e6_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_061852b76b1704f8c2fc53b3a010ee1e", mod_consts.const_str_digest_061852b76b1704f8c2fc53b3a010ee1e);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_061852b76b1704f8c2fc53b3a010ee1e) && "mod_consts.const_str_digest_061852b76b1704f8c2fc53b3a010ee1e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ssl", mod_consts.const_str_plain_ssl);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_ssl) && "mod_consts.const_str_plain_ssl");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MemoryBIO", mod_consts.const_str_plain_MemoryBIO);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_MemoryBIO) && "mod_consts.const_str_plain_MemoryBIO");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_incoming", mod_consts.const_str_plain_incoming);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_incoming) && "mod_consts.const_str_plain_incoming");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_outgoing", mod_consts.const_str_plain_outgoing);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_outgoing) && "mod_consts.const_str_plain_outgoing");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_suppress_ragged_eofs", mod_consts.const_str_plain_suppress_ragged_eofs);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_suppress_ragged_eofs) && "mod_consts.const_str_plain_suppress_ragged_eofs");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_socket", mod_consts.const_str_plain_socket);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_socket) && "mod_consts.const_str_plain_socket");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_server_hostname_tuple", mod_consts.const_tuple_str_plain_server_hostname_tuple);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_server_hostname_tuple) && "mod_consts.const_tuple_str_plain_server_hostname_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sslobj", mod_consts.const_str_plain_sslobj);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_sslobj) && "mod_consts.const_str_plain_sslobj");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__ssl_io_loop", mod_consts.const_str_plain__ssl_io_loop);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain__ssl_io_loop) && "mod_consts.const_str_plain__ssl_io_loop");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_do_handshake", mod_consts.const_str_plain_do_handshake);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_do_handshake) && "mod_consts.const_str_plain_do_handshake");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b473cbaded27903f3fd7a967b151a31d", mod_consts.const_str_digest_b473cbaded27903f3fd7a967b151a31d);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_b473cbaded27903f3fd7a967b151a31d) && "mod_consts.const_str_digest_b473cbaded27903f3fd7a967b151a31d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__wrap_ssl_read", mod_consts.const_str_plain__wrap_ssl_read);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain__wrap_ssl_read) && "mod_consts.const_str_plain__wrap_ssl_read");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f5907d1953e4c81926367a875b9068f4", mod_consts.const_str_digest_f5907d1953e4c81926367a875b9068f4);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_f5907d1953e4c81926367a875b9068f4) && "mod_consts.const_str_digest_f5907d1953e4c81926367a875b9068f4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_58b6ee6d40d0be9a28d966f53bcc6a1b", mod_consts.const_str_digest_58b6ee6d40d0be9a28d966f53bcc6a1b);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_58b6ee6d40d0be9a28d966f53bcc6a1b) && "mod_consts.const_str_digest_58b6ee6d40d0be9a28d966f53bcc6a1b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2e5c7bcd7654bd30a3dbe3d1bcb82ba9", mod_consts.const_str_digest_2e5c7bcd7654bd30a3dbe3d1bcb82ba9);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_2e5c7bcd7654bd30a3dbe3d1bcb82ba9) && "mod_consts.const_str_digest_2e5c7bcd7654bd30a3dbe3d1bcb82ba9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cast", mod_consts.const_str_plain_cast);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_cast) && "mod_consts.const_str_plain_cast");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_B_tuple", mod_consts.const_tuple_str_plain_B_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_B_tuple) && "mod_consts.const_tuple_str_plain_B_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_count", mod_consts.const_str_plain_count);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_count) && "mod_consts.const_str_plain_count");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_self", mod_consts.const_str_plain_self);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_self) && "mod_consts.const_str_plain_self");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_none_tuple", mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple) && "mod_consts.const_tuple_none_none_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ae0010517f0f5ba1b4d7e7de0c86a25f", mod_consts.const_str_digest_ae0010517f0f5ba1b4d7e7de0c86a25f);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_ae0010517f0f5ba1b4d7e7de0c86a25f) && "mod_consts.const_str_digest_ae0010517f0f5ba1b4d7e7de0c86a25f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_write", mod_consts.const_str_plain_write);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_write) && "mod_consts.const_str_plain_write");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_set_38ac54b0a8a995c7edae10aa18c58dad", mod_consts.const_set_38ac54b0a8a995c7edae10aa18c58dad);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_set_38ac54b0a8a995c7edae10aa18c58dad) && "mod_consts.const_set_38ac54b0a8a995c7edae10aa18c58dad");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ed3208d107536d41d627d96a338acb63", mod_consts.const_str_digest_ed3208d107536d41d627d96a338acb63);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_ed3208d107536d41d627d96a338acb63) && "mod_consts.const_str_digest_ed3208d107536d41d627d96a338acb63");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8600cd96cda1dad314813b0352cbdec5", mod_consts.const_str_digest_8600cd96cda1dad314813b0352cbdec5);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_8600cd96cda1dad314813b0352cbdec5) && "mod_consts.const_str_digest_8600cd96cda1dad314813b0352cbdec5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SocketIO", mod_consts.const_str_plain_SocketIO);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_SocketIO) && "mod_consts.const_str_plain_SocketIO");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__io_refs", mod_consts.const_str_plain__io_refs);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain__io_refs) && "mod_consts.const_str_plain__io_refs");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DEFAULT_BUFFER_SIZE", mod_consts.const_str_plain_DEFAULT_BUFFER_SIZE);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_BUFFER_SIZE) && "mod_consts.const_str_plain_DEFAULT_BUFFER_SIZE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_397bad4f1f82195a3ed46c76f3f81db2", mod_consts.const_str_digest_397bad4f1f82195a3ed46c76f3f81db2);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_397bad4f1f82195a3ed46c76f3f81db2) && "mod_consts.const_str_digest_397bad4f1f82195a3ed46c76f3f81db2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BufferedRWPair", mod_consts.const_str_plain_BufferedRWPair);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_BufferedRWPair) && "mod_consts.const_str_plain_BufferedRWPair");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BufferedReader", mod_consts.const_str_plain_BufferedReader);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_BufferedReader) && "mod_consts.const_str_plain_BufferedReader");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BufferedWriter", mod_consts.const_str_plain_BufferedWriter);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_BufferedWriter) && "mod_consts.const_str_plain_BufferedWriter");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TextIOWrapper", mod_consts.const_str_plain_TextIOWrapper);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_TextIOWrapper) && "mod_consts.const_str_plain_TextIOWrapper");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mode", mod_consts.const_str_plain_mode);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_mode) && "mod_consts.const_str_plain_mode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6e912304cc47aaf5aa16b32778f0085c", mod_consts.const_str_digest_6e912304cc47aaf5aa16b32778f0085c);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_6e912304cc47aaf5aa16b32778f0085c) && "mod_consts.const_str_digest_6e912304cc47aaf5aa16b32778f0085c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unwrap", mod_consts.const_str_plain_unwrap);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_unwrap) && "mod_consts.const_str_plain_unwrap");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getpeercert", mod_consts.const_str_plain_getpeercert);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_getpeercert) && "mod_consts.const_str_plain_getpeercert");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_version", mod_consts.const_str_plain_version);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_version) && "mod_consts.const_str_plain_version");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cipher", mod_consts.const_str_plain_cipher);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_cipher) && "mod_consts.const_str_plain_cipher");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_selected_alpn_protocol", mod_consts.const_str_plain_selected_alpn_protocol);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_selected_alpn_protocol) && "mod_consts.const_str_plain_selected_alpn_protocol");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_shared_ciphers", mod_consts.const_str_plain_shared_ciphers);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_shared_ciphers) && "mod_consts.const_str_plain_shared_ciphers");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_compression", mod_consts.const_str_plain_compression);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_compression) && "mod_consts.const_str_plain_compression");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_settimeout", mod_consts.const_str_plain_settimeout);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_settimeout) && "mod_consts.const_str_plain_settimeout");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_gettimeout", mod_consts.const_str_plain_gettimeout);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_gettimeout) && "mod_consts.const_str_plain_gettimeout");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__decref_socketios", mod_consts.const_str_plain__decref_socketios);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain__decref_socketios) && "mod_consts.const_str_plain__decref_socketios");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSLError", mod_consts.const_str_plain_SSLError);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSLError) && "mod_consts.const_str_plain_SSLError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_errno", mod_consts.const_str_plain_errno);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_errno) && "mod_consts.const_str_plain_errno");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_ERROR_EOF", mod_consts.const_str_plain_SSL_ERROR_EOF);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_ERROR_EOF) && "mod_consts.const_str_plain_SSL_ERROR_EOF");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_should_loop", mod_consts.const_str_plain_should_loop);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_should_loop) && "mod_consts.const_str_plain_should_loop");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_arg1", mod_consts.const_str_plain_arg1);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_arg1) && "mod_consts.const_str_plain_arg1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_arg2", mod_consts.const_str_plain_arg2);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_arg2) && "mod_consts.const_str_plain_arg2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_func", mod_consts.const_str_plain_func);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_func) && "mod_consts.const_str_plain_func");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_ERROR_WANT_READ", mod_consts.const_str_plain_SSL_ERROR_WANT_READ);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_ERROR_WANT_READ) && "mod_consts.const_str_plain_SSL_ERROR_WANT_READ");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_ERROR_WANT_WRITE", mod_consts.const_str_plain_SSL_ERROR_WANT_WRITE);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_ERROR_WANT_WRITE) && "mod_consts.const_str_plain_SSL_ERROR_WANT_WRITE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sendall", mod_consts.const_str_plain_sendall);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_sendall) && "mod_consts.const_str_plain_sendall");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_recv", mod_consts.const_str_plain_recv);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_recv) && "mod_consts.const_str_plain_recv");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_BLOCKSIZE", mod_consts.const_str_plain_SSL_BLOCKSIZE);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_BLOCKSIZE) && "mod_consts.const_str_plain_SSL_BLOCKSIZE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_write_eof", mod_consts.const_str_plain_write_eof);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_write_eof) && "mod_consts.const_str_plain_write_eof");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__ReturnValue", mod_consts.const_str_plain__ReturnValue);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain__ReturnValue) && "mod_consts.const_str_plain__ReturnValue");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ret", mod_consts.const_str_plain_ret);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_ret) && "mod_consts.const_str_plain_ret");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_33b398202dbf7c54ddd4ec2ecd716168", mod_consts.const_str_digest_33b398202dbf7c54ddd4ec2ecd716168);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_33b398202dbf7c54ddd4ec2ecd716168) && "mod_consts.const_str_digest_33b398202dbf7c54ddd4ec2ecd716168");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_io", mod_consts.const_str_plain_io);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_io) && "mod_consts.const_str_plain_io");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_typing", mod_consts.const_str_plain_typing);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing) && "mod_consts.const_str_plain_typing");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exceptions", mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions) && "mod_consts.const_str_plain_exceptions");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ProxySchemeUnsupported_tuple", mod_consts.const_tuple_str_plain_ProxySchemeUnsupported_tuple);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ProxySchemeUnsupported_tuple) && "mod_consts.const_tuple_str_plain_ProxySchemeUnsupported_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_int_pos_2) && "mod_consts.const_int_pos_2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Union", mod_consts.const_str_plain_Union);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union) && "mod_consts.const_str_plain_Union");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_bytearray_type_memoryview_tuple", mod_consts.const_tuple_type_bytearray_type_memoryview_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_type_bytearray_type_memoryview_tuple) && "mod_consts.const_tuple_type_bytearray_type_memoryview_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__WriteBuffer", mod_consts.const_str_plain__WriteBuffer);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain__WriteBuffer) && "mod_consts.const_str_plain__WriteBuffer");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TypeVar", mod_consts.const_str_plain_TypeVar);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar) && "mod_consts.const_str_plain_TypeVar");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__ReturnValue_tuple", mod_consts.const_tuple_str_plain__ReturnValue_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__ReturnValue_tuple) && "mod_consts.const_tuple_str_plain__ReturnValue_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16384", mod_consts.const_int_pos_16384);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_int_pos_16384) && "mod_consts.const_int_pos_16384");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2c29860d05cd0f70ce2a7aa252d7abab", mod_consts.const_str_digest_2c29860d05cd0f70ce2a7aa252d7abab);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_2c29860d05cd0f70ce2a7aa252d7abab) && "mod_consts.const_str_digest_2c29860d05cd0f70ce2a7aa252d7abab");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_17b936ec84f90ef2ceb009bf3ae87305", mod_consts.const_str_digest_17b936ec84f90ef2ceb009bf3ae87305);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_17b936ec84f90ef2ceb009bf3ae87305) && "mod_consts.const_str_digest_17b936ec84f90ef2ceb009bf3ae87305");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSLTransport", mod_consts.const_str_plain_SSLTransport);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSLTransport) && "mod_consts.const_str_plain_SSLTransport");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_22", mod_consts.const_int_pos_22);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_int_pos_22) && "mod_consts.const_int_pos_22");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_3b9dc660740346b94603dc8b405c9bc2", mod_consts.const_dict_3b9dc660740346b94603dc8b405c9bc2);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_dict_3b9dc660740346b94603dc8b405c9bc2) && "mod_consts.const_dict_3b9dc660740346b94603dc8b405c9bc2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__validate_ssl_context_for_tls_in_tls", mod_consts.const_str_plain__validate_ssl_context_for_tls_in_tls);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain__validate_ssl_context_for_tls_in_tls) && "mod_consts.const_str_plain__validate_ssl_context_for_tls_in_tls");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_beed7828015b058e5bd0ec35067d0d81", mod_consts.const_str_digest_beed7828015b058e5bd0ec35067d0d81);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_beed7828015b058e5bd0ec35067d0d81) && "mod_consts.const_str_digest_beed7828015b058e5bd0ec35067d0d81");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_true_tuple", mod_consts.const_tuple_none_true_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_tuple_none_true_tuple) && "mod_consts.const_tuple_none_true_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_4fff830355357b589f7a4ca9e2388b16", mod_consts.const_dict_4fff830355357b589f7a4ca9e2388b16);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_dict_4fff830355357b589f7a4ca9e2388b16) && "mod_consts.const_dict_4fff830355357b589f7a4ca9e2388b16");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_53f15f47455fd0edd9e007023ca79b28", mod_consts.const_str_digest_53f15f47455fd0edd9e007023ca79b28);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_53f15f47455fd0edd9e007023ca79b28) && "mod_consts.const_str_digest_53f15f47455fd0edd9e007023ca79b28");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_71adc2ba5737c82f5bb97b4d3b034ead", mod_consts.const_dict_71adc2ba5737c82f5bb97b4d3b034ead);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_dict_71adc2ba5737c82f5bb97b4d3b034ead) && "mod_consts.const_dict_71adc2ba5737c82f5bb97b4d3b034ead");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f5df8061b1f344fa865cf4121fe1de11", mod_consts.const_str_digest_f5df8061b1f344fa865cf4121fe1de11);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_digest_f5df8061b1f344fa865cf4121fe1de11) && "mod_consts.const_str_digest_f5df8061b1f344fa865cf4121fe1de11");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_13a755637c2f9d75083d4a744c6110ea", mod_consts.const_dict_13a755637c2f9d75083d4a744c6110ea);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_dict_13a755637c2f9d75083d4a744c6110ea) && "mod_consts.const_dict_13a755637c2f9d75083d4a744c6110ea");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6487bc96292b1c7b592c78c6a546adc9", mod_consts.const_str_digest_6487bc96292b1c7b592c78c6a546adc9);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_6487bc96292b1c7b592c78c6a546adc9) && "mod_consts.const_str_digest_6487bc96292b1c7b592c78c6a546adc9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261", mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261) && "mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2866f307e85513f9d45eb3e07b9778a4", mod_consts.const_str_digest_2866f307e85513f9d45eb3e07b9778a4);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_2866f307e85513f9d45eb3e07b9778a4) && "mod_consts.const_str_digest_2866f307e85513f9d45eb3e07b9778a4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_1024_none_tuple", mod_consts.const_tuple_int_pos_1024_none_tuple);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1024_none_tuple) && "mod_consts.const_tuple_int_pos_1024_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_d271f2c8d0bdce4e5eb7feb19f476388", mod_consts.const_dict_d271f2c8d0bdce4e5eb7feb19f476388);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_dict_d271f2c8d0bdce4e5eb7feb19f476388) && "mod_consts.const_dict_d271f2c8d0bdce4e5eb7feb19f476388");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e5c02be6b5703820d444a6caf78ce3aa", mod_consts.const_str_digest_e5c02be6b5703820d444a6caf78ce3aa);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_digest_e5c02be6b5703820d444a6caf78ce3aa) && "mod_consts.const_str_digest_e5c02be6b5703820d444a6caf78ce3aa");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_1024_int_0_tuple", mod_consts.const_tuple_int_pos_1024_int_0_tuple);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1024_int_0_tuple) && "mod_consts.const_tuple_int_pos_1024_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_aeb76f3b38d3e4ccac913698834b1ff8", mod_consts.const_dict_aeb76f3b38d3e4ccac913698834b1ff8);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_dict_aeb76f3b38d3e4ccac913698834b1ff8) && "mod_consts.const_dict_aeb76f3b38d3e4ccac913698834b1ff8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6e982273ed6594c56e59708bc717a559", mod_consts.const_str_digest_6e982273ed6594c56e59708bc717a559);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_digest_6e982273ed6594c56e59708bc717a559) && "mod_consts.const_str_digest_6e982273ed6594c56e59708bc717a559");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_int_0_tuple", mod_consts.const_tuple_none_int_0_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_tuple_none_int_0_tuple) && "mod_consts.const_tuple_none_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_7d39ad0b502f2117f82fecb4f5b5834b", mod_consts.const_dict_7d39ad0b502f2117f82fecb4f5b5834b);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_dict_7d39ad0b502f2117f82fecb4f5b5834b) && "mod_consts.const_dict_7d39ad0b502f2117f82fecb4f5b5834b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_recv_into", mod_consts.const_str_plain_recv_into);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_recv_into) && "mod_consts.const_str_plain_recv_into");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6be9ad68af3587dfb654c5d7ccdd6256", mod_consts.const_str_digest_6be9ad68af3587dfb654c5d7ccdd6256);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_digest_6be9ad68af3587dfb654c5d7ccdd6256) && "mod_consts.const_str_digest_6be9ad68af3587dfb654c5d7ccdd6256");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_tuple", mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple) && "mod_consts.const_tuple_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_d4d7a65a2ce6438480576e81b1a42b1a", mod_consts.const_dict_d4d7a65a2ce6438480576e81b1a42b1a);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_dict_d4d7a65a2ce6438480576e81b1a42b1a) && "mod_consts.const_dict_d4d7a65a2ce6438480576e81b1a42b1a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2a8adc5022e16ff4a45571b5138d856d", mod_consts.const_str_digest_2a8adc5022e16ff4a45571b5138d856d);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_2a8adc5022e16ff4a45571b5138d856d) && "mod_consts.const_str_digest_2a8adc5022e16ff4a45571b5138d856d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_185f2e2f0150ebfb4d7cb1239b0c8b71", mod_consts.const_dict_185f2e2f0150ebfb4d7cb1239b0c8b71);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_dict_185f2e2f0150ebfb4d7cb1239b0c8b71) && "mod_consts.const_dict_185f2e2f0150ebfb4d7cb1239b0c8b71");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d4b885a810fc8f78c524bfcc62f67f47", mod_consts.const_str_digest_d4b885a810fc8f78c524bfcc62f67f47);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_d4b885a810fc8f78c524bfcc62f67f47) && "mod_consts.const_str_digest_d4b885a810fc8f78c524bfcc62f67f47");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple) && "mod_consts.const_tuple_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_4943746162ff4a7e2531a4e46f999ee4", mod_consts.const_dict_4943746162ff4a7e2531a4e46f999ee4);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_dict_4943746162ff4a7e2531a4e46f999ee4) && "mod_consts.const_dict_4943746162ff4a7e2531a4e46f999ee4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_9ebb29186c967c0ff0cc2318af1921b4", mod_consts.const_dict_9ebb29186c967c0ff0cc2318af1921b4);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_dict_9ebb29186c967c0ff0cc2318af1921b4) && "mod_consts.const_dict_9ebb29186c967c0ff0cc2318af1921b4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_makefile", mod_consts.const_str_plain_makefile);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_makefile) && "mod_consts.const_str_plain_makefile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e2ca366709c92ea36d1cf068966574ab", mod_consts.const_str_digest_e2ca366709c92ea36d1cf068966574ab);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_e2ca366709c92ea36d1cf068966574ab) && "mod_consts.const_str_digest_e2ca366709c92ea36d1cf068966574ab");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb", mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb) && "mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7a201e48fcbb2e4a3fe293437029a84d", mod_consts.const_str_digest_7a201e48fcbb2e4a3fe293437029a84d);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_7a201e48fcbb2e4a3fe293437029a84d) && "mod_consts.const_str_digest_7a201e48fcbb2e4a3fe293437029a84d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8a933ac923910b22f88c0294a3e717a2", mod_consts.const_str_digest_8a933ac923910b22f88c0294a3e717a2);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_digest_8a933ac923910b22f88c0294a3e717a2) && "mod_consts.const_str_digest_8a933ac923910b22f88c0294a3e717a2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_overload", mod_consts.const_str_plain_overload);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_overload) && "mod_consts.const_str_plain_overload");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_ellipsis_tuple", mod_consts.const_tuple_ellipsis_tuple);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_ellipsis_tuple) && "mod_consts.const_tuple_ellipsis_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_780fe9cbfec162e2db078532c930f208", mod_consts.const_dict_780fe9cbfec162e2db078532c930f208);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_dict_780fe9cbfec162e2db078532c930f208) && "mod_consts.const_dict_780fe9cbfec162e2db078532c930f208");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6167fe1c698a03bebfc2a50dfc064495", mod_consts.const_str_digest_6167fe1c698a03bebfc2a50dfc064495);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_digest_6167fe1c698a03bebfc2a50dfc064495) && "mod_consts.const_str_digest_6167fe1c698a03bebfc2a50dfc064495");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b16ccc0f0d6c0b9fce0bf19e952737db", mod_consts.const_dict_b16ccc0f0d6c0b9fce0bf19e952737db);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_dict_b16ccc0f0d6c0b9fce0bf19e952737db) && "mod_consts.const_dict_b16ccc0f0d6c0b9fce0bf19e952737db");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_false_tuple", mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple) && "mod_consts.const_tuple_false_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_7a237afe69cca399fb38fa51fe0a8825", mod_consts.const_dict_7a237afe69cca399fb38fa51fe0a8825);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_dict_7a237afe69cca399fb38fa51fe0a8825) && "mod_consts.const_dict_7a237afe69cca399fb38fa51fe0a8825");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071", mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071) && "mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9be10114a6296958277ace143227d15d", mod_consts.const_str_digest_9be10114a6296958277ace143227d15d);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_9be10114a6296958277ace143227d15d) && "mod_consts.const_str_digest_9be10114a6296958277ace143227d15d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_2256e10b9ff9e3202801e32b00d2665d", mod_consts.const_dict_2256e10b9ff9e3202801e32b00d2665d);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_dict_2256e10b9ff9e3202801e32b00d2665d) && "mod_consts.const_dict_2256e10b9ff9e3202801e32b00d2665d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c3f2b7cceb73824fef1bad37229f5942", mod_consts.const_str_digest_c3f2b7cceb73824fef1bad37229f5942);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_c3f2b7cceb73824fef1bad37229f5942) && "mod_consts.const_str_digest_c3f2b7cceb73824fef1bad37229f5942");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dc908cf90cc6a5f2a5db310cd04f7330", mod_consts.const_str_digest_dc908cf90cc6a5f2a5db310cd04f7330);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc908cf90cc6a5f2a5db310cd04f7330) && "mod_consts.const_str_digest_dc908cf90cc6a5f2a5db310cd04f7330");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e11d384d77b1f3f69d3cea2c8863295b", mod_consts.const_dict_e11d384d77b1f3f69d3cea2c8863295b);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_dict_e11d384d77b1f3f69d3cea2c8863295b) && "mod_consts.const_dict_e11d384d77b1f3f69d3cea2c8863295b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ed12867892805cc3edfcd62ce355a47d", mod_consts.const_str_digest_ed12867892805cc3edfcd62ce355a47d);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_digest_ed12867892805cc3edfcd62ce355a47d) && "mod_consts.const_str_digest_ed12867892805cc3edfcd62ce355a47d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d9230878b21d3316542d1b7aba5b391e", mod_consts.const_str_digest_d9230878b21d3316542d1b7aba5b391e);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_d9230878b21d3316542d1b7aba5b391e) && "mod_consts.const_str_digest_d9230878b21d3316542d1b7aba5b391e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_186d8b6261a894f17d141ea2fe94c71f", mod_consts.const_dict_186d8b6261a894f17d141ea2fe94c71f);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_dict_186d8b6261a894f17d141ea2fe94c71f) && "mod_consts.const_dict_186d8b6261a894f17d141ea2fe94c71f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_aeb0f82511ae06f3df16270cadc26672", mod_consts.const_str_digest_aeb0f82511ae06f3df16270cadc26672);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_digest_aeb0f82511ae06f3df16270cadc26672) && "mod_consts.const_str_digest_aeb0f82511ae06f3df16270cadc26672");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_db7decffacc19a524dc0bb9b22309b52", mod_consts.const_dict_db7decffacc19a524dc0bb9b22309b52);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_dict_db7decffacc19a524dc0bb9b22309b52) && "mod_consts.const_dict_db7decffacc19a524dc0bb9b22309b52");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7039b726d187d45b79e8366a29db2241", mod_consts.const_str_digest_7039b726d187d45b79e8366a29db2241);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_digest_7039b726d187d45b79e8366a29db2241) && "mod_consts.const_str_digest_7039b726d187d45b79e8366a29db2241");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5c97b0757d3a35986fcab7a9a805f7a2", mod_consts.const_str_digest_5c97b0757d3a35986fcab7a9a805f7a2);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_digest_5c97b0757d3a35986fcab7a9a805f7a2) && "mod_consts.const_str_digest_5c97b0757d3a35986fcab7a9a805f7a2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_affb0a54cd9bab244f60da2111ce4a4d", mod_consts.const_dict_affb0a54cd9bab244f60da2111ce4a4d);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_dict_affb0a54cd9bab244f60da2111ce4a4d) && "mod_consts.const_dict_affb0a54cd9bab244f60da2111ce4a4d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c57c02e66ad506bd06df355b0e76d2ec", mod_consts.const_str_digest_c57c02e66ad506bd06df355b0e76d2ec);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_digest_c57c02e66ad506bd06df355b0e76d2ec) && "mod_consts.const_str_digest_c57c02e66ad506bd06df355b0e76d2ec");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_027f3b46cbd5305a22425539c139edf8", mod_consts.const_dict_027f3b46cbd5305a22425539c139edf8);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_dict_027f3b46cbd5305a22425539c139edf8) && "mod_consts.const_dict_027f3b46cbd5305a22425539c139edf8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4c4369abc9b798df8fc3818a222085d2", mod_consts.const_str_digest_4c4369abc9b798df8fc3818a222085d2);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_digest_4c4369abc9b798df8fc3818a222085d2) && "mod_consts.const_str_digest_4c4369abc9b798df8fc3818a222085d2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_12e86a24afbffdf8f59caf6d5a1ef557", mod_consts.const_dict_12e86a24afbffdf8f59caf6d5a1ef557);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_dict_12e86a24afbffdf8f59caf6d5a1ef557) && "mod_consts.const_dict_12e86a24afbffdf8f59caf6d5a1ef557");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e2e568c7d717b6cf609c0027ed1ac3e4", mod_consts.const_dict_e2e568c7d717b6cf609c0027ed1ac3e4);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_dict_e2e568c7d717b6cf609c0027ed1ac3e4) && "mod_consts.const_dict_e2e568c7d717b6cf609c0027ed1ac3e4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_tuple", mod_consts.const_tuple_none_none_tuple);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple) && "mod_consts.const_tuple_none_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_953c401f035074b70dcfab5234f66116", mod_consts.const_dict_953c401f035074b70dcfab5234f66116);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_dict_953c401f035074b70dcfab5234f66116) && "mod_consts.const_dict_953c401f035074b70dcfab5234f66116");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_268c19830aae6d57b5dfef7ecc01f801_tuple", mod_consts.const_tuple_268c19830aae6d57b5dfef7ecc01f801_tuple);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_tuple_268c19830aae6d57b5dfef7ecc01f801_tuple) && "mod_consts.const_tuple_268c19830aae6d57b5dfef7ecc01f801_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a832f867d4dc987634dc141072e2905a", mod_consts.const_str_digest_a832f867d4dc987634dc141072e2905a);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_digest_a832f867d4dc987634dc141072e2905a) && "mod_consts.const_str_digest_a832f867d4dc987634dc141072e2905a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_db075caf482153b5f9d1ae2a251036c0", mod_consts.const_str_digest_db075caf482153b5f9d1ae2a251036c0);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_digest_db075caf482153b5f9d1ae2a251036c0) && "mod_consts.const_str_digest_db075caf482153b5f9d1ae2a251036c0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple) && "mod_consts.const_tuple_str_plain___class___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple) && "mod_consts.const_tuple_str_plain_self_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_underscore_tuple", mod_consts.const_tuple_str_plain_self_str_underscore_tuple);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_underscore_tuple) && "mod_consts.const_tuple_str_plain_self_str_underscore_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_69f31fc43fd9d48091e384f3fceae4b3_tuple", mod_consts.const_tuple_69f31fc43fd9d48091e384f3fceae4b3_tuple);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_tuple_69f31fc43fd9d48091e384f3fceae4b3_tuple) && "mod_consts.const_tuple_69f31fc43fd9d48091e384f3fceae4b3_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_func_tuple", mod_consts.const_tuple_str_plain_self_str_plain_func_tuple);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_func_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_func_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_func_str_plain_arg1_tuple", mod_consts.const_tuple_str_plain_self_str_plain_func_str_plain_arg1_tuple);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_func_str_plain_arg1_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_func_str_plain_arg1_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_func_str_plain_arg1_str_plain_arg2_tuple", mod_consts.const_tuple_str_plain_self_str_plain_func_str_plain_arg1_str_plain_arg2_tuple);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_func_str_plain_arg1_str_plain_arg2_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_func_str_plain_arg1_str_plain_arg2_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_ec7470e2c9c2c39e847c70d927161aef_tuple", mod_consts.const_tuple_ec7470e2c9c2c39e847c70d927161aef_tuple);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_tuple_ec7470e2c9c2c39e847c70d927161aef_tuple) && "mod_consts.const_tuple_ec7470e2c9c2c39e847c70d927161aef_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ssl_context_tuple", mod_consts.const_tuple_str_plain_ssl_context_tuple);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ssl_context_tuple) && "mod_consts.const_tuple_str_plain_ssl_context_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_len_str_plain_buffer_str_plain_e_tuple", mod_consts.const_tuple_str_plain_self_str_plain_len_str_plain_buffer_str_plain_e_tuple);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_len_str_plain_buffer_str_plain_e_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_len_str_plain_buffer_str_plain_e_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_binary_form_tuple", mod_consts.const_tuple_str_plain_self_str_plain_binary_form_tuple);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_binary_form_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_binary_form_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_712c1b050ab3009195093ff0988cd435_tuple", mod_consts.const_tuple_712c1b050ab3009195093ff0988cd435_tuple);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_tuple_712c1b050ab3009195093ff0988cd435_tuple) && "mod_consts.const_tuple_712c1b050ab3009195093ff0988cd435_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_len_str_plain_buffer_tuple", mod_consts.const_tuple_str_plain_self_str_plain_len_str_plain_buffer_tuple);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_len_str_plain_buffer_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_len_str_plain_buffer_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_buflen_str_plain_flags_tuple", mod_consts.const_tuple_str_plain_self_str_plain_buflen_str_plain_flags_tuple);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_buflen_str_plain_flags_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_buflen_str_plain_flags_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_cbf6c250f999c2b551306c5895bbcdba_tuple", mod_consts.const_tuple_cbf6c250f999c2b551306c5895bbcdba_tuple);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_tuple_cbf6c250f999c2b551306c5895bbcdba_tuple) && "mod_consts.const_tuple_cbf6c250f999c2b551306c5895bbcdba_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_flags_tuple", mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_flags_tuple);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_flags_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_flags_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_554a29f49c2be0efb946d2c5e1d2787e_tuple", mod_consts.const_tuple_554a29f49c2be0efb946d2c5e1d2787e_tuple);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_tuple_554a29f49c2be0efb946d2c5e1d2787e_tuple) && "mod_consts.const_tuple_554a29f49c2be0efb946d2c5e1d2787e_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_value_tuple", mod_consts.const_tuple_str_plain_self_str_plain_value_tuple);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_value_tuple");
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
static PyObject *module_var_accessor_urllib3$util$ssltransport$ProxySchemeUnsupported(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssltransport->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssltransport->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxySchemeUnsupported);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssltransport->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ProxySchemeUnsupported);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ProxySchemeUnsupported, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ProxySchemeUnsupported);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ProxySchemeUnsupported, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxySchemeUnsupported);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxySchemeUnsupported);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxySchemeUnsupported);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssltransport$SSL_BLOCKSIZE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssltransport->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssltransport->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)mod_consts.const_str_plain_SSL_BLOCKSIZE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssltransport->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SSL_BLOCKSIZE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SSL_BLOCKSIZE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SSL_BLOCKSIZE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SSL_BLOCKSIZE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)mod_consts.const_str_plain_SSL_BLOCKSIZE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)mod_consts.const_str_plain_SSL_BLOCKSIZE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SSL_BLOCKSIZE);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssltransport$_ReturnValue(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssltransport->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssltransport->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)mod_consts.const_str_plain__ReturnValue);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssltransport->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ReturnValue);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ReturnValue, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ReturnValue);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ReturnValue, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)mod_consts.const_str_plain__ReturnValue);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)mod_consts.const_str_plain__ReturnValue);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__ReturnValue);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssltransport$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssltransport->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssltransport->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssltransport->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssltransport$socket(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssltransport->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssltransport->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)mod_consts.const_str_plain_socket);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssltransport->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)mod_consts.const_str_plain_socket);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)mod_consts.const_str_plain_socket);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_socket);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssltransport$ssl(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssltransport->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssltransport->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)mod_consts.const_str_plain_ssl);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssltransport->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ssl);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ssl, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ssl);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ssl, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)mod_consts.const_str_plain_ssl);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)mod_consts.const_str_plain_ssl);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ssl);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_32e5af64f5f75b39f82283c969d29d02;
static PyCodeObject *code_objects_fa6624e6abd36b7bcb83cc4d2683f2c0;
static PyCodeObject *code_objects_3862a616a64cd824f0d0912aadf52748;
static PyCodeObject *code_objects_0b9ce4d5a3f6746d14d44d58cdcf931b;
static PyCodeObject *code_objects_c4c1de037bb43dd66e27a0da09db30d4;
static PyCodeObject *code_objects_03c47cd5d2fd9a1cca67eee1c2c4aa46;
static PyCodeObject *code_objects_10e6cfd0c002e229661588b2ec9220bc;
static PyCodeObject *code_objects_d2718b0b68b33ff3b0987fff9c4678e5;
static PyCodeObject *code_objects_24fa19cc8fc0fabdb97e579f23461f4e;
static PyCodeObject *code_objects_28857f1ec4c1a46489cdc10031821b82;
static PyCodeObject *code_objects_044ac7ff45c442fb46f31bde1f7ca9f2;
static PyCodeObject *code_objects_2c42ccbb8af20749ce270e151bcd8fdc;
static PyCodeObject *code_objects_548f2943ac2519272b2bfa0c850d2106;
static PyCodeObject *code_objects_4ef8e456513a15732f5bb9a6fcfa0530;
static PyCodeObject *code_objects_5f5bb24b0097cafbcdeea5bd5a41dec7;
static PyCodeObject *code_objects_173778735aa9f593fab138b7b5d11f15;
static PyCodeObject *code_objects_0c8749caf722ea4a142d2270a9af62c7;
static PyCodeObject *code_objects_62ef0ebaeb414bdc19cc4234d4b57461;
static PyCodeObject *code_objects_c15b7545373734b4d19ccb644e401339;
static PyCodeObject *code_objects_459ab42eab8586c376d367dfe1e5334b;
static PyCodeObject *code_objects_c7fe4b28f6ee79ec0453c960d8dc4b9b;
static PyCodeObject *code_objects_fe91c75c2adc6ff44c498a53ae44d932;
static PyCodeObject *code_objects_e3ed4492b947a7fa381e04dbcf5f00cb;
static PyCodeObject *code_objects_dcd3d799d3d233536128eac851ce7261;
static PyCodeObject *code_objects_56c77bb72ac5480f4e957e2fd28c855a;
static PyCodeObject *code_objects_f303c93fd1cec1527cb37fb8f238691a;
static PyCodeObject *code_objects_e44cbbac698df31020ec54991200d91a;
static PyCodeObject *code_objects_6c05baba2c51f3634af5f042d1408dc0;
static PyCodeObject *code_objects_36dcecd457208439ede3a2a92dfc0aaf;
static PyCodeObject *code_objects_347672c1db95868322ae987f0e5084ad;
static PyCodeObject *code_objects_b9935e4bd8d1e9a5b4e1193c667fe883;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_a832f867d4dc987634dc141072e2905a); CHECK_OBJECT(module_filename_obj);
code_objects_32e5af64f5f75b39f82283c969d29d02 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_db075caf482153b5f9d1ae2a251036c0, mod_consts.const_str_digest_db075caf482153b5f9d1ae2a251036c0, NULL, NULL, 0, 0, 0);
code_objects_fa6624e6abd36b7bcb83cc4d2683f2c0 = MAKE_CODE_OBJECT(module_filename_obj, 22, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_SSLTransport, mod_consts.const_str_plain_SSLTransport, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_3862a616a64cd824f0d0912aadf52748 = MAKE_CODE_OBJECT(module_filename_obj, 72, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___enter__, mod_consts.const_str_digest_f5df8061b1f344fa865cf4121fe1de11, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_0b9ce4d5a3f6746d14d44d58cdcf931b = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_FUTURE_ANNOTATIONS, const_str_plain___exit__, mod_consts.const_str_digest_6487bc96292b1c7b592c78c6a546adc9, mod_consts.const_tuple_str_plain_self_str_underscore_tuple, NULL, 1, 0, 0);
code_objects_c4c1de037bb43dd66e27a0da09db30d4 = MAKE_CODE_OBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_53f15f47455fd0edd9e007023ca79b28, mod_consts.const_tuple_69f31fc43fd9d48091e384f3fceae4b3_tuple, NULL, 5, 0, 0);
code_objects_03c47cd5d2fd9a1cca67eee1c2c4aa46 = MAKE_CODE_OBJECT(module_filename_obj, 206, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__decref_socketios, mod_consts.const_str_digest_5c97b0757d3a35986fcab7a9a805f7a2, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_10e6cfd0c002e229661588b2ec9220bc = MAKE_CODE_OBJECT(module_filename_obj, 220, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__ssl_io_loop, mod_consts.const_str_digest_4c4369abc9b798df8fc3818a222085d2, mod_consts.const_tuple_str_plain_self_str_plain_func_tuple, NULL, 2, 0, 0);
code_objects_d2718b0b68b33ff3b0987fff9c4678e5 = MAKE_CODE_OBJECT(module_filename_obj, 224, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__ssl_io_loop, mod_consts.const_str_digest_4c4369abc9b798df8fc3818a222085d2, mod_consts.const_tuple_str_plain_self_str_plain_func_str_plain_arg1_tuple, NULL, 3, 0, 0);
code_objects_24fa19cc8fc0fabdb97e579f23461f4e = MAKE_CODE_OBJECT(module_filename_obj, 228, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__ssl_io_loop, mod_consts.const_str_digest_4c4369abc9b798df8fc3818a222085d2, mod_consts.const_tuple_str_plain_self_str_plain_func_str_plain_arg1_str_plain_arg2_tuple, NULL, 4, 0, 0);
code_objects_28857f1ec4c1a46489cdc10031821b82 = MAKE_CODE_OBJECT(module_filename_obj, 235, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__ssl_io_loop, mod_consts.const_str_digest_4c4369abc9b798df8fc3818a222085d2, mod_consts.const_tuple_ec7470e2c9c2c39e847c70d927161aef_tuple, NULL, 4, 0, 0);
code_objects_044ac7ff45c442fb46f31bde1f7ca9f2 = MAKE_CODE_OBJECT(module_filename_obj, 34, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__validate_ssl_context_for_tls_in_tls, mod_consts.const_str_digest_beed7828015b058e5bd0ec35067d0d81, mod_consts.const_tuple_str_plain_ssl_context_tuple, NULL, 1, 0, 0);
code_objects_2c42ccbb8af20749ce270e151bcd8fdc = MAKE_CODE_OBJECT(module_filename_obj, 209, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__wrap_ssl_read, mod_consts.const_str_digest_c57c02e66ad506bd06df355b0e76d2ec, mod_consts.const_tuple_str_plain_self_str_plain_len_str_plain_buffer_str_plain_e_tuple, NULL, 3, 0, 0);
code_objects_548f2943ac2519272b2bfa0c850d2106 = MAKE_CODE_OBJECT(module_filename_obj, 188, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cipher, mod_consts.const_str_digest_c3f2b7cceb73824fef1bad37229f5942, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_4ef8e456513a15732f5bb9a6fcfa0530 = MAKE_CODE_OBJECT(module_filename_obj, 171, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_close, mod_consts.const_str_digest_8a933ac923910b22f88c0294a3e717a2, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_5f5bb24b0097cafbcdeea5bd5a41dec7 = MAKE_CODE_OBJECT(module_filename_obj, 197, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_compression, mod_consts.const_str_digest_d9230878b21d3316542d1b7aba5b391e, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_173778735aa9f593fab138b7b5d11f15 = MAKE_CODE_OBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_fileno, mod_consts.const_str_digest_2866f307e85513f9d45eb3e07b9778a4, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_0c8749caf722ea4a142d2270a9af62c7 = MAKE_CODE_OBJECT(module_filename_obj, 175, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_getpeercert, mod_consts.const_str_digest_6167fe1c698a03bebfc2a50dfc064495, mod_consts.const_tuple_str_plain_self_str_plain_binary_form_tuple, NULL, 2, 0, 0);
code_objects_62ef0ebaeb414bdc19cc4234d4b57461 = MAKE_CODE_OBJECT(module_filename_obj, 180, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_getpeercert, mod_consts.const_str_digest_6167fe1c698a03bebfc2a50dfc064495, mod_consts.const_tuple_str_plain_self_str_plain_binary_form_tuple, NULL, 2, 0, 0);
code_objects_c15b7545373734b4d19ccb644e401339 = MAKE_CODE_OBJECT(module_filename_obj, 182, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_getpeercert, mod_consts.const_str_digest_6167fe1c698a03bebfc2a50dfc064495, mod_consts.const_tuple_str_plain_self_str_plain_binary_form_tuple, NULL, 2, 0, 0);
code_objects_459ab42eab8586c376d367dfe1e5334b = MAKE_CODE_OBJECT(module_filename_obj, 203, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_gettimeout, mod_consts.const_str_digest_7039b726d187d45b79e8366a29db2241, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_c7fe4b28f6ee79ec0453c960d8dc4b9b = MAKE_CODE_OBJECT(module_filename_obj, 116, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_makefile, mod_consts.const_str_digest_e2ca366709c92ea36d1cf068966574ab, mod_consts.const_tuple_712c1b050ab3009195093ff0988cd435_tuple, NULL, 3, 3, 0);
code_objects_fe91c75c2adc6ff44c498a53ae44d932 = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_read, mod_consts.const_str_digest_e5c02be6b5703820d444a6caf78ce3aa, mod_consts.const_tuple_str_plain_self_str_plain_len_str_plain_buffer_tuple, NULL, 3, 0, 0);
code_objects_e3ed4492b947a7fa381e04dbcf5f00cb = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_recv, mod_consts.const_str_digest_6e982273ed6594c56e59708bc717a559, mod_consts.const_tuple_str_plain_self_str_plain_buflen_str_plain_flags_tuple, NULL, 3, 0, 0);
code_objects_dcd3d799d3d233536128eac851ce7261 = MAKE_CODE_OBJECT(module_filename_obj, 89, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_recv_into, mod_consts.const_str_digest_6be9ad68af3587dfb654c5d7ccdd6256, mod_consts.const_tuple_cbf6c250f999c2b551306c5895bbcdba_tuple, NULL, 4, 0, 0);
code_objects_56c77bb72ac5480f4e957e2fd28c855a = MAKE_CODE_OBJECT(module_filename_obj, 191, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_selected_alpn_protocol, mod_consts.const_str_digest_dc908cf90cc6a5f2a5db310cd04f7330, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_f303c93fd1cec1527cb37fb8f238691a = MAKE_CODE_OBJECT(module_filename_obj, 111, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_send, mod_consts.const_str_digest_d4b885a810fc8f78c524bfcc62f67f47, mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_flags_tuple, NULL, 3, 0, 0);
code_objects_e44cbbac698df31020ec54991200d91a = MAKE_CODE_OBJECT(module_filename_obj, 101, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_sendall, mod_consts.const_str_digest_2a8adc5022e16ff4a45571b5138d856d, mod_consts.const_tuple_554a29f49c2be0efb946d2c5e1d2787e_tuple, NULL, 3, 0, 0);
code_objects_6c05baba2c51f3634af5f042d1408dc0 = MAKE_CODE_OBJECT(module_filename_obj, 200, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_settimeout, mod_consts.const_str_digest_aeb0f82511ae06f3df16270cadc26672, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple, NULL, 2, 0, 0);
code_objects_36dcecd457208439ede3a2a92dfc0aaf = MAKE_CODE_OBJECT(module_filename_obj, 194, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_shared_ciphers, mod_consts.const_str_digest_ed12867892805cc3edfcd62ce355a47d, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_347672c1db95868322ae987f0e5084ad = MAKE_CODE_OBJECT(module_filename_obj, 168, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_unwrap, mod_consts.const_str_digest_7a201e48fcbb2e4a3fe293437029a84d, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_b9935e4bd8d1e9a5b4e1193c667fe883 = MAKE_CODE_OBJECT(module_filename_obj, 185, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_version, mod_consts.const_str_digest_9be10114a6296958277ace143227d15d, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__10_send(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__11_makefile(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__12_unwrap(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__13_close(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__14_getpeercert(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__15_getpeercert(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__16_getpeercert(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__17_version(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__18_cipher(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__19_selected_alpn_protocol(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__1__validate_ssl_context_for_tls_in_tls(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__20_shared_ciphers(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__21_compression(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__22_settimeout(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__23_gettimeout(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__24__decref_socketios(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__25__wrap_ssl_read(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__26__ssl_io_loop(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__27__ssl_io_loop(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__28__ssl_io_loop(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__29__ssl_io_loop(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__2___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__3___enter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__4___exit__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__5_fileno(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__6_read(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__7_recv(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__8_recv_into(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__9_sendall(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_urllib3$util$ssltransport$$$function__1__validate_ssl_context_for_tls_in_tls(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_ssl_context = python_pars[0];
struct Nuitka_FrameObject *frame_frame_urllib3$util$ssltransport$$$function__1__validate_ssl_context_for_tls_in_tls;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$ssltransport$$$function__1__validate_ssl_context_for_tls_in_tls = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$ssltransport$$$function__1__validate_ssl_context_for_tls_in_tls)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__1__validate_ssl_context_for_tls_in_tls);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$ssltransport$$$function__1__validate_ssl_context_for_tls_in_tls == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$ssltransport$$$function__1__validate_ssl_context_for_tls_in_tls = MAKE_FUNCTION_FRAME(tstate, code_objects_044ac7ff45c442fb46f31bde1f7ca9f2, module_urllib3$util$ssltransport, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$ssltransport$$$function__1__validate_ssl_context_for_tls_in_tls->m_type_description == NULL);
frame_frame_urllib3$util$ssltransport$$$function__1__validate_ssl_context_for_tls_in_tls = cache_frame_frame_urllib3$util$ssltransport$$$function__1__validate_ssl_context_for_tls_in_tls;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$ssltransport$$$function__1__validate_ssl_context_for_tls_in_tls);
assert(Py_REFCNT(frame_frame_urllib3$util$ssltransport$$$function__1__validate_ssl_context_for_tls_in_tls) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_ssl_context);
tmp_expression_value_1 = par_ssl_context;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts.const_str_plain_wrap_bio);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
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
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_urllib3$util$ssltransport$ProxySchemeUnsupported(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProxySchemeUnsupported);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 44;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$ssltransport$$$function__1__validate_ssl_context_for_tls_in_tls->m_frame.f_lineno = 44;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_a112848159e46580d55c9935e74da7e6_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 44;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssltransport$$$function__1__validate_ssl_context_for_tls_in_tls, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$ssltransport$$$function__1__validate_ssl_context_for_tls_in_tls->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssltransport$$$function__1__validate_ssl_context_for_tls_in_tls, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$ssltransport$$$function__1__validate_ssl_context_for_tls_in_tls,
    type_description_1,
    par_ssl_context
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$ssltransport$$$function__1__validate_ssl_context_for_tls_in_tls == cache_frame_frame_urllib3$util$ssltransport$$$function__1__validate_ssl_context_for_tls_in_tls) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__1__validate_ssl_context_for_tls_in_tls);
    cache_frame_frame_urllib3$util$ssltransport$$$function__1__validate_ssl_context_for_tls_in_tls = NULL;
}

assertFrameObject(frame_frame_urllib3$util$ssltransport$$$function__1__validate_ssl_context_for_tls_in_tls);

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
CHECK_OBJECT(par_ssl_context);
Py_DECREF(par_ssl_context);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_ssl_context);
Py_DECREF(par_ssl_context);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$ssltransport$$$function__2___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_socket = python_pars[1];
PyObject *par_ssl_context = python_pars[2];
PyObject *par_server_hostname = python_pars[3];
PyObject *par_suppress_ragged_eofs = python_pars[4];
struct Nuitka_FrameObject *frame_frame_urllib3$util$ssltransport$$$function__2___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$ssltransport$$$function__2___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$ssltransport$$$function__2___init__)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__2___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$ssltransport$$$function__2___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$ssltransport$$$function__2___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_c4c1de037bb43dd66e27a0da09db30d4, module_urllib3$util$ssltransport, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$ssltransport$$$function__2___init__->m_type_description == NULL);
frame_frame_urllib3$util$ssltransport$$$function__2___init__ = cache_frame_frame_urllib3$util$ssltransport$$$function__2___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$ssltransport$$$function__2___init__);
assert(Py_REFCNT(frame_frame_urllib3$util$ssltransport$$$function__2___init__) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_ass_attr_target_1;
tmp_called_instance_1 = module_var_accessor_urllib3$util$ssltransport$ssl(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ssl);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 59;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$ssltransport$$$function__2___init__->m_frame.f_lineno = 59;
tmp_ass_attr_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_MemoryBIO);
if (tmp_ass_attr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_incoming, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_value_1);
Py_DECREF(tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_ass_attr_target_2;
tmp_called_instance_2 = module_var_accessor_urllib3$util$ssltransport$ssl(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ssl);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$ssltransport$$$function__2___init__->m_frame.f_lineno = 60;
tmp_ass_attr_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_MemoryBIO);
if (tmp_ass_attr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain_outgoing, tmp_ass_attr_value_2);
CHECK_OBJECT(tmp_ass_attr_value_2);
Py_DECREF(tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_ass_attr_target_3;
CHECK_OBJECT(par_suppress_ragged_eofs);
tmp_ass_attr_value_3 = par_suppress_ragged_eofs;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain_suppress_ragged_eofs, tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_4;
PyObject *tmp_ass_attr_target_4;
CHECK_OBJECT(par_socket);
tmp_ass_attr_value_4 = par_socket;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_4, mod_consts.const_str_plain_socket, tmp_ass_attr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_5;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_ass_attr_target_5;
CHECK_OBJECT(par_ssl_context);
tmp_expression_value_1 = par_ssl_context;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_wrap_bio);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_incoming);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 66;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_outgoing);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 66;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_server_hostname);
tmp_kw_call_dict_value_0_1 = par_server_hostname;
frame_frame_urllib3$util$ssltransport$$$function__2___init__->m_frame.f_lineno = 65;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_ass_attr_value_5 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_server_hostname_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_ass_attr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_5, mod_consts.const_str_plain_sslobj, tmp_ass_attr_value_5);
CHECK_OBJECT(tmp_ass_attr_value_5);
Py_DECREF(tmp_ass_attr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__ssl_io_loop);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_sslobj);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 70;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_do_handshake);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 70;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$ssltransport$$$function__2___init__->m_frame.f_lineno = 70;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssltransport$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$ssltransport$$$function__2___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssltransport$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$ssltransport$$$function__2___init__,
    type_description_1,
    par_self,
    par_socket,
    par_ssl_context,
    par_server_hostname,
    par_suppress_ragged_eofs
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$ssltransport$$$function__2___init__ == cache_frame_frame_urllib3$util$ssltransport$$$function__2___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__2___init__);
    cache_frame_frame_urllib3$util$ssltransport$$$function__2___init__ = NULL;
}

assertFrameObject(frame_frame_urllib3$util$ssltransport$$$function__2___init__);

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
CHECK_OBJECT(par_socket);
Py_DECREF(par_socket);
CHECK_OBJECT(par_ssl_context);
Py_DECREF(par_ssl_context);
CHECK_OBJECT(par_server_hostname);
Py_DECREF(par_server_hostname);
CHECK_OBJECT(par_suppress_ragged_eofs);
Py_DECREF(par_suppress_ragged_eofs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_socket);
Py_DECREF(par_socket);
CHECK_OBJECT(par_ssl_context);
Py_DECREF(par_ssl_context);
CHECK_OBJECT(par_server_hostname);
Py_DECREF(par_server_hostname);
CHECK_OBJECT(par_suppress_ragged_eofs);
Py_DECREF(par_suppress_ragged_eofs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$ssltransport$$$function__3___enter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *tmp_return_value = NULL;

    // Actual function body.
CHECK_OBJECT(par_self);
tmp_return_value = par_self;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
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


static PyObject *impl_urllib3$util$ssltransport$$$function__4___exit__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par__ = python_pars[1];
struct Nuitka_FrameObject *frame_frame_urllib3$util$ssltransport$$$function__4___exit__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$ssltransport$$$function__4___exit__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$ssltransport$$$function__4___exit__)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__4___exit__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$ssltransport$$$function__4___exit__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$ssltransport$$$function__4___exit__ = MAKE_FUNCTION_FRAME(tstate, code_objects_0b9ce4d5a3f6746d14d44d58cdcf931b, module_urllib3$util$ssltransport, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$ssltransport$$$function__4___exit__->m_type_description == NULL);
frame_frame_urllib3$util$ssltransport$$$function__4___exit__ = cache_frame_frame_urllib3$util$ssltransport$$$function__4___exit__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$ssltransport$$$function__4___exit__);
assert(Py_REFCNT(frame_frame_urllib3$util$ssltransport$$$function__4___exit__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_urllib3$util$ssltransport$$$function__4___exit__->m_frame.f_lineno = 76;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_close);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssltransport$$$function__4___exit__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$ssltransport$$$function__4___exit__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssltransport$$$function__4___exit__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$ssltransport$$$function__4___exit__,
    type_description_1,
    par_self,
    par__
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$ssltransport$$$function__4___exit__ == cache_frame_frame_urllib3$util$ssltransport$$$function__4___exit__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__4___exit__);
    cache_frame_frame_urllib3$util$ssltransport$$$function__4___exit__ = NULL;
}

assertFrameObject(frame_frame_urllib3$util$ssltransport$$$function__4___exit__);

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
CHECK_OBJECT(par__);
Py_DECREF(par__);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par__);
Py_DECREF(par__);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$ssltransport$$$function__5_fileno(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_urllib3$util$ssltransport$$$function__5_fileno;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$ssltransport$$$function__5_fileno = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$ssltransport$$$function__5_fileno)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__5_fileno);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$ssltransport$$$function__5_fileno == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$ssltransport$$$function__5_fileno = MAKE_FUNCTION_FRAME(tstate, code_objects_173778735aa9f593fab138b7b5d11f15, module_urllib3$util$ssltransport, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$ssltransport$$$function__5_fileno->m_type_description == NULL);
frame_frame_urllib3$util$ssltransport$$$function__5_fileno = cache_frame_frame_urllib3$util$ssltransport$$$function__5_fileno;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$ssltransport$$$function__5_fileno);
assert(Py_REFCNT(frame_frame_urllib3$util$ssltransport$$$function__5_fileno) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_socket);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$ssltransport$$$function__5_fileno->m_frame.f_lineno = 79;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_fileno);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssltransport$$$function__5_fileno, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$ssltransport$$$function__5_fileno->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssltransport$$$function__5_fileno, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$ssltransport$$$function__5_fileno,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$ssltransport$$$function__5_fileno == cache_frame_frame_urllib3$util$ssltransport$$$function__5_fileno) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__5_fileno);
    cache_frame_frame_urllib3$util$ssltransport$$$function__5_fileno = NULL;
}

assertFrameObject(frame_frame_urllib3$util$ssltransport$$$function__5_fileno);

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


static PyObject *impl_urllib3$util$ssltransport$$$function__6_read(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_len = python_pars[1];
PyObject *par_buffer = python_pars[2];
struct Nuitka_FrameObject *frame_frame_urllib3$util$ssltransport$$$function__6_read;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$ssltransport$$$function__6_read = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$ssltransport$$$function__6_read)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__6_read);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$ssltransport$$$function__6_read == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$ssltransport$$$function__6_read = MAKE_FUNCTION_FRAME(tstate, code_objects_fe91c75c2adc6ff44c498a53ae44d932, module_urllib3$util$ssltransport, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$ssltransport$$$function__6_read->m_type_description == NULL);
frame_frame_urllib3$util$ssltransport$$$function__6_read = cache_frame_frame_urllib3$util$ssltransport$$$function__6_read;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$ssltransport$$$function__6_read);
assert(Py_REFCNT(frame_frame_urllib3$util$ssltransport$$$function__6_read) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_len);
tmp_args_element_value_1 = par_len;
CHECK_OBJECT(par_buffer);
tmp_args_element_value_2 = par_buffer;
frame_frame_urllib3$util$ssltransport$$$function__6_read->m_frame.f_lineno = 82;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain__wrap_ssl_read,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssltransport$$$function__6_read, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$ssltransport$$$function__6_read->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssltransport$$$function__6_read, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$ssltransport$$$function__6_read,
    type_description_1,
    par_self,
    par_len,
    par_buffer
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$ssltransport$$$function__6_read == cache_frame_frame_urllib3$util$ssltransport$$$function__6_read) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__6_read);
    cache_frame_frame_urllib3$util$ssltransport$$$function__6_read = NULL;
}

assertFrameObject(frame_frame_urllib3$util$ssltransport$$$function__6_read);

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
CHECK_OBJECT(par_len);
Py_DECREF(par_len);
CHECK_OBJECT(par_buffer);
Py_DECREF(par_buffer);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_len);
Py_DECREF(par_len);
CHECK_OBJECT(par_buffer);
Py_DECREF(par_buffer);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$ssltransport$$$function__7_recv(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_buflen = python_pars[1];
PyObject *par_flags = python_pars[2];
struct Nuitka_FrameObject *frame_frame_urllib3$util$ssltransport$$$function__7_recv;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$ssltransport$$$function__7_recv = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$ssltransport$$$function__7_recv)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__7_recv);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$ssltransport$$$function__7_recv == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$ssltransport$$$function__7_recv = MAKE_FUNCTION_FRAME(tstate, code_objects_e3ed4492b947a7fa381e04dbcf5f00cb, module_urllib3$util$ssltransport, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$ssltransport$$$function__7_recv->m_type_description == NULL);
frame_frame_urllib3$util$ssltransport$$$function__7_recv = cache_frame_frame_urllib3$util$ssltransport$$$function__7_recv;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$ssltransport$$$function__7_recv);
assert(Py_REFCNT(frame_frame_urllib3$util$ssltransport$$$function__7_recv) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_flags);
tmp_cmp_expr_left_1 = par_flags;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_f5907d1953e4c81926367a875b9068f4;
frame_frame_urllib3$util$ssltransport$$$function__7_recv->m_frame.f_lineno = 86;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 86;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_buflen);
tmp_args_element_value_1 = par_buflen;
frame_frame_urllib3$util$ssltransport$$$function__7_recv->m_frame.f_lineno = 87;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__wrap_ssl_read, tmp_args_element_value_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssltransport$$$function__7_recv, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$ssltransport$$$function__7_recv->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssltransport$$$function__7_recv, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$ssltransport$$$function__7_recv,
    type_description_1,
    par_self,
    par_buflen,
    par_flags
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$ssltransport$$$function__7_recv == cache_frame_frame_urllib3$util$ssltransport$$$function__7_recv) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__7_recv);
    cache_frame_frame_urllib3$util$ssltransport$$$function__7_recv = NULL;
}

assertFrameObject(frame_frame_urllib3$util$ssltransport$$$function__7_recv);

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
CHECK_OBJECT(par_buflen);
Py_DECREF(par_buflen);
CHECK_OBJECT(par_flags);
Py_DECREF(par_flags);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_buflen);
Py_DECREF(par_buflen);
CHECK_OBJECT(par_flags);
Py_DECREF(par_flags);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$ssltransport$$$function__8_recv_into(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_buffer = python_pars[1];
PyObject *par_nbytes = python_pars[2];
PyObject *par_flags = python_pars[3];
struct Nuitka_FrameObject *frame_frame_urllib3$util$ssltransport$$$function__8_recv_into;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$ssltransport$$$function__8_recv_into = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$ssltransport$$$function__8_recv_into)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__8_recv_into);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$ssltransport$$$function__8_recv_into == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$ssltransport$$$function__8_recv_into = MAKE_FUNCTION_FRAME(tstate, code_objects_dcd3d799d3d233536128eac851ce7261, module_urllib3$util$ssltransport, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$ssltransport$$$function__8_recv_into->m_type_description == NULL);
frame_frame_urllib3$util$ssltransport$$$function__8_recv_into = cache_frame_frame_urllib3$util$ssltransport$$$function__8_recv_into;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$ssltransport$$$function__8_recv_into);
assert(Py_REFCNT(frame_frame_urllib3$util$ssltransport$$$function__8_recv_into) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_flags);
tmp_cmp_expr_left_1 = par_flags;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_58b6ee6d40d0be9a28d966f53bcc6a1b;
frame_frame_urllib3$util$ssltransport$$$function__8_recv_into->m_frame.f_lineno = 96;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 96;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_nbytes);
tmp_cmp_expr_left_2 = par_nbytes;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_buffer);
tmp_len_arg_1 = par_buffer;
tmp_assign_source_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_nbytes;
    assert(old != NULL);
    par_nbytes = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_2:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_nbytes);
tmp_args_element_value_1 = par_nbytes;
CHECK_OBJECT(par_buffer);
tmp_args_element_value_2 = par_buffer;
frame_frame_urllib3$util$ssltransport$$$function__8_recv_into->m_frame.f_lineno = 99;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        const_str_plain_read,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssltransport$$$function__8_recv_into, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$ssltransport$$$function__8_recv_into->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssltransport$$$function__8_recv_into, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$ssltransport$$$function__8_recv_into,
    type_description_1,
    par_self,
    par_buffer,
    par_nbytes,
    par_flags
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$ssltransport$$$function__8_recv_into == cache_frame_frame_urllib3$util$ssltransport$$$function__8_recv_into) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__8_recv_into);
    cache_frame_frame_urllib3$util$ssltransport$$$function__8_recv_into = NULL;
}

assertFrameObject(frame_frame_urllib3$util$ssltransport$$$function__8_recv_into);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_nbytes);
CHECK_OBJECT(par_nbytes);
Py_DECREF(par_nbytes);
par_nbytes = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_nbytes);
par_nbytes = NULL;
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
CHECK_OBJECT(par_buffer);
Py_DECREF(par_buffer);
CHECK_OBJECT(par_flags);
Py_DECREF(par_flags);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_buffer);
Py_DECREF(par_buffer);
CHECK_OBJECT(par_flags);
Py_DECREF(par_flags);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$ssltransport$$$function__9_sendall(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_data = python_pars[1];
PyObject *par_flags = python_pars[2];
PyObject *var_count = NULL;
PyObject *var_view = NULL;
PyObject *var_byte_view = NULL;
PyObject *var_amount = NULL;
PyObject *var_v = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
PyObject *tmp_with_2__enter = NULL;
PyObject *tmp_with_2__exit = NULL;
nuitka_bool tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_2__source = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$ssltransport$$$function__9_sendall;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$ssltransport$$$function__9_sendall = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$ssltransport$$$function__9_sendall)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__9_sendall);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$ssltransport$$$function__9_sendall == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$ssltransport$$$function__9_sendall = MAKE_FUNCTION_FRAME(tstate, code_objects_e44cbbac698df31020ec54991200d91a, module_urllib3$util$ssltransport, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$ssltransport$$$function__9_sendall->m_type_description == NULL);
frame_frame_urllib3$util$ssltransport$$$function__9_sendall = cache_frame_frame_urllib3$util$ssltransport$$$function__9_sendall;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$ssltransport$$$function__9_sendall);
assert(Py_REFCNT(frame_frame_urllib3$util$ssltransport$$$function__9_sendall) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_flags);
tmp_cmp_expr_left_1 = par_flags;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_2e5c7bcd7654bd30a3dbe3d1bcb82ba9;
frame_frame_urllib3$util$ssltransport$$$function__9_sendall->m_frame.f_lineno = 103;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 103;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = const_int_0;
{
    PyObject *old = var_count;
    var_count = tmp_assign_source_1;
    Py_INCREF(var_count);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = (PyObject *)&PyMemoryView_Type;
CHECK_OBJECT(par_data);
tmp_args_element_value_1 = par_data;
frame_frame_urllib3$util$ssltransport$$$function__9_sendall->m_frame.f_lineno = 105;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_with_2__source;
    tmp_with_2__source = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(tmp_with_2__source);
tmp_expression_value_1 = tmp_with_2__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_with_2__exit;
    tmp_with_2__exit = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_2__source);
tmp_expression_value_2 = tmp_with_2__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
frame_frame_urllib3$util$ssltransport$$$function__9_sendall->m_frame.f_lineno = 105;
tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_with_2__enter;
    tmp_with_2__enter = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_TRUE;
tmp_with_2__indicator = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_with_2__enter);
tmp_assign_source_6 = tmp_with_2__enter;
{
    PyObject *old = var_view;
    var_view = tmp_assign_source_6;
    Py_INCREF(var_view);
    Py_XDECREF(old);
}

}
// Tried code:
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_view);
tmp_called_instance_1 = var_view;
frame_frame_urllib3$util$ssltransport$$$function__9_sendall->m_frame.f_lineno = 105;
tmp_assign_source_7 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_cast,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_B_tuple, 0)
);

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_with_1__source;
    tmp_with_1__source = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_3 = tmp_with_1__source;
tmp_assign_source_8 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___exit__);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_with_1__exit;
    tmp_with_1__exit = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_4 = tmp_with_1__source;
tmp_called_value_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_4, const_str_plain___enter__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
frame_frame_urllib3$util$ssltransport$$$function__9_sendall->m_frame.f_lineno = 105;
tmp_assign_source_9 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_with_1__enter;
    tmp_with_1__enter = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_assign_source_10;
tmp_assign_source_10 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_11 = tmp_with_1__enter;
{
    PyObject *old = var_byte_view;
    var_byte_view = tmp_assign_source_11;
    Py_INCREF(var_byte_view);
    Py_XDECREF(old);
}

}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var_byte_view);
tmp_len_arg_1 = var_byte_view;
tmp_assign_source_12 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = var_amount;
    var_amount = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
loop_start_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
if (var_count == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_count);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 107;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}

tmp_cmp_expr_left_2 = var_count;
CHECK_OBJECT(var_amount);
tmp_cmp_expr_right_2 = var_amount;
tmp_operand_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
goto loop_end_1;
branch_no_2:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_1;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 108;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_5 = par_self;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_send);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(var_byte_view);
tmp_expression_value_6 = var_byte_view;
if (var_count == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_count);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 108;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}

tmp_start_value_1 = var_count;
tmp_stop_value_1 = Py_None;
tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 108;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
frame_frame_urllib3$util$ssltransport$$$function__9_sendall->m_frame.f_lineno = 108;
tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = var_v;
    var_v = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
if (var_count == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_count);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 109;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}

tmp_iadd_expr_left_1 = var_count;
CHECK_OBJECT(var_v);
tmp_iadd_expr_right_1 = var_v;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
tmp_assign_source_14 = tmp_iadd_expr_left_1;
var_count = tmp_assign_source_14;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssltransport$$$function__9_sendall, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssltransport$$$function__9_sendall, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_3 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
assert(!(tmp_res == -1));
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
nuitka_bool tmp_assign_source_15;
tmp_assign_source_15 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_15;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
tmp_args_element_value_3 = EXC_TYPE(tstate);
tmp_args_element_value_4 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_4); 
tmp_args_element_value_5 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_5 == NULL) {
    tmp_args_element_value_5 = Py_None;
}
frame_frame_urllib3$util$ssltransport$$$function__9_sendall->m_frame.f_lineno = 105;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oooooooo";
    goto try_except_handler_8;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 105;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$util$ssltransport$$$function__9_sendall->m_frame)) {
        frame_frame_urllib3$util$ssltransport$$$function__9_sendall->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooo";
goto try_except_handler_8;
branch_no_4:;
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 105;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$util$ssltransport$$$function__9_sendall->m_frame)) {
        frame_frame_urllib3$util$ssltransport$$$function__9_sendall->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooo";
goto try_except_handler_8;
branch_end_3:;
goto try_end_2;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_6;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_4;
nuitka_bool tmp_cmp_expr_right_4;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_4 = tmp_with_1__indicator;
tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_6 = tmp_with_1__exit;
frame_frame_urllib3$util$ssltransport$$$function__9_sendall->m_frame.f_lineno = 105;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 105;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_5:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_5;
// End of try:
try_end_3:;
{
bool tmp_condition_result_6;
nuitka_bool tmp_cmp_expr_left_5;
nuitka_bool tmp_cmp_expr_right_5;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_5 = tmp_with_1__indicator;
tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
tmp_condition_result_6 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_7 = tmp_with_1__exit;
frame_frame_urllib3$util$ssltransport$$$function__9_sendall->m_frame.f_lineno = 105;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_7, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_6:;
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
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

goto try_except_handler_4;
// End of try:
try_end_4:;
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
goto try_end_5;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssltransport$$$function__9_sendall, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssltransport$$$function__9_sendall, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
tmp_cmp_expr_left_6 = EXC_TYPE(tstate);
tmp_cmp_expr_right_6 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
assert(!(tmp_res == -1));
tmp_condition_result_7 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
nuitka_bool tmp_assign_source_16;
tmp_assign_source_16 = NUITKA_BOOL_FALSE;
tmp_with_2__indicator = tmp_assign_source_16;
}
{
bool tmp_condition_result_8;
PyObject *tmp_operand_value_3;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_8 = tmp_with_2__exit;
tmp_args_element_value_6 = EXC_TYPE(tstate);
tmp_args_element_value_7 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_7); 
tmp_args_element_value_8 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_8 == NULL) {
    tmp_args_element_value_8 = Py_None;
}
frame_frame_urllib3$util$ssltransport$$$function__9_sendall->m_frame.f_lineno = 105;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_operand_value_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_8, call_args);
}

if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oooooooo";
    goto try_except_handler_9;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oooooooo";
    goto try_except_handler_9;
}
tmp_condition_result_8 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 105;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$util$ssltransport$$$function__9_sendall->m_frame)) {
        frame_frame_urllib3$util$ssltransport$$$function__9_sendall->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooo";
goto try_except_handler_9;
branch_no_8:;
goto branch_end_7;
branch_no_7:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 105;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$util$ssltransport$$$function__9_sendall->m_frame)) {
        frame_frame_urllib3$util$ssltransport$$$function__9_sendall->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooo";
goto try_except_handler_9;
branch_end_7:;
goto try_end_6;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_3;
// End of try:
try_end_6:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_5;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_5:;
goto try_end_7;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_9;
nuitka_bool tmp_cmp_expr_left_7;
nuitka_bool tmp_cmp_expr_right_7;
assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_7 = tmp_with_2__indicator;
tmp_cmp_expr_right_7 = NUITKA_BOOL_TRUE;
tmp_condition_result_9 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_called_value_9;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_9 = tmp_with_2__exit;
frame_frame_urllib3$util$ssltransport$$$function__9_sendall->m_frame.f_lineno = 105;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_9, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_7);

exception_lineno = 105;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_9:;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_2;
// End of try:
try_end_7:;
{
bool tmp_condition_result_10;
nuitka_bool tmp_cmp_expr_left_8;
nuitka_bool tmp_cmp_expr_right_8;
assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_8 = tmp_with_2__indicator;
tmp_cmp_expr_right_8 = NUITKA_BOOL_TRUE;
tmp_condition_result_10 = (tmp_cmp_expr_left_8 == tmp_cmp_expr_right_8) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_called_value_10;
PyObject *tmp_call_result_4;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_10 = tmp_with_2__exit;
frame_frame_urllib3$util$ssltransport$$$function__9_sendall->m_frame.f_lineno = 105;
tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_10, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_10:;
goto try_end_8;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_2__source);
tmp_with_2__source = NULL;
Py_XDECREF(tmp_with_2__enter);
tmp_with_2__enter = NULL;
Py_XDECREF(tmp_with_2__exit);
tmp_with_2__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_8:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssltransport$$$function__9_sendall, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$ssltransport$$$function__9_sendall->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssltransport$$$function__9_sendall, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$ssltransport$$$function__9_sendall,
    type_description_1,
    par_self,
    par_data,
    par_flags,
    var_count,
    var_view,
    var_byte_view,
    var_amount,
    var_v
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$ssltransport$$$function__9_sendall == cache_frame_frame_urllib3$util$ssltransport$$$function__9_sendall) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__9_sendall);
    cache_frame_frame_urllib3$util$ssltransport$$$function__9_sendall = NULL;
}

assertFrameObject(frame_frame_urllib3$util$ssltransport$$$function__9_sendall);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(tmp_with_2__source);
CHECK_OBJECT(tmp_with_2__source);
Py_DECREF(tmp_with_2__source);
tmp_with_2__source = NULL;
CHECK_OBJECT(tmp_with_2__enter);
CHECK_OBJECT(tmp_with_2__enter);
Py_DECREF(tmp_with_2__enter);
tmp_with_2__enter = NULL;
CHECK_OBJECT(tmp_with_2__exit);
CHECK_OBJECT(tmp_with_2__exit);
Py_DECREF(tmp_with_2__exit);
tmp_with_2__exit = NULL;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_count);
var_count = NULL;
CHECK_OBJECT(var_view);
CHECK_OBJECT(var_view);
Py_DECREF(var_view);
var_view = NULL;
Py_XDECREF(var_byte_view);
var_byte_view = NULL;
Py_XDECREF(var_amount);
var_amount = NULL;
Py_XDECREF(var_v);
var_v = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_count);
var_count = NULL;
Py_XDECREF(var_view);
var_view = NULL;
Py_XDECREF(var_byte_view);
var_byte_view = NULL;
Py_XDECREF(var_amount);
var_amount = NULL;
Py_XDECREF(var_v);
var_v = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_flags);
Py_DECREF(par_flags);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_flags);
Py_DECREF(par_flags);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$ssltransport$$$function__10_send(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_data = python_pars[1];
PyObject *par_flags = python_pars[2];
struct Nuitka_FrameObject *frame_frame_urllib3$util$ssltransport$$$function__10_send;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$ssltransport$$$function__10_send = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$ssltransport$$$function__10_send)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__10_send);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$ssltransport$$$function__10_send == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$ssltransport$$$function__10_send = MAKE_FUNCTION_FRAME(tstate, code_objects_f303c93fd1cec1527cb37fb8f238691a, module_urllib3$util$ssltransport, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$ssltransport$$$function__10_send->m_type_description == NULL);
frame_frame_urllib3$util$ssltransport$$$function__10_send = cache_frame_frame_urllib3$util$ssltransport$$$function__10_send;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$ssltransport$$$function__10_send);
assert(Py_REFCNT(frame_frame_urllib3$util$ssltransport$$$function__10_send) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_flags);
tmp_cmp_expr_left_1 = par_flags;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_ae0010517f0f5ba1b4d7e7de0c86a25f;
frame_frame_urllib3$util$ssltransport$$$function__10_send->m_frame.f_lineno = 113;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 113;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__ssl_io_loop);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_sslobj);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 114;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_write);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 114;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_data);
tmp_args_element_value_2 = par_data;
frame_frame_urllib3$util$ssltransport$$$function__10_send->m_frame.f_lineno = 114;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssltransport$$$function__10_send, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$ssltransport$$$function__10_send->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssltransport$$$function__10_send, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$ssltransport$$$function__10_send,
    type_description_1,
    par_self,
    par_data,
    par_flags
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$ssltransport$$$function__10_send == cache_frame_frame_urllib3$util$ssltransport$$$function__10_send) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__10_send);
    cache_frame_frame_urllib3$util$ssltransport$$$function__10_send = NULL;
}

assertFrameObject(frame_frame_urllib3$util$ssltransport$$$function__10_send);

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
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_flags);
Py_DECREF(par_flags);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_flags);
Py_DECREF(par_flags);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$ssltransport$$$function__11_makefile(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_mode = python_pars[1];
PyObject *par_buffering = python_pars[2];
PyObject *par_encoding = python_pars[3];
PyObject *par_errors = python_pars[4];
PyObject *par_newline = python_pars[5];
PyObject *var_buffer = NULL;
nuitka_bool var_writing = NUITKA_BOOL_UNASSIGNED;
PyObject *var_reading = NULL;
nuitka_bool var_binary = NUITKA_BOOL_UNASSIGNED;
PyObject *var_rawmode = NULL;
PyObject *var_raw = NULL;
PyObject *var_text = NULL;
PyObject *tmp_inplace_assign_1__value = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$ssltransport$$$function__11_makefile;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$ssltransport$$$function__11_makefile = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$ssltransport$$$function__11_makefile)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__11_makefile);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$ssltransport$$$function__11_makefile == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$ssltransport$$$function__11_makefile = MAKE_FUNCTION_FRAME(tstate, code_objects_c7fe4b28f6ee79ec0453c960d8dc4b9b, module_urllib3$util$ssltransport, sizeof(nuitka_bool)+sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$ssltransport$$$function__11_makefile->m_type_description == NULL);
frame_frame_urllib3$util$ssltransport$$$function__11_makefile = cache_frame_frame_urllib3$util$ssltransport$$$function__11_makefile;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$ssltransport$$$function__11_makefile);
assert(Py_REFCNT(frame_frame_urllib3$util$ssltransport$$$function__11_makefile) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_set_arg_1;
CHECK_OBJECT(par_mode);
tmp_set_arg_1 = par_mode;
tmp_cmp_expr_left_1 = PySet_New(tmp_set_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooooobobooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = PySet_New(mod_consts.const_set_38ac54b0a8a995c7edae10aa18c58dad);
tmp_operand_value_1 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooooobobooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooooobobooo";
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
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_ed3208d107536d41d627d96a338acb63;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_mode);
tmp_operand_value_2 = par_mode;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooooobobooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooooobobooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_8600cd96cda1dad314813b0352cbdec5;
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
frame_frame_urllib3$util$ssltransport$$$function__11_makefile->m_frame.f_lineno = 133;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 133;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooobobooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_assign_source_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = const_str_plain_w;
CHECK_OBJECT(par_mode);
tmp_cmp_expr_right_2 = par_mode;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "ooooooobobooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
var_writing = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_operand_value_3;
tmp_cmp_expr_left_3 = const_str_plain_r;
CHECK_OBJECT(par_mode);
tmp_cmp_expr_right_3 = par_mode;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "ooooooobobooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = (tmp_res == 1) ? Py_True : Py_False;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
assert(var_writing != NUITKA_BOOL_UNASSIGNED);
tmp_operand_value_3 = (var_writing == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
assert(!(tmp_res == -1));
tmp_or_right_value_1 = (tmp_res == 0) ? Py_True : Py_False;
tmp_assign_source_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assign_source_2 = tmp_or_left_value_1;
or_end_1:;
{
    PyObject *old = var_reading;
    var_reading = tmp_assign_source_2;
    Py_INCREF(var_reading);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_4;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
CHECK_OBJECT(var_reading);
tmp_or_left_value_2 = var_reading;
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "ooooooobobooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
assert(var_writing != NUITKA_BOOL_UNASSIGNED);
tmp_or_right_value_2 = (var_writing == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
tmp_operand_value_4 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_operand_value_4 = tmp_or_left_value_2;
or_end_2:;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "ooooooobobooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_2;
frame_frame_urllib3$util$ssltransport$$$function__11_makefile->m_frame.f_lineno = 137;
tmp_raise_type_2 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 137;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooobobooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
nuitka_bool tmp_assign_source_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = const_str_plain_b;
CHECK_OBJECT(par_mode);
tmp_cmp_expr_right_4 = par_mode;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "ooooooobobooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
var_binary = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = const_str_empty;
{
    PyObject *old = var_rawmode;
    var_rawmode = tmp_assign_source_4;
    Py_INCREF(var_rawmode);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_1;
CHECK_OBJECT(var_reading);
tmp_truth_name_1 = CHECK_IF_TRUE(var_reading);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "ooooooobobooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
CHECK_OBJECT(var_rawmode);
tmp_iadd_expr_left_1 = var_rawmode;
tmp_iadd_expr_right_1 = const_str_plain_r;
tmp_result = INPLACE_OPERATION_ADD_UNICODE_UNICODE(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
assert(!(tmp_result == false));
tmp_assign_source_5 = tmp_iadd_expr_left_1;
var_rawmode = tmp_assign_source_5;

}
branch_no_3:;
{
bool tmp_condition_result_4;
assert(var_writing != NUITKA_BOOL_UNASSIGNED);
tmp_condition_result_4 = var_writing == NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
CHECK_OBJECT(var_rawmode);
tmp_iadd_expr_left_2 = var_rawmode;
tmp_iadd_expr_right_2 = const_str_plain_w;
tmp_result = INPLACE_OPERATION_ADD_UNICODE_UNICODE(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
assert(!(tmp_result == false));
tmp_assign_source_6 = tmp_iadd_expr_left_2;
var_rawmode = tmp_assign_source_6;

}
branch_no_4:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_urllib3$util$ssltransport$socket(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_socket);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 144;
type_description_1 = "ooooooobobooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
CHECK_OBJECT(var_rawmode);
tmp_args_element_value_2 = var_rawmode;
frame_frame_urllib3$util$ssltransport$$$function__11_makefile->m_frame.f_lineno = 144;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_7 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_SocketIO,
        call_args
    );
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "ooooooobobooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_raw;
    var_raw = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_socket);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooooobobooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__io_refs);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooooobobooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_inplace_assign_1__value;
    tmp_inplace_assign_1__value = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iadd_expr_left_3;
PyObject *tmp_iadd_expr_right_3;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_iadd_expr_left_3 = tmp_inplace_assign_1__value;
tmp_iadd_expr_right_3 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooooobobooo";
    goto try_except_handler_2;
}
tmp_assign_source_9 = tmp_iadd_expr_left_3;
tmp_inplace_assign_1__value = tmp_assign_source_9;

}
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_ass_attr_value_1 = tmp_inplace_assign_1__value;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_ass_attr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_socket);
if (tmp_ass_attr_target_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooooobobooo";
    goto try_except_handler_2;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__io_refs, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_target_1);
Py_DECREF(tmp_ass_attr_target_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooooobobooo";
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

CHECK_OBJECT(tmp_inplace_assign_1__value);
CHECK_OBJECT(tmp_inplace_assign_1__value);
Py_DECREF(tmp_inplace_assign_1__value);
tmp_inplace_assign_1__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
CHECK_OBJECT(tmp_inplace_assign_1__value);
CHECK_OBJECT(tmp_inplace_assign_1__value);
Py_DECREF(tmp_inplace_assign_1__value);
tmp_inplace_assign_1__value = NULL;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(par_buffering);
tmp_cmp_expr_left_5 = par_buffering;
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = const_int_neg_1;
{
    PyObject *old = par_buffering;
    assert(old != NULL);
    par_buffering = tmp_assign_source_10;
    Py_INCREF(par_buffering);
    Py_DECREF(old);
}

}
branch_no_5:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(par_buffering);
tmp_cmp_expr_left_6 = par_buffering;
tmp_cmp_expr_right_6 = const_int_0;
tmp_condition_result_6 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ooooooobobooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_expression_value_4;
tmp_expression_value_4 = IMPORT_HARD_IO();
assert(!(tmp_expression_value_4 == NULL));
tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_DEFAULT_BUFFER_SIZE);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooooooobobooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_buffering;
    assert(old != NULL);
    par_buffering = tmp_assign_source_11;
    Py_DECREF(old);
}

}
branch_no_6:;
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(par_buffering);
tmp_cmp_expr_left_7 = par_buffering;
tmp_cmp_expr_right_7 = const_int_0;
tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooooooobobooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
bool tmp_condition_result_8;
PyObject *tmp_operand_value_5;
assert(var_binary != NUITKA_BOOL_UNASSIGNED);
tmp_operand_value_5 = (var_binary == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
assert(!(tmp_res == -1));
tmp_condition_result_8 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_397bad4f1f82195a3ed46c76f3f81db2;
frame_frame_urllib3$util$ssltransport$$$function__11_makefile->m_frame.f_lineno = 152;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 152;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooobobooo";
goto frame_exception_exit_1;
}
branch_no_8:;
CHECK_OBJECT(var_raw);
tmp_return_value = var_raw;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_7:;
{
nuitka_bool tmp_condition_result_9;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_2;
CHECK_OBJECT(var_reading);
tmp_truth_name_2 = CHECK_IF_TRUE(var_reading);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooooooobobooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooooooobobooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
assert(var_writing != NUITKA_BOOL_UNASSIGNED);
tmp_and_right_value_1 = var_writing;
tmp_condition_result_9 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_9 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_instance_2 = IMPORT_HARD_IO();
assert(!(tmp_called_instance_2 == NULL));
CHECK_OBJECT(var_raw);
tmp_args_element_value_3 = var_raw;
CHECK_OBJECT(var_raw);
tmp_args_element_value_4 = var_raw;
CHECK_OBJECT(par_buffering);
tmp_args_element_value_5 = par_buffering;
frame_frame_urllib3$util$ssltransport$$$function__11_makefile->m_frame.f_lineno = 156;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_12 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_BufferedRWPair,
        call_args
    );
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooooooobobooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_buffer;
    var_buffer = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
goto branch_end_9;
branch_no_9:;
{
nuitka_bool tmp_condition_result_10;
int tmp_truth_name_3;
CHECK_OBJECT(var_reading);
tmp_truth_name_3 = CHECK_IF_TRUE(var_reading);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "ooooooobobooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_10 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_instance_3 = IMPORT_HARD_IO();
assert(!(tmp_called_instance_3 == NULL));
CHECK_OBJECT(var_raw);
tmp_args_element_value_6 = var_raw;
CHECK_OBJECT(par_buffering);
tmp_args_element_value_7 = par_buffering;
frame_frame_urllib3$util$ssltransport$$$function__11_makefile->m_frame.f_lineno = 158;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_13 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain_BufferedReader,
        call_args
    );
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "ooooooobobooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_buffer;
    var_buffer = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
goto branch_end_10;
branch_no_10:;
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_6;
assert(var_writing != NUITKA_BOOL_UNASSIGNED);
tmp_operand_value_6 = (var_writing == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
assert(!(tmp_res == -1));
tmp_condition_result_11 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_raise_type_4;
frame_frame_urllib3$util$ssltransport$$$function__11_makefile->m_frame.f_lineno = 160;
tmp_raise_type_4 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 160;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooobobooo";
goto frame_exception_exit_1;
}
branch_no_11:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_called_instance_4 = IMPORT_HARD_IO();
assert(!(tmp_called_instance_4 == NULL));
CHECK_OBJECT(var_raw);
tmp_args_element_value_8 = var_raw;
CHECK_OBJECT(par_buffering);
tmp_args_element_value_9 = par_buffering;
frame_frame_urllib3$util$ssltransport$$$function__11_makefile->m_frame.f_lineno = 161;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_assign_source_14 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_4,
        mod_consts.const_str_plain_BufferedWriter,
        call_args
    );
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "ooooooobobooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_buffer;
    var_buffer = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
branch_end_10:;
branch_end_9:;
{
bool tmp_condition_result_12;
assert(var_binary != NUITKA_BOOL_UNASSIGNED);
tmp_condition_result_12 = var_binary == NUITKA_BOOL_TRUE;
if (tmp_condition_result_12 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
CHECK_OBJECT(var_buffer);
tmp_return_value = var_buffer;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_12:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
tmp_called_instance_5 = IMPORT_HARD_IO();
assert(!(tmp_called_instance_5 == NULL));
CHECK_OBJECT(var_buffer);
tmp_args_element_value_10 = var_buffer;
CHECK_OBJECT(par_encoding);
tmp_args_element_value_11 = par_encoding;
CHECK_OBJECT(par_errors);
tmp_args_element_value_12 = par_errors;
CHECK_OBJECT(par_newline);
tmp_args_element_value_13 = par_newline;
frame_frame_urllib3$util$ssltransport$$$function__11_makefile->m_frame.f_lineno = 164;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_assign_source_15 = CALL_METHOD_WITH_ARGS4(
        tstate,
        tmp_called_instance_5,
        mod_consts.const_str_plain_TextIOWrapper,
        call_args
    );
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "ooooooobobooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_text;
    var_text = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_ass_attr_target_2;
CHECK_OBJECT(par_mode);
tmp_ass_attr_value_2 = par_mode;
CHECK_OBJECT(var_text);
tmp_ass_attr_target_2 = var_text;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain_mode, tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "ooooooobobooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssltransport$$$function__11_makefile, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$ssltransport$$$function__11_makefile->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssltransport$$$function__11_makefile, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$ssltransport$$$function__11_makefile,
    type_description_1,
    par_self,
    par_mode,
    par_buffering,
    par_encoding,
    par_errors,
    par_newline,
    var_buffer,
    (int)var_writing,
    var_reading,
    (int)var_binary,
    var_rawmode,
    var_raw,
    var_text
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$ssltransport$$$function__11_makefile == cache_frame_frame_urllib3$util$ssltransport$$$function__11_makefile) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__11_makefile);
    cache_frame_frame_urllib3$util$ssltransport$$$function__11_makefile = NULL;
}

assertFrameObject(frame_frame_urllib3$util$ssltransport$$$function__11_makefile);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_text);
tmp_return_value = var_text;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_buffering);
CHECK_OBJECT(par_buffering);
Py_DECREF(par_buffering);
par_buffering = NULL;
Py_XDECREF(var_buffer);
var_buffer = NULL;
assert(var_writing != NUITKA_BOOL_UNASSIGNED);
var_writing = NUITKA_BOOL_UNASSIGNED;
CHECK_OBJECT(var_reading);
CHECK_OBJECT(var_reading);
Py_DECREF(var_reading);
var_reading = NULL;
assert(var_binary != NUITKA_BOOL_UNASSIGNED);
var_binary = NUITKA_BOOL_UNASSIGNED;
CHECK_OBJECT(var_rawmode);
CHECK_OBJECT(var_rawmode);
Py_DECREF(var_rawmode);
var_rawmode = NULL;
CHECK_OBJECT(var_raw);
CHECK_OBJECT(var_raw);
Py_DECREF(var_raw);
var_raw = NULL;
Py_XDECREF(var_text);
var_text = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_buffering);
par_buffering = NULL;
Py_XDECREF(var_buffer);
var_buffer = NULL;
var_writing = NUITKA_BOOL_UNASSIGNED;
Py_XDECREF(var_reading);
var_reading = NULL;
var_binary = NUITKA_BOOL_UNASSIGNED;
Py_XDECREF(var_rawmode);
var_rawmode = NULL;
Py_XDECREF(var_raw);
var_raw = NULL;
Py_XDECREF(var_text);
var_text = NULL;
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
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
CHECK_OBJECT(par_errors);
Py_DECREF(par_errors);
CHECK_OBJECT(par_newline);
Py_DECREF(par_newline);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
CHECK_OBJECT(par_errors);
Py_DECREF(par_errors);
CHECK_OBJECT(par_newline);
Py_DECREF(par_newline);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$ssltransport$$$function__12_unwrap(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_urllib3$util$ssltransport$$$function__12_unwrap;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$ssltransport$$$function__12_unwrap = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$ssltransport$$$function__12_unwrap)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__12_unwrap);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$ssltransport$$$function__12_unwrap == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$ssltransport$$$function__12_unwrap = MAKE_FUNCTION_FRAME(tstate, code_objects_347672c1db95868322ae987f0e5084ad, module_urllib3$util$ssltransport, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$ssltransport$$$function__12_unwrap->m_type_description == NULL);
frame_frame_urllib3$util$ssltransport$$$function__12_unwrap = cache_frame_frame_urllib3$util$ssltransport$$$function__12_unwrap;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$ssltransport$$$function__12_unwrap);
assert(Py_REFCNT(frame_frame_urllib3$util$ssltransport$$$function__12_unwrap) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__ssl_io_loop);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_sslobj);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 169;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_unwrap);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 169;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$ssltransport$$$function__12_unwrap->m_frame.f_lineno = 169;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssltransport$$$function__12_unwrap, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$ssltransport$$$function__12_unwrap->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssltransport$$$function__12_unwrap, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$ssltransport$$$function__12_unwrap,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$ssltransport$$$function__12_unwrap == cache_frame_frame_urllib3$util$ssltransport$$$function__12_unwrap) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__12_unwrap);
    cache_frame_frame_urllib3$util$ssltransport$$$function__12_unwrap = NULL;
}

assertFrameObject(frame_frame_urllib3$util$ssltransport$$$function__12_unwrap);

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


static PyObject *impl_urllib3$util$ssltransport$$$function__13_close(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_urllib3$util$ssltransport$$$function__13_close;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$ssltransport$$$function__13_close = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$ssltransport$$$function__13_close)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__13_close);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$ssltransport$$$function__13_close == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$ssltransport$$$function__13_close = MAKE_FUNCTION_FRAME(tstate, code_objects_4ef8e456513a15732f5bb9a6fcfa0530, module_urllib3$util$ssltransport, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$ssltransport$$$function__13_close->m_type_description == NULL);
frame_frame_urllib3$util$ssltransport$$$function__13_close = cache_frame_frame_urllib3$util$ssltransport$$$function__13_close;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$ssltransport$$$function__13_close);
assert(Py_REFCNT(frame_frame_urllib3$util$ssltransport$$$function__13_close) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_socket);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$ssltransport$$$function__13_close->m_frame.f_lineno = 172;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_close);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssltransport$$$function__13_close, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$ssltransport$$$function__13_close->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssltransport$$$function__13_close, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$ssltransport$$$function__13_close,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$ssltransport$$$function__13_close == cache_frame_frame_urllib3$util$ssltransport$$$function__13_close) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__13_close);
    cache_frame_frame_urllib3$util$ssltransport$$$function__13_close = NULL;
}

assertFrameObject(frame_frame_urllib3$util$ssltransport$$$function__13_close);

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


static PyObject *impl_urllib3$util$ssltransport$$$function__16_getpeercert(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_binary_form = python_pars[1];
struct Nuitka_FrameObject *frame_frame_urllib3$util$ssltransport$$$function__16_getpeercert;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$ssltransport$$$function__16_getpeercert = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$ssltransport$$$function__16_getpeercert)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__16_getpeercert);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$ssltransport$$$function__16_getpeercert == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$ssltransport$$$function__16_getpeercert = MAKE_FUNCTION_FRAME(tstate, code_objects_c15b7545373734b4d19ccb644e401339, module_urllib3$util$ssltransport, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$ssltransport$$$function__16_getpeercert->m_type_description == NULL);
frame_frame_urllib3$util$ssltransport$$$function__16_getpeercert = cache_frame_frame_urllib3$util$ssltransport$$$function__16_getpeercert;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$ssltransport$$$function__16_getpeercert);
assert(Py_REFCNT(frame_frame_urllib3$util$ssltransport$$$function__16_getpeercert) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_sslobj);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_binary_form);
tmp_args_element_value_1 = par_binary_form;
frame_frame_urllib3$util$ssltransport$$$function__16_getpeercert->m_frame.f_lineno = 183;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_getpeercert, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssltransport$$$function__16_getpeercert, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$ssltransport$$$function__16_getpeercert->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssltransport$$$function__16_getpeercert, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$ssltransport$$$function__16_getpeercert,
    type_description_1,
    par_self,
    par_binary_form
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$ssltransport$$$function__16_getpeercert == cache_frame_frame_urllib3$util$ssltransport$$$function__16_getpeercert) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__16_getpeercert);
    cache_frame_frame_urllib3$util$ssltransport$$$function__16_getpeercert = NULL;
}

assertFrameObject(frame_frame_urllib3$util$ssltransport$$$function__16_getpeercert);

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
CHECK_OBJECT(par_binary_form);
Py_DECREF(par_binary_form);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_binary_form);
Py_DECREF(par_binary_form);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$ssltransport$$$function__17_version(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_urllib3$util$ssltransport$$$function__17_version;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$ssltransport$$$function__17_version = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$ssltransport$$$function__17_version)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__17_version);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$ssltransport$$$function__17_version == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$ssltransport$$$function__17_version = MAKE_FUNCTION_FRAME(tstate, code_objects_b9935e4bd8d1e9a5b4e1193c667fe883, module_urllib3$util$ssltransport, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$ssltransport$$$function__17_version->m_type_description == NULL);
frame_frame_urllib3$util$ssltransport$$$function__17_version = cache_frame_frame_urllib3$util$ssltransport$$$function__17_version;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$ssltransport$$$function__17_version);
assert(Py_REFCNT(frame_frame_urllib3$util$ssltransport$$$function__17_version) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_sslobj);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$ssltransport$$$function__17_version->m_frame.f_lineno = 186;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_version);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssltransport$$$function__17_version, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$ssltransport$$$function__17_version->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssltransport$$$function__17_version, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$ssltransport$$$function__17_version,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$ssltransport$$$function__17_version == cache_frame_frame_urllib3$util$ssltransport$$$function__17_version) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__17_version);
    cache_frame_frame_urllib3$util$ssltransport$$$function__17_version = NULL;
}

assertFrameObject(frame_frame_urllib3$util$ssltransport$$$function__17_version);

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


static PyObject *impl_urllib3$util$ssltransport$$$function__18_cipher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_urllib3$util$ssltransport$$$function__18_cipher;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$ssltransport$$$function__18_cipher = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$ssltransport$$$function__18_cipher)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__18_cipher);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$ssltransport$$$function__18_cipher == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$ssltransport$$$function__18_cipher = MAKE_FUNCTION_FRAME(tstate, code_objects_548f2943ac2519272b2bfa0c850d2106, module_urllib3$util$ssltransport, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$ssltransport$$$function__18_cipher->m_type_description == NULL);
frame_frame_urllib3$util$ssltransport$$$function__18_cipher = cache_frame_frame_urllib3$util$ssltransport$$$function__18_cipher;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$ssltransport$$$function__18_cipher);
assert(Py_REFCNT(frame_frame_urllib3$util$ssltransport$$$function__18_cipher) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_sslobj);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$ssltransport$$$function__18_cipher->m_frame.f_lineno = 189;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_cipher);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssltransport$$$function__18_cipher, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$ssltransport$$$function__18_cipher->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssltransport$$$function__18_cipher, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$ssltransport$$$function__18_cipher,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$ssltransport$$$function__18_cipher == cache_frame_frame_urllib3$util$ssltransport$$$function__18_cipher) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__18_cipher);
    cache_frame_frame_urllib3$util$ssltransport$$$function__18_cipher = NULL;
}

assertFrameObject(frame_frame_urllib3$util$ssltransport$$$function__18_cipher);

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


static PyObject *impl_urllib3$util$ssltransport$$$function__19_selected_alpn_protocol(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_urllib3$util$ssltransport$$$function__19_selected_alpn_protocol;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$ssltransport$$$function__19_selected_alpn_protocol = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$ssltransport$$$function__19_selected_alpn_protocol)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__19_selected_alpn_protocol);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$ssltransport$$$function__19_selected_alpn_protocol == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$ssltransport$$$function__19_selected_alpn_protocol = MAKE_FUNCTION_FRAME(tstate, code_objects_56c77bb72ac5480f4e957e2fd28c855a, module_urllib3$util$ssltransport, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$ssltransport$$$function__19_selected_alpn_protocol->m_type_description == NULL);
frame_frame_urllib3$util$ssltransport$$$function__19_selected_alpn_protocol = cache_frame_frame_urllib3$util$ssltransport$$$function__19_selected_alpn_protocol;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$ssltransport$$$function__19_selected_alpn_protocol);
assert(Py_REFCNT(frame_frame_urllib3$util$ssltransport$$$function__19_selected_alpn_protocol) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_sslobj);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$ssltransport$$$function__19_selected_alpn_protocol->m_frame.f_lineno = 192;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_selected_alpn_protocol);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssltransport$$$function__19_selected_alpn_protocol, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$ssltransport$$$function__19_selected_alpn_protocol->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssltransport$$$function__19_selected_alpn_protocol, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$ssltransport$$$function__19_selected_alpn_protocol,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$ssltransport$$$function__19_selected_alpn_protocol == cache_frame_frame_urllib3$util$ssltransport$$$function__19_selected_alpn_protocol) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__19_selected_alpn_protocol);
    cache_frame_frame_urllib3$util$ssltransport$$$function__19_selected_alpn_protocol = NULL;
}

assertFrameObject(frame_frame_urllib3$util$ssltransport$$$function__19_selected_alpn_protocol);

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


static PyObject *impl_urllib3$util$ssltransport$$$function__20_shared_ciphers(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_urllib3$util$ssltransport$$$function__20_shared_ciphers;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$ssltransport$$$function__20_shared_ciphers = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$ssltransport$$$function__20_shared_ciphers)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__20_shared_ciphers);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$ssltransport$$$function__20_shared_ciphers == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$ssltransport$$$function__20_shared_ciphers = MAKE_FUNCTION_FRAME(tstate, code_objects_36dcecd457208439ede3a2a92dfc0aaf, module_urllib3$util$ssltransport, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$ssltransport$$$function__20_shared_ciphers->m_type_description == NULL);
frame_frame_urllib3$util$ssltransport$$$function__20_shared_ciphers = cache_frame_frame_urllib3$util$ssltransport$$$function__20_shared_ciphers;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$ssltransport$$$function__20_shared_ciphers);
assert(Py_REFCNT(frame_frame_urllib3$util$ssltransport$$$function__20_shared_ciphers) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_sslobj);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$ssltransport$$$function__20_shared_ciphers->m_frame.f_lineno = 195;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_shared_ciphers);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssltransport$$$function__20_shared_ciphers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$ssltransport$$$function__20_shared_ciphers->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssltransport$$$function__20_shared_ciphers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$ssltransport$$$function__20_shared_ciphers,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$ssltransport$$$function__20_shared_ciphers == cache_frame_frame_urllib3$util$ssltransport$$$function__20_shared_ciphers) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__20_shared_ciphers);
    cache_frame_frame_urllib3$util$ssltransport$$$function__20_shared_ciphers = NULL;
}

assertFrameObject(frame_frame_urllib3$util$ssltransport$$$function__20_shared_ciphers);

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


static PyObject *impl_urllib3$util$ssltransport$$$function__21_compression(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_urllib3$util$ssltransport$$$function__21_compression;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$ssltransport$$$function__21_compression = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$ssltransport$$$function__21_compression)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__21_compression);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$ssltransport$$$function__21_compression == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$ssltransport$$$function__21_compression = MAKE_FUNCTION_FRAME(tstate, code_objects_5f5bb24b0097cafbcdeea5bd5a41dec7, module_urllib3$util$ssltransport, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$ssltransport$$$function__21_compression->m_type_description == NULL);
frame_frame_urllib3$util$ssltransport$$$function__21_compression = cache_frame_frame_urllib3$util$ssltransport$$$function__21_compression;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$ssltransport$$$function__21_compression);
assert(Py_REFCNT(frame_frame_urllib3$util$ssltransport$$$function__21_compression) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_sslobj);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$ssltransport$$$function__21_compression->m_frame.f_lineno = 198;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_compression);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssltransport$$$function__21_compression, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$ssltransport$$$function__21_compression->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssltransport$$$function__21_compression, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$ssltransport$$$function__21_compression,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$ssltransport$$$function__21_compression == cache_frame_frame_urllib3$util$ssltransport$$$function__21_compression) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__21_compression);
    cache_frame_frame_urllib3$util$ssltransport$$$function__21_compression = NULL;
}

assertFrameObject(frame_frame_urllib3$util$ssltransport$$$function__21_compression);

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


static PyObject *impl_urllib3$util$ssltransport$$$function__22_settimeout(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
struct Nuitka_FrameObject *frame_frame_urllib3$util$ssltransport$$$function__22_settimeout;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$ssltransport$$$function__22_settimeout = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$ssltransport$$$function__22_settimeout)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__22_settimeout);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$ssltransport$$$function__22_settimeout == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$ssltransport$$$function__22_settimeout = MAKE_FUNCTION_FRAME(tstate, code_objects_6c05baba2c51f3634af5f042d1408dc0, module_urllib3$util$ssltransport, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$ssltransport$$$function__22_settimeout->m_type_description == NULL);
frame_frame_urllib3$util$ssltransport$$$function__22_settimeout = cache_frame_frame_urllib3$util$ssltransport$$$function__22_settimeout;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$ssltransport$$$function__22_settimeout);
assert(Py_REFCNT(frame_frame_urllib3$util$ssltransport$$$function__22_settimeout) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_socket);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_value);
tmp_args_element_value_1 = par_value;
frame_frame_urllib3$util$ssltransport$$$function__22_settimeout->m_frame.f_lineno = 201;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_settimeout, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssltransport$$$function__22_settimeout, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$ssltransport$$$function__22_settimeout->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssltransport$$$function__22_settimeout, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$ssltransport$$$function__22_settimeout,
    type_description_1,
    par_self,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$ssltransport$$$function__22_settimeout == cache_frame_frame_urllib3$util$ssltransport$$$function__22_settimeout) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__22_settimeout);
    cache_frame_frame_urllib3$util$ssltransport$$$function__22_settimeout = NULL;
}

assertFrameObject(frame_frame_urllib3$util$ssltransport$$$function__22_settimeout);

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
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$ssltransport$$$function__23_gettimeout(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_urllib3$util$ssltransport$$$function__23_gettimeout;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$ssltransport$$$function__23_gettimeout = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$ssltransport$$$function__23_gettimeout)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__23_gettimeout);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$ssltransport$$$function__23_gettimeout == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$ssltransport$$$function__23_gettimeout = MAKE_FUNCTION_FRAME(tstate, code_objects_459ab42eab8586c376d367dfe1e5334b, module_urllib3$util$ssltransport, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$ssltransport$$$function__23_gettimeout->m_type_description == NULL);
frame_frame_urllib3$util$ssltransport$$$function__23_gettimeout = cache_frame_frame_urllib3$util$ssltransport$$$function__23_gettimeout;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$ssltransport$$$function__23_gettimeout);
assert(Py_REFCNT(frame_frame_urllib3$util$ssltransport$$$function__23_gettimeout) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_socket);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$ssltransport$$$function__23_gettimeout->m_frame.f_lineno = 204;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_gettimeout);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssltransport$$$function__23_gettimeout, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$ssltransport$$$function__23_gettimeout->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssltransport$$$function__23_gettimeout, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$ssltransport$$$function__23_gettimeout,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$ssltransport$$$function__23_gettimeout == cache_frame_frame_urllib3$util$ssltransport$$$function__23_gettimeout) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__23_gettimeout);
    cache_frame_frame_urllib3$util$ssltransport$$$function__23_gettimeout = NULL;
}

assertFrameObject(frame_frame_urllib3$util$ssltransport$$$function__23_gettimeout);

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


static PyObject *impl_urllib3$util$ssltransport$$$function__24__decref_socketios(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_urllib3$util$ssltransport$$$function__24__decref_socketios;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$ssltransport$$$function__24__decref_socketios = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$ssltransport$$$function__24__decref_socketios)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__24__decref_socketios);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$ssltransport$$$function__24__decref_socketios == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$ssltransport$$$function__24__decref_socketios = MAKE_FUNCTION_FRAME(tstate, code_objects_03c47cd5d2fd9a1cca67eee1c2c4aa46, module_urllib3$util$ssltransport, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$ssltransport$$$function__24__decref_socketios->m_type_description == NULL);
frame_frame_urllib3$util$ssltransport$$$function__24__decref_socketios = cache_frame_frame_urllib3$util$ssltransport$$$function__24__decref_socketios;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$ssltransport$$$function__24__decref_socketios);
assert(Py_REFCNT(frame_frame_urllib3$util$ssltransport$$$function__24__decref_socketios) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_socket);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$ssltransport$$$function__24__decref_socketios->m_frame.f_lineno = 207;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__decref_socketios);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssltransport$$$function__24__decref_socketios, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$ssltransport$$$function__24__decref_socketios->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssltransport$$$function__24__decref_socketios, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$ssltransport$$$function__24__decref_socketios,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$ssltransport$$$function__24__decref_socketios == cache_frame_frame_urllib3$util$ssltransport$$$function__24__decref_socketios) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__24__decref_socketios);
    cache_frame_frame_urllib3$util$ssltransport$$$function__24__decref_socketios = NULL;
}

assertFrameObject(frame_frame_urllib3$util$ssltransport$$$function__24__decref_socketios);

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


static PyObject *impl_urllib3$util$ssltransport$$$function__25__wrap_ssl_read(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_len = python_pars[1];
PyObject *par_buffer = python_pars[2];
PyObject *var_e = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$ssltransport$$$function__25__wrap_ssl_read;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$ssltransport$$$function__25__wrap_ssl_read = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$ssltransport$$$function__25__wrap_ssl_read)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__25__wrap_ssl_read);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$ssltransport$$$function__25__wrap_ssl_read == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$ssltransport$$$function__25__wrap_ssl_read = MAKE_FUNCTION_FRAME(tstate, code_objects_2c42ccbb8af20749ce270e151bcd8fdc, module_urllib3$util$ssltransport, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$ssltransport$$$function__25__wrap_ssl_read->m_type_description == NULL);
frame_frame_urllib3$util$ssltransport$$$function__25__wrap_ssl_read = cache_frame_frame_urllib3$util$ssltransport$$$function__25__wrap_ssl_read;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$ssltransport$$$function__25__wrap_ssl_read);
assert(Py_REFCNT(frame_frame_urllib3$util$ssltransport$$$function__25__wrap_ssl_read) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__ssl_io_loop);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "oooo";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_sslobj);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 211;
type_description_1 = "oooo";
    goto try_except_handler_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_read);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 211;
type_description_1 = "oooo";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_len);
tmp_args_element_value_2 = par_len;
CHECK_OBJECT(par_buffer);
tmp_args_element_value_3 = par_buffer;
frame_frame_urllib3$util$ssltransport$$$function__25__wrap_ssl_read->m_frame.f_lineno = 211;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "oooo";
    goto try_except_handler_1;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssltransport$$$function__25__wrap_ssl_read, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssltransport$$$function__25__wrap_ssl_read, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_4;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_expression_value_4 = module_var_accessor_urllib3$util$ssltransport$ssl(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ssl);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 212;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_SSLError);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooo";
    goto try_except_handler_2;
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
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_1); 
{
    PyObject *old = var_e;
    var_e = tmp_assign_source_1;
    Py_INCREF(var_e);
    Py_XDECREF(old);
}

}
// Tried code:
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_e);
tmp_expression_value_5 = var_e;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_errno);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_expression_value_6 = module_var_accessor_urllib3$util$ssltransport$ssl(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ssl);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 213;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_SSL_ERROR_EOF);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 213;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_suppress_ragged_eofs);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 213;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
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
tmp_return_value = const_int_0;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_3;
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 216;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$util$ssltransport$$$function__25__wrap_ssl_read->m_frame)) {
        frame_frame_urllib3$util$ssltransport$$$function__25__wrap_ssl_read->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_3;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_XDECREF(var_e);
var_e = NULL;

goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 210;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$util$ssltransport$$$function__25__wrap_ssl_read->m_frame)) {
        frame_frame_urllib3$util$ssltransport$$$function__25__wrap_ssl_read->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_2;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto frame_return_exit_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
// End of try:


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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssltransport$$$function__25__wrap_ssl_read, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$ssltransport$$$function__25__wrap_ssl_read->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssltransport$$$function__25__wrap_ssl_read, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$ssltransport$$$function__25__wrap_ssl_read,
    type_description_1,
    par_self,
    par_len,
    par_buffer,
    var_e
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$ssltransport$$$function__25__wrap_ssl_read == cache_frame_frame_urllib3$util$ssltransport$$$function__25__wrap_ssl_read) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__25__wrap_ssl_read);
    cache_frame_frame_urllib3$util$ssltransport$$$function__25__wrap_ssl_read = NULL;
}

assertFrameObject(frame_frame_urllib3$util$ssltransport$$$function__25__wrap_ssl_read);

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
CHECK_OBJECT(par_len);
Py_DECREF(par_len);
CHECK_OBJECT(par_buffer);
Py_DECREF(par_buffer);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_len);
Py_DECREF(par_len);
CHECK_OBJECT(par_buffer);
Py_DECREF(par_buffer);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$ssltransport$$$function__29__ssl_io_loop(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_func = python_pars[1];
PyObject *par_arg1 = python_pars[2];
PyObject *par_arg2 = python_pars[3];
PyObject *var_should_loop = NULL;
PyObject *var_ret = NULL;
PyObject *var_errno = NULL;
PyObject *var_e = NULL;
PyObject *var_buf = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$ssltransport$$$function__29__ssl_io_loop;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$ssltransport$$$function__29__ssl_io_loop = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_True;
{
    PyObject *old = var_should_loop;
    var_should_loop = tmp_assign_source_1;
    Py_INCREF(var_should_loop);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = Py_None;
{
    PyObject *old = var_ret;
    var_ret = tmp_assign_source_2;
    Py_INCREF(var_ret);
    Py_XDECREF(old);
}

}
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$ssltransport$$$function__29__ssl_io_loop)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__29__ssl_io_loop);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$ssltransport$$$function__29__ssl_io_loop == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$ssltransport$$$function__29__ssl_io_loop = MAKE_FUNCTION_FRAME(tstate, code_objects_28857f1ec4c1a46489cdc10031821b82, module_urllib3$util$ssltransport, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$ssltransport$$$function__29__ssl_io_loop->m_type_description == NULL);
frame_frame_urllib3$util$ssltransport$$$function__29__ssl_io_loop = cache_frame_frame_urllib3$util$ssltransport$$$function__29__ssl_io_loop;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$ssltransport$$$function__29__ssl_io_loop);
assert(Py_REFCNT(frame_frame_urllib3$util$ssltransport$$$function__29__ssl_io_loop) == 2);

// Framed code:
loop_start_1:;
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
if (var_should_loop == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_should_loop);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 245;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_operand_value_1 = var_should_loop;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "ooooooooo";
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
goto loop_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = Py_None;
{
    PyObject *old = var_errno;
    var_errno = tmp_assign_source_3;
    Py_INCREF(var_errno);
    Py_XDECREF(old);
}

}
// Tried code:
{
bool tmp_condition_result_2;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
if (par_arg1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_arg1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 248;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_left_1 = par_arg1;
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (par_arg2 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_arg2);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 248;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_left_2 = par_arg2;
tmp_cmp_expr_right_2 = Py_None;
tmp_and_right_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
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
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_1;
if (par_func == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_func);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 249;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_called_value_1 = par_func;
frame_frame_urllib3$util$ssltransport$$$function__29__ssl_io_loop->m_frame.f_lineno = 249;
tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_ret;
    var_ret = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
if (par_arg2 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_arg2);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 250;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_left_3 = par_arg2;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
if (par_func == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_func);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 251;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_called_value_2 = par_func;
if (par_arg1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_arg1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 251;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_1 = par_arg1;
frame_frame_urllib3$util$ssltransport$$$function__29__ssl_io_loop->m_frame.f_lineno = 251;
tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_ret;
    var_ret = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
if (par_func == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_func);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 253;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_called_value_3 = par_func;
if (par_arg1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_arg1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 253;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_2 = par_arg1;
if (par_arg2 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_arg2);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 253;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_3 = par_arg2;
frame_frame_urllib3$util$ssltransport$$$function__29__ssl_io_loop->m_frame.f_lineno = 253;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_ret;
    var_ret = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
branch_end_3:;
branch_end_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssltransport$$$function__29__ssl_io_loop, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssltransport$$$function__29__ssl_io_loop, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_1;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_expression_value_1 = module_var_accessor_urllib3$util$ssltransport$ssl(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ssl);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 254;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_SSLError);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
tmp_condition_result_4 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_7); 
{
    PyObject *old = var_e;
    var_e = tmp_assign_source_7;
    Py_INCREF(var_e);
    Py_XDECREF(old);
}

}
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_2;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_e);
tmp_expression_value_2 = var_e;
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_errno);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_expression_value_3 = module_var_accessor_urllib3$util$ssltransport$ssl(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ssl);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_5);

exception_lineno = 255;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_SSL_ERROR_WANT_READ);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_5);

exception_lineno = 255;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_cmp_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_4;
PyTuple_SET_ITEM(tmp_cmp_expr_right_5, 0, tmp_tuple_element_1);
tmp_expression_value_4 = module_var_accessor_urllib3$util$ssltransport$ssl(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ssl);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 255;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_SSL_ERROR_WANT_WRITE);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_cmp_expr_right_5, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_right_5);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
CHECK_OBJECT(tmp_cmp_expr_right_5);
Py_DECREF(tmp_cmp_expr_right_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_5 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
CHECK_OBJECT(var_e);
tmp_raise_type_input_1 = var_e;
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 257;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooo";
goto try_except_handler_4;
}
branch_no_5:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_e);
tmp_expression_value_5 = var_e;
tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_errno);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_errno;
    assert(old != NULL);
    var_errno = tmp_assign_source_8;
    Py_DECREF(old);
}

}
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
try_end_2:;
Py_XDECREF(var_e);
var_e = NULL;

goto branch_end_4;
branch_no_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 247;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$util$ssltransport$$$function__29__ssl_io_loop->m_frame)) {
        frame_frame_urllib3$util$ssltransport$$$function__29__ssl_io_loop->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooo";
goto try_except_handler_3;
branch_end_4:;
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_6;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 260;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_outgoing);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$ssltransport$$$function__29__ssl_io_loop->m_frame.f_lineno = 260;
tmp_assign_source_9 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_read);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_buf;
    var_buf = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_4;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 261;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_7 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_socket);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_buf);
tmp_args_element_value_4 = var_buf;
frame_frame_urllib3$util$ssltransport$$$function__29__ssl_io_loop->m_frame.f_lineno = 261;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_sendall, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(var_errno);
tmp_cmp_expr_left_6 = var_errno;
tmp_cmp_expr_right_6 = Py_None;
tmp_condition_result_6 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = Py_False;
{
    PyObject *old = var_should_loop;
    var_should_loop = tmp_assign_source_10;
    Py_INCREF(var_should_loop);
    Py_XDECREF(old);
}

}
goto branch_end_6;
branch_no_6:;
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(var_errno);
tmp_cmp_expr_left_7 = var_errno;
tmp_expression_value_8 = module_var_accessor_urllib3$util$ssltransport$ssl(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ssl);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 265;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_SSL_ERROR_WANT_READ);
if (tmp_cmp_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_right_7);
Py_DECREF(tmp_cmp_expr_right_7);
if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_5;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 266;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_10 = par_self;
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_socket);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_recv);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = module_var_accessor_urllib3$util$ssltransport$SSL_BLOCKSIZE(tstate);
if (unlikely(tmp_args_element_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SSL_BLOCKSIZE);
}

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 266;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$ssltransport$$$function__29__ssl_io_loop->m_frame.f_lineno = 266;
tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_buf;
    assert(old != NULL);
    var_buf = tmp_assign_source_11;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_8;
int tmp_truth_name_1;
CHECK_OBJECT(var_buf);
tmp_truth_name_1 = CHECK_IF_TRUE(var_buf);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_11;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_6;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 268;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_11 = par_self;
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_incoming);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_buf);
tmp_args_element_value_6 = var_buf;
frame_frame_urllib3$util$ssltransport$$$function__29__ssl_io_loop->m_frame.f_lineno = 268;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_write, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
goto branch_end_8;
branch_no_8:;
{
PyObject *tmp_called_instance_4;
PyObject *tmp_expression_value_12;
PyObject *tmp_call_result_3;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 270;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_12 = par_self;
tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_incoming);
if (tmp_called_instance_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$ssltransport$$$function__29__ssl_io_loop->m_frame.f_lineno = 270;
tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_write_eof);
CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_end_8:;
branch_no_7:;
branch_end_6:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
tmp_expression_value_13 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_13 == NULL));
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_cast);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = module_var_accessor_urllib3$util$ssltransport$_ReturnValue(tstate);
if (unlikely(tmp_args_element_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ReturnValue);
}

if (tmp_args_element_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 271;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (var_ret == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ret);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 271;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_8 = var_ret;
frame_frame_urllib3$util$ssltransport$$$function__29__ssl_io_loop->m_frame.f_lineno = 271;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "ooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssltransport$$$function__29__ssl_io_loop, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$ssltransport$$$function__29__ssl_io_loop->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssltransport$$$function__29__ssl_io_loop, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$ssltransport$$$function__29__ssl_io_loop,
    type_description_1,
    par_self,
    par_func,
    par_arg1,
    par_arg2,
    var_should_loop,
    var_ret,
    var_errno,
    var_e,
    var_buf
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$ssltransport$$$function__29__ssl_io_loop == cache_frame_frame_urllib3$util$ssltransport$$$function__29__ssl_io_loop) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$ssltransport$$$function__29__ssl_io_loop);
    cache_frame_frame_urllib3$util$ssltransport$$$function__29__ssl_io_loop = NULL;
}

assertFrameObject(frame_frame_urllib3$util$ssltransport$$$function__29__ssl_io_loop);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_should_loop);
var_should_loop = NULL;
Py_XDECREF(var_ret);
var_ret = NULL;
Py_XDECREF(var_errno);
var_errno = NULL;
Py_XDECREF(var_e);
var_e = NULL;
Py_XDECREF(var_buf);
var_buf = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_should_loop);
var_should_loop = NULL;
Py_XDECREF(var_ret);
var_ret = NULL;
Py_XDECREF(var_errno);
var_errno = NULL;
Py_XDECREF(var_e);
var_e = NULL;
Py_XDECREF(var_buf);
var_buf = NULL;
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
CHECK_OBJECT(par_func);
Py_DECREF(par_func);
CHECK_OBJECT(par_arg1);
Py_DECREF(par_arg1);
CHECK_OBJECT(par_arg2);
Py_DECREF(par_arg2);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_func);
Py_DECREF(par_func);
CHECK_OBJECT(par_arg1);
Py_DECREF(par_arg1);
CHECK_OBJECT(par_arg2);
Py_DECREF(par_arg2);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__10_send(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssltransport$$$function__10_send,
        const_str_plain_send,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d4b885a810fc8f78c524bfcc62f67f47,
#endif
        code_objects_f303c93fd1cec1527cb37fb8f238691a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssltransport,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__11_makefile(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssltransport$$$function__11_makefile,
        mod_consts.const_str_plain_makefile,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e2ca366709c92ea36d1cf068966574ab,
#endif
        code_objects_c7fe4b28f6ee79ec0453c960d8dc4b9b,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_urllib3$util$ssltransport,
        mod_consts.const_str_digest_6e912304cc47aaf5aa16b32778f0085c,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__12_unwrap(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssltransport$$$function__12_unwrap,
        mod_consts.const_str_plain_unwrap,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7a201e48fcbb2e4a3fe293437029a84d,
#endif
        code_objects_347672c1db95868322ae987f0e5084ad,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssltransport,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__13_close(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssltransport$$$function__13_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8a933ac923910b22f88c0294a3e717a2,
#endif
        code_objects_4ef8e456513a15732f5bb9a6fcfa0530,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssltransport,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__14_getpeercert(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_getpeercert,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6167fe1c698a03bebfc2a50dfc064495,
#endif
        code_objects_0c8749caf722ea4a142d2270a9af62c7,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssltransport,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__15_getpeercert(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_getpeercert,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6167fe1c698a03bebfc2a50dfc064495,
#endif
        code_objects_62ef0ebaeb414bdc19cc4234d4b57461,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssltransport,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__16_getpeercert(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssltransport$$$function__16_getpeercert,
        mod_consts.const_str_plain_getpeercert,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6167fe1c698a03bebfc2a50dfc064495,
#endif
        code_objects_c15b7545373734b4d19ccb644e401339,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssltransport,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__17_version(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssltransport$$$function__17_version,
        mod_consts.const_str_plain_version,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9be10114a6296958277ace143227d15d,
#endif
        code_objects_b9935e4bd8d1e9a5b4e1193c667fe883,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssltransport,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__18_cipher(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssltransport$$$function__18_cipher,
        mod_consts.const_str_plain_cipher,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c3f2b7cceb73824fef1bad37229f5942,
#endif
        code_objects_548f2943ac2519272b2bfa0c850d2106,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssltransport,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__19_selected_alpn_protocol(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssltransport$$$function__19_selected_alpn_protocol,
        mod_consts.const_str_plain_selected_alpn_protocol,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dc908cf90cc6a5f2a5db310cd04f7330,
#endif
        code_objects_56c77bb72ac5480f4e957e2fd28c855a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssltransport,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__1__validate_ssl_context_for_tls_in_tls(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssltransport$$$function__1__validate_ssl_context_for_tls_in_tls,
        mod_consts.const_str_plain__validate_ssl_context_for_tls_in_tls,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_beed7828015b058e5bd0ec35067d0d81,
#endif
        code_objects_044ac7ff45c442fb46f31bde1f7ca9f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssltransport,
        mod_consts.const_str_digest_061852b76b1704f8c2fc53b3a010ee1e,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__20_shared_ciphers(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssltransport$$$function__20_shared_ciphers,
        mod_consts.const_str_plain_shared_ciphers,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ed12867892805cc3edfcd62ce355a47d,
#endif
        code_objects_36dcecd457208439ede3a2a92dfc0aaf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssltransport,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__21_compression(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssltransport$$$function__21_compression,
        mod_consts.const_str_plain_compression,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d9230878b21d3316542d1b7aba5b391e,
#endif
        code_objects_5f5bb24b0097cafbcdeea5bd5a41dec7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssltransport,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__22_settimeout(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssltransport$$$function__22_settimeout,
        mod_consts.const_str_plain_settimeout,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_aeb0f82511ae06f3df16270cadc26672,
#endif
        code_objects_6c05baba2c51f3634af5f042d1408dc0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssltransport,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__23_gettimeout(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssltransport$$$function__23_gettimeout,
        mod_consts.const_str_plain_gettimeout,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7039b726d187d45b79e8366a29db2241,
#endif
        code_objects_459ab42eab8586c376d367dfe1e5334b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssltransport,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__24__decref_socketios(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssltransport$$$function__24__decref_socketios,
        mod_consts.const_str_plain__decref_socketios,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5c97b0757d3a35986fcab7a9a805f7a2,
#endif
        code_objects_03c47cd5d2fd9a1cca67eee1c2c4aa46,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssltransport,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__25__wrap_ssl_read(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssltransport$$$function__25__wrap_ssl_read,
        mod_consts.const_str_plain__wrap_ssl_read,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c57c02e66ad506bd06df355b0e76d2ec,
#endif
        code_objects_2c42ccbb8af20749ce270e151bcd8fdc,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssltransport,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__26__ssl_io_loop(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain__ssl_io_loop,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4c4369abc9b798df8fc3818a222085d2,
#endif
        code_objects_10e6cfd0c002e229661588b2ec9220bc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssltransport,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__27__ssl_io_loop(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain__ssl_io_loop,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4c4369abc9b798df8fc3818a222085d2,
#endif
        code_objects_d2718b0b68b33ff3b0987fff9c4678e5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssltransport,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__28__ssl_io_loop(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain__ssl_io_loop,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4c4369abc9b798df8fc3818a222085d2,
#endif
        code_objects_24fa19cc8fc0fabdb97e579f23461f4e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssltransport,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__29__ssl_io_loop(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssltransport$$$function__29__ssl_io_loop,
        mod_consts.const_str_plain__ssl_io_loop,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4c4369abc9b798df8fc3818a222085d2,
#endif
        code_objects_28857f1ec4c1a46489cdc10031821b82,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssltransport,
        mod_consts.const_str_digest_33b398202dbf7c54ddd4ec2ecd716168,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__2___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssltransport$$$function__2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_53f15f47455fd0edd9e007023ca79b28,
#endif
        code_objects_c4c1de037bb43dd66e27a0da09db30d4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssltransport,
        mod_consts.const_str_digest_b473cbaded27903f3fd7a967b151a31d,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__3___enter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssltransport$$$function__3___enter__,
        const_str_plain___enter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f5df8061b1f344fa865cf4121fe1de11,
#endif
        code_objects_3862a616a64cd824f0d0912aadf52748,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssltransport,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__4___exit__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssltransport$$$function__4___exit__,
        const_str_plain___exit__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6487bc96292b1c7b592c78c6a546adc9,
#endif
        code_objects_0b9ce4d5a3f6746d14d44d58cdcf931b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssltransport,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__5_fileno(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssltransport$$$function__5_fileno,
        const_str_plain_fileno,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2866f307e85513f9d45eb3e07b9778a4,
#endif
        code_objects_173778735aa9f593fab138b7b5d11f15,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssltransport,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__6_read(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssltransport$$$function__6_read,
        const_str_plain_read,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e5c02be6b5703820d444a6caf78ce3aa,
#endif
        code_objects_fe91c75c2adc6ff44c498a53ae44d932,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssltransport,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__7_recv(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssltransport$$$function__7_recv,
        mod_consts.const_str_plain_recv,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6e982273ed6594c56e59708bc717a559,
#endif
        code_objects_e3ed4492b947a7fa381e04dbcf5f00cb,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssltransport,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__8_recv_into(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssltransport$$$function__8_recv_into,
        mod_consts.const_str_plain_recv_into,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6be9ad68af3587dfb654c5d7ccdd6256,
#endif
        code_objects_dcd3d799d3d233536128eac851ce7261,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssltransport,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssltransport$$$function__9_sendall(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssltransport$$$function__9_sendall,
        mod_consts.const_str_plain_sendall,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2a8adc5022e16ff4a45571b5138d856d,
#endif
        code_objects_e44cbbac698df31020ec54991200d91a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssltransport,
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

static function_impl_code const function_table_urllib3$util$ssltransport[] = {
impl_urllib3$util$ssltransport$$$function__1__validate_ssl_context_for_tls_in_tls,
impl_urllib3$util$ssltransport$$$function__2___init__,
impl_urllib3$util$ssltransport$$$function__3___enter__,
impl_urllib3$util$ssltransport$$$function__4___exit__,
impl_urllib3$util$ssltransport$$$function__5_fileno,
impl_urllib3$util$ssltransport$$$function__6_read,
impl_urllib3$util$ssltransport$$$function__7_recv,
impl_urllib3$util$ssltransport$$$function__8_recv_into,
impl_urllib3$util$ssltransport$$$function__9_sendall,
impl_urllib3$util$ssltransport$$$function__10_send,
impl_urllib3$util$ssltransport$$$function__11_makefile,
impl_urllib3$util$ssltransport$$$function__12_unwrap,
impl_urllib3$util$ssltransport$$$function__13_close,
impl_urllib3$util$ssltransport$$$function__16_getpeercert,
impl_urllib3$util$ssltransport$$$function__17_version,
impl_urllib3$util$ssltransport$$$function__18_cipher,
impl_urllib3$util$ssltransport$$$function__19_selected_alpn_protocol,
impl_urllib3$util$ssltransport$$$function__20_shared_ciphers,
impl_urllib3$util$ssltransport$$$function__21_compression,
impl_urllib3$util$ssltransport$$$function__22_settimeout,
impl_urllib3$util$ssltransport$$$function__23_gettimeout,
impl_urllib3$util$ssltransport$$$function__24__decref_socketios,
impl_urllib3$util$ssltransport$$$function__25__wrap_ssl_read,
impl_urllib3$util$ssltransport$$$function__29__ssl_io_loop,
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

    return Nuitka_Function_GetFunctionState(function, function_table_urllib3$util$ssltransport);
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
        module_urllib3$util$ssltransport,
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
        function_table_urllib3$util$ssltransport,
        sizeof(function_table_urllib3$util$ssltransport) / sizeof(function_impl_code)
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
static char const *module_full_name = "urllib3.util.ssltransport";
#endif

// Internal entry point for module code.
PyObject *module_code_urllib3$util$ssltransport(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("urllib3$util$ssltransport");

    // Store the module for future use.
    module_urllib3$util$ssltransport = module;

    moduledict_urllib3$util$ssltransport = MODULE_DICT(module_urllib3$util$ssltransport);

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
        PRINT_STRING("urllib3$util$ssltransport: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("urllib3$util$ssltransport: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("urllib3$util$ssltransport: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "urllib3.util.ssltransport" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initurllib3$util$ssltransport\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_urllib3$util$ssltransport,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_urllib3$util$ssltransport,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_urllib3$util$ssltransport,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$ssltransport,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$ssltransport,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_urllib3$util$ssltransport);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_urllib3$util$ssltransport);
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

        UPDATE_STRING_DICT1(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$ssltransport;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_urllib3$util$ssltransport$$$class__1_SSLTransport_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
UPDATE_STRING_DICT0(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_urllib3$util$ssltransport = MAKE_MODULE_FRAME(code_objects_32e5af64f5f75b39f82283c969d29d02, module_urllib3$util$ssltransport);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$ssltransport);
assert(Py_REFCNT(frame_frame_urllib3$util$ssltransport) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_urllib3$util$ssltransport$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_urllib3$util$ssltransport$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_IO();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)mod_consts.const_str_plain_io, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_socket;
tmp_globals_arg_value_1 = (PyObject *)moduledict_urllib3$util$ssltransport;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_urllib3$util$ssltransport->m_frame.f_lineno = 4;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)mod_consts.const_str_plain_socket, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_ssl;
tmp_globals_arg_value_2 = (PyObject *)moduledict_urllib3$util$ssltransport;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_urllib3$util$ssltransport->m_frame.f_lineno = 5;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)mod_consts.const_str_plain_ssl, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_9 == NULL));
UPDATE_STRING_DICT0(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_exceptions;
tmp_globals_arg_value_3 = (PyObject *)moduledict_urllib3$util$ssltransport;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_ProxySchemeUnsupported_tuple;
tmp_level_value_3 = mod_consts.const_int_pos_2;
frame_frame_urllib3$util$ssltransport->m_frame.f_lineno = 8;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_urllib3$util$ssltransport,
        mod_consts.const_str_plain_ProxySchemeUnsupported,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_ProxySchemeUnsupported);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxySchemeUnsupported, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
tmp_expression_value_2 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_2 == NULL));
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_Union);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_tuple_type_bytearray_type_memoryview_tuple;
tmp_assign_source_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)mod_consts.const_str_plain__WriteBuffer, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = IMPORT_HARD_TYPING();
assert(!(tmp_called_instance_1 == NULL));
frame_frame_urllib3$util$ssltransport->m_frame.f_lineno = 17;
tmp_assign_source_12 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_TypeVar,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain__ReturnValue_tuple, 0)
);

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)mod_consts.const_str_plain__ReturnValue, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = mod_consts.const_int_pos_16384;
UPDATE_STRING_DICT0(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)mod_consts.const_str_plain_SSL_BLOCKSIZE, tmp_assign_source_13);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_15;
}
// Tried code:
{
PyObject *tmp_assign_source_16;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_2c29860d05cd0f70ce2a7aa252d7abab;
tmp_result = DICT_SET_ITEM(locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_17b936ec84f90ef2ceb009bf3ae87305;
tmp_result = DICT_SET_ITEM(locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_SSLTransport;
tmp_result = DICT_SET_ITEM(locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22, const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_22;
tmp_result = DICT_SET_ITEM(locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_staticmethod_arg_1;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_3b9dc660740346b94603dc8b405c9bc2);

tmp_staticmethod_arg_1 = MAKE_FUNCTION_urllib3$util$ssltransport$$$function__1__validate_ssl_context_for_tls_in_tls(tstate, tmp_annotations_1);

tmp_dictset_value = BUILTIN_STATICMETHOD(tstate, tmp_staticmethod_arg_1);
CHECK_OBJECT(tmp_staticmethod_arg_1);
Py_DECREF(tmp_staticmethod_arg_1);
assert(!(tmp_dictset_value == NULL));
tmp_result = DICT_SET_ITEM(locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22, mod_consts.const_str_plain__validate_ssl_context_for_tls_in_tls, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_2;
tmp_defaults_1 = mod_consts.const_tuple_none_true_tuple;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_4fff830355357b589f7a4ca9e2388b16);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$ssltransport$$$function__2___init__(tstate, tmp_defaults_1, tmp_annotations_2);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_71adc2ba5737c82f5bb97b4d3b034ead);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$ssltransport$$$function__3___enter__(tstate, tmp_annotations_3);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22, const_str_plain___enter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_13a755637c2f9d75083d4a744c6110ea);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$ssltransport$$$function__4___exit__(tstate, tmp_annotations_4);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22, const_str_plain___exit__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$ssltransport$$$function__5_fileno(tstate, tmp_annotations_5);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22, const_str_plain_fileno, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_6;
tmp_defaults_2 = mod_consts.const_tuple_int_pos_1024_none_tuple;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_d271f2c8d0bdce4e5eb7feb19f476388);
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$ssltransport$$$function__6_read(tstate, tmp_defaults_2, tmp_annotations_6);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22, const_str_plain_read, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_7;
tmp_defaults_3 = mod_consts.const_tuple_int_pos_1024_int_0_tuple;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_aeb76f3b38d3e4ccac913698834b1ff8);
Py_INCREF(tmp_defaults_3);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$ssltransport$$$function__7_recv(tstate, tmp_defaults_3, tmp_annotations_7);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22, mod_consts.const_str_plain_recv, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_4;
PyObject *tmp_annotations_8;
tmp_defaults_4 = mod_consts.const_tuple_none_int_0_tuple;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_7d39ad0b502f2117f82fecb4f5b5834b);
Py_INCREF(tmp_defaults_4);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$ssltransport$$$function__8_recv_into(tstate, tmp_defaults_4, tmp_annotations_8);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22, mod_consts.const_str_plain_recv_into, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_5;
PyObject *tmp_annotations_9;
tmp_defaults_5 = mod_consts.const_tuple_int_0_tuple;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_d4d7a65a2ce6438480576e81b1a42b1a);
Py_INCREF(tmp_defaults_5);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$ssltransport$$$function__9_sendall(tstate, tmp_defaults_5, tmp_annotations_9);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22, mod_consts.const_str_plain_sendall, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_6;
PyObject *tmp_annotations_10;
tmp_defaults_6 = mod_consts.const_tuple_int_0_tuple;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_185f2e2f0150ebfb4d7cb1239b0c8b71);
Py_INCREF(tmp_defaults_6);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$ssltransport$$$function__10_send(tstate, tmp_defaults_6, tmp_annotations_10);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22, const_str_plain_send, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_7;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_11;
tmp_defaults_7 = mod_consts.const_tuple_none_tuple;
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_4943746162ff4a7e2531a4e46f999ee4);
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_9ebb29186c967c0ff0cc2318af1921b4);
Py_INCREF(tmp_defaults_7);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$ssltransport$$$function__11_makefile(tstate, tmp_defaults_7, tmp_kw_defaults_1, tmp_annotations_11);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22, mod_consts.const_str_plain_makefile, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_12;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$ssltransport$$$function__12_unwrap(tstate, tmp_annotations_12);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22, mod_consts.const_str_plain_unwrap, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_13;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$ssltransport$$$function__13_close(tstate, tmp_annotations_13);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22, const_str_plain_close, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
// Tried code:
// Tried code:
frame_frame_urllib3$util$ssltransport$$$class__1_SSLTransport_2 = MAKE_CLASS_FRAME(tstate, code_objects_fa6624e6abd36b7bcb83cc4d2683f2c0, module_urllib3$util$ssltransport, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_urllib3$util$ssltransport$$$class__1_SSLTransport_2, locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$ssltransport$$$class__1_SSLTransport_2);
assert(Py_REFCNT(frame_frame_urllib3$util$ssltransport$$$class__1_SSLTransport_2) == 2);

// Framed code:
{
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_defaults_8;
PyObject *tmp_annotations_14;
tmp_called_instance_2 = IMPORT_HARD_TYPING();
assert(!(tmp_called_instance_2 == NULL));
tmp_defaults_8 = mod_consts.const_tuple_ellipsis_tuple;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_780fe9cbfec162e2db078532c930f208);
Py_INCREF(tmp_defaults_8);

tmp_args_element_value_1 = MAKE_FUNCTION_urllib3$util$ssltransport$$$function__14_getpeercert(tstate, tmp_defaults_8, tmp_annotations_14);

frame_frame_urllib3$util$ssltransport$$$class__1_SSLTransport_2->m_frame.f_lineno = 174;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_overload, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22, mod_consts.const_str_plain_getpeercert, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_15;
tmp_called_instance_3 = IMPORT_HARD_TYPING();
assert(!(tmp_called_instance_3 == NULL));
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_b16ccc0f0d6c0b9fce0bf19e952737db);

tmp_args_element_value_2 = MAKE_FUNCTION_urllib3$util$ssltransport$$$function__15_getpeercert(tstate, tmp_annotations_15);

frame_frame_urllib3$util$ssltransport$$$class__1_SSLTransport_2->m_frame.f_lineno = 179;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_overload, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22, mod_consts.const_str_plain_getpeercert, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_9;
PyObject *tmp_annotations_16;
tmp_defaults_9 = mod_consts.const_tuple_false_tuple;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_7a237afe69cca399fb38fa51fe0a8825);
Py_INCREF(tmp_defaults_9);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$ssltransport$$$function__16_getpeercert(tstate, tmp_defaults_9, tmp_annotations_16);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22, mod_consts.const_str_plain_getpeercert, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_17;
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$ssltransport$$$function__17_version(tstate, tmp_annotations_17);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22, mod_consts.const_str_plain_version, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_18;
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_2256e10b9ff9e3202801e32b00d2665d);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$ssltransport$$$function__18_cipher(tstate, tmp_annotations_18);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22, mod_consts.const_str_plain_cipher, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_19;
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$ssltransport$$$function__19_selected_alpn_protocol(tstate, tmp_annotations_19);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22, mod_consts.const_str_plain_selected_alpn_protocol, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_20;
tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_e11d384d77b1f3f69d3cea2c8863295b);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$ssltransport$$$function__20_shared_ciphers(tstate, tmp_annotations_20);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22, mod_consts.const_str_plain_shared_ciphers, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_21;
tmp_annotations_21 = DICT_COPY(tstate, mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$ssltransport$$$function__21_compression(tstate, tmp_annotations_21);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22, mod_consts.const_str_plain_compression, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_22;
tmp_annotations_22 = DICT_COPY(tstate, mod_consts.const_dict_186d8b6261a894f17d141ea2fe94c71f);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$ssltransport$$$function__22_settimeout(tstate, tmp_annotations_22);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22, mod_consts.const_str_plain_settimeout, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_23;
tmp_annotations_23 = DICT_COPY(tstate, mod_consts.const_dict_db7decffacc19a524dc0bb9b22309b52);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$ssltransport$$$function__23_gettimeout(tstate, tmp_annotations_23);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22, mod_consts.const_str_plain_gettimeout, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_24;
tmp_annotations_24 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$ssltransport$$$function__24__decref_socketios(tstate, tmp_annotations_24);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22, mod_consts.const_str_plain__decref_socketios, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_10;
PyObject *tmp_annotations_25;
tmp_defaults_10 = mod_consts.const_tuple_none_tuple;
tmp_annotations_25 = DICT_COPY(tstate, mod_consts.const_dict_affb0a54cd9bab244f60da2111ce4a4d);
Py_INCREF(tmp_defaults_10);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$ssltransport$$$function__25__wrap_ssl_read(tstate, tmp_defaults_10, tmp_annotations_25);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22, mod_consts.const_str_plain__wrap_ssl_read, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_26;
tmp_called_instance_4 = IMPORT_HARD_TYPING();
assert(!(tmp_called_instance_4 == NULL));
tmp_annotations_26 = DICT_COPY(tstate, mod_consts.const_dict_027f3b46cbd5305a22425539c139edf8);

tmp_args_element_value_3 = MAKE_FUNCTION_urllib3$util$ssltransport$$$function__26__ssl_io_loop(tstate, tmp_annotations_26);

frame_frame_urllib3$util$ssltransport$$$class__1_SSLTransport_2->m_frame.f_lineno = 219;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_overload, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22, mod_consts.const_str_plain__ssl_io_loop, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_27;
tmp_called_instance_5 = IMPORT_HARD_TYPING();
assert(!(tmp_called_instance_5 == NULL));
tmp_annotations_27 = DICT_COPY(tstate, mod_consts.const_dict_12e86a24afbffdf8f59caf6d5a1ef557);

tmp_args_element_value_4 = MAKE_FUNCTION_urllib3$util$ssltransport$$$function__27__ssl_io_loop(tstate, tmp_annotations_27);

frame_frame_urllib3$util$ssltransport$$$class__1_SSLTransport_2->m_frame.f_lineno = 223;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_overload, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22, mod_consts.const_str_plain__ssl_io_loop, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_instance_6;
PyObject *tmp_args_element_value_5;
PyObject *tmp_annotations_28;
tmp_called_instance_6 = IMPORT_HARD_TYPING();
assert(!(tmp_called_instance_6 == NULL));
tmp_annotations_28 = DICT_COPY(tstate, mod_consts.const_dict_e2e568c7d717b6cf609c0027ed1ac3e4);

tmp_args_element_value_5 = MAKE_FUNCTION_urllib3$util$ssltransport$$$function__28__ssl_io_loop(tstate, tmp_annotations_28);

frame_frame_urllib3$util$ssltransport$$$class__1_SSLTransport_2->m_frame.f_lineno = 227;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts.const_str_plain_overload, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22, mod_consts.const_str_plain__ssl_io_loop, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_urllib3$util$ssltransport$$$class__1_SSLTransport_2);


goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssltransport$$$class__1_SSLTransport_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$ssltransport$$$class__1_SSLTransport_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssltransport$$$class__1_SSLTransport_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$ssltransport$$$class__1_SSLTransport_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_urllib3$util$ssltransport$$$class__1_SSLTransport_2);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_urllib3$util$ssltransport$$$class__1_SSLTransport_2);


// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_3;
skip_nested_handling_1:;
{
PyObject *tmp_defaults_11;
PyObject *tmp_annotations_29;
tmp_defaults_11 = mod_consts.const_tuple_none_none_tuple;
tmp_annotations_29 = DICT_COPY(tstate, mod_consts.const_dict_953c401f035074b70dcfab5234f66116);
Py_INCREF(tmp_defaults_11);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$ssltransport$$$function__29__ssl_io_loop(tstate, tmp_defaults_11, tmp_annotations_29);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22, mod_consts.const_str_plain__ssl_io_loop, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_268c19830aae6d57b5dfef7ecc01f801_tuple;
tmp_result = DICT_SET_ITEM(locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_17;
PyObject *tmp_metaclass_value_1;
PyObject *tmp_name_value_4;
PyObject *tmp_bases_value_1;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
tmp_name_value_4 = mod_consts.const_str_plain_SSLTransport;
tmp_bases_value_1 = const_tuple_empty;
tmp_dict_arg_value_1 = locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_4, tmp_bases_value_1, tmp_dict_arg_value_1);
tmp_assign_source_17 = CALL_FUNCTION(tstate, tmp_metaclass_value_1, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_3;
}
{
    PyObject *old = outline_0_var___class__;
    outline_0_var___class__ = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_16 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_16);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22);
locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22);
locals_urllib3$util$ssltransport$$$class__1_SSLTransport_22 = NULL;
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
exception_lineno = 22;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)mod_consts.const_str_plain_SSLTransport, tmp_assign_source_16);
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

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssltransport, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$ssltransport->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssltransport, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_urllib3$util$ssltransport);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("urllib3$util$ssltransport", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "urllib3.util.ssltransport" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_urllib3$util$ssltransport);
    return module_urllib3$util$ssltransport;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssltransport, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("urllib3$util$ssltransport", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
