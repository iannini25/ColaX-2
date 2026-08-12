/* Generated code for Python module 'urllib3$util$ssl_'
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



/* The "module_urllib3$util$ssl_" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$util$ssl_;
PyDictObject *moduledict_urllib3$util$ssl_;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_startswith;
PyObject *const_tuple_str_digest_ff71990518f4792fe116de56f8335660_tuple;
PyObject *const_str_plain_SSLError;
PyObject *const_tuple_str_digest_48e0cff034c3b2ba10493a16950f1eba_tuple;
PyObject *const_str_plain_replace;
PyObject *const_tuple_str_chr_58_str_empty_tuple;
PyObject *const_str_plain_HASHFUNC_MAP;
PyObject *const_str_digest_55792ed7e44b0f55f1b91618cdf0c0f9;
PyObject *const_str_digest_cd7d2a2180fa985a565002b5604c0597;
PyObject *const_str_plain_unhexlify;
PyObject *const_str_plain_encode;
PyObject *const_str_plain_digest;
PyObject *const_str_plain_hmac;
PyObject *const_str_plain_compare_digest;
PyObject *const_str_digest_0a3e8370891184bebc36d7a68ab1d7ee;
PyObject *const_str_digest_2b08e73a3fad05ff6ff2eb28665d3d27;
PyObject *const_str_plain_hex;
PyObject *const_str_chr_34;
PyObject *const_str_digest_00443216840a6cf3758b05f20629d7a5;
PyObject *const_str_plain_CERT_REQUIRED;
PyObject *const_str_plain_ssl;
PyObject *const_str_plain_CERT_;
PyObject *const_str_digest_fc77b8b8b37a6506afd02b138ba800c9;
PyObject *const_str_plain_PROTOCOL_TLS;
PyObject *const_str_plain_PROTOCOL_;
PyObject *const_str_plain_cast;
PyObject *const_str_digest_2bab504d7a355db862adc1427a8ad427;
PyObject *const_str_plain_SSLContext;
PyObject *const_str_digest_b6067204ea739476e954694b5396f428;
PyObject *const_str_plain_PROTOCOL_TLS_CLIENT;
PyObject *const_str_digest_2b4a1d498d1e4806b705ef89de58f5ba;
PyObject *const_str_plain__SSL_VERSION_TO_TLS_VERSION;
PyObject *const_str_plain_TLSVersion;
PyObject *const_str_plain_MINIMUM_SUPPORTED;
PyObject *const_str_plain_MAXIMUM_SUPPORTED;
PyObject *const_str_plain_warnings;
PyObject *const_str_plain_warn;
PyObject *const_str_plain_FutureWarning;
PyObject *const_int_pos_2;
PyObject *const_tuple_str_digest_768349b3783d727ad08f28a085fbbfcc_tuple;
PyObject *const_tuple_str_plain_category_str_plain_stacklevel_tuple;
PyObject *const_str_plain_minimum_version;
PyObject *const_str_plain_TLSv1_2;
PyObject *const_str_plain_maximum_version;
PyObject *const_str_plain_set_ciphers;
PyObject *const_str_plain_OP_NO_SSLv2;
PyObject *const_str_plain_OP_NO_SSLv3;
PyObject *const_str_plain_OP_NO_COMPRESSION;
PyObject *const_str_plain_OP_NO_TICKET;
PyObject *const_str_plain_options;
PyObject *const_str_plain_VERIFY_X509_PARTIAL_CHAIN;
PyObject *const_str_plain_VERIFY_X509_STRICT;
PyObject *const_str_plain_verify_flags;
PyObject *const_str_plain_post_handshake_auth;
PyObject *const_str_plain_IS_PYOPENSSL;
PyObject *const_str_plain_verify_mode;
PyObject *const_str_plain_check_hostname;
PyObject *const_str_plain_hostname_checks_common_name;
PyObject *const_str_plain_SSLKEYLOGFILE;
PyObject *const_str_plain_environ;
PyObject *const_str_plain_expandvars;
PyObject *const_tuple_str_plain_SSLKEYLOGFILE_tuple;
PyObject *const_str_plain_keylog_filename;
PyObject *const_str_digest_4e1a677cd4f0a464ce7686d19a2e12a5;
PyObject *const_str_plain_create_urllib3_context;
PyObject *const_tuple_str_plain_ciphers_tuple;
PyObject *const_str_plain_load_verify_locations;
PyObject *const_str_plain_load_default_certs;
PyObject *const_str_plain__is_key_file_encrypted;
PyObject *const_tuple_str_digest_9122c237564b58c6d395bd61e093c6a7_tuple;
PyObject *const_str_plain_load_cert_chain;
PyObject *const_str_plain_set_alpn_protocols;
PyObject *const_str_plain_ALPN_PROTOCOLS;
PyObject *const_str_plain__ssl_wrap_socket_impl;
PyObject *const_str_digest_3ef282c77d135e7483677d62b5216bcb;
PyObject *const_str_plain_decode;
PyObject *const_tuple_str_plain_ascii_tuple;
PyObject *const_str_plain__IPV4_RE;
PyObject *const_str_plain_match;
PyObject *const_str_plain__BRACELESS_IPV6_ADDRZ_RE;
PyObject *const_str_digest_7433ea5e9bf8137907952033c6cfa210;
PyObject *const_str_plain_ENCRYPTED;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_digest_11208532747ea36cadee31118e841464;
PyObject *const_str_plain_SSLTransport;
PyObject *const_str_plain_ProxySchemeUnsupported;
PyObject *const_tuple_str_digest_75be7dda6a228a6bf538b7d95b7b3b2a_tuple;
PyObject *const_str_plain__validate_ssl_context_for_tls_in_tls;
PyObject *const_str_plain_wrap_socket;
PyObject *const_tuple_str_plain_server_hostname_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_hashlib;
PyObject *const_str_plain_os;
PyObject *const_str_plain_socket;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_typing;
PyObject *const_str_plain_binascii;
PyObject *const_tuple_str_plain_unhexlify_tuple;
PyObject *const_str_plain_exceptions;
PyObject *const_tuple_str_plain_ProxySchemeUnsupported_str_plain_SSLError_tuple;
PyObject *const_str_plain_url;
PyObject *const_tuple_str_plain__BRACELESS_IPV6_ADDRZ_RE_str_plain__IPV4_RE_tuple;
PyObject *const_str_plain_HAS_NEVER_CHECK_COMMON_NAME;
PyObject *const_str_digest_d70237e35c994fd4ee6ee104a7cdf8ac;
PyObject *const_tuple_type_int_type_int_type_int_type_str_type_int_tuple;
PyObject *const_str_plain__TYPE_VERSION_INFO;
PyObject *const_tuple_7f7ad48e1d187da64e1ae88ee87a3452_tuple;
PyObject *const_dict_aee2829287d729fc07a2573619373aea;
PyObject *const_str_plain__is_has_never_check_common_name_reliable;
PyObject *const_str_digest_5b40aa38e0c6f708b1ae98187d5fc99e;
PyObject *const_tuple_18f0e0433f330a33b43281d5a7ddc858_tuple;
PyObject *const_str_plain_OPENSSL_VERSION;
PyObject *const_str_plain_PROTOCOL_SSLv23;
PyObject *const_tuple_str_plain_TLSv1_str_plain_TLSv1_1_str_plain_TLSv1_2_tuple;
PyObject *const_str_plain_attr;
PyObject *const_str_plain_ssltransport;
PyObject *const_tuple_str_plain_SSLTransport_tuple;
PyObject *const_int_pos_131072;
PyObject *const_int_pos_16384;
PyObject *const_int_hex_1000000;
PyObject *const_int_hex_2000000;
PyObject *const_int_pos_16;
PyObject *const_int_pos_524288;
PyObject *const_int_pos_32;
PyObject *const_str_plain_Union;
PyObject *const_tuple_str_plain__TYPE_PEER_CERT_RET_DICT_type_bytes_none_tuple;
PyObject *const_str_plain__TYPE_PEER_CERT_RET;
PyObject *const_dict_367d1a21df6286ad9274118c3f81f657;
PyObject *const_str_plain_assert_fingerprint;
PyObject *const_dict_2e3431bdfd877ec817f317d0d7420173;
PyObject *const_str_plain_resolve_cert_reqs;
PyObject *const_dict_841d18ac7b40b3c5d648b142989fa720;
PyObject *const_str_plain_resolve_ssl_version;
PyObject *const_tuple_none_none_none_none_none_none_none_tuple;
PyObject *const_dict_5bf3c00cb4f8f9c3699c8a8c3551afda;
PyObject *const_str_plain_overload;
PyObject *const_tuple_fd2b59ad0dd7044251a51692d1dcc7d4_tuple;
PyObject *const_dict_5d7d0970ec44e36bbce31f5cf1b40c9e;
PyObject *const_str_plain_ssl_wrap_socket;
PyObject *const_dict_20fd385a9560791475667c6be9367b66;
PyObject *const_tuple_none_none_none_none_none_none_none_none_none_none_none_false_tuple;
PyObject *const_dict_5b2fbf3f7c44d3207d5dd4dec8ec7c48;
PyObject *const_str_plain_is_ipaddress;
PyObject *const_dict_8fb4eceea18e21ca7fa2a9a37cde7f64;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_8b0818ee139c611994a7d99efb853cc3;
PyObject *const_str_digest_4c54965eee2f9057ca84664177c253ba;
PyObject *const_str_digest_8dea7a9de4b59b57c96f518f0d07104f;
PyObject *const_tuple_str_plain_openssl_version_str_plain_is_openssl_tuple;
PyObject *const_tuple_str_plain_key_file_str_plain_f_str_plain_line_tuple;
PyObject *const_tuple_c1df7b73096686374e5395b151d4b3c8_tuple;
PyObject *const_tuple_136f505c2e273f9e0f0a8233495342e2_tuple;
PyObject *const_tuple_539624627f40a627ce703249eaacd416_tuple;
PyObject *const_tuple_str_plain_hostname_tuple;
PyObject *const_tuple_str_plain_candidate_str_plain_res_tuple;
PyObject *const_tuple_5b5965038a29bec37b8b8195f944ee5a_tuple;
PyObject *const_tuple_95b3aa22c797dcb00388ed8d26a9a6fe_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[159];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("urllib3.util.ssl_"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 159) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 159 values, got %d\n",
                    UN_TRANSLATE("urllib3.util.ssl_"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_startswith", mod_consts.const_str_plain_startswith);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_startswith);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_ff71990518f4792fe116de56f8335660_tuple", mod_consts.const_tuple_str_digest_ff71990518f4792fe116de56f8335660_tuple);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ff71990518f4792fe116de56f8335660_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSLError", mod_consts.const_str_plain_SSLError);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSLError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_48e0cff034c3b2ba10493a16950f1eba_tuple", mod_consts.const_tuple_str_digest_48e0cff034c3b2ba10493a16950f1eba_tuple);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_48e0cff034c3b2ba10493a16950f1eba_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_replace", mod_consts.const_str_plain_replace);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_replace);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_chr_58_str_empty_tuple", mod_consts.const_tuple_str_chr_58_str_empty_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_58_str_empty_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HASHFUNC_MAP", mod_consts.const_str_plain_HASHFUNC_MAP);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_HASHFUNC_MAP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_55792ed7e44b0f55f1b91618cdf0c0f9", mod_consts.const_str_digest_55792ed7e44b0f55f1b91618cdf0c0f9);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_55792ed7e44b0f55f1b91618cdf0c0f9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cd7d2a2180fa985a565002b5604c0597", mod_consts.const_str_digest_cd7d2a2180fa985a565002b5604c0597);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_cd7d2a2180fa985a565002b5604c0597);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unhexlify", mod_consts.const_str_plain_unhexlify);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_unhexlify);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encode", mod_consts.const_str_plain_encode);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_digest", mod_consts.const_str_plain_digest);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_digest);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hmac", mod_consts.const_str_plain_hmac);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_hmac);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_compare_digest", mod_consts.const_str_plain_compare_digest);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_compare_digest);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0a3e8370891184bebc36d7a68ab1d7ee", mod_consts.const_str_digest_0a3e8370891184bebc36d7a68ab1d7ee);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_0a3e8370891184bebc36d7a68ab1d7ee);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2b08e73a3fad05ff6ff2eb28665d3d27", mod_consts.const_str_digest_2b08e73a3fad05ff6ff2eb28665d3d27);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_2b08e73a3fad05ff6ff2eb28665d3d27);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hex", mod_consts.const_str_plain_hex);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_hex);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_34", mod_consts.const_str_chr_34);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_chr_34);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_00443216840a6cf3758b05f20629d7a5", mod_consts.const_str_digest_00443216840a6cf3758b05f20629d7a5);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_00443216840a6cf3758b05f20629d7a5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CERT_REQUIRED", mod_consts.const_str_plain_CERT_REQUIRED);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_CERT_REQUIRED);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ssl", mod_consts.const_str_plain_ssl);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_ssl);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CERT_", mod_consts.const_str_plain_CERT_);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_CERT_);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fc77b8b8b37a6506afd02b138ba800c9", mod_consts.const_str_digest_fc77b8b8b37a6506afd02b138ba800c9);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_fc77b8b8b37a6506afd02b138ba800c9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PROTOCOL_TLS", mod_consts.const_str_plain_PROTOCOL_TLS);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_PROTOCOL_TLS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PROTOCOL_", mod_consts.const_str_plain_PROTOCOL_);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_PROTOCOL_);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cast", mod_consts.const_str_plain_cast);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_cast);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2bab504d7a355db862adc1427a8ad427", mod_consts.const_str_digest_2bab504d7a355db862adc1427a8ad427);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_2bab504d7a355db862adc1427a8ad427);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSLContext", mod_consts.const_str_plain_SSLContext);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSLContext);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b6067204ea739476e954694b5396f428", mod_consts.const_str_digest_b6067204ea739476e954694b5396f428);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_b6067204ea739476e954694b5396f428);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PROTOCOL_TLS_CLIENT", mod_consts.const_str_plain_PROTOCOL_TLS_CLIENT);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_PROTOCOL_TLS_CLIENT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2b4a1d498d1e4806b705ef89de58f5ba", mod_consts.const_str_digest_2b4a1d498d1e4806b705ef89de58f5ba);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_2b4a1d498d1e4806b705ef89de58f5ba);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__SSL_VERSION_TO_TLS_VERSION", mod_consts.const_str_plain__SSL_VERSION_TO_TLS_VERSION);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain__SSL_VERSION_TO_TLS_VERSION);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TLSVersion", mod_consts.const_str_plain_TLSVersion);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_TLSVersion);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MINIMUM_SUPPORTED", mod_consts.const_str_plain_MINIMUM_SUPPORTED);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_MINIMUM_SUPPORTED);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MAXIMUM_SUPPORTED", mod_consts.const_str_plain_MAXIMUM_SUPPORTED);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_MAXIMUM_SUPPORTED);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_warnings", mod_consts.const_str_plain_warnings);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_warnings);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_warn", mod_consts.const_str_plain_warn);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_warn);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FutureWarning", mod_consts.const_str_plain_FutureWarning);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_FutureWarning);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_768349b3783d727ad08f28a085fbbfcc_tuple", mod_consts.const_tuple_str_digest_768349b3783d727ad08f28a085fbbfcc_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_768349b3783d727ad08f28a085fbbfcc_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_category_str_plain_stacklevel_tuple", mod_consts.const_tuple_str_plain_category_str_plain_stacklevel_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_category_str_plain_stacklevel_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_minimum_version", mod_consts.const_str_plain_minimum_version);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_minimum_version);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TLSv1_2", mod_consts.const_str_plain_TLSv1_2);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_TLSv1_2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_maximum_version", mod_consts.const_str_plain_maximum_version);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_maximum_version);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_set_ciphers", mod_consts.const_str_plain_set_ciphers);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_ciphers);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OP_NO_SSLv2", mod_consts.const_str_plain_OP_NO_SSLv2);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_OP_NO_SSLv2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OP_NO_SSLv3", mod_consts.const_str_plain_OP_NO_SSLv3);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_OP_NO_SSLv3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OP_NO_COMPRESSION", mod_consts.const_str_plain_OP_NO_COMPRESSION);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_OP_NO_COMPRESSION);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OP_NO_TICKET", mod_consts.const_str_plain_OP_NO_TICKET);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_OP_NO_TICKET);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_options", mod_consts.const_str_plain_options);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_options);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_VERIFY_X509_PARTIAL_CHAIN", mod_consts.const_str_plain_VERIFY_X509_PARTIAL_CHAIN);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_VERIFY_X509_PARTIAL_CHAIN);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_VERIFY_X509_STRICT", mod_consts.const_str_plain_VERIFY_X509_STRICT);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_VERIFY_X509_STRICT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_verify_flags", mod_consts.const_str_plain_verify_flags);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_verify_flags);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_post_handshake_auth", mod_consts.const_str_plain_post_handshake_auth);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_post_handshake_auth);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IS_PYOPENSSL", mod_consts.const_str_plain_IS_PYOPENSSL);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_IS_PYOPENSSL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_verify_mode", mod_consts.const_str_plain_verify_mode);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_verify_mode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_check_hostname", mod_consts.const_str_plain_check_hostname);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_check_hostname);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hostname_checks_common_name", mod_consts.const_str_plain_hostname_checks_common_name);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_hostname_checks_common_name);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSLKEYLOGFILE", mod_consts.const_str_plain_SSLKEYLOGFILE);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSLKEYLOGFILE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_environ", mod_consts.const_str_plain_environ);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_expandvars", mod_consts.const_str_plain_expandvars);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_expandvars);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_SSLKEYLOGFILE_tuple", mod_consts.const_tuple_str_plain_SSLKEYLOGFILE_tuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SSLKEYLOGFILE_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_keylog_filename", mod_consts.const_str_plain_keylog_filename);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_keylog_filename);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4e1a677cd4f0a464ce7686d19a2e12a5", mod_consts.const_str_digest_4e1a677cd4f0a464ce7686d19a2e12a5);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_4e1a677cd4f0a464ce7686d19a2e12a5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_create_urllib3_context", mod_consts.const_str_plain_create_urllib3_context);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_urllib3_context);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ciphers_tuple", mod_consts.const_tuple_str_plain_ciphers_tuple);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ciphers_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load_verify_locations", mod_consts.const_str_plain_load_verify_locations);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_verify_locations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load_default_certs", mod_consts.const_str_plain_load_default_certs);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_default_certs);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__is_key_file_encrypted", mod_consts.const_str_plain__is_key_file_encrypted);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain__is_key_file_encrypted);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_9122c237564b58c6d395bd61e093c6a7_tuple", mod_consts.const_tuple_str_digest_9122c237564b58c6d395bd61e093c6a7_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_9122c237564b58c6d395bd61e093c6a7_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load_cert_chain", mod_consts.const_str_plain_load_cert_chain);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_cert_chain);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_set_alpn_protocols", mod_consts.const_str_plain_set_alpn_protocols);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_alpn_protocols);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ALPN_PROTOCOLS", mod_consts.const_str_plain_ALPN_PROTOCOLS);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_ALPN_PROTOCOLS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__ssl_wrap_socket_impl", mod_consts.const_str_plain__ssl_wrap_socket_impl);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain__ssl_wrap_socket_impl);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3ef282c77d135e7483677d62b5216bcb", mod_consts.const_str_digest_3ef282c77d135e7483677d62b5216bcb);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_3ef282c77d135e7483677d62b5216bcb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decode", mod_consts.const_str_plain_decode);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ascii_tuple", mod_consts.const_tuple_str_plain_ascii_tuple);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__IPV4_RE", mod_consts.const_str_plain__IPV4_RE);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain__IPV4_RE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_match", mod_consts.const_str_plain_match);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_match);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__BRACELESS_IPV6_ADDRZ_RE", mod_consts.const_str_plain__BRACELESS_IPV6_ADDRZ_RE);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain__BRACELESS_IPV6_ADDRZ_RE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7433ea5e9bf8137907952033c6cfa210", mod_consts.const_str_digest_7433ea5e9bf8137907952033c6cfa210);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_7433ea5e9bf8137907952033c6cfa210);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ENCRYPTED", mod_consts.const_str_plain_ENCRYPTED);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_ENCRYPTED);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_none_tuple", mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_11208532747ea36cadee31118e841464", mod_consts.const_str_digest_11208532747ea36cadee31118e841464);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_11208532747ea36cadee31118e841464);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSLTransport", mod_consts.const_str_plain_SSLTransport);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSLTransport);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProxySchemeUnsupported", mod_consts.const_str_plain_ProxySchemeUnsupported);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProxySchemeUnsupported);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_75be7dda6a228a6bf538b7d95b7b3b2a_tuple", mod_consts.const_tuple_str_digest_75be7dda6a228a6bf538b7d95b7b3b2a_tuple);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_75be7dda6a228a6bf538b7d95b7b3b2a_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__validate_ssl_context_for_tls_in_tls", mod_consts.const_str_plain__validate_ssl_context_for_tls_in_tls);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain__validate_ssl_context_for_tls_in_tls);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wrap_socket", mod_consts.const_str_plain_wrap_socket);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_wrap_socket);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_server_hostname_tuple", mod_consts.const_tuple_str_plain_server_hostname_tuple);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_server_hostname_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hashlib", mod_consts.const_str_plain_hashlib);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_hashlib);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_os", mod_consts.const_str_plain_os);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_socket", mod_consts.const_str_plain_socket);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_socket);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sys", mod_consts.const_str_plain_sys);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_typing", mod_consts.const_str_plain_typing);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_binascii", mod_consts.const_str_plain_binascii);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_binascii);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_unhexlify_tuple", mod_consts.const_tuple_str_plain_unhexlify_tuple);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_unhexlify_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exceptions", mod_consts.const_str_plain_exceptions);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ProxySchemeUnsupported_str_plain_SSLError_tuple", mod_consts.const_tuple_str_plain_ProxySchemeUnsupported_str_plain_SSLError_tuple);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ProxySchemeUnsupported_str_plain_SSLError_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_url", mod_consts.const_str_plain_url);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_url);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__BRACELESS_IPV6_ADDRZ_RE_str_plain__IPV4_RE_tuple", mod_consts.const_tuple_str_plain__BRACELESS_IPV6_ADDRZ_RE_str_plain__IPV4_RE_tuple);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__BRACELESS_IPV6_ADDRZ_RE_str_plain__IPV4_RE_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HAS_NEVER_CHECK_COMMON_NAME", mod_consts.const_str_plain_HAS_NEVER_CHECK_COMMON_NAME);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_HAS_NEVER_CHECK_COMMON_NAME);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d70237e35c994fd4ee6ee104a7cdf8ac", mod_consts.const_str_digest_d70237e35c994fd4ee6ee104a7cdf8ac);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_digest_d70237e35c994fd4ee6ee104a7cdf8ac);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_int_type_int_type_int_type_str_type_int_tuple", mod_consts.const_tuple_type_int_type_int_type_int_type_str_type_int_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_type_int_type_int_type_int_type_str_type_int_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__TYPE_VERSION_INFO", mod_consts.const_str_plain__TYPE_VERSION_INFO);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain__TYPE_VERSION_INFO);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_7f7ad48e1d187da64e1ae88ee87a3452_tuple", mod_consts.const_tuple_7f7ad48e1d187da64e1ae88ee87a3452_tuple);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_tuple_7f7ad48e1d187da64e1ae88ee87a3452_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_aee2829287d729fc07a2573619373aea", mod_consts.const_dict_aee2829287d729fc07a2573619373aea);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_dict_aee2829287d729fc07a2573619373aea);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__is_has_never_check_common_name_reliable", mod_consts.const_str_plain__is_has_never_check_common_name_reliable);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain__is_has_never_check_common_name_reliable);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5b40aa38e0c6f708b1ae98187d5fc99e", mod_consts.const_str_digest_5b40aa38e0c6f708b1ae98187d5fc99e);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_digest_5b40aa38e0c6f708b1ae98187d5fc99e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_18f0e0433f330a33b43281d5a7ddc858_tuple", mod_consts.const_tuple_18f0e0433f330a33b43281d5a7ddc858_tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_tuple_18f0e0433f330a33b43281d5a7ddc858_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OPENSSL_VERSION", mod_consts.const_str_plain_OPENSSL_VERSION);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_OPENSSL_VERSION);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PROTOCOL_SSLv23", mod_consts.const_str_plain_PROTOCOL_SSLv23);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_PROTOCOL_SSLv23);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_TLSv1_str_plain_TLSv1_1_str_plain_TLSv1_2_tuple", mod_consts.const_tuple_str_plain_TLSv1_str_plain_TLSv1_1_str_plain_TLSv1_2_tuple);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TLSv1_str_plain_TLSv1_1_str_plain_TLSv1_2_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_attr", mod_consts.const_str_plain_attr);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_attr);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ssltransport", mod_consts.const_str_plain_ssltransport);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_ssltransport);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_SSLTransport_tuple", mod_consts.const_tuple_str_plain_SSLTransport_tuple);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SSLTransport_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_131072", mod_consts.const_int_pos_131072);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_int_pos_131072);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16384", mod_consts.const_int_pos_16384);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_int_pos_16384);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_hex_1000000", mod_consts.const_int_hex_1000000);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_int_hex_1000000);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_hex_2000000", mod_consts.const_int_hex_2000000);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_int_hex_2000000);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16", mod_consts.const_int_pos_16);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_int_pos_16);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_524288", mod_consts.const_int_pos_524288);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_int_pos_524288);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_32", mod_consts.const_int_pos_32);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_int_pos_32);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Union", mod_consts.const_str_plain_Union);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__TYPE_PEER_CERT_RET_DICT_type_bytes_none_tuple", mod_consts.const_tuple_str_plain__TYPE_PEER_CERT_RET_DICT_type_bytes_none_tuple);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__TYPE_PEER_CERT_RET_DICT_type_bytes_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__TYPE_PEER_CERT_RET", mod_consts.const_str_plain__TYPE_PEER_CERT_RET);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain__TYPE_PEER_CERT_RET);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_367d1a21df6286ad9274118c3f81f657", mod_consts.const_dict_367d1a21df6286ad9274118c3f81f657);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_dict_367d1a21df6286ad9274118c3f81f657);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_assert_fingerprint", mod_consts.const_str_plain_assert_fingerprint);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_assert_fingerprint);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_2e3431bdfd877ec817f317d0d7420173", mod_consts.const_dict_2e3431bdfd877ec817f317d0d7420173);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_dict_2e3431bdfd877ec817f317d0d7420173);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_resolve_cert_reqs", mod_consts.const_str_plain_resolve_cert_reqs);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_resolve_cert_reqs);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_841d18ac7b40b3c5d648b142989fa720", mod_consts.const_dict_841d18ac7b40b3c5d648b142989fa720);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_dict_841d18ac7b40b3c5d648b142989fa720);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_resolve_ssl_version", mod_consts.const_str_plain_resolve_ssl_version);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_resolve_ssl_version);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_none_none_none_none_none_tuple", mod_consts.const_tuple_none_none_none_none_none_none_none_tuple);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_none_none_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_5bf3c00cb4f8f9c3699c8a8c3551afda", mod_consts.const_dict_5bf3c00cb4f8f9c3699c8a8c3551afda);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_dict_5bf3c00cb4f8f9c3699c8a8c3551afda);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_overload", mod_consts.const_str_plain_overload);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_overload);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_fd2b59ad0dd7044251a51692d1dcc7d4_tuple", mod_consts.const_tuple_fd2b59ad0dd7044251a51692d1dcc7d4_tuple);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_fd2b59ad0dd7044251a51692d1dcc7d4_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_5d7d0970ec44e36bbce31f5cf1b40c9e", mod_consts.const_dict_5d7d0970ec44e36bbce31f5cf1b40c9e);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_dict_5d7d0970ec44e36bbce31f5cf1b40c9e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ssl_wrap_socket", mod_consts.const_str_plain_ssl_wrap_socket);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_ssl_wrap_socket);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_20fd385a9560791475667c6be9367b66", mod_consts.const_dict_20fd385a9560791475667c6be9367b66);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_dict_20fd385a9560791475667c6be9367b66);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_none_none_none_none_none_none_none_none_none_false_tuple", mod_consts.const_tuple_none_none_none_none_none_none_none_none_none_none_none_false_tuple);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_none_none_none_none_none_none_none_false_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_5b2fbf3f7c44d3207d5dd4dec8ec7c48", mod_consts.const_dict_5b2fbf3f7c44d3207d5dd4dec8ec7c48);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_dict_5b2fbf3f7c44d3207d5dd4dec8ec7c48);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_ipaddress", mod_consts.const_str_plain_is_ipaddress);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_ipaddress);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_8fb4eceea18e21ca7fa2a9a37cde7f64", mod_consts.const_dict_8fb4eceea18e21ca7fa2a9a37cde7f64);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_dict_8fb4eceea18e21ca7fa2a9a37cde7f64);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_8b0818ee139c611994a7d99efb853cc3", mod_consts.const_dict_8b0818ee139c611994a7d99efb853cc3);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_dict_8b0818ee139c611994a7d99efb853cc3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4c54965eee2f9057ca84664177c253ba", mod_consts.const_str_digest_4c54965eee2f9057ca84664177c253ba);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_digest_4c54965eee2f9057ca84664177c253ba);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8dea7a9de4b59b57c96f518f0d07104f", mod_consts.const_str_digest_8dea7a9de4b59b57c96f518f0d07104f);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_digest_8dea7a9de4b59b57c96f518f0d07104f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_openssl_version_str_plain_is_openssl_tuple", mod_consts.const_tuple_str_plain_openssl_version_str_plain_is_openssl_tuple);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_openssl_version_str_plain_is_openssl_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_key_file_str_plain_f_str_plain_line_tuple", mod_consts.const_tuple_str_plain_key_file_str_plain_f_str_plain_line_tuple);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_file_str_plain_f_str_plain_line_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_c1df7b73096686374e5395b151d4b3c8_tuple", mod_consts.const_tuple_c1df7b73096686374e5395b151d4b3c8_tuple);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_tuple_c1df7b73096686374e5395b151d4b3c8_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_136f505c2e273f9e0f0a8233495342e2_tuple", mod_consts.const_tuple_136f505c2e273f9e0f0a8233495342e2_tuple);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_tuple_136f505c2e273f9e0f0a8233495342e2_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_539624627f40a627ce703249eaacd416_tuple", mod_consts.const_tuple_539624627f40a627ce703249eaacd416_tuple);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_tuple_539624627f40a627ce703249eaacd416_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_hostname_tuple", mod_consts.const_tuple_str_plain_hostname_tuple);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_hostname_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_candidate_str_plain_res_tuple", mod_consts.const_tuple_str_plain_candidate_str_plain_res_tuple);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_candidate_str_plain_res_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_5b5965038a29bec37b8b8195f944ee5a_tuple", mod_consts.const_tuple_5b5965038a29bec37b8b8195f944ee5a_tuple);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_tuple_5b5965038a29bec37b8b8195f944ee5a_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_95b3aa22c797dcb00388ed8d26a9a6fe_tuple", mod_consts.const_tuple_95b3aa22c797dcb00388ed8d26a9a6fe_tuple);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_tuple_95b3aa22c797dcb00388ed8d26a9a6fe_tuple);
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
void checkModuleConstants_urllib3$util$ssl_(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_startswith", mod_consts.const_str_plain_startswith);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_startswith) && "mod_consts.const_str_plain_startswith");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_ff71990518f4792fe116de56f8335660_tuple", mod_consts.const_tuple_str_digest_ff71990518f4792fe116de56f8335660_tuple);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ff71990518f4792fe116de56f8335660_tuple) && "mod_consts.const_tuple_str_digest_ff71990518f4792fe116de56f8335660_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSLError", mod_consts.const_str_plain_SSLError);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSLError) && "mod_consts.const_str_plain_SSLError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_48e0cff034c3b2ba10493a16950f1eba_tuple", mod_consts.const_tuple_str_digest_48e0cff034c3b2ba10493a16950f1eba_tuple);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_48e0cff034c3b2ba10493a16950f1eba_tuple) && "mod_consts.const_tuple_str_digest_48e0cff034c3b2ba10493a16950f1eba_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_replace", mod_consts.const_str_plain_replace);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_replace) && "mod_consts.const_str_plain_replace");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_chr_58_str_empty_tuple", mod_consts.const_tuple_str_chr_58_str_empty_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_58_str_empty_tuple) && "mod_consts.const_tuple_str_chr_58_str_empty_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HASHFUNC_MAP", mod_consts.const_str_plain_HASHFUNC_MAP);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_HASHFUNC_MAP) && "mod_consts.const_str_plain_HASHFUNC_MAP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_55792ed7e44b0f55f1b91618cdf0c0f9", mod_consts.const_str_digest_55792ed7e44b0f55f1b91618cdf0c0f9);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_55792ed7e44b0f55f1b91618cdf0c0f9) && "mod_consts.const_str_digest_55792ed7e44b0f55f1b91618cdf0c0f9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cd7d2a2180fa985a565002b5604c0597", mod_consts.const_str_digest_cd7d2a2180fa985a565002b5604c0597);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_cd7d2a2180fa985a565002b5604c0597) && "mod_consts.const_str_digest_cd7d2a2180fa985a565002b5604c0597");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unhexlify", mod_consts.const_str_plain_unhexlify);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_unhexlify) && "mod_consts.const_str_plain_unhexlify");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encode", mod_consts.const_str_plain_encode);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode) && "mod_consts.const_str_plain_encode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_digest", mod_consts.const_str_plain_digest);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_digest) && "mod_consts.const_str_plain_digest");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hmac", mod_consts.const_str_plain_hmac);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_hmac) && "mod_consts.const_str_plain_hmac");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_compare_digest", mod_consts.const_str_plain_compare_digest);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_compare_digest) && "mod_consts.const_str_plain_compare_digest");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0a3e8370891184bebc36d7a68ab1d7ee", mod_consts.const_str_digest_0a3e8370891184bebc36d7a68ab1d7ee);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_0a3e8370891184bebc36d7a68ab1d7ee) && "mod_consts.const_str_digest_0a3e8370891184bebc36d7a68ab1d7ee");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2b08e73a3fad05ff6ff2eb28665d3d27", mod_consts.const_str_digest_2b08e73a3fad05ff6ff2eb28665d3d27);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_2b08e73a3fad05ff6ff2eb28665d3d27) && "mod_consts.const_str_digest_2b08e73a3fad05ff6ff2eb28665d3d27");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hex", mod_consts.const_str_plain_hex);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_hex) && "mod_consts.const_str_plain_hex");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_34", mod_consts.const_str_chr_34);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_chr_34) && "mod_consts.const_str_chr_34");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_00443216840a6cf3758b05f20629d7a5", mod_consts.const_str_digest_00443216840a6cf3758b05f20629d7a5);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_00443216840a6cf3758b05f20629d7a5) && "mod_consts.const_str_digest_00443216840a6cf3758b05f20629d7a5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CERT_REQUIRED", mod_consts.const_str_plain_CERT_REQUIRED);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_CERT_REQUIRED) && "mod_consts.const_str_plain_CERT_REQUIRED");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ssl", mod_consts.const_str_plain_ssl);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_ssl) && "mod_consts.const_str_plain_ssl");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CERT_", mod_consts.const_str_plain_CERT_);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_CERT_) && "mod_consts.const_str_plain_CERT_");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fc77b8b8b37a6506afd02b138ba800c9", mod_consts.const_str_digest_fc77b8b8b37a6506afd02b138ba800c9);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_fc77b8b8b37a6506afd02b138ba800c9) && "mod_consts.const_str_digest_fc77b8b8b37a6506afd02b138ba800c9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PROTOCOL_TLS", mod_consts.const_str_plain_PROTOCOL_TLS);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_PROTOCOL_TLS) && "mod_consts.const_str_plain_PROTOCOL_TLS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PROTOCOL_", mod_consts.const_str_plain_PROTOCOL_);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_PROTOCOL_) && "mod_consts.const_str_plain_PROTOCOL_");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cast", mod_consts.const_str_plain_cast);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_cast) && "mod_consts.const_str_plain_cast");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2bab504d7a355db862adc1427a8ad427", mod_consts.const_str_digest_2bab504d7a355db862adc1427a8ad427);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_2bab504d7a355db862adc1427a8ad427) && "mod_consts.const_str_digest_2bab504d7a355db862adc1427a8ad427");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSLContext", mod_consts.const_str_plain_SSLContext);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSLContext) && "mod_consts.const_str_plain_SSLContext");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b6067204ea739476e954694b5396f428", mod_consts.const_str_digest_b6067204ea739476e954694b5396f428);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_b6067204ea739476e954694b5396f428) && "mod_consts.const_str_digest_b6067204ea739476e954694b5396f428");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PROTOCOL_TLS_CLIENT", mod_consts.const_str_plain_PROTOCOL_TLS_CLIENT);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_PROTOCOL_TLS_CLIENT) && "mod_consts.const_str_plain_PROTOCOL_TLS_CLIENT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2b4a1d498d1e4806b705ef89de58f5ba", mod_consts.const_str_digest_2b4a1d498d1e4806b705ef89de58f5ba);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_2b4a1d498d1e4806b705ef89de58f5ba) && "mod_consts.const_str_digest_2b4a1d498d1e4806b705ef89de58f5ba");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__SSL_VERSION_TO_TLS_VERSION", mod_consts.const_str_plain__SSL_VERSION_TO_TLS_VERSION);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain__SSL_VERSION_TO_TLS_VERSION) && "mod_consts.const_str_plain__SSL_VERSION_TO_TLS_VERSION");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TLSVersion", mod_consts.const_str_plain_TLSVersion);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_TLSVersion) && "mod_consts.const_str_plain_TLSVersion");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MINIMUM_SUPPORTED", mod_consts.const_str_plain_MINIMUM_SUPPORTED);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_MINIMUM_SUPPORTED) && "mod_consts.const_str_plain_MINIMUM_SUPPORTED");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MAXIMUM_SUPPORTED", mod_consts.const_str_plain_MAXIMUM_SUPPORTED);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_MAXIMUM_SUPPORTED) && "mod_consts.const_str_plain_MAXIMUM_SUPPORTED");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_warnings", mod_consts.const_str_plain_warnings);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_warnings) && "mod_consts.const_str_plain_warnings");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_warn", mod_consts.const_str_plain_warn);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_warn) && "mod_consts.const_str_plain_warn");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FutureWarning", mod_consts.const_str_plain_FutureWarning);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_FutureWarning) && "mod_consts.const_str_plain_FutureWarning");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_int_pos_2) && "mod_consts.const_int_pos_2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_768349b3783d727ad08f28a085fbbfcc_tuple", mod_consts.const_tuple_str_digest_768349b3783d727ad08f28a085fbbfcc_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_768349b3783d727ad08f28a085fbbfcc_tuple) && "mod_consts.const_tuple_str_digest_768349b3783d727ad08f28a085fbbfcc_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_category_str_plain_stacklevel_tuple", mod_consts.const_tuple_str_plain_category_str_plain_stacklevel_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_category_str_plain_stacklevel_tuple) && "mod_consts.const_tuple_str_plain_category_str_plain_stacklevel_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_minimum_version", mod_consts.const_str_plain_minimum_version);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_minimum_version) && "mod_consts.const_str_plain_minimum_version");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TLSv1_2", mod_consts.const_str_plain_TLSv1_2);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_TLSv1_2) && "mod_consts.const_str_plain_TLSv1_2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_maximum_version", mod_consts.const_str_plain_maximum_version);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_maximum_version) && "mod_consts.const_str_plain_maximum_version");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_set_ciphers", mod_consts.const_str_plain_set_ciphers);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_ciphers) && "mod_consts.const_str_plain_set_ciphers");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OP_NO_SSLv2", mod_consts.const_str_plain_OP_NO_SSLv2);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_OP_NO_SSLv2) && "mod_consts.const_str_plain_OP_NO_SSLv2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OP_NO_SSLv3", mod_consts.const_str_plain_OP_NO_SSLv3);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_OP_NO_SSLv3) && "mod_consts.const_str_plain_OP_NO_SSLv3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OP_NO_COMPRESSION", mod_consts.const_str_plain_OP_NO_COMPRESSION);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_OP_NO_COMPRESSION) && "mod_consts.const_str_plain_OP_NO_COMPRESSION");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OP_NO_TICKET", mod_consts.const_str_plain_OP_NO_TICKET);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_OP_NO_TICKET) && "mod_consts.const_str_plain_OP_NO_TICKET");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_options", mod_consts.const_str_plain_options);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_options) && "mod_consts.const_str_plain_options");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_VERIFY_X509_PARTIAL_CHAIN", mod_consts.const_str_plain_VERIFY_X509_PARTIAL_CHAIN);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_VERIFY_X509_PARTIAL_CHAIN) && "mod_consts.const_str_plain_VERIFY_X509_PARTIAL_CHAIN");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_VERIFY_X509_STRICT", mod_consts.const_str_plain_VERIFY_X509_STRICT);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_VERIFY_X509_STRICT) && "mod_consts.const_str_plain_VERIFY_X509_STRICT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_verify_flags", mod_consts.const_str_plain_verify_flags);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_verify_flags) && "mod_consts.const_str_plain_verify_flags");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_post_handshake_auth", mod_consts.const_str_plain_post_handshake_auth);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_post_handshake_auth) && "mod_consts.const_str_plain_post_handshake_auth");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IS_PYOPENSSL", mod_consts.const_str_plain_IS_PYOPENSSL);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_IS_PYOPENSSL) && "mod_consts.const_str_plain_IS_PYOPENSSL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_verify_mode", mod_consts.const_str_plain_verify_mode);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_verify_mode) && "mod_consts.const_str_plain_verify_mode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_check_hostname", mod_consts.const_str_plain_check_hostname);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_check_hostname) && "mod_consts.const_str_plain_check_hostname");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hostname_checks_common_name", mod_consts.const_str_plain_hostname_checks_common_name);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_hostname_checks_common_name) && "mod_consts.const_str_plain_hostname_checks_common_name");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSLKEYLOGFILE", mod_consts.const_str_plain_SSLKEYLOGFILE);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSLKEYLOGFILE) && "mod_consts.const_str_plain_SSLKEYLOGFILE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_environ", mod_consts.const_str_plain_environ);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ) && "mod_consts.const_str_plain_environ");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_expandvars", mod_consts.const_str_plain_expandvars);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_expandvars) && "mod_consts.const_str_plain_expandvars");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_SSLKEYLOGFILE_tuple", mod_consts.const_tuple_str_plain_SSLKEYLOGFILE_tuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SSLKEYLOGFILE_tuple) && "mod_consts.const_tuple_str_plain_SSLKEYLOGFILE_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_keylog_filename", mod_consts.const_str_plain_keylog_filename);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_keylog_filename) && "mod_consts.const_str_plain_keylog_filename");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4e1a677cd4f0a464ce7686d19a2e12a5", mod_consts.const_str_digest_4e1a677cd4f0a464ce7686d19a2e12a5);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_4e1a677cd4f0a464ce7686d19a2e12a5) && "mod_consts.const_str_digest_4e1a677cd4f0a464ce7686d19a2e12a5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_create_urllib3_context", mod_consts.const_str_plain_create_urllib3_context);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_urllib3_context) && "mod_consts.const_str_plain_create_urllib3_context");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ciphers_tuple", mod_consts.const_tuple_str_plain_ciphers_tuple);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ciphers_tuple) && "mod_consts.const_tuple_str_plain_ciphers_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load_verify_locations", mod_consts.const_str_plain_load_verify_locations);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_verify_locations) && "mod_consts.const_str_plain_load_verify_locations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load_default_certs", mod_consts.const_str_plain_load_default_certs);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_default_certs) && "mod_consts.const_str_plain_load_default_certs");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__is_key_file_encrypted", mod_consts.const_str_plain__is_key_file_encrypted);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain__is_key_file_encrypted) && "mod_consts.const_str_plain__is_key_file_encrypted");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_9122c237564b58c6d395bd61e093c6a7_tuple", mod_consts.const_tuple_str_digest_9122c237564b58c6d395bd61e093c6a7_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_9122c237564b58c6d395bd61e093c6a7_tuple) && "mod_consts.const_tuple_str_digest_9122c237564b58c6d395bd61e093c6a7_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load_cert_chain", mod_consts.const_str_plain_load_cert_chain);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_cert_chain) && "mod_consts.const_str_plain_load_cert_chain");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_set_alpn_protocols", mod_consts.const_str_plain_set_alpn_protocols);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_alpn_protocols) && "mod_consts.const_str_plain_set_alpn_protocols");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ALPN_PROTOCOLS", mod_consts.const_str_plain_ALPN_PROTOCOLS);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_ALPN_PROTOCOLS) && "mod_consts.const_str_plain_ALPN_PROTOCOLS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__ssl_wrap_socket_impl", mod_consts.const_str_plain__ssl_wrap_socket_impl);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain__ssl_wrap_socket_impl) && "mod_consts.const_str_plain__ssl_wrap_socket_impl");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3ef282c77d135e7483677d62b5216bcb", mod_consts.const_str_digest_3ef282c77d135e7483677d62b5216bcb);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_3ef282c77d135e7483677d62b5216bcb) && "mod_consts.const_str_digest_3ef282c77d135e7483677d62b5216bcb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decode", mod_consts.const_str_plain_decode);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode) && "mod_consts.const_str_plain_decode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ascii_tuple", mod_consts.const_tuple_str_plain_ascii_tuple);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_tuple) && "mod_consts.const_tuple_str_plain_ascii_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__IPV4_RE", mod_consts.const_str_plain__IPV4_RE);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain__IPV4_RE) && "mod_consts.const_str_plain__IPV4_RE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_match", mod_consts.const_str_plain_match);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_match) && "mod_consts.const_str_plain_match");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__BRACELESS_IPV6_ADDRZ_RE", mod_consts.const_str_plain__BRACELESS_IPV6_ADDRZ_RE);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain__BRACELESS_IPV6_ADDRZ_RE) && "mod_consts.const_str_plain__BRACELESS_IPV6_ADDRZ_RE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7433ea5e9bf8137907952033c6cfa210", mod_consts.const_str_digest_7433ea5e9bf8137907952033c6cfa210);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_7433ea5e9bf8137907952033c6cfa210) && "mod_consts.const_str_digest_7433ea5e9bf8137907952033c6cfa210");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ENCRYPTED", mod_consts.const_str_plain_ENCRYPTED);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_ENCRYPTED) && "mod_consts.const_str_plain_ENCRYPTED");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_none_tuple", mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple) && "mod_consts.const_tuple_none_none_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_11208532747ea36cadee31118e841464", mod_consts.const_str_digest_11208532747ea36cadee31118e841464);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_11208532747ea36cadee31118e841464) && "mod_consts.const_str_digest_11208532747ea36cadee31118e841464");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSLTransport", mod_consts.const_str_plain_SSLTransport);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSLTransport) && "mod_consts.const_str_plain_SSLTransport");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProxySchemeUnsupported", mod_consts.const_str_plain_ProxySchemeUnsupported);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProxySchemeUnsupported) && "mod_consts.const_str_plain_ProxySchemeUnsupported");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_75be7dda6a228a6bf538b7d95b7b3b2a_tuple", mod_consts.const_tuple_str_digest_75be7dda6a228a6bf538b7d95b7b3b2a_tuple);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_75be7dda6a228a6bf538b7d95b7b3b2a_tuple) && "mod_consts.const_tuple_str_digest_75be7dda6a228a6bf538b7d95b7b3b2a_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__validate_ssl_context_for_tls_in_tls", mod_consts.const_str_plain__validate_ssl_context_for_tls_in_tls);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain__validate_ssl_context_for_tls_in_tls) && "mod_consts.const_str_plain__validate_ssl_context_for_tls_in_tls");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wrap_socket", mod_consts.const_str_plain_wrap_socket);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_wrap_socket) && "mod_consts.const_str_plain_wrap_socket");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_server_hostname_tuple", mod_consts.const_tuple_str_plain_server_hostname_tuple);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_server_hostname_tuple) && "mod_consts.const_tuple_str_plain_server_hostname_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hashlib", mod_consts.const_str_plain_hashlib);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_hashlib) && "mod_consts.const_str_plain_hashlib");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_os", mod_consts.const_str_plain_os);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_os) && "mod_consts.const_str_plain_os");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_socket", mod_consts.const_str_plain_socket);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_socket) && "mod_consts.const_str_plain_socket");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sys", mod_consts.const_str_plain_sys);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys) && "mod_consts.const_str_plain_sys");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_typing", mod_consts.const_str_plain_typing);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing) && "mod_consts.const_str_plain_typing");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_binascii", mod_consts.const_str_plain_binascii);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_binascii) && "mod_consts.const_str_plain_binascii");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_unhexlify_tuple", mod_consts.const_tuple_str_plain_unhexlify_tuple);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_unhexlify_tuple) && "mod_consts.const_tuple_str_plain_unhexlify_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exceptions", mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions) && "mod_consts.const_str_plain_exceptions");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ProxySchemeUnsupported_str_plain_SSLError_tuple", mod_consts.const_tuple_str_plain_ProxySchemeUnsupported_str_plain_SSLError_tuple);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ProxySchemeUnsupported_str_plain_SSLError_tuple) && "mod_consts.const_tuple_str_plain_ProxySchemeUnsupported_str_plain_SSLError_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_url", mod_consts.const_str_plain_url);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_url) && "mod_consts.const_str_plain_url");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__BRACELESS_IPV6_ADDRZ_RE_str_plain__IPV4_RE_tuple", mod_consts.const_tuple_str_plain__BRACELESS_IPV6_ADDRZ_RE_str_plain__IPV4_RE_tuple);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__BRACELESS_IPV6_ADDRZ_RE_str_plain__IPV4_RE_tuple) && "mod_consts.const_tuple_str_plain__BRACELESS_IPV6_ADDRZ_RE_str_plain__IPV4_RE_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HAS_NEVER_CHECK_COMMON_NAME", mod_consts.const_str_plain_HAS_NEVER_CHECK_COMMON_NAME);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_HAS_NEVER_CHECK_COMMON_NAME) && "mod_consts.const_str_plain_HAS_NEVER_CHECK_COMMON_NAME");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d70237e35c994fd4ee6ee104a7cdf8ac", mod_consts.const_str_digest_d70237e35c994fd4ee6ee104a7cdf8ac);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_digest_d70237e35c994fd4ee6ee104a7cdf8ac) && "mod_consts.const_str_digest_d70237e35c994fd4ee6ee104a7cdf8ac");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_int_type_int_type_int_type_str_type_int_tuple", mod_consts.const_tuple_type_int_type_int_type_int_type_str_type_int_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_type_int_type_int_type_int_type_str_type_int_tuple) && "mod_consts.const_tuple_type_int_type_int_type_int_type_str_type_int_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__TYPE_VERSION_INFO", mod_consts.const_str_plain__TYPE_VERSION_INFO);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain__TYPE_VERSION_INFO) && "mod_consts.const_str_plain__TYPE_VERSION_INFO");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_7f7ad48e1d187da64e1ae88ee87a3452_tuple", mod_consts.const_tuple_7f7ad48e1d187da64e1ae88ee87a3452_tuple);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_tuple_7f7ad48e1d187da64e1ae88ee87a3452_tuple) && "mod_consts.const_tuple_7f7ad48e1d187da64e1ae88ee87a3452_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_aee2829287d729fc07a2573619373aea", mod_consts.const_dict_aee2829287d729fc07a2573619373aea);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_dict_aee2829287d729fc07a2573619373aea) && "mod_consts.const_dict_aee2829287d729fc07a2573619373aea");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__is_has_never_check_common_name_reliable", mod_consts.const_str_plain__is_has_never_check_common_name_reliable);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain__is_has_never_check_common_name_reliable) && "mod_consts.const_str_plain__is_has_never_check_common_name_reliable");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5b40aa38e0c6f708b1ae98187d5fc99e", mod_consts.const_str_digest_5b40aa38e0c6f708b1ae98187d5fc99e);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_digest_5b40aa38e0c6f708b1ae98187d5fc99e) && "mod_consts.const_str_digest_5b40aa38e0c6f708b1ae98187d5fc99e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_18f0e0433f330a33b43281d5a7ddc858_tuple", mod_consts.const_tuple_18f0e0433f330a33b43281d5a7ddc858_tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_tuple_18f0e0433f330a33b43281d5a7ddc858_tuple) && "mod_consts.const_tuple_18f0e0433f330a33b43281d5a7ddc858_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OPENSSL_VERSION", mod_consts.const_str_plain_OPENSSL_VERSION);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_OPENSSL_VERSION) && "mod_consts.const_str_plain_OPENSSL_VERSION");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PROTOCOL_SSLv23", mod_consts.const_str_plain_PROTOCOL_SSLv23);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_PROTOCOL_SSLv23) && "mod_consts.const_str_plain_PROTOCOL_SSLv23");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_TLSv1_str_plain_TLSv1_1_str_plain_TLSv1_2_tuple", mod_consts.const_tuple_str_plain_TLSv1_str_plain_TLSv1_1_str_plain_TLSv1_2_tuple);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TLSv1_str_plain_TLSv1_1_str_plain_TLSv1_2_tuple) && "mod_consts.const_tuple_str_plain_TLSv1_str_plain_TLSv1_1_str_plain_TLSv1_2_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_attr", mod_consts.const_str_plain_attr);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_attr) && "mod_consts.const_str_plain_attr");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ssltransport", mod_consts.const_str_plain_ssltransport);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_ssltransport) && "mod_consts.const_str_plain_ssltransport");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_SSLTransport_tuple", mod_consts.const_tuple_str_plain_SSLTransport_tuple);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SSLTransport_tuple) && "mod_consts.const_tuple_str_plain_SSLTransport_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_131072", mod_consts.const_int_pos_131072);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_int_pos_131072) && "mod_consts.const_int_pos_131072");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16384", mod_consts.const_int_pos_16384);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_int_pos_16384) && "mod_consts.const_int_pos_16384");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_hex_1000000", mod_consts.const_int_hex_1000000);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_int_hex_1000000) && "mod_consts.const_int_hex_1000000");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_hex_2000000", mod_consts.const_int_hex_2000000);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_int_hex_2000000) && "mod_consts.const_int_hex_2000000");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16", mod_consts.const_int_pos_16);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_int_pos_16) && "mod_consts.const_int_pos_16");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_524288", mod_consts.const_int_pos_524288);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_int_pos_524288) && "mod_consts.const_int_pos_524288");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_32", mod_consts.const_int_pos_32);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_int_pos_32) && "mod_consts.const_int_pos_32");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Union", mod_consts.const_str_plain_Union);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union) && "mod_consts.const_str_plain_Union");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__TYPE_PEER_CERT_RET_DICT_type_bytes_none_tuple", mod_consts.const_tuple_str_plain__TYPE_PEER_CERT_RET_DICT_type_bytes_none_tuple);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__TYPE_PEER_CERT_RET_DICT_type_bytes_none_tuple) && "mod_consts.const_tuple_str_plain__TYPE_PEER_CERT_RET_DICT_type_bytes_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__TYPE_PEER_CERT_RET", mod_consts.const_str_plain__TYPE_PEER_CERT_RET);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain__TYPE_PEER_CERT_RET) && "mod_consts.const_str_plain__TYPE_PEER_CERT_RET");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_367d1a21df6286ad9274118c3f81f657", mod_consts.const_dict_367d1a21df6286ad9274118c3f81f657);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_dict_367d1a21df6286ad9274118c3f81f657) && "mod_consts.const_dict_367d1a21df6286ad9274118c3f81f657");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_assert_fingerprint", mod_consts.const_str_plain_assert_fingerprint);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_assert_fingerprint) && "mod_consts.const_str_plain_assert_fingerprint");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_2e3431bdfd877ec817f317d0d7420173", mod_consts.const_dict_2e3431bdfd877ec817f317d0d7420173);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_dict_2e3431bdfd877ec817f317d0d7420173) && "mod_consts.const_dict_2e3431bdfd877ec817f317d0d7420173");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_resolve_cert_reqs", mod_consts.const_str_plain_resolve_cert_reqs);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_resolve_cert_reqs) && "mod_consts.const_str_plain_resolve_cert_reqs");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_841d18ac7b40b3c5d648b142989fa720", mod_consts.const_dict_841d18ac7b40b3c5d648b142989fa720);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_dict_841d18ac7b40b3c5d648b142989fa720) && "mod_consts.const_dict_841d18ac7b40b3c5d648b142989fa720");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_resolve_ssl_version", mod_consts.const_str_plain_resolve_ssl_version);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_resolve_ssl_version) && "mod_consts.const_str_plain_resolve_ssl_version");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_none_none_none_none_none_tuple", mod_consts.const_tuple_none_none_none_none_none_none_none_tuple);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_none_none_none_tuple) && "mod_consts.const_tuple_none_none_none_none_none_none_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_5bf3c00cb4f8f9c3699c8a8c3551afda", mod_consts.const_dict_5bf3c00cb4f8f9c3699c8a8c3551afda);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_dict_5bf3c00cb4f8f9c3699c8a8c3551afda) && "mod_consts.const_dict_5bf3c00cb4f8f9c3699c8a8c3551afda");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_overload", mod_consts.const_str_plain_overload);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_overload) && "mod_consts.const_str_plain_overload");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_fd2b59ad0dd7044251a51692d1dcc7d4_tuple", mod_consts.const_tuple_fd2b59ad0dd7044251a51692d1dcc7d4_tuple);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_fd2b59ad0dd7044251a51692d1dcc7d4_tuple) && "mod_consts.const_tuple_fd2b59ad0dd7044251a51692d1dcc7d4_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_5d7d0970ec44e36bbce31f5cf1b40c9e", mod_consts.const_dict_5d7d0970ec44e36bbce31f5cf1b40c9e);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_dict_5d7d0970ec44e36bbce31f5cf1b40c9e) && "mod_consts.const_dict_5d7d0970ec44e36bbce31f5cf1b40c9e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ssl_wrap_socket", mod_consts.const_str_plain_ssl_wrap_socket);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_ssl_wrap_socket) && "mod_consts.const_str_plain_ssl_wrap_socket");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_20fd385a9560791475667c6be9367b66", mod_consts.const_dict_20fd385a9560791475667c6be9367b66);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_dict_20fd385a9560791475667c6be9367b66) && "mod_consts.const_dict_20fd385a9560791475667c6be9367b66");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_none_none_none_none_none_none_none_none_none_false_tuple", mod_consts.const_tuple_none_none_none_none_none_none_none_none_none_none_none_false_tuple);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_none_none_none_none_none_none_none_false_tuple) && "mod_consts.const_tuple_none_none_none_none_none_none_none_none_none_none_none_false_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_5b2fbf3f7c44d3207d5dd4dec8ec7c48", mod_consts.const_dict_5b2fbf3f7c44d3207d5dd4dec8ec7c48);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_dict_5b2fbf3f7c44d3207d5dd4dec8ec7c48) && "mod_consts.const_dict_5b2fbf3f7c44d3207d5dd4dec8ec7c48");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_ipaddress", mod_consts.const_str_plain_is_ipaddress);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_ipaddress) && "mod_consts.const_str_plain_is_ipaddress");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_8fb4eceea18e21ca7fa2a9a37cde7f64", mod_consts.const_dict_8fb4eceea18e21ca7fa2a9a37cde7f64);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_dict_8fb4eceea18e21ca7fa2a9a37cde7f64) && "mod_consts.const_dict_8fb4eceea18e21ca7fa2a9a37cde7f64");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple) && "mod_consts.const_tuple_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_8b0818ee139c611994a7d99efb853cc3", mod_consts.const_dict_8b0818ee139c611994a7d99efb853cc3);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_dict_8b0818ee139c611994a7d99efb853cc3) && "mod_consts.const_dict_8b0818ee139c611994a7d99efb853cc3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4c54965eee2f9057ca84664177c253ba", mod_consts.const_str_digest_4c54965eee2f9057ca84664177c253ba);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_digest_4c54965eee2f9057ca84664177c253ba) && "mod_consts.const_str_digest_4c54965eee2f9057ca84664177c253ba");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8dea7a9de4b59b57c96f518f0d07104f", mod_consts.const_str_digest_8dea7a9de4b59b57c96f518f0d07104f);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_digest_8dea7a9de4b59b57c96f518f0d07104f) && "mod_consts.const_str_digest_8dea7a9de4b59b57c96f518f0d07104f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_openssl_version_str_plain_is_openssl_tuple", mod_consts.const_tuple_str_plain_openssl_version_str_plain_is_openssl_tuple);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_openssl_version_str_plain_is_openssl_tuple) && "mod_consts.const_tuple_str_plain_openssl_version_str_plain_is_openssl_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_key_file_str_plain_f_str_plain_line_tuple", mod_consts.const_tuple_str_plain_key_file_str_plain_f_str_plain_line_tuple);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_file_str_plain_f_str_plain_line_tuple) && "mod_consts.const_tuple_str_plain_key_file_str_plain_f_str_plain_line_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_c1df7b73096686374e5395b151d4b3c8_tuple", mod_consts.const_tuple_c1df7b73096686374e5395b151d4b3c8_tuple);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_tuple_c1df7b73096686374e5395b151d4b3c8_tuple) && "mod_consts.const_tuple_c1df7b73096686374e5395b151d4b3c8_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_136f505c2e273f9e0f0a8233495342e2_tuple", mod_consts.const_tuple_136f505c2e273f9e0f0a8233495342e2_tuple);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_tuple_136f505c2e273f9e0f0a8233495342e2_tuple) && "mod_consts.const_tuple_136f505c2e273f9e0f0a8233495342e2_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_539624627f40a627ce703249eaacd416_tuple", mod_consts.const_tuple_539624627f40a627ce703249eaacd416_tuple);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_tuple_539624627f40a627ce703249eaacd416_tuple) && "mod_consts.const_tuple_539624627f40a627ce703249eaacd416_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_hostname_tuple", mod_consts.const_tuple_str_plain_hostname_tuple);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_hostname_tuple) && "mod_consts.const_tuple_str_plain_hostname_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_candidate_str_plain_res_tuple", mod_consts.const_tuple_str_plain_candidate_str_plain_res_tuple);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_candidate_str_plain_res_tuple) && "mod_consts.const_tuple_str_plain_candidate_str_plain_res_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_5b5965038a29bec37b8b8195f944ee5a_tuple", mod_consts.const_tuple_5b5965038a29bec37b8b8195f944ee5a_tuple);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_tuple_5b5965038a29bec37b8b8195f944ee5a_tuple) && "mod_consts.const_tuple_5b5965038a29bec37b8b8195f944ee5a_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_95b3aa22c797dcb00388ed8d26a9a6fe_tuple", mod_consts.const_tuple_95b3aa22c797dcb00388ed8d26a9a6fe_tuple);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_tuple_95b3aa22c797dcb00388ed8d26a9a6fe_tuple) && "mod_consts.const_tuple_95b3aa22c797dcb00388ed8d26a9a6fe_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 35
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
static PyObject *module_var_accessor_urllib3$util$ssl_$ALPN_PROTOCOLS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssl_->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssl_->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_ALPN_PROTOCOLS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssl_->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ALPN_PROTOCOLS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ALPN_PROTOCOLS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ALPN_PROTOCOLS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ALPN_PROTOCOLS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_ALPN_PROTOCOLS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_ALPN_PROTOCOLS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ALPN_PROTOCOLS);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssl_$CERT_REQUIRED(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssl_->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssl_->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_CERT_REQUIRED);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssl_->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CERT_REQUIRED);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CERT_REQUIRED, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CERT_REQUIRED);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CERT_REQUIRED, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_CERT_REQUIRED);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_CERT_REQUIRED);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CERT_REQUIRED);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssl_$FutureWarning(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssl_->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssl_->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_FutureWarning);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssl_->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FutureWarning);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FutureWarning, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FutureWarning);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FutureWarning, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_FutureWarning);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_FutureWarning);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FutureWarning);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssl_$HASHFUNC_MAP(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssl_->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssl_->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_HASHFUNC_MAP);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssl_->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HASHFUNC_MAP);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HASHFUNC_MAP, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HASHFUNC_MAP);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HASHFUNC_MAP, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_HASHFUNC_MAP);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_HASHFUNC_MAP);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HASHFUNC_MAP);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssl_$HAS_NEVER_CHECK_COMMON_NAME(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssl_->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssl_->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_HAS_NEVER_CHECK_COMMON_NAME);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssl_->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HAS_NEVER_CHECK_COMMON_NAME);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HAS_NEVER_CHECK_COMMON_NAME, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HAS_NEVER_CHECK_COMMON_NAME);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HAS_NEVER_CHECK_COMMON_NAME, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_HAS_NEVER_CHECK_COMMON_NAME);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_HAS_NEVER_CHECK_COMMON_NAME);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HAS_NEVER_CHECK_COMMON_NAME);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssl_$IS_PYOPENSSL(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssl_->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssl_->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_IS_PYOPENSSL);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssl_->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IS_PYOPENSSL);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IS_PYOPENSSL, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IS_PYOPENSSL);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IS_PYOPENSSL, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_IS_PYOPENSSL);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_IS_PYOPENSSL);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IS_PYOPENSSL);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssl_$OPENSSL_VERSION(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssl_->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssl_->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_OPENSSL_VERSION);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssl_->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OPENSSL_VERSION);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OPENSSL_VERSION, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OPENSSL_VERSION);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OPENSSL_VERSION, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_OPENSSL_VERSION);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_OPENSSL_VERSION);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OPENSSL_VERSION);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssl_$OP_NO_COMPRESSION(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssl_->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssl_->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_NO_COMPRESSION);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssl_->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OP_NO_COMPRESSION);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OP_NO_COMPRESSION, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OP_NO_COMPRESSION);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OP_NO_COMPRESSION, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_NO_COMPRESSION);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_NO_COMPRESSION);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_NO_COMPRESSION);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssl_$OP_NO_SSLv2(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssl_->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssl_->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_NO_SSLv2);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssl_->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OP_NO_SSLv2);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OP_NO_SSLv2, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OP_NO_SSLv2);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OP_NO_SSLv2, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_NO_SSLv2);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_NO_SSLv2);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_NO_SSLv2);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssl_$OP_NO_SSLv3(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssl_->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssl_->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_NO_SSLv3);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssl_->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OP_NO_SSLv3);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OP_NO_SSLv3, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OP_NO_SSLv3);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OP_NO_SSLv3, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_NO_SSLv3);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_NO_SSLv3);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_NO_SSLv3);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssl_$OP_NO_TICKET(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssl_->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssl_->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_NO_TICKET);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssl_->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OP_NO_TICKET);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OP_NO_TICKET, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OP_NO_TICKET);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OP_NO_TICKET, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_NO_TICKET);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_NO_TICKET);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_NO_TICKET);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssl_$PROTOCOL_TLS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssl_->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssl_->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_PROTOCOL_TLS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssl_->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PROTOCOL_TLS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PROTOCOL_TLS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PROTOCOL_TLS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PROTOCOL_TLS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_PROTOCOL_TLS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_PROTOCOL_TLS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PROTOCOL_TLS);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssl_$PROTOCOL_TLS_CLIENT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssl_->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssl_->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_PROTOCOL_TLS_CLIENT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssl_->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PROTOCOL_TLS_CLIENT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PROTOCOL_TLS_CLIENT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PROTOCOL_TLS_CLIENT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PROTOCOL_TLS_CLIENT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_PROTOCOL_TLS_CLIENT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_PROTOCOL_TLS_CLIENT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PROTOCOL_TLS_CLIENT);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssl_$ProxySchemeUnsupported(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssl_->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssl_->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxySchemeUnsupported);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssl_->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxySchemeUnsupported);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxySchemeUnsupported);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxySchemeUnsupported);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssl_$SSLContext(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssl_->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssl_->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_SSLContext);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssl_->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SSLContext);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SSLContext, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SSLContext);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SSLContext, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_SSLContext);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_SSLContext);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SSLContext);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssl_$SSLError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssl_->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssl_->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_SSLError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssl_->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SSLError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SSLError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SSLError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SSLError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_SSLError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_SSLError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SSLError);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssl_$SSLTransport(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssl_->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssl_->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_SSLTransport);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssl_->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SSLTransport);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SSLTransport, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SSLTransport);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SSLTransport, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_SSLTransport);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_SSLTransport);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SSLTransport);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssl_$TLSVersion(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssl_->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssl_->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_TLSVersion);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssl_->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TLSVersion);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TLSVersion, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TLSVersion);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TLSVersion, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_TLSVersion);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_TLSVersion);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TLSVersion);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssl_$VERIFY_X509_PARTIAL_CHAIN(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssl_->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssl_->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_VERIFY_X509_PARTIAL_CHAIN);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssl_->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_VERIFY_X509_PARTIAL_CHAIN);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_VERIFY_X509_PARTIAL_CHAIN, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_VERIFY_X509_PARTIAL_CHAIN);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_VERIFY_X509_PARTIAL_CHAIN, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_VERIFY_X509_PARTIAL_CHAIN);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_VERIFY_X509_PARTIAL_CHAIN);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_VERIFY_X509_PARTIAL_CHAIN);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssl_$VERIFY_X509_STRICT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssl_->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssl_->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_VERIFY_X509_STRICT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssl_->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_VERIFY_X509_STRICT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_VERIFY_X509_STRICT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_VERIFY_X509_STRICT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_VERIFY_X509_STRICT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_VERIFY_X509_STRICT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_VERIFY_X509_STRICT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_VERIFY_X509_STRICT);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssl_$_BRACELESS_IPV6_ADDRZ_RE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssl_->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssl_->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain__BRACELESS_IPV6_ADDRZ_RE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssl_->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__BRACELESS_IPV6_ADDRZ_RE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__BRACELESS_IPV6_ADDRZ_RE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__BRACELESS_IPV6_ADDRZ_RE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__BRACELESS_IPV6_ADDRZ_RE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain__BRACELESS_IPV6_ADDRZ_RE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain__BRACELESS_IPV6_ADDRZ_RE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__BRACELESS_IPV6_ADDRZ_RE);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssl_$_IPV4_RE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssl_->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssl_->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain__IPV4_RE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssl_->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__IPV4_RE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__IPV4_RE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__IPV4_RE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__IPV4_RE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain__IPV4_RE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain__IPV4_RE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__IPV4_RE);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssl_$_SSL_VERSION_TO_TLS_VERSION(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssl_->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssl_->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain__SSL_VERSION_TO_TLS_VERSION);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssl_->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__SSL_VERSION_TO_TLS_VERSION);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__SSL_VERSION_TO_TLS_VERSION, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__SSL_VERSION_TO_TLS_VERSION);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__SSL_VERSION_TO_TLS_VERSION, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain__SSL_VERSION_TO_TLS_VERSION);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain__SSL_VERSION_TO_TLS_VERSION);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__SSL_VERSION_TO_TLS_VERSION);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssl_$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssl_->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssl_->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssl_->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssl_$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssl_->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssl_->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssl_->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssl_$_is_has_never_check_common_name_reliable(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssl_->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssl_->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain__is_has_never_check_common_name_reliable);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssl_->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__is_has_never_check_common_name_reliable);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__is_has_never_check_common_name_reliable, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__is_has_never_check_common_name_reliable);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__is_has_never_check_common_name_reliable, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain__is_has_never_check_common_name_reliable);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain__is_has_never_check_common_name_reliable);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__is_has_never_check_common_name_reliable);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssl_$_is_key_file_encrypted(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssl_->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssl_->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain__is_key_file_encrypted);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssl_->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__is_key_file_encrypted);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__is_key_file_encrypted, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__is_key_file_encrypted);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__is_key_file_encrypted, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain__is_key_file_encrypted);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain__is_key_file_encrypted);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__is_key_file_encrypted);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssl_$_ssl_wrap_socket_impl(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssl_->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssl_->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain__ssl_wrap_socket_impl);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssl_->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ssl_wrap_socket_impl);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ssl_wrap_socket_impl, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ssl_wrap_socket_impl);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ssl_wrap_socket_impl, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain__ssl_wrap_socket_impl);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain__ssl_wrap_socket_impl);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__ssl_wrap_socket_impl);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssl_$attr(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssl_->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssl_->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_attr);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssl_->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_attr);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_attr, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_attr);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_attr, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_attr);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_attr);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_attr);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssl_$create_urllib3_context(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssl_->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssl_->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_create_urllib3_context);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssl_->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_create_urllib3_context);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_create_urllib3_context, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_create_urllib3_context);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_create_urllib3_context, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_create_urllib3_context);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_create_urllib3_context);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_create_urllib3_context);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssl_$hashlib(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssl_->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssl_->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_hashlib);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssl_->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hashlib);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hashlib, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hashlib);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hashlib, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_hashlib);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_hashlib);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hashlib);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssl_$hmac(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssl_->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssl_->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_hmac);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssl_->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hmac);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hmac, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hmac);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hmac, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_hmac);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_hmac);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hmac);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssl_$ssl(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssl_->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssl_->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_ssl);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssl_->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_ssl);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_ssl);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ssl);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssl_$unhexlify(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssl_->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssl_->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_unhexlify);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssl_->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_unhexlify);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_unhexlify, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_unhexlify);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_unhexlify, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_unhexlify);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_unhexlify);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_unhexlify);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$ssl_$warnings(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$ssl_->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$ssl_->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$ssl_->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_warnings);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_warnings, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_warnings);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_warnings, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_3947483b74b721bc8efd1b6880c38ce7;
static PyCodeObject *code_objects_3114174c2d708af005c49000c9484c82;
static PyCodeObject *code_objects_6d0ef9e3777cc0395417fa6e471f5002;
static PyCodeObject *code_objects_9a39f97c4a39595acca1bf19dd149970;
static PyCodeObject *code_objects_72962c237e8a0a313faa0f408f267b63;
static PyCodeObject *code_objects_fb526b6dd557cfc108bc925bd0a5c279;
static PyCodeObject *code_objects_fde51f18020711f69b3784f44c9a5336;
static PyCodeObject *code_objects_b0619bc408e282d19a02ed229b7fe4e4;
static PyCodeObject *code_objects_af0d55d28e71454c184fb83264e061fb;
static PyCodeObject *code_objects_bf111a77bd087249b1c610a1c0390278;
static PyCodeObject *code_objects_f4a4c190a3b92ca2826a9da11b63ac19;
static PyCodeObject *code_objects_614256444a934cc977dc535c0d68b080;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_4c54965eee2f9057ca84664177c253ba); CHECK_OBJECT(module_filename_obj);
code_objects_3947483b74b721bc8efd1b6880c38ce7 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_8dea7a9de4b59b57c96f518f0d07104f, mod_consts.const_str_digest_8dea7a9de4b59b57c96f518f0d07104f, NULL, NULL, 0, 0, 0);
code_objects_3114174c2d708af005c49000c9484c82 = MAKE_CODE_OBJECT(module_filename_obj, 30, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__is_has_never_check_common_name_reliable, mod_consts.const_str_plain__is_has_never_check_common_name_reliable, mod_consts.const_tuple_str_plain_openssl_version_str_plain_is_openssl_tuple, NULL, 1, 0, 0);
code_objects_6d0ef9e3777cc0395417fa6e471f5002 = MAKE_CODE_OBJECT(module_filename_obj, 450, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__is_key_file_encrypted, mod_consts.const_str_plain__is_key_file_encrypted, mod_consts.const_tuple_str_plain_key_file_str_plain_f_str_plain_line_tuple, NULL, 1, 0, 0);
code_objects_9a39f97c4a39595acca1bf19dd149970 = MAKE_CODE_OBJECT(module_filename_obj, 461, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__ssl_wrap_socket_impl, mod_consts.const_str_plain__ssl_wrap_socket_impl, mod_consts.const_tuple_c1df7b73096686374e5395b151d4b3c8_tuple, NULL, 4, 0, 0);
code_objects_72962c237e8a0a313faa0f408f267b63 = MAKE_CODE_OBJECT(module_filename_obj, 107, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_assert_fingerprint, mod_consts.const_str_plain_assert_fingerprint, mod_consts.const_tuple_136f505c2e273f9e0f0a8233495342e2_tuple, NULL, 2, 0, 0);
code_objects_fb526b6dd557cfc108bc925bd0a5c279 = MAKE_CODE_OBJECT(module_filename_obj, 180, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create_urllib3_context, mod_consts.const_str_plain_create_urllib3_context, mod_consts.const_tuple_539624627f40a627ce703249eaacd416_tuple, NULL, 7, 0, 0);
code_objects_fde51f18020711f69b3784f44c9a5336 = MAKE_CODE_OBJECT(module_filename_obj, 437, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_ipaddress, mod_consts.const_str_plain_is_ipaddress, mod_consts.const_tuple_str_plain_hostname_tuple, NULL, 1, 0, 0);
code_objects_b0619bc408e282d19a02ed229b7fe4e4 = MAKE_CODE_OBJECT(module_filename_obj, 141, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_resolve_cert_reqs, mod_consts.const_str_plain_resolve_cert_reqs, mod_consts.const_tuple_str_plain_candidate_str_plain_res_tuple, NULL, 1, 0, 0);
code_objects_af0d55d28e71454c184fb83264e061fb = MAKE_CODE_OBJECT(module_filename_obj, 164, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_resolve_ssl_version, mod_consts.const_str_plain_resolve_ssl_version, mod_consts.const_tuple_str_plain_candidate_str_plain_res_tuple, NULL, 1, 0, 0);
code_objects_bf111a77bd087249b1c610a1c0390278 = MAKE_CODE_OBJECT(module_filename_obj, 328, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ssl_wrap_socket, mod_consts.const_str_plain_ssl_wrap_socket, mod_consts.const_tuple_5b5965038a29bec37b8b8195f944ee5a_tuple, NULL, 13, 0, 0);
code_objects_f4a4c190a3b92ca2826a9da11b63ac19 = MAKE_CODE_OBJECT(module_filename_obj, 346, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ssl_wrap_socket, mod_consts.const_str_plain_ssl_wrap_socket, mod_consts.const_tuple_5b5965038a29bec37b8b8195f944ee5a_tuple, NULL, 13, 0, 0);
code_objects_614256444a934cc977dc535c0d68b080 = MAKE_CODE_OBJECT(module_filename_obj, 363, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ssl_wrap_socket, mod_consts.const_str_plain_ssl_wrap_socket, mod_consts.const_tuple_95b3aa22c797dcb00388ed8d26a9a6fe_tuple, NULL, 13, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function__10__is_key_file_encrypted(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function__11__ssl_wrap_socket_impl(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function__1__is_has_never_check_common_name_reliable(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function__2_assert_fingerprint(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function__3_resolve_cert_reqs(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function__4_resolve_ssl_version(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function__5_create_urllib3_context(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function__6_ssl_wrap_socket(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function__7_ssl_wrap_socket(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function__8_ssl_wrap_socket(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function__9_is_ipaddress(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_urllib3$util$ssl_$$$function__1__is_has_never_check_common_name_reliable(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_openssl_version = python_pars[0];
PyObject *var_is_openssl = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$ssl_$$$function__1__is_has_never_check_common_name_reliable;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$ssl_$$$function__1__is_has_never_check_common_name_reliable = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$ssl_$$$function__1__is_has_never_check_common_name_reliable)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$ssl_$$$function__1__is_has_never_check_common_name_reliable);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$ssl_$$$function__1__is_has_never_check_common_name_reliable == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$ssl_$$$function__1__is_has_never_check_common_name_reliable = MAKE_FUNCTION_FRAME(tstate, code_objects_3114174c2d708af005c49000c9484c82, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$ssl_$$$function__1__is_has_never_check_common_name_reliable->m_type_description == NULL);
frame_frame_urllib3$util$ssl_$$$function__1__is_has_never_check_common_name_reliable = cache_frame_frame_urllib3$util$ssl_$$$function__1__is_has_never_check_common_name_reliable;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$ssl_$$$function__1__is_has_never_check_common_name_reliable);
assert(Py_REFCNT(frame_frame_urllib3$util$ssl_$$$function__1__is_has_never_check_common_name_reliable) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_openssl_version);
tmp_expression_value_1 = par_openssl_version;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_startswith);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$ssl_$$$function__1__is_has_never_check_common_name_reliable->m_frame.f_lineno = 35;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_ff71990518f4792fe116de56f8335660_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_is_openssl;
    var_is_openssl = tmp_assign_source_1;
    Py_XDECREF(old);
}

}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssl_$$$function__1__is_has_never_check_common_name_reliable, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$ssl_$$$function__1__is_has_never_check_common_name_reliable->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssl_$$$function__1__is_has_never_check_common_name_reliable, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$ssl_$$$function__1__is_has_never_check_common_name_reliable,
    type_description_1,
    par_openssl_version,
    var_is_openssl
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$ssl_$$$function__1__is_has_never_check_common_name_reliable == cache_frame_frame_urllib3$util$ssl_$$$function__1__is_has_never_check_common_name_reliable) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$ssl_$$$function__1__is_has_never_check_common_name_reliable);
    cache_frame_frame_urllib3$util$ssl_$$$function__1__is_has_never_check_common_name_reliable = NULL;
}

assertFrameObject(frame_frame_urllib3$util$ssl_$$$function__1__is_has_never_check_common_name_reliable);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_is_openssl);
tmp_return_value = var_is_openssl;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_is_openssl);
CHECK_OBJECT(var_is_openssl);
Py_DECREF(var_is_openssl);
var_is_openssl = NULL;
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
CHECK_OBJECT(par_openssl_version);
Py_DECREF(par_openssl_version);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_openssl_version);
Py_DECREF(par_openssl_version);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$ssl_$$$function__2_assert_fingerprint(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cert = python_pars[0];
PyObject *par_fingerprint = python_pars[1];
PyObject *var_digest_length = NULL;
PyObject *var_hashfunc = NULL;
PyObject *var_fingerprint_bytes = NULL;
PyObject *var_cert_digest = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$ssl_$$$function__2_assert_fingerprint;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$ssl_$$$function__2_assert_fingerprint = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$ssl_$$$function__2_assert_fingerprint)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$ssl_$$$function__2_assert_fingerprint);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$ssl_$$$function__2_assert_fingerprint == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$ssl_$$$function__2_assert_fingerprint = MAKE_FUNCTION_FRAME(tstate, code_objects_72962c237e8a0a313faa0f408f267b63, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$ssl_$$$function__2_assert_fingerprint->m_type_description == NULL);
frame_frame_urllib3$util$ssl_$$$function__2_assert_fingerprint = cache_frame_frame_urllib3$util$ssl_$$$function__2_assert_fingerprint;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$ssl_$$$function__2_assert_fingerprint);
assert(Py_REFCNT(frame_frame_urllib3$util$ssl_$$$function__2_assert_fingerprint) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_cert);
tmp_cmp_expr_left_1 = par_cert;
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
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_urllib3$util$ssl_$SSLError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SSLError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 118;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$ssl_$$$function__2_assert_fingerprint->m_frame.f_lineno = 118;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_48e0cff034c3b2ba10493a16950f1eba_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 118;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_fingerprint);
tmp_expression_value_2 = par_fingerprint;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_replace);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$ssl_$$$function__2_assert_fingerprint->m_frame.f_lineno = 120;
tmp_expression_value_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_3, mod_consts.const_tuple_str_chr_58_str_empty_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_lower);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$ssl_$$$function__2_assert_fingerprint->m_frame.f_lineno = 120;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_fingerprint;
    assert(old != NULL);
    par_fingerprint = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_fingerprint);
tmp_len_arg_1 = par_fingerprint;
tmp_assign_source_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_digest_length;
    var_digest_length = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_digest_length);
tmp_cmp_expr_left_2 = var_digest_length;
tmp_cmp_expr_right_2 = module_var_accessor_urllib3$util$ssl_$HASHFUNC_MAP(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HASHFUNC_MAP);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "oooooo";
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
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_called_value_4 = module_var_accessor_urllib3$util$ssl_$SSLError(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SSLError);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 123;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_55792ed7e44b0f55f1b91618cdf0c0f9;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_fingerprint);
tmp_format_value_1 = par_fingerprint;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_1 == NULL));
frame_frame_urllib3$util$ssl_$$$function__2_assert_fingerprint->m_frame.f_lineno = 123;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 123;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
tmp_expression_value_3 = module_var_accessor_urllib3$util$ssl_$HASHFUNC_MAP(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HASHFUNC_MAP);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 124;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_digest_length);
tmp_args_element_value_2 = var_digest_length;
frame_frame_urllib3$util$ssl_$$$function__2_assert_fingerprint->m_frame.f_lineno = 124;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_hashfunc;
    var_hashfunc = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_hashfunc);
tmp_cmp_expr_left_3 = var_hashfunc;
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
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_3;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_called_value_6 = module_var_accessor_urllib3$util$ssl_$SSLError(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SSLError);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 126;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = mod_consts.const_str_digest_cd7d2a2180fa985a565002b5604c0597;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_digest_length);
tmp_format_value_2 = var_digest_length;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_args_element_value_3 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_args_element_value_3 == NULL));
frame_frame_urllib3$util$ssl_$$$function__2_assert_fingerprint->m_frame.f_lineno = 126;
tmp_raise_type_input_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 126;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_4;
tmp_called_value_7 = module_var_accessor_urllib3$util$ssl_$unhexlify(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unhexlify);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 131;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_fingerprint);
tmp_expression_value_4 = par_fingerprint;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_encode);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$ssl_$$$function__2_assert_fingerprint->m_frame.f_lineno = 131;
tmp_args_element_value_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_8);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$ssl_$$$function__2_assert_fingerprint->m_frame.f_lineno = 131;
tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_fingerprint_bytes;
    var_fingerprint_bytes = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(var_hashfunc);
tmp_called_value_9 = var_hashfunc;
CHECK_OBJECT(par_cert);
tmp_args_element_value_5 = par_cert;
frame_frame_urllib3$util$ssl_$$$function__2_assert_fingerprint->m_frame.f_lineno = 133;
tmp_called_instance_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_5);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$ssl_$$$function__2_assert_fingerprint->m_frame.f_lineno = 133;
tmp_assign_source_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_digest);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_cert_digest;
    var_cert_digest = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_instance_2 = module_var_accessor_urllib3$util$ssl_$hmac(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hmac);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 135;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_cert_digest);
tmp_args_element_value_6 = var_cert_digest;
CHECK_OBJECT(var_fingerprint_bytes);
tmp_args_element_value_7 = var_fingerprint_bytes;
frame_frame_urllib3$util$ssl_$$$function__2_assert_fingerprint->m_frame.f_lineno = 135;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_operand_value_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_compare_digest,
        call_args
    );
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_raise_type_input_4;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_8;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_3;
tmp_called_value_10 = module_var_accessor_urllib3$util$ssl_$SSLError(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SSLError);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 136;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_3 = mod_consts.const_str_digest_0a3e8370891184bebc36d7a68ab1d7ee;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_called_instance_3;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_fingerprint);
tmp_format_value_3 = par_fingerprint;
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "oooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_2b08e73a3fad05ff6ff2eb28665d3d27;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
CHECK_OBJECT(var_cert_digest);
tmp_called_instance_3 = var_cert_digest;
frame_frame_urllib3$util$ssl_$$$function__2_assert_fingerprint->m_frame.f_lineno = 137;
tmp_format_value_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_hex);
if (tmp_format_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "oooooo";
    goto tuple_build_exception_3;
}
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
CHECK_OBJECT(tmp_format_value_4);
Py_DECREF(tmp_format_value_4);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "oooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 3, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_chr_34;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 4, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_string_concat_values_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_args_element_value_8 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_args_element_value_8 == NULL));
frame_frame_urllib3$util$ssl_$$$function__2_assert_fingerprint->m_frame.f_lineno = 136;
tmp_raise_type_input_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_8);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_raise_type_input_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_4 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_4);
CHECK_OBJECT(tmp_raise_type_input_4);
Py_DECREF(tmp_raise_type_input_4);
if (tmp_raise_type_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 136;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssl_$$$function__2_assert_fingerprint, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$ssl_$$$function__2_assert_fingerprint->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssl_$$$function__2_assert_fingerprint, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$ssl_$$$function__2_assert_fingerprint,
    type_description_1,
    par_cert,
    par_fingerprint,
    var_digest_length,
    var_hashfunc,
    var_fingerprint_bytes,
    var_cert_digest
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$ssl_$$$function__2_assert_fingerprint == cache_frame_frame_urllib3$util$ssl_$$$function__2_assert_fingerprint) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$ssl_$$$function__2_assert_fingerprint);
    cache_frame_frame_urllib3$util$ssl_$$$function__2_assert_fingerprint = NULL;
}

assertFrameObject(frame_frame_urllib3$util$ssl_$$$function__2_assert_fingerprint);

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
CHECK_OBJECT(par_fingerprint);
CHECK_OBJECT(par_fingerprint);
Py_DECREF(par_fingerprint);
par_fingerprint = NULL;
CHECK_OBJECT(var_digest_length);
CHECK_OBJECT(var_digest_length);
Py_DECREF(var_digest_length);
var_digest_length = NULL;
CHECK_OBJECT(var_hashfunc);
CHECK_OBJECT(var_hashfunc);
Py_DECREF(var_hashfunc);
var_hashfunc = NULL;
CHECK_OBJECT(var_fingerprint_bytes);
CHECK_OBJECT(var_fingerprint_bytes);
Py_DECREF(var_fingerprint_bytes);
var_fingerprint_bytes = NULL;
CHECK_OBJECT(var_cert_digest);
CHECK_OBJECT(var_cert_digest);
Py_DECREF(var_cert_digest);
var_cert_digest = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_fingerprint);
par_fingerprint = NULL;
Py_XDECREF(var_digest_length);
var_digest_length = NULL;
Py_XDECREF(var_hashfunc);
var_hashfunc = NULL;
Py_XDECREF(var_fingerprint_bytes);
var_fingerprint_bytes = NULL;
Py_XDECREF(var_cert_digest);
var_cert_digest = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cert);
Py_DECREF(par_cert);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cert);
Py_DECREF(par_cert);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$ssl_$$$function__3_resolve_cert_reqs(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_candidate = python_pars[0];
PyObject *var_res = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$ssl_$$$function__3_resolve_cert_reqs;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$ssl_$$$function__3_resolve_cert_reqs = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$ssl_$$$function__3_resolve_cert_reqs)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$ssl_$$$function__3_resolve_cert_reqs);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$ssl_$$$function__3_resolve_cert_reqs == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$ssl_$$$function__3_resolve_cert_reqs = MAKE_FUNCTION_FRAME(tstate, code_objects_b0619bc408e282d19a02ed229b7fe4e4, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$ssl_$$$function__3_resolve_cert_reqs->m_type_description == NULL);
frame_frame_urllib3$util$ssl_$$$function__3_resolve_cert_reqs = cache_frame_frame_urllib3$util$ssl_$$$function__3_resolve_cert_reqs;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$ssl_$$$function__3_resolve_cert_reqs);
assert(Py_REFCNT(frame_frame_urllib3$util$ssl_$$$function__3_resolve_cert_reqs) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_candidate);
tmp_cmp_expr_left_1 = par_candidate;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = module_var_accessor_urllib3$util$ssl_$CERT_REQUIRED(tstate);
if (unlikely(tmp_return_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CERT_REQUIRED);
}

if (tmp_return_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 153;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_candidate);
tmp_isinstance_inst_1 = par_candidate;
tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
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
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
tmp_expression_value_1 = module_var_accessor_urllib3$util$ssl_$ssl(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ssl);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_candidate);
tmp_name_value_1 = par_candidate;
tmp_default_value_1 = Py_None;
tmp_assign_source_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_1, tmp_name_value_1, tmp_default_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_res;
    var_res = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_res);
tmp_cmp_expr_left_2 = var_res;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_name_value_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
tmp_expression_value_2 = module_var_accessor_urllib3$util$ssl_$ssl(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ssl);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 158;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_1 = mod_consts.const_str_plain_CERT_;
CHECK_OBJECT(par_candidate);
tmp_add_expr_right_1 = par_candidate;
tmp_name_value_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_name_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_2, tmp_name_value_2, NULL);
CHECK_OBJECT(tmp_name_value_2);
Py_DECREF(tmp_name_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_res;
    assert(old != NULL);
    var_res = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_3:;
CHECK_OBJECT(var_res);
tmp_return_value = var_res;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssl_$$$function__3_resolve_cert_reqs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$ssl_$$$function__3_resolve_cert_reqs->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssl_$$$function__3_resolve_cert_reqs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$ssl_$$$function__3_resolve_cert_reqs,
    type_description_1,
    par_candidate,
    var_res
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$ssl_$$$function__3_resolve_cert_reqs == cache_frame_frame_urllib3$util$ssl_$$$function__3_resolve_cert_reqs) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$ssl_$$$function__3_resolve_cert_reqs);
    cache_frame_frame_urllib3$util$ssl_$$$function__3_resolve_cert_reqs = NULL;
}

assertFrameObject(frame_frame_urllib3$util$ssl_$$$function__3_resolve_cert_reqs);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(par_candidate);
tmp_return_value = par_candidate;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_res);
var_res = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_res);
var_res = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_candidate);
Py_DECREF(par_candidate);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_candidate);
Py_DECREF(par_candidate);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$ssl_$$$function__4_resolve_ssl_version(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_candidate = python_pars[0];
PyObject *var_res = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$ssl_$$$function__4_resolve_ssl_version;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$ssl_$$$function__4_resolve_ssl_version = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$ssl_$$$function__4_resolve_ssl_version)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$ssl_$$$function__4_resolve_ssl_version);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$ssl_$$$function__4_resolve_ssl_version == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$ssl_$$$function__4_resolve_ssl_version = MAKE_FUNCTION_FRAME(tstate, code_objects_af0d55d28e71454c184fb83264e061fb, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$ssl_$$$function__4_resolve_ssl_version->m_type_description == NULL);
frame_frame_urllib3$util$ssl_$$$function__4_resolve_ssl_version = cache_frame_frame_urllib3$util$ssl_$$$function__4_resolve_ssl_version;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$ssl_$$$function__4_resolve_ssl_version);
assert(Py_REFCNT(frame_frame_urllib3$util$ssl_$$$function__4_resolve_ssl_version) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_candidate);
tmp_cmp_expr_left_1 = par_candidate;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = module_var_accessor_urllib3$util$ssl_$PROTOCOL_TLS(tstate);
if (unlikely(tmp_return_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PROTOCOL_TLS);
}

if (tmp_return_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 169;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_candidate);
tmp_isinstance_inst_1 = par_candidate;
tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
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
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
tmp_expression_value_1 = module_var_accessor_urllib3$util$ssl_$ssl(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ssl);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 172;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_candidate);
tmp_name_value_1 = par_candidate;
tmp_default_value_1 = Py_None;
tmp_assign_source_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_1, tmp_name_value_1, tmp_default_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_res;
    var_res = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_res);
tmp_cmp_expr_left_2 = var_res;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_name_value_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
tmp_expression_value_2 = module_var_accessor_urllib3$util$ssl_$ssl(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ssl);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 174;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_1 = mod_consts.const_str_plain_PROTOCOL_;
CHECK_OBJECT(par_candidate);
tmp_add_expr_right_1 = par_candidate;
tmp_name_value_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_name_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_2, tmp_name_value_2, NULL);
CHECK_OBJECT(tmp_name_value_2);
Py_DECREF(tmp_name_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_res;
    assert(old != NULL);
    var_res = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_3:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = IMPORT_HARD_TYPING();
assert(!(tmp_called_instance_1 == NULL));
tmp_args_element_value_1 = (PyObject *)&PyLong_Type;
CHECK_OBJECT(var_res);
tmp_args_element_value_2 = var_res;
frame_frame_urllib3$util$ssl_$$$function__4_resolve_ssl_version->m_frame.f_lineno = 175;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_cast,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssl_$$$function__4_resolve_ssl_version, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$ssl_$$$function__4_resolve_ssl_version->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssl_$$$function__4_resolve_ssl_version, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$ssl_$$$function__4_resolve_ssl_version,
    type_description_1,
    par_candidate,
    var_res
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$ssl_$$$function__4_resolve_ssl_version == cache_frame_frame_urllib3$util$ssl_$$$function__4_resolve_ssl_version) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$ssl_$$$function__4_resolve_ssl_version);
    cache_frame_frame_urllib3$util$ssl_$$$function__4_resolve_ssl_version = NULL;
}

assertFrameObject(frame_frame_urllib3$util$ssl_$$$function__4_resolve_ssl_version);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(par_candidate);
tmp_return_value = par_candidate;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_res);
var_res = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_res);
var_res = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_candidate);
Py_DECREF(par_candidate);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_candidate);
Py_DECREF(par_candidate);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$ssl_$$$function__5_create_urllib3_context(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_ssl_version = python_pars[0];
PyObject *par_cert_reqs = python_pars[1];
PyObject *par_options = python_pars[2];
PyObject *par_ciphers = python_pars[3];
PyObject *par_ssl_minimum_version = python_pars[4];
PyObject *par_ssl_maximum_version = python_pars[5];
PyObject *par_verify_flags = python_pars[6];
PyObject *var_context = NULL;
PyObject *var_sslkeylogfile = NULL;
PyObject *tmp_inplace_assign_1__value = NULL;
PyObject *tmp_inplace_assign_2__value = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$ssl_$$$function__5_create_urllib3_context;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$ssl_$$$function__5_create_urllib3_context = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$ssl_$$$function__5_create_urllib3_context)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$ssl_$$$function__5_create_urllib3_context);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$ssl_$$$function__5_create_urllib3_context == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$ssl_$$$function__5_create_urllib3_context = MAKE_FUNCTION_FRAME(tstate, code_objects_fb526b6dd557cfc108bc925bd0a5c279, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$ssl_$$$function__5_create_urllib3_context->m_type_description == NULL);
frame_frame_urllib3$util$ssl_$$$function__5_create_urllib3_context = cache_frame_frame_urllib3$util$ssl_$$$function__5_create_urllib3_context;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$ssl_$$$function__5_create_urllib3_context);
assert(Py_REFCNT(frame_frame_urllib3$util$ssl_$$$function__5_create_urllib3_context) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = module_var_accessor_urllib3$util$ssl_$SSLContext(tstate);
if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SSLContext);
}

if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 219;
type_description_1 = "ooooooooo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_b6067204ea739476e954694b5396f428;
frame_frame_urllib3$util$ssl_$$$function__5_create_urllib3_context->m_frame.f_lineno = 220;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 220;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_ssl_version);
tmp_cmp_expr_left_2 = par_ssl_version;
tmp_tuple_element_1 = Py_None;
tmp_cmp_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_cmp_expr_right_2, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_urllib3$util$ssl_$PROTOCOL_TLS(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PROTOCOL_TLS);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 223;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_cmp_expr_right_2, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_urllib3$util$ssl_$PROTOCOL_TLS_CLIENT(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PROTOCOL_TLS_CLIENT);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 223;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_cmp_expr_right_2, 2, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_cmp_expr_right_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "ooooooooo";
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
bool tmp_condition_result_3;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(par_ssl_minimum_version);
tmp_cmp_expr_left_3 = par_ssl_minimum_version;
tmp_cmp_expr_right_3 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_ssl_maximum_version);
tmp_cmp_expr_left_4 = par_ssl_maximum_version;
tmp_cmp_expr_right_4 = Py_None;
tmp_or_right_value_1 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
tmp_condition_result_3 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_3 = tmp_or_left_value_1;
or_end_1:;
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
tmp_make_exception_arg_2 = mod_consts.const_str_digest_2b4a1d498d1e4806b705ef89de58f5ba;
frame_frame_urllib3$util$ssl_$$$function__5_create_urllib3_context->m_frame.f_lineno = 227;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 227;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooo";
goto frame_exception_exit_1;
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_urllib3$util$ssl_$_SSL_VERSION_TO_TLS_VERSION(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__SSL_VERSION_TO_TLS_VERSION);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 235;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ssl_version);
tmp_args_element_value_1 = par_ssl_version;
tmp_expression_value_2 = module_var_accessor_urllib3$util$ssl_$TLSVersion(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TLSVersion);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 236;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_MINIMUM_SUPPORTED);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 236;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$ssl_$$$function__5_create_urllib3_context->m_frame.f_lineno = 235;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_ssl_minimum_version;
    assert(old != NULL);
    par_ssl_minimum_version = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_4;
tmp_expression_value_3 = module_var_accessor_urllib3$util$ssl_$_SSL_VERSION_TO_TLS_VERSION(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__SSL_VERSION_TO_TLS_VERSION);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 238;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ssl_version);
tmp_args_element_value_3 = par_ssl_version;
tmp_expression_value_4 = module_var_accessor_urllib3$util$ssl_$TLSVersion(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TLSVersion);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 239;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_MAXIMUM_SUPPORTED);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 239;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$ssl_$$$function__5_create_urllib3_context->m_frame.f_lineno = 238;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_ssl_maximum_version;
    assert(old != NULL);
    par_ssl_maximum_version = tmp_assign_source_2;
    Py_DECREF(old);
}

}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
tmp_expression_value_5 = module_var_accessor_urllib3$util$ssl_$warnings(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 245;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_warn);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_1 = module_var_accessor_urllib3$util$ssl_$FutureWarning(tstate);
if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FutureWarning);
}

if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 248;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_1_1 = mod_consts.const_int_pos_2;
frame_frame_urllib3$util$ssl_$$$function__5_create_urllib3_context->m_frame.f_lineno = 245;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, mod_consts.const_tuple_str_digest_768349b3783d727ad08f28a085fbbfcc_tuple, kw_values, mod_consts.const_tuple_str_plain_category_str_plain_stacklevel_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_end_3:;
branch_no_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_value_4 = module_var_accessor_urllib3$util$ssl_$SSLContext(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SSLContext);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 252;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = module_var_accessor_urllib3$util$ssl_$PROTOCOL_TLS_CLIENT(tstate);
if (unlikely(tmp_args_element_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PROTOCOL_TLS_CLIENT);
}

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 252;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$ssl_$$$function__5_create_urllib3_context->m_frame.f_lineno = 252;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_5);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_context;
    var_context = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(par_ssl_minimum_version);
tmp_cmp_expr_left_5 = par_ssl_minimum_version;
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(par_ssl_minimum_version);
tmp_ass_attr_value_1 = par_ssl_minimum_version;
CHECK_OBJECT(var_context);
tmp_ass_attr_target_1 = var_context;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_minimum_version, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_ass_attr_target_2;
tmp_expression_value_6 = module_var_accessor_urllib3$util$ssl_$TLSVersion(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TLSVersion);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 256;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_attr_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_TLSv1_2);
if (tmp_ass_attr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_context);
tmp_ass_attr_target_2 = var_context;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain_minimum_version, tmp_ass_attr_value_2);
CHECK_OBJECT(tmp_ass_attr_value_2);
Py_DECREF(tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
branch_end_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(par_ssl_maximum_version);
tmp_cmp_expr_left_6 = par_ssl_maximum_version;
tmp_cmp_expr_right_6 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_ass_attr_target_3;
CHECK_OBJECT(par_ssl_maximum_version);
tmp_ass_attr_value_3 = par_ssl_maximum_version;
CHECK_OBJECT(var_context);
tmp_ass_attr_target_3 = var_context;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain_maximum_version, tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_5:;
{
nuitka_bool tmp_condition_result_6;
int tmp_truth_name_1;
CHECK_OBJECT(par_ciphers);
tmp_truth_name_1 = CHECK_IF_TRUE(par_ciphers);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(var_context);
tmp_called_instance_1 = var_context;
CHECK_OBJECT(par_ciphers);
tmp_args_element_value_6 = par_ciphers;
frame_frame_urllib3$util$ssl_$$$function__5_create_urllib3_context->m_frame.f_lineno = 264;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_set_ciphers, tmp_args_element_value_6);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_6:;
{
PyObject *tmp_assign_source_4;
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_cert_reqs);
tmp_cmp_expr_left_7 = par_cert_reqs;
tmp_cmp_expr_right_7 = Py_None;
tmp_condition_result_7 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_7 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_expression_value_7 = module_var_accessor_urllib3$util$ssl_$ssl(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ssl);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 267;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_CERT_REQUIRED);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(par_cert_reqs);
tmp_assign_source_4 = par_cert_reqs;
Py_INCREF(tmp_assign_source_4);
condexpr_end_1:;
{
    PyObject *old = par_cert_reqs;
    assert(old != NULL);
    par_cert_reqs = tmp_assign_source_4;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(par_options);
tmp_cmp_expr_left_8 = par_options;
tmp_cmp_expr_right_8 = Py_None;
tmp_condition_result_8 = (tmp_cmp_expr_left_8 == tmp_cmp_expr_right_8) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
Py_XDECREF(par_options);
par_options = NULL;

{
PyObject *tmp_assign_source_5;
PyObject *tmp_ibitor_expr_left_1;
PyObject *tmp_ibitor_expr_right_1;
tmp_ibitor_expr_left_1 = const_int_0;
tmp_ibitor_expr_right_1 = module_var_accessor_urllib3$util$ssl_$OP_NO_SSLv2(tstate);
if (unlikely(tmp_ibitor_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OP_NO_SSLv2);
}

if (tmp_ibitor_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 272;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_ibitor_expr_left_1);
tmp_result = INPLACE_OPERATION_BITOR_LONG_OBJECT(&tmp_ibitor_expr_left_1, tmp_ibitor_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = tmp_ibitor_expr_left_1;
{
    PyObject *old = par_options;
    par_options = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_ibitor_expr_left_2;
PyObject *tmp_ibitor_expr_right_2;
CHECK_OBJECT(par_options);
tmp_ibitor_expr_left_2 = par_options;
tmp_ibitor_expr_right_2 = module_var_accessor_urllib3$util$ssl_$OP_NO_SSLv3(tstate);
if (unlikely(tmp_ibitor_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OP_NO_SSLv3);
}

if (tmp_ibitor_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 274;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_BITOR_OBJECT_OBJECT(&tmp_ibitor_expr_left_2, tmp_ibitor_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = tmp_ibitor_expr_left_2;
par_options = tmp_assign_source_6;

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_ibitor_expr_left_3;
PyObject *tmp_ibitor_expr_right_3;
CHECK_OBJECT(par_options);
tmp_ibitor_expr_left_3 = par_options;
tmp_ibitor_expr_right_3 = module_var_accessor_urllib3$util$ssl_$OP_NO_COMPRESSION(tstate);
if (unlikely(tmp_ibitor_expr_right_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OP_NO_COMPRESSION);
}

if (tmp_ibitor_expr_right_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 277;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_BITOR_OBJECT_OBJECT(&tmp_ibitor_expr_left_3, tmp_ibitor_expr_right_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_7 = tmp_ibitor_expr_left_3;
par_options = tmp_assign_source_7;

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_ibitor_expr_left_4;
PyObject *tmp_ibitor_expr_right_4;
CHECK_OBJECT(par_options);
tmp_ibitor_expr_left_4 = par_options;
tmp_ibitor_expr_right_4 = module_var_accessor_urllib3$util$ssl_$OP_NO_TICKET(tstate);
if (unlikely(tmp_ibitor_expr_right_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OP_NO_TICKET);
}

if (tmp_ibitor_expr_right_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 282;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_BITOR_OBJECT_OBJECT(&tmp_ibitor_expr_left_4, tmp_ibitor_expr_right_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_8 = tmp_ibitor_expr_left_4;
par_options = tmp_assign_source_8;

}
branch_no_7:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(var_context);
tmp_expression_value_8 = var_context;
tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_options);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_inplace_assign_1__value;
    tmp_inplace_assign_1__value = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_ibitor_expr_left_5;
PyObject *tmp_ibitor_expr_right_5;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_ibitor_expr_left_5 = tmp_inplace_assign_1__value;
CHECK_OBJECT(par_options);
tmp_ibitor_expr_right_5 = par_options;
tmp_result = INPLACE_OPERATION_BITOR_OBJECT_OBJECT(&tmp_ibitor_expr_left_5, tmp_ibitor_expr_right_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_10 = tmp_ibitor_expr_left_5;
tmp_inplace_assign_1__value = tmp_assign_source_10;

}
{
PyObject *tmp_ass_attr_value_4;
PyObject *tmp_ass_attr_target_4;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_ass_attr_value_4 = tmp_inplace_assign_1__value;
CHECK_OBJECT(var_context);
tmp_ass_attr_target_4 = var_context;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_4, mod_consts.const_str_plain_options, tmp_ass_attr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "ooooooooo";
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
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(par_verify_flags);
tmp_cmp_expr_left_9 = par_verify_flags;
tmp_cmp_expr_right_9 = Py_None;
tmp_condition_result_9 = (tmp_cmp_expr_left_9 == tmp_cmp_expr_right_9) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
Py_XDECREF(par_verify_flags);
par_verify_flags = NULL;

{
PyObject *tmp_assign_source_11;
PyObject *tmp_ibitor_expr_left_6;
PyObject *tmp_ibitor_expr_right_6;
tmp_ibitor_expr_left_6 = const_int_0;
tmp_ibitor_expr_right_6 = module_var_accessor_urllib3$util$ssl_$VERIFY_X509_PARTIAL_CHAIN(tstate);
if (unlikely(tmp_ibitor_expr_right_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VERIFY_X509_PARTIAL_CHAIN);
}

if (tmp_ibitor_expr_right_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 291;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_ibitor_expr_left_6);
tmp_result = INPLACE_OPERATION_BITOR_LONG_OBJECT(&tmp_ibitor_expr_left_6, tmp_ibitor_expr_right_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_11 = tmp_ibitor_expr_left_6;
{
    PyObject *old = par_verify_flags;
    par_verify_flags = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_ibitor_expr_left_7;
PyObject *tmp_ibitor_expr_right_7;
CHECK_OBJECT(par_verify_flags);
tmp_ibitor_expr_left_7 = par_verify_flags;
tmp_ibitor_expr_right_7 = module_var_accessor_urllib3$util$ssl_$VERIFY_X509_STRICT(tstate);
if (unlikely(tmp_ibitor_expr_right_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VERIFY_X509_STRICT);
}

if (tmp_ibitor_expr_right_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 292;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_BITOR_OBJECT_OBJECT(&tmp_ibitor_expr_left_7, tmp_ibitor_expr_right_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_12 = tmp_ibitor_expr_left_7;
par_verify_flags = tmp_assign_source_12;

}
branch_no_8:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(var_context);
tmp_expression_value_9 = var_context;
tmp_assign_source_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_verify_flags);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_inplace_assign_2__value;
    tmp_inplace_assign_2__value = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_ibitor_expr_left_8;
PyObject *tmp_ibitor_expr_right_8;
CHECK_OBJECT(tmp_inplace_assign_2__value);
tmp_ibitor_expr_left_8 = tmp_inplace_assign_2__value;
CHECK_OBJECT(par_verify_flags);
tmp_ibitor_expr_right_8 = par_verify_flags;
tmp_result = INPLACE_OPERATION_BITOR_OBJECT_OBJECT(&tmp_ibitor_expr_left_8, tmp_ibitor_expr_right_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
tmp_assign_source_14 = tmp_ibitor_expr_left_8;
tmp_inplace_assign_2__value = tmp_assign_source_14;

}
{
PyObject *tmp_ass_attr_value_5;
PyObject *tmp_ass_attr_target_5;
CHECK_OBJECT(tmp_inplace_assign_2__value);
tmp_ass_attr_value_5 = tmp_inplace_assign_2__value;
CHECK_OBJECT(var_context);
tmp_ass_attr_target_5 = var_context;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_5, mod_consts.const_str_plain_verify_flags, tmp_ass_attr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
}
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_inplace_assign_2__value);
CHECK_OBJECT(tmp_inplace_assign_2__value);
Py_DECREF(tmp_inplace_assign_2__value);
tmp_inplace_assign_2__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_inplace_assign_2__value);
CHECK_OBJECT(tmp_inplace_assign_2__value);
Py_DECREF(tmp_inplace_assign_2__value);
tmp_inplace_assign_2__value = NULL;
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
PyObject *tmp_expression_value_10;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(var_context);
tmp_expression_value_10 = var_context;
tmp_name_value_1 = mod_consts.const_str_plain_post_handshake_auth;
tmp_default_value_1 = Py_None;
tmp_cmp_expr_left_10 = BUILTIN_GETATTR(tstate, tmp_expression_value_10, tmp_name_value_1, tmp_default_value_1);
if (tmp_cmp_expr_left_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_10 = Py_None;
tmp_condition_result_10 = (tmp_cmp_expr_left_10 != tmp_cmp_expr_right_10) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_10);
Py_DECREF(tmp_cmp_expr_left_10);
if (tmp_condition_result_10 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_ass_attr_value_6;
PyObject *tmp_ass_attr_target_6;
tmp_ass_attr_value_6 = Py_True;
CHECK_OBJECT(var_context);
tmp_ass_attr_target_6 = var_context;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_6, mod_consts.const_str_plain_post_handshake_auth, tmp_ass_attr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_9:;
{
nuitka_bool tmp_condition_result_11;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
PyObject *tmp_expression_value_11;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_cert_reqs);
tmp_cmp_expr_left_11 = par_cert_reqs;
tmp_expression_value_11 = module_var_accessor_urllib3$util$ssl_$ssl(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ssl);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 308;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_CERT_REQUIRED);
if (tmp_cmp_expr_right_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
CHECK_OBJECT(tmp_cmp_expr_right_11);
Py_DECREF(tmp_cmp_expr_right_11);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
tmp_operand_value_1 = module_var_accessor_urllib3$util$ssl_$IS_PYOPENSSL(tstate);
if (unlikely(tmp_operand_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IS_PYOPENSSL);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 308;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_11 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_11 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_ass_attr_value_7;
PyObject *tmp_ass_attr_target_7;
CHECK_OBJECT(par_cert_reqs);
tmp_ass_attr_value_7 = par_cert_reqs;
CHECK_OBJECT(var_context);
tmp_ass_attr_target_7 = var_context;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_7, mod_consts.const_str_plain_verify_mode, tmp_ass_attr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_8;
PyObject *tmp_ass_attr_target_8;
tmp_ass_attr_value_8 = Py_True;
CHECK_OBJECT(var_context);
tmp_ass_attr_target_8 = var_context;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_8, mod_consts.const_str_plain_check_hostname, tmp_ass_attr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_ass_attr_value_9;
PyObject *tmp_ass_attr_target_9;
tmp_ass_attr_value_9 = Py_False;
CHECK_OBJECT(var_context);
tmp_ass_attr_target_9 = var_context;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_9, mod_consts.const_str_plain_check_hostname, tmp_ass_attr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_10;
PyObject *tmp_ass_attr_target_10;
CHECK_OBJECT(par_cert_reqs);
tmp_ass_attr_value_10 = par_cert_reqs;
CHECK_OBJECT(var_context);
tmp_ass_attr_target_10 = var_context;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_10, mod_consts.const_str_plain_verify_mode, tmp_ass_attr_value_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
branch_end_10:;
{
PyObject *tmp_ass_attr_value_11;
PyObject *tmp_ass_attr_target_11;
tmp_ass_attr_value_11 = Py_False;
CHECK_OBJECT(var_context);
tmp_ass_attr_target_11 = var_context;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_11, mod_consts.const_str_plain_hostname_checks_common_name, tmp_ass_attr_value_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
PyObject *tmp_expression_value_12;
tmp_cmp_expr_left_12 = mod_consts.const_str_plain_SSLKEYLOGFILE;
tmp_expression_value_12 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_12 == NULL));
tmp_cmp_expr_right_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_environ);
if (tmp_cmp_expr_right_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_12, tmp_cmp_expr_left_12);
CHECK_OBJECT(tmp_cmp_expr_right_12);
Py_DECREF(tmp_cmp_expr_right_12);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_12 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
tmp_expression_value_13 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_13 == NULL));
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_expandvars);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_15 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_15 == NULL));
tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_environ);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 318;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 318;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$ssl_$$$function__5_create_urllib3_context->m_frame.f_lineno = 318;
tmp_args_element_value_7 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_plain_SSLKEYLOGFILE_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 318;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$ssl_$$$function__5_create_urllib3_context->m_frame.f_lineno = 318;
tmp_assign_source_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_sslkeylogfile;
    var_sslkeylogfile = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
goto branch_end_11;
branch_no_11:;
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = Py_None;
{
    PyObject *old = var_sslkeylogfile;
    var_sslkeylogfile = tmp_assign_source_16;
    Py_INCREF(var_sslkeylogfile);
    Py_XDECREF(old);
}

}
branch_end_11:;
{
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_2;
CHECK_OBJECT(var_sslkeylogfile);
tmp_truth_name_2 = CHECK_IF_TRUE(var_sslkeylogfile);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_13 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_ass_attr_value_12;
PyObject *tmp_ass_attr_target_12;
CHECK_OBJECT(var_sslkeylogfile);
tmp_ass_attr_value_12 = var_sslkeylogfile;
CHECK_OBJECT(var_context);
tmp_ass_attr_target_12 = var_context;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_12, mod_consts.const_str_plain_keylog_filename, tmp_ass_attr_value_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_12:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssl_$$$function__5_create_urllib3_context, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$ssl_$$$function__5_create_urllib3_context->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssl_$$$function__5_create_urllib3_context, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$ssl_$$$function__5_create_urllib3_context,
    type_description_1,
    par_ssl_version,
    par_cert_reqs,
    par_options,
    par_ciphers,
    par_ssl_minimum_version,
    par_ssl_maximum_version,
    par_verify_flags,
    var_context,
    var_sslkeylogfile
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$ssl_$$$function__5_create_urllib3_context == cache_frame_frame_urllib3$util$ssl_$$$function__5_create_urllib3_context) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$ssl_$$$function__5_create_urllib3_context);
    cache_frame_frame_urllib3$util$ssl_$$$function__5_create_urllib3_context = NULL;
}

assertFrameObject(frame_frame_urllib3$util$ssl_$$$function__5_create_urllib3_context);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_context);
tmp_return_value = var_context;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_cert_reqs);
CHECK_OBJECT(par_cert_reqs);
Py_DECREF(par_cert_reqs);
par_cert_reqs = NULL;
CHECK_OBJECT(par_options);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
par_options = NULL;
CHECK_OBJECT(par_ssl_minimum_version);
CHECK_OBJECT(par_ssl_minimum_version);
Py_DECREF(par_ssl_minimum_version);
par_ssl_minimum_version = NULL;
CHECK_OBJECT(par_ssl_maximum_version);
CHECK_OBJECT(par_ssl_maximum_version);
Py_DECREF(par_ssl_maximum_version);
par_ssl_maximum_version = NULL;
CHECK_OBJECT(par_verify_flags);
CHECK_OBJECT(par_verify_flags);
Py_DECREF(par_verify_flags);
par_verify_flags = NULL;
CHECK_OBJECT(var_context);
CHECK_OBJECT(var_context);
Py_DECREF(var_context);
var_context = NULL;
CHECK_OBJECT(var_sslkeylogfile);
CHECK_OBJECT(var_sslkeylogfile);
Py_DECREF(var_sslkeylogfile);
var_sslkeylogfile = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_cert_reqs);
par_cert_reqs = NULL;
Py_XDECREF(par_options);
par_options = NULL;
Py_XDECREF(par_ssl_minimum_version);
par_ssl_minimum_version = NULL;
Py_XDECREF(par_ssl_maximum_version);
par_ssl_maximum_version = NULL;
Py_XDECREF(par_verify_flags);
par_verify_flags = NULL;
Py_XDECREF(var_context);
var_context = NULL;
Py_XDECREF(var_sslkeylogfile);
var_sslkeylogfile = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_ssl_version);
Py_DECREF(par_ssl_version);
CHECK_OBJECT(par_ciphers);
Py_DECREF(par_ciphers);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_ssl_version);
Py_DECREF(par_ssl_version);
CHECK_OBJECT(par_ciphers);
Py_DECREF(par_ciphers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$ssl_$$$function__8_ssl_wrap_socket(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_sock = python_pars[0];
PyObject *par_keyfile = python_pars[1];
PyObject *par_certfile = python_pars[2];
PyObject *par_cert_reqs = python_pars[3];
PyObject *par_ca_certs = python_pars[4];
PyObject *par_server_hostname = python_pars[5];
PyObject *par_ssl_version = python_pars[6];
PyObject *par_ciphers = python_pars[7];
PyObject *par_ssl_context = python_pars[8];
PyObject *par_ca_cert_dir = python_pars[9];
PyObject *par_key_password = python_pars[10];
PyObject *par_ca_cert_data = python_pars[11];
PyObject *par_tls_in_tls = python_pars[12];
PyObject *var_context = NULL;
PyObject *var_e = NULL;
PyObject *var_ssl_sock = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$ssl_$$$function__8_ssl_wrap_socket;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$ssl_$$$function__8_ssl_wrap_socket = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
CHECK_OBJECT(par_ssl_context);
tmp_assign_source_1 = par_ssl_context;
{
    PyObject *old = var_context;
    var_context = tmp_assign_source_1;
    Py_INCREF(var_context);
    Py_XDECREF(old);
}

}
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$ssl_$$$function__8_ssl_wrap_socket)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$ssl_$$$function__8_ssl_wrap_socket);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$ssl_$$$function__8_ssl_wrap_socket == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$ssl_$$$function__8_ssl_wrap_socket = MAKE_FUNCTION_FRAME(tstate, code_objects_614256444a934cc977dc535c0d68b080, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$ssl_$$$function__8_ssl_wrap_socket->m_type_description == NULL);
frame_frame_urllib3$util$ssl_$$$function__8_ssl_wrap_socket = cache_frame_frame_urllib3$util$ssl_$$$function__8_ssl_wrap_socket;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$ssl_$$$function__8_ssl_wrap_socket);
assert(Py_REFCNT(frame_frame_urllib3$util$ssl_$$$function__8_ssl_wrap_socket) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_context);
tmp_cmp_expr_left_1 = var_context;
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
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_1 = module_var_accessor_urllib3$util$ssl_$create_urllib3_context(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_create_urllib3_context);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 407;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ssl_version);
tmp_kw_call_arg_value_0_1 = par_ssl_version;
CHECK_OBJECT(par_cert_reqs);
tmp_kw_call_arg_value_1_1 = par_cert_reqs;
CHECK_OBJECT(par_ciphers);
tmp_kw_call_dict_value_0_1 = par_ciphers;
frame_frame_urllib3$util$ssl_$$$function__8_ssl_wrap_socket->m_frame.f_lineno = 407;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_ciphers_tuple);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_context;
    assert(old != NULL);
    var_context = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
int tmp_truth_name_1;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
int tmp_truth_name_2;
int tmp_truth_name_3;
CHECK_OBJECT(par_ca_certs);
tmp_truth_name_1 = CHECK_IF_TRUE(par_ca_certs);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_ca_cert_dir);
tmp_truth_name_2 = CHECK_IF_TRUE(par_ca_cert_dir);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(par_ca_cert_data);
tmp_truth_name_3 = CHECK_IF_TRUE(par_ca_cert_data);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_or_right_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_or_right_value_1 = tmp_or_left_value_2;
or_end_2:;
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
// Tried code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(var_context);
tmp_called_instance_1 = var_context;
CHECK_OBJECT(par_ca_certs);
tmp_args_element_value_1 = par_ca_certs;
CHECK_OBJECT(par_ca_cert_dir);
tmp_args_element_value_2 = par_ca_cert_dir;
CHECK_OBJECT(par_ca_cert_data);
tmp_args_element_value_3 = par_ca_cert_data;
frame_frame_urllib3$util$ssl_$$$function__8_ssl_wrap_socket->m_frame.f_lineno = 411;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_load_verify_locations,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 411;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssl_$$$function__8_ssl_wrap_socket, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssl_$$$function__8_ssl_wrap_socket, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_2 = PyExc_OSError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
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
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_3); 
{
    PyObject *old = var_e;
    var_e = tmp_assign_source_3;
    Py_INCREF(var_e);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_raise_cause_1;
tmp_called_value_2 = module_var_accessor_urllib3$util$ssl_$SSLError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SSLError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 413;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_e);
tmp_args_element_value_4 = var_e;
frame_frame_urllib3$util$ssl_$$$function__8_ssl_wrap_socket->m_frame.f_lineno = 413;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_4);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 413;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_4;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 413;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_e);
tmp_raise_cause_1 = var_e;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 413;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oooooooooooooooo";
goto try_except_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 410;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$util$ssl_$$$function__8_ssl_wrap_socket->m_frame)) {
        frame_frame_urllib3$util$ssl_$$$function__8_ssl_wrap_socket->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooooooo";
goto try_except_handler_3;
branch_end_3:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
// End of try:
try_end_1:;
goto branch_end_2;
branch_no_2:;
{
bool tmp_condition_result_4;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_ssl_context);
tmp_cmp_expr_left_3 = par_ssl_context;
tmp_cmp_expr_right_3 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_context);
tmp_expression_value_1 = var_context;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts.const_str_plain_load_default_certs);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 415;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res != 0) ? true : false;
tmp_condition_result_4 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_4 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(var_context);
tmp_called_instance_2 = var_context;
frame_frame_urllib3$util$ssl_$$$function__8_ssl_wrap_socket->m_frame.f_lineno = 417;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_load_default_certs);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
branch_end_2:;
{
nuitka_bool tmp_condition_result_5;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
int tmp_truth_name_4;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_5;
int tmp_truth_name_5;
CHECK_OBJECT(par_keyfile);
tmp_truth_name_4 = CHECK_IF_TRUE(par_keyfile);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 422;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 422;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_key_password);
tmp_cmp_expr_left_4 = par_key_password;
tmp_cmp_expr_right_4 = Py_None;
tmp_and_left_value_3 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
tmp_called_value_3 = module_var_accessor_urllib3$util$ssl_$_is_key_file_encrypted(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__is_key_file_encrypted);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 422;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_keyfile);
tmp_args_element_value_5 = par_keyfile;
frame_frame_urllib3$util$ssl_$$$function__8_ssl_wrap_socket->m_frame.f_lineno = 422;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_5);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 422;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_3);

exception_lineno = 422;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_3 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
tmp_and_right_value_2 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_and_right_value_2 = tmp_and_left_value_3;
and_end_3:;
tmp_condition_result_5 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_5 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_4;
tmp_called_value_4 = module_var_accessor_urllib3$util$ssl_$SSLError(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SSLError);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 423;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$ssl_$$$function__8_ssl_wrap_socket->m_frame.f_lineno = 423;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_digest_9122c237564b58c6d395bd61e093c6a7_tuple);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 423;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_5:;
{
nuitka_bool tmp_condition_result_6;
int tmp_truth_name_6;
CHECK_OBJECT(par_certfile);
tmp_truth_name_6 = CHECK_IF_TRUE(par_certfile);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 425;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(par_key_password);
tmp_cmp_expr_left_5 = par_key_password;
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_7 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
CHECK_OBJECT(var_context);
tmp_called_instance_3 = var_context;
CHECK_OBJECT(par_certfile);
tmp_args_element_value_6 = par_certfile;
CHECK_OBJECT(par_keyfile);
tmp_args_element_value_7 = par_keyfile;
frame_frame_urllib3$util$ssl_$$$function__8_ssl_wrap_socket->m_frame.f_lineno = 427;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_call_result_4 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain_load_cert_chain,
        call_args
    );
}

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 427;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
CHECK_OBJECT(var_context);
tmp_called_instance_4 = var_context;
CHECK_OBJECT(par_certfile);
tmp_args_element_value_8 = par_certfile;
CHECK_OBJECT(par_keyfile);
tmp_args_element_value_9 = par_keyfile;
CHECK_OBJECT(par_key_password);
tmp_args_element_value_10 = par_key_password;
frame_frame_urllib3$util$ssl_$$$function__8_ssl_wrap_socket->m_frame.f_lineno = 429;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_call_result_5 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_4,
        mod_consts.const_str_plain_load_cert_chain,
        call_args
    );
}

if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_end_7:;
branch_no_6:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_11;
CHECK_OBJECT(var_context);
tmp_expression_value_2 = var_context;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_set_alpn_protocols);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_11 = module_var_accessor_urllib3$util$ssl_$ALPN_PROTOCOLS(tstate);
if (unlikely(tmp_args_element_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ALPN_PROTOCOLS);
}

if (tmp_args_element_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 431;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$ssl_$$$function__8_ssl_wrap_socket->m_frame.f_lineno = 431;
tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
tmp_called_value_6 = module_var_accessor_urllib3$util$ssl_$_ssl_wrap_socket_impl(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ssl_wrap_socket_impl);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 433;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_sock);
tmp_args_element_value_12 = par_sock;
CHECK_OBJECT(var_context);
tmp_args_element_value_13 = var_context;
CHECK_OBJECT(par_tls_in_tls);
tmp_args_element_value_14 = par_tls_in_tls;
CHECK_OBJECT(par_server_hostname);
tmp_args_element_value_15 = par_server_hostname;
frame_frame_urllib3$util$ssl_$$$function__8_ssl_wrap_socket->m_frame.f_lineno = 433;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_6, call_args);
}

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 433;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_ssl_sock;
    var_ssl_sock = tmp_assign_source_4;
    Py_XDECREF(old);
}

}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssl_$$$function__8_ssl_wrap_socket, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$ssl_$$$function__8_ssl_wrap_socket->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssl_$$$function__8_ssl_wrap_socket, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$ssl_$$$function__8_ssl_wrap_socket,
    type_description_1,
    par_sock,
    par_keyfile,
    par_certfile,
    par_cert_reqs,
    par_ca_certs,
    par_server_hostname,
    par_ssl_version,
    par_ciphers,
    par_ssl_context,
    par_ca_cert_dir,
    par_key_password,
    par_ca_cert_data,
    par_tls_in_tls,
    var_context,
    var_e,
    var_ssl_sock
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$ssl_$$$function__8_ssl_wrap_socket == cache_frame_frame_urllib3$util$ssl_$$$function__8_ssl_wrap_socket) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$ssl_$$$function__8_ssl_wrap_socket);
    cache_frame_frame_urllib3$util$ssl_$$$function__8_ssl_wrap_socket = NULL;
}

assertFrameObject(frame_frame_urllib3$util$ssl_$$$function__8_ssl_wrap_socket);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_ssl_sock);
tmp_return_value = var_ssl_sock;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_context);
CHECK_OBJECT(var_context);
Py_DECREF(var_context);
var_context = NULL;
CHECK_OBJECT(var_ssl_sock);
CHECK_OBJECT(var_ssl_sock);
Py_DECREF(var_ssl_sock);
var_ssl_sock = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_context);
var_context = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_sock);
Py_DECREF(par_sock);
CHECK_OBJECT(par_keyfile);
Py_DECREF(par_keyfile);
CHECK_OBJECT(par_certfile);
Py_DECREF(par_certfile);
CHECK_OBJECT(par_cert_reqs);
Py_DECREF(par_cert_reqs);
CHECK_OBJECT(par_ca_certs);
Py_DECREF(par_ca_certs);
CHECK_OBJECT(par_server_hostname);
Py_DECREF(par_server_hostname);
CHECK_OBJECT(par_ssl_version);
Py_DECREF(par_ssl_version);
CHECK_OBJECT(par_ciphers);
Py_DECREF(par_ciphers);
CHECK_OBJECT(par_ssl_context);
Py_DECREF(par_ssl_context);
CHECK_OBJECT(par_ca_cert_dir);
Py_DECREF(par_ca_cert_dir);
CHECK_OBJECT(par_key_password);
Py_DECREF(par_key_password);
CHECK_OBJECT(par_ca_cert_data);
Py_DECREF(par_ca_cert_data);
CHECK_OBJECT(par_tls_in_tls);
Py_DECREF(par_tls_in_tls);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_sock);
Py_DECREF(par_sock);
CHECK_OBJECT(par_keyfile);
Py_DECREF(par_keyfile);
CHECK_OBJECT(par_certfile);
Py_DECREF(par_certfile);
CHECK_OBJECT(par_cert_reqs);
Py_DECREF(par_cert_reqs);
CHECK_OBJECT(par_ca_certs);
Py_DECREF(par_ca_certs);
CHECK_OBJECT(par_server_hostname);
Py_DECREF(par_server_hostname);
CHECK_OBJECT(par_ssl_version);
Py_DECREF(par_ssl_version);
CHECK_OBJECT(par_ciphers);
Py_DECREF(par_ciphers);
CHECK_OBJECT(par_ssl_context);
Py_DECREF(par_ssl_context);
CHECK_OBJECT(par_ca_cert_dir);
Py_DECREF(par_ca_cert_dir);
CHECK_OBJECT(par_key_password);
Py_DECREF(par_key_password);
CHECK_OBJECT(par_ca_cert_data);
Py_DECREF(par_ca_cert_data);
CHECK_OBJECT(par_tls_in_tls);
Py_DECREF(par_tls_in_tls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$ssl_$$$function__9_is_ipaddress(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_hostname = python_pars[0];
struct Nuitka_FrameObject *frame_frame_urllib3$util$ssl_$$$function__9_is_ipaddress;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$ssl_$$$function__9_is_ipaddress = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$ssl_$$$function__9_is_ipaddress)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$ssl_$$$function__9_is_ipaddress);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$ssl_$$$function__9_is_ipaddress == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$ssl_$$$function__9_is_ipaddress = MAKE_FUNCTION_FRAME(tstate, code_objects_fde51f18020711f69b3784f44c9a5336, module_urllib3$util$ssl_, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$ssl_$$$function__9_is_ipaddress->m_type_description == NULL);
frame_frame_urllib3$util$ssl_$$$function__9_is_ipaddress = cache_frame_frame_urllib3$util$ssl_$$$function__9_is_ipaddress;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$ssl_$$$function__9_is_ipaddress);
assert(Py_REFCNT(frame_frame_urllib3$util$ssl_$$$function__9_is_ipaddress) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_hostname);
tmp_isinstance_inst_1 = par_hostname;
tmp_isinstance_cls_1 = (PyObject *)&PyBytes_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_1 = "o";
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_hostname);
tmp_expression_value_1 = par_hostname;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_decode);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 446;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$ssl_$$$function__9_is_ipaddress->m_frame.f_lineno = 446;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_ascii_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 446;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_hostname;
    assert(old != NULL);
    par_hostname = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_value_value_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_urllib3$util$ssl_$_IPV4_RE(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__IPV4_RE);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 447;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_hostname);
tmp_args_element_value_1 = par_hostname;
frame_frame_urllib3$util$ssl_$$$function__9_is_ipaddress->m_frame.f_lineno = 447;
tmp_or_left_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_match, tmp_args_element_value_1);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 447;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 447;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(tmp_or_left_value_1);
Py_DECREF(tmp_or_left_value_1);
tmp_called_instance_2 = module_var_accessor_urllib3$util$ssl_$_BRACELESS_IPV6_ADDRZ_RE(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__BRACELESS_IPV6_ADDRZ_RE);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 447;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_hostname);
tmp_args_element_value_2 = par_hostname;
frame_frame_urllib3$util$ssl_$$$function__9_is_ipaddress->m_frame.f_lineno = 447;
tmp_or_right_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_match, tmp_args_element_value_2);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 447;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_value_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_value_value_1 = tmp_or_left_value_1;
or_end_1:;
tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 447;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssl_$$$function__9_is_ipaddress, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$ssl_$$$function__9_is_ipaddress->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssl_$$$function__9_is_ipaddress, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$ssl_$$$function__9_is_ipaddress,
    type_description_1,
    par_hostname
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$ssl_$$$function__9_is_ipaddress == cache_frame_frame_urllib3$util$ssl_$$$function__9_is_ipaddress) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$ssl_$$$function__9_is_ipaddress);
    cache_frame_frame_urllib3$util$ssl_$$$function__9_is_ipaddress = NULL;
}

assertFrameObject(frame_frame_urllib3$util$ssl_$$$function__9_is_ipaddress);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_hostname);
CHECK_OBJECT(par_hostname);
Py_DECREF(par_hostname);
par_hostname = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_hostname);
par_hostname = NULL;
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


static PyObject *impl_urllib3$util$ssl_$$$function__10__is_key_file_encrypted(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_key_file = python_pars[0];
PyObject *var_f = NULL;
PyObject *var_line = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$ssl_$$$function__10__is_key_file_encrypted;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$ssl_$$$function__10__is_key_file_encrypted = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$ssl_$$$function__10__is_key_file_encrypted)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$ssl_$$$function__10__is_key_file_encrypted);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$ssl_$$$function__10__is_key_file_encrypted == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$ssl_$$$function__10__is_key_file_encrypted = MAKE_FUNCTION_FRAME(tstate, code_objects_6d0ef9e3777cc0395417fa6e471f5002, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$ssl_$$$function__10__is_key_file_encrypted->m_type_description == NULL);
frame_frame_urllib3$util$ssl_$$$function__10__is_key_file_encrypted = cache_frame_frame_urllib3$util$ssl_$$$function__10__is_key_file_encrypted;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$ssl_$$$function__10__is_key_file_encrypted);
assert(Py_REFCNT(frame_frame_urllib3$util$ssl_$$$function__10__is_key_file_encrypted) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_open_filename_1;
CHECK_OBJECT(par_key_file);
tmp_open_filename_1 = par_key_file;
tmp_assign_source_1 = BUILTIN_OPEN(tstate, tmp_open_filename_1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "ooo";
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


exception_lineno = 452;
type_description_1 = "ooo";
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


exception_lineno = 452;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
frame_frame_urllib3$util$ssl_$$$function__10__is_key_file_encrypted->m_frame.f_lineno = 452;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "ooo";
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
    PyObject *old = var_f;
    var_f = tmp_assign_source_5;
    Py_INCREF(var_f);
    Py_XDECREF(old);
}

}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_f);
tmp_iter_arg_1 = var_f;
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 453;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_7 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooo";
exception_lineno = 453;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_8 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_line;
    var_line = tmp_assign_source_8;
    Py_INCREF(var_line);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = mod_consts.const_str_plain_ENCRYPTED;
CHECK_OBJECT(var_line);
tmp_cmp_expr_right_1 = var_line;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
tmp_condition_result_1 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_5;
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 453;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
CHECK_OBJECT(tmp_for_loop_1__iter_value);
Py_DECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_5:;
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

goto try_except_handler_4;
// End of try:
try_end_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssl_$$$function__10__is_key_file_encrypted, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssl_$$$function__10__is_key_file_encrypted, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_2);
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
nuitka_bool tmp_assign_source_9;
tmp_assign_source_9 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_9;
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
frame_frame_urllib3$util$ssl_$$$function__10__is_key_file_encrypted->m_frame.f_lineno = 452;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "ooo";
    goto try_except_handler_6;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "ooo";
    goto try_except_handler_6;
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
    exception_lineno = 452;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$util$ssl_$$$function__10__is_key_file_encrypted->m_frame)) {
        frame_frame_urllib3$util$ssl_$$$function__10__is_key_file_encrypted->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_6;
branch_no_3:;
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 452;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$util$ssl_$$$function__10__is_key_file_encrypted->m_frame)) {
        frame_frame_urllib3$util$ssl_$$$function__10__is_key_file_encrypted->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_6;
branch_end_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_3;
// End of try:
try_end_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
goto try_end_4;
// Return handler code:
try_return_handler_3:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_3 = tmp_with_1__exit;
frame_frame_urllib3$util$ssl_$$$function__10__is_key_file_encrypted->m_frame.f_lineno = 452;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_3, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
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
frame_frame_urllib3$util$ssl_$$$function__10__is_key_file_encrypted->m_frame.f_lineno = 452;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_4);

exception_lineno = 452;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_2;
// End of try:
try_end_4:;
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
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
frame_frame_urllib3$util$ssl_$$$function__10__is_key_file_encrypted->m_frame.f_lineno = 452;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_5:;
goto try_end_5;
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
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssl_$$$function__10__is_key_file_encrypted, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$ssl_$$$function__10__is_key_file_encrypted->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssl_$$$function__10__is_key_file_encrypted, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$ssl_$$$function__10__is_key_file_encrypted,
    type_description_1,
    par_key_file,
    var_f,
    var_line
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$ssl_$$$function__10__is_key_file_encrypted == cache_frame_frame_urllib3$util$ssl_$$$function__10__is_key_file_encrypted) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$ssl_$$$function__10__is_key_file_encrypted);
    cache_frame_frame_urllib3$util$ssl_$$$function__10__is_key_file_encrypted = NULL;
}

assertFrameObject(frame_frame_urllib3$util$ssl_$$$function__10__is_key_file_encrypted);

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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_f);
CHECK_OBJECT(var_f);
Py_DECREF(var_f);
var_f = NULL;
Py_XDECREF(var_line);
var_line = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_f);
var_f = NULL;
Py_XDECREF(var_line);
var_line = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_key_file);
Py_DECREF(par_key_file);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_key_file);
Py_DECREF(par_key_file);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$ssl_$$$function__11__ssl_wrap_socket_impl(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_sock = python_pars[0];
PyObject *par_ssl_context = python_pars[1];
PyObject *par_tls_in_tls = python_pars[2];
PyObject *par_server_hostname = python_pars[3];
struct Nuitka_FrameObject *frame_frame_urllib3$util$ssl_$$$function__11__ssl_wrap_socket_impl;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$ssl_$$$function__11__ssl_wrap_socket_impl = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$ssl_$$$function__11__ssl_wrap_socket_impl)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$ssl_$$$function__11__ssl_wrap_socket_impl);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$ssl_$$$function__11__ssl_wrap_socket_impl == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$ssl_$$$function__11__ssl_wrap_socket_impl = MAKE_FUNCTION_FRAME(tstate, code_objects_9a39f97c4a39595acca1bf19dd149970, module_urllib3$util$ssl_, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$ssl_$$$function__11__ssl_wrap_socket_impl->m_type_description == NULL);
frame_frame_urllib3$util$ssl_$$$function__11__ssl_wrap_socket_impl = cache_frame_frame_urllib3$util$ssl_$$$function__11__ssl_wrap_socket_impl;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$ssl_$$$function__11__ssl_wrap_socket_impl);
assert(Py_REFCNT(frame_frame_urllib3$util$ssl_$$$function__11__ssl_wrap_socket_impl) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_tls_in_tls);
tmp_truth_name_1 = CHECK_IF_TRUE(par_tls_in_tls);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 467;
type_description_1 = "oooo";
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
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
tmp_operand_value_1 = module_var_accessor_urllib3$util$ssl_$SSLTransport(tstate);
if (unlikely(tmp_operand_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SSLTransport);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 468;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 468;
type_description_1 = "oooo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_urllib3$util$ssl_$ProxySchemeUnsupported(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProxySchemeUnsupported);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 470;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$ssl_$$$function__11__ssl_wrap_socket_impl->m_frame.f_lineno = 470;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_75be7dda6a228a6bf538b7d95b7b3b2a_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 470;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 470;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 470;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_urllib3$util$ssl_$SSLTransport(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SSLTransport);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 474;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ssl_context);
tmp_args_element_value_1 = par_ssl_context;
frame_frame_urllib3$util$ssl_$$$function__11__ssl_wrap_socket_impl->m_frame.f_lineno = 474;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__validate_ssl_context_for_tls_in_tls, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 474;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = module_var_accessor_urllib3$util$ssl_$SSLTransport(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SSLTransport);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 475;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_sock);
tmp_args_element_value_2 = par_sock;
CHECK_OBJECT(par_ssl_context);
tmp_args_element_value_3 = par_ssl_context;
CHECK_OBJECT(par_server_hostname);
tmp_args_element_value_4 = par_server_hostname;
frame_frame_urllib3$util$ssl_$$$function__11__ssl_wrap_socket_impl->m_frame.f_lineno = 475;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 475;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
CHECK_OBJECT(par_ssl_context);
tmp_expression_value_1 = par_ssl_context;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_wrap_socket);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_sock);
tmp_kw_call_arg_value_0_1 = par_sock;
CHECK_OBJECT(par_server_hostname);
tmp_kw_call_dict_value_0_1 = par_server_hostname;
frame_frame_urllib3$util$ssl_$$$function__11__ssl_wrap_socket_impl->m_frame.f_lineno = 477;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_server_hostname_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssl_$$$function__11__ssl_wrap_socket_impl, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$ssl_$$$function__11__ssl_wrap_socket_impl->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssl_$$$function__11__ssl_wrap_socket_impl, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$ssl_$$$function__11__ssl_wrap_socket_impl,
    type_description_1,
    par_sock,
    par_ssl_context,
    par_tls_in_tls,
    par_server_hostname
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$ssl_$$$function__11__ssl_wrap_socket_impl == cache_frame_frame_urllib3$util$ssl_$$$function__11__ssl_wrap_socket_impl) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$ssl_$$$function__11__ssl_wrap_socket_impl);
    cache_frame_frame_urllib3$util$ssl_$$$function__11__ssl_wrap_socket_impl = NULL;
}

assertFrameObject(frame_frame_urllib3$util$ssl_$$$function__11__ssl_wrap_socket_impl);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_sock);
Py_DECREF(par_sock);
CHECK_OBJECT(par_ssl_context);
Py_DECREF(par_ssl_context);
CHECK_OBJECT(par_tls_in_tls);
Py_DECREF(par_tls_in_tls);
CHECK_OBJECT(par_server_hostname);
Py_DECREF(par_server_hostname);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_sock);
Py_DECREF(par_sock);
CHECK_OBJECT(par_ssl_context);
Py_DECREF(par_ssl_context);
CHECK_OBJECT(par_tls_in_tls);
Py_DECREF(par_tls_in_tls);
CHECK_OBJECT(par_server_hostname);
Py_DECREF(par_server_hostname);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function__10__is_key_file_encrypted(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function__10__is_key_file_encrypted,
        mod_consts.const_str_plain__is_key_file_encrypted,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6d0ef9e3777cc0395417fa6e471f5002,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssl_,
        mod_consts.const_str_digest_11208532747ea36cadee31118e841464,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function__11__ssl_wrap_socket_impl(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function__11__ssl_wrap_socket_impl,
        mod_consts.const_str_plain__ssl_wrap_socket_impl,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9a39f97c4a39595acca1bf19dd149970,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssl_,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function__1__is_has_never_check_common_name_reliable(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function__1__is_has_never_check_common_name_reliable,
        mod_consts.const_str_plain__is_has_never_check_common_name_reliable,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3114174c2d708af005c49000c9484c82,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssl_,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function__2_assert_fingerprint(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function__2_assert_fingerprint,
        mod_consts.const_str_plain_assert_fingerprint,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_72962c237e8a0a313faa0f408f267b63,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssl_,
        mod_consts.const_str_digest_00443216840a6cf3758b05f20629d7a5,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function__3_resolve_cert_reqs(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function__3_resolve_cert_reqs,
        mod_consts.const_str_plain_resolve_cert_reqs,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b0619bc408e282d19a02ed229b7fe4e4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssl_,
        mod_consts.const_str_digest_fc77b8b8b37a6506afd02b138ba800c9,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function__4_resolve_ssl_version(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function__4_resolve_ssl_version,
        mod_consts.const_str_plain_resolve_ssl_version,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_af0d55d28e71454c184fb83264e061fb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssl_,
        mod_consts.const_str_digest_2bab504d7a355db862adc1427a8ad427,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function__5_create_urllib3_context(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function__5_create_urllib3_context,
        mod_consts.const_str_plain_create_urllib3_context,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_fb526b6dd557cfc108bc925bd0a5c279,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssl_,
        mod_consts.const_str_digest_4e1a677cd4f0a464ce7686d19a2e12a5,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function__6_ssl_wrap_socket(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_ssl_wrap_socket,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_bf111a77bd087249b1c610a1c0390278,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssl_,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function__7_ssl_wrap_socket(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_ssl_wrap_socket,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f4a4c190a3b92ca2826a9da11b63ac19,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssl_,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function__8_ssl_wrap_socket(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function__8_ssl_wrap_socket,
        mod_consts.const_str_plain_ssl_wrap_socket,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_614256444a934cc977dc535c0d68b080,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssl_,
        mod_consts.const_str_digest_3ef282c77d135e7483677d62b5216bcb,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$ssl_$$$function__9_is_ipaddress(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$ssl_$$$function__9_is_ipaddress,
        mod_consts.const_str_plain_is_ipaddress,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_fde51f18020711f69b3784f44c9a5336,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$ssl_,
        mod_consts.const_str_digest_7433ea5e9bf8137907952033c6cfa210,
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

static function_impl_code const function_table_urllib3$util$ssl_[] = {
impl_urllib3$util$ssl_$$$function__1__is_has_never_check_common_name_reliable,
impl_urllib3$util$ssl_$$$function__2_assert_fingerprint,
impl_urllib3$util$ssl_$$$function__3_resolve_cert_reqs,
impl_urllib3$util$ssl_$$$function__4_resolve_ssl_version,
impl_urllib3$util$ssl_$$$function__5_create_urllib3_context,
impl_urllib3$util$ssl_$$$function__8_ssl_wrap_socket,
impl_urllib3$util$ssl_$$$function__9_is_ipaddress,
impl_urllib3$util$ssl_$$$function__10__is_key_file_encrypted,
impl_urllib3$util$ssl_$$$function__11__ssl_wrap_socket_impl,
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

    return Nuitka_Function_GetFunctionState(function, function_table_urllib3$util$ssl_);
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
        module_urllib3$util$ssl_,
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
        function_table_urllib3$util$ssl_,
        sizeof(function_table_urllib3$util$ssl_) / sizeof(function_impl_code)
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
static char const *module_full_name = "urllib3.util.ssl_";
#endif

// Internal entry point for module code.
PyObject *module_code_urllib3$util$ssl_(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("urllib3$util$ssl_");

    // Store the module for future use.
    module_urllib3$util$ssl_ = module;

    moduledict_urllib3$util$ssl_ = MODULE_DICT(module_urllib3$util$ssl_);

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
        PRINT_STRING("urllib3$util$ssl_: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("urllib3$util$ssl_: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("urllib3$util$ssl_: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "urllib3.util.ssl_" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initurllib3$util$ssl_\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_urllib3$util$ssl_,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_urllib3$util$ssl_,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_urllib3$util$ssl_,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$ssl_,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$ssl_,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_urllib3$util$ssl_);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_urllib3$util$ssl_);
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

        UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var_length = NULL;
PyObject *outline_0_var_algorithm = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_dictcontraction_1__$0 = NULL;
PyObject *tmp_dictcontraction_1__contraction = NULL;
PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$ssl_;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_urllib3$util$ssl_ = MAKE_MODULE_FRAME(code_objects_3947483b74b721bc8efd1b6880c38ce7, module_urllib3$util$ssl_);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$ssl_);
assert(Py_REFCNT(frame_frame_urllib3$util$ssl_) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_urllib3$util$ssl_$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_urllib3$util$ssl_$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_hashlib;
tmp_globals_arg_value_1 = (PyObject *)moduledict_urllib3$util$ssl_;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_urllib3$util$ssl_->m_frame.f_lineno = 3;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_hashlib, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_hmac;
tmp_globals_arg_value_2 = (PyObject *)moduledict_urllib3$util$ssl_;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_urllib3$util$ssl_->m_frame.f_lineno = 4;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_hmac, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_9 == NULL));
UPDATE_STRING_DICT0(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_socket;
tmp_globals_arg_value_3 = (PyObject *)moduledict_urllib3$util$ssl_;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_urllib3$util$ssl_->m_frame.f_lineno = 6;
tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_socket, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_11 == NULL));
UPDATE_STRING_DICT0(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_12 == NULL));
UPDATE_STRING_DICT0(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_warnings;
tmp_globals_arg_value_4 = (PyObject *)moduledict_urllib3$util$ssl_;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = Py_None;
tmp_level_value_4 = const_int_0;
frame_frame_urllib3$util$ssl_->m_frame.f_lineno = 9;
tmp_assign_source_13 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_binascii;
tmp_globals_arg_value_5 = (PyObject *)moduledict_urllib3$util$ssl_;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_unhexlify_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_urllib3$util$ssl_->m_frame.f_lineno = 10;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_urllib3$util$ssl_,
        mod_consts.const_str_plain_unhexlify,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_unhexlify);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_unhexlify, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_exceptions;
tmp_globals_arg_value_6 = (PyObject *)moduledict_urllib3$util$ssl_;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_ProxySchemeUnsupported_str_plain_SSLError_tuple;
tmp_level_value_6 = mod_consts.const_int_pos_2;
frame_frame_urllib3$util$ssl_->m_frame.f_lineno = 12;
tmp_assign_source_15 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_15;
}
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_urllib3$util$ssl_,
        mod_consts.const_str_plain_ProxySchemeUnsupported,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_ProxySchemeUnsupported);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxySchemeUnsupported, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_urllib3$util$ssl_,
        mod_consts.const_str_plain_SSLError,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_SSLError);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_SSLError, tmp_assign_source_17);
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
PyObject *tmp_assign_source_18;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_url;
tmp_globals_arg_value_7 = (PyObject *)moduledict_urllib3$util$ssl_;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain__BRACELESS_IPV6_ADDRZ_RE_str_plain__IPV4_RE_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_urllib3$util$ssl_->m_frame.f_lineno = 13;
tmp_assign_source_18 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_18;
}
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_4 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_urllib3$util$ssl_,
        mod_consts.const_str_plain__BRACELESS_IPV6_ADDRZ_RE,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain__BRACELESS_IPV6_ADDRZ_RE);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain__BRACELESS_IPV6_ADDRZ_RE, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_urllib3$util$ssl_,
        mod_consts.const_str_plain__IPV4_RE,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain__IPV4_RE);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain__IPV4_RE, tmp_assign_source_20);
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
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = Py_None;
UPDATE_STRING_DICT0(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_SSLContext, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = Py_None;
UPDATE_STRING_DICT0(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_SSLTransport, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = Py_False;
UPDATE_STRING_DICT0(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_HAS_NEVER_CHECK_COMMON_NAME, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = Py_False;
UPDATE_STRING_DICT0(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_IS_PYOPENSSL, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = MAKE_LIST1(tstate, mod_consts.const_str_digest_d70237e35c994fd4ee6ee104a7cdf8ac);
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_ALPN_PROTOCOLS, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_generic_alias_origin_1;
PyObject *tmp_generic_alias_args_1;
tmp_generic_alias_origin_1 = (PyObject *)&PyTuple_Type;
tmp_generic_alias_args_1 = mod_consts.const_tuple_type_int_type_int_type_int_type_str_type_int_tuple;
tmp_assign_source_26 = Py_GenericAlias(tmp_generic_alias_origin_1, tmp_generic_alias_args_1);
assert(tmp_assign_source_26 != NULL);
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain__TYPE_VERSION_INFO, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
{
PyObject *tmp_assign_source_28;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = mod_consts.const_tuple_7f7ad48e1d187da64e1ae88ee87a3452_tuple;
tmp_assign_source_28 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
assert(!(tmp_assign_source_28 == NULL));
{
    PyObject *old = tmp_dictcontraction_1__$0;
    tmp_dictcontraction_1__$0 = tmp_assign_source_28;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = tmp_dictcontraction_1__contraction;
    tmp_dictcontraction_1__contraction = tmp_assign_source_29;
    Py_XDECREF(old);
}

}
// Tried code:
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_30;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
tmp_next_source_1 = tmp_dictcontraction_1__$0;
tmp_assign_source_30 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_30 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 24;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_dictcontraction_1__iter_value_0;
    tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_30;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_31;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
tmp_iter_arg_2 = tmp_dictcontraction_1__iter_value_0;
tmp_assign_source_31 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_5;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
    tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_31;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_32;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_32 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 26;

    goto try_except_handler_6;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
    tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_32;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_33 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 26;

    goto try_except_handler_6;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
    tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_33;
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



exception_lineno = 26;

    goto try_except_handler_6;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_5;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_4;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_34;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_assign_source_34 = tmp_dictcontraction$tuple_unpack_1__element_1;
{
    PyObject *old = outline_0_var_length;
    outline_0_var_length = tmp_assign_source_34;
    Py_INCREF(outline_0_var_length);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_35;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_assign_source_35 = tmp_dictcontraction$tuple_unpack_1__element_2;
{
    PyObject *old = outline_0_var_algorithm;
    outline_0_var_algorithm = tmp_assign_source_35;
    Py_INCREF(outline_0_var_algorithm);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_dictset38_key_1;
PyObject *tmp_dictset38_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_1;
PyObject *tmp_dictset38_dict_1;
CHECK_OBJECT(outline_0_var_length);
tmp_dictset38_key_1 = outline_0_var_length;
tmp_expression_value_1 = module_var_accessor_urllib3$util$ssl_$hashlib(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashlib);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 24;

    goto try_except_handler_4;
}
CHECK_OBJECT(outline_0_var_algorithm);
tmp_name_value_8 = outline_0_var_algorithm;
tmp_default_value_1 = Py_None;
tmp_dictset38_value_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_1, tmp_name_value_8, tmp_default_value_1);
if (tmp_dictset38_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
assert(PyDict_CheckExact(tmp_dictset38_dict_1));
tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

CHECK_OBJECT(tmp_dictset38_value_1);
Py_DECREF(tmp_dictset38_value_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_4;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_4;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_assign_source_27 = tmp_dictcontraction_1__contraction;
Py_INCREF(tmp_assign_source_27);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
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
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
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
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_3;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_XDECREF(outline_0_var_length);
outline_0_var_length = NULL;
Py_XDECREF(outline_0_var_algorithm);
outline_0_var_algorithm = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_length);
outline_0_var_length = NULL;
Py_XDECREF(outline_0_var_algorithm);
outline_0_var_algorithm = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 24;
goto frame_exception_exit_1;
outline_result_1:;
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_HASHFUNC_MAP, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_aee2829287d729fc07a2573619373aea);

tmp_assign_source_36 = MAKE_FUNCTION_urllib3$util$ssl_$$$function__1__is_has_never_check_common_name_reliable(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain__is_has_never_check_common_name_reliable, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
tmp_assign_source_37 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain__SSL_VERSION_TO_TLS_VERSION, tmp_assign_source_37);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_5b40aa38e0c6f708b1ae98187d5fc99e;
tmp_ass_subscribed_1 = module_var_accessor_urllib3$util$ssl_$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain__SSL_VERSION_TO_TLS_VERSION;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto frame_exception_exit_1;
}
}
// Tried code:
{
PyObject *tmp_assign_source_38;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_9 = mod_consts.const_str_plain_ssl;
tmp_globals_arg_value_8 = (PyObject *)moduledict_urllib3$util$ssl_;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = Py_None;
tmp_level_value_8 = const_int_0;
frame_frame_urllib3$util$ssl_->m_frame.f_lineno = 56;
tmp_assign_source_38 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_ssl, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_10 = mod_consts.const_str_plain_ssl;
tmp_globals_arg_value_9 = (PyObject *)moduledict_urllib3$util$ssl_;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_18f0e0433f330a33b43281d5a7ddc858_tuple;
tmp_level_value_9 = const_int_0;
frame_frame_urllib3$util$ssl_->m_frame.f_lineno = 57;
tmp_assign_source_39 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_7;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_39;
}
// Tried code:
{
PyObject *tmp_assign_source_40;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_6 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_urllib3$util$ssl_,
        mod_consts.const_str_plain_CERT_REQUIRED,
        const_int_0
    );
} else {
    tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_CERT_REQUIRED);
}

if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_CERT_REQUIRED, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_7 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_urllib3$util$ssl_,
        mod_consts.const_str_plain_HAS_NEVER_CHECK_COMMON_NAME,
        const_int_0
    );
} else {
    tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_HAS_NEVER_CHECK_COMMON_NAME);
}

if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_HAS_NEVER_CHECK_COMMON_NAME, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_8 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_urllib3$util$ssl_,
        mod_consts.const_str_plain_OP_NO_COMPRESSION,
        const_int_0
    );
} else {
    tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_OP_NO_COMPRESSION);
}

if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_NO_COMPRESSION, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_9 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_urllib3$util$ssl_,
        mod_consts.const_str_plain_OP_NO_TICKET,
        const_int_0
    );
} else {
    tmp_assign_source_43 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_OP_NO_TICKET);
}

if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_NO_TICKET, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_10 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_urllib3$util$ssl_,
        mod_consts.const_str_plain_OPENSSL_VERSION,
        const_int_0
    );
} else {
    tmp_assign_source_44 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_OPENSSL_VERSION);
}

if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_OPENSSL_VERSION, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_11 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_urllib3$util$ssl_,
        mod_consts.const_str_plain_PROTOCOL_TLS,
        const_int_0
    );
} else {
    tmp_assign_source_45 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_PROTOCOL_TLS);
}

if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_PROTOCOL_TLS, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_12 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_urllib3$util$ssl_,
        mod_consts.const_str_plain_PROTOCOL_TLS_CLIENT,
        const_int_0
    );
} else {
    tmp_assign_source_46 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_PROTOCOL_TLS_CLIENT);
}

if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_PROTOCOL_TLS_CLIENT, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_13 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_urllib3$util$ssl_,
        mod_consts.const_str_plain_VERIFY_X509_PARTIAL_CHAIN,
        const_int_0
    );
} else {
    tmp_assign_source_47 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_VERIFY_X509_PARTIAL_CHAIN);
}

if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_VERIFY_X509_PARTIAL_CHAIN, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_14 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_urllib3$util$ssl_,
        mod_consts.const_str_plain_VERIFY_X509_STRICT,
        const_int_0
    );
} else {
    tmp_assign_source_48 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_VERIFY_X509_STRICT);
}

if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_VERIFY_X509_STRICT, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_15 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_urllib3$util$ssl_,
        mod_consts.const_str_plain_OP_NO_SSLv2,
        const_int_0
    );
} else {
    tmp_assign_source_49 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_OP_NO_SSLv2);
}

if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_NO_SSLv2, tmp_assign_source_49);
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_16 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_urllib3$util$ssl_,
        mod_consts.const_str_plain_OP_NO_SSLv3,
        const_int_0
    );
} else {
    tmp_assign_source_50 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_OP_NO_SSLv3);
}

if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_NO_SSLv3, tmp_assign_source_50);
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_17 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_51 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_urllib3$util$ssl_,
        mod_consts.const_str_plain_SSLContext,
        const_int_0
    );
} else {
    tmp_assign_source_51 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_SSLContext);
}

if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_SSLContext, tmp_assign_source_51);
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_import_name_from_18;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_18 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_52 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_urllib3$util$ssl_,
        mod_consts.const_str_plain_TLSVersion,
        const_int_0
    );
} else {
    tmp_assign_source_52 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_TLSVersion);
}

if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_TLSVersion, tmp_assign_source_52);
}
goto try_end_5;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_7;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
{
PyObject *tmp_assign_source_53;
tmp_assign_source_53 = module_var_accessor_urllib3$util$ssl_$PROTOCOL_TLS(tstate);
if (unlikely(tmp_assign_source_53 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PROTOCOL_TLS);
}

if (tmp_assign_source_53 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT0(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_PROTOCOL_SSLv23, tmp_assign_source_53);
}
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_mvar_value_1;
int tmp_truth_name_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_mvar_value_1 = module_var_accessor_urllib3$util$ssl_$HAS_NEVER_CHECK_COMMON_NAME(tstate);
if (unlikely(tmp_mvar_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HAS_NEVER_CHECK_COMMON_NAME);
}

if (tmp_mvar_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 77;

    goto try_except_handler_7;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto try_except_handler_7;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto try_except_handler_7;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
tmp_called_value_1 = module_var_accessor_urllib3$util$ssl_$_is_has_never_check_common_name_reliable(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__is_has_never_check_common_name_reliable);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 77;

    goto try_except_handler_7;
}
tmp_args_element_value_1 = module_var_accessor_urllib3$util$ssl_$OPENSSL_VERSION(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OPENSSL_VERSION);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 78;

    goto try_except_handler_7;
}
frame_frame_urllib3$util$ssl_->m_frame.f_lineno = 77;
tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto try_except_handler_7;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto try_except_handler_7;
}
tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
PyObject *tmp_assign_source_54;
tmp_assign_source_54 = Py_False;
UPDATE_STRING_DICT0(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_HAS_NEVER_CHECK_COMMON_NAME, tmp_assign_source_54);
}
branch_no_1:;
{
PyObject *tmp_assign_source_55;
PyObject *tmp_iter_arg_3;
tmp_iter_arg_3 = mod_consts.const_tuple_str_plain_TLSv1_str_plain_TLSv1_1_str_plain_TLSv1_2_tuple;
tmp_assign_source_55 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_3);
assert(!(tmp_assign_source_55 == NULL));
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_55;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_56;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_2 = tmp_for_loop_1__for_iterator;
tmp_assign_source_56 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
if (tmp_assign_source_56 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 84;
        goto try_except_handler_9;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_56;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_57;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_57 = tmp_for_loop_1__iter_value;
UPDATE_STRING_DICT0(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_attr, tmp_assign_source_57);
}
// Tried code:
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_name_value_11;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_name_value_12;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_expression_value_2 = module_var_accessor_urllib3$util$ssl_$TLSVersion(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TLSVersion);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;

    goto try_except_handler_10;
}
tmp_name_value_11 = module_var_accessor_urllib3$util$ssl_$attr(tstate);
assert(!(tmp_name_value_11 == NULL));
tmp_ass_subvalue_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_2, tmp_name_value_11, NULL);
if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_10;
}
tmp_ass_subscribed_2 = module_var_accessor_urllib3$util$ssl_$_SSL_VERSION_TO_TLS_VERSION(tstate);
if (unlikely(tmp_ass_subscribed_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__SSL_VERSION_TO_TLS_VERSION);
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_ass_subvalue_2);

exception_lineno = 86;

    goto try_except_handler_10;
}
tmp_expression_value_3 = module_var_accessor_urllib3$util$ssl_$ssl(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ssl);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_ass_subvalue_2);

exception_lineno = 86;

    goto try_except_handler_10;
}
tmp_tuple_element_1 = mod_consts.const_str_plain_PROTOCOL_;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_format_value_1 = module_var_accessor_urllib3$util$ssl_$attr(tstate);
assert(!(tmp_format_value_1 == NULL));
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_ass_subvalue_2);
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_10;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_name_value_12 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_name_value_12 == NULL));
tmp_ass_subscript_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_3, tmp_name_value_12, NULL);
CHECK_OBJECT(tmp_name_value_12);
Py_DECREF(tmp_name_value_12);
if (tmp_ass_subscript_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_2);

exception_lineno = 86;

    goto try_except_handler_10;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscript_2);
Py_DECREF(tmp_ass_subscript_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_10;
}
}
goto try_end_6;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_8);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssl_, exception_keeper_lineno_8);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_8, exception_tb);
    } else if (exception_keeper_lineno_8 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssl_, exception_keeper_lineno_8);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_8, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_8);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_AttributeError;
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
goto try_continue_handler_11;
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 85;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$util$ssl_->m_frame)) {
        frame_frame_urllib3$util$ssl_->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_11;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_9;
// try continue handler code:
try_continue_handler_11:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto loop_start_2;
// End of try:
// End of try:
try_end_6:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto try_except_handler_9;
}
goto loop_start_2;
loop_end_2:;
goto try_end_7;
// Exception handler code:
try_except_handler_9:;
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

goto try_except_handler_7;
// End of try:
try_end_7:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_assign_source_58;
PyObject *tmp_import_name_from_19;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_13 = mod_consts.const_str_plain_ssltransport;
tmp_globals_arg_value_10 = (PyObject *)moduledict_urllib3$util$ssl_;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_SSLTransport_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_urllib3$util$ssl_->m_frame.f_lineno = 92;
tmp_import_name_from_19 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_7;
}
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_58 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_urllib3$util$ssl_,
        mod_consts.const_str_plain_SSLTransport,
        const_int_0
    );
} else {
    tmp_assign_source_58 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_SSLTransport);
}

CHECK_OBJECT(tmp_import_name_from_19);
Py_DECREF(tmp_import_name_from_19);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_SSLTransport, tmp_assign_source_58);
}
goto try_end_8;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_11);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssl_, exception_keeper_lineno_11);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_11, exception_tb);
    } else if (exception_keeper_lineno_11 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssl_, exception_keeper_lineno_11);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_11, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_11);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_ImportError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
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
PyObject *tmp_assign_source_59;
tmp_assign_source_59 = mod_consts.const_int_pos_131072;
UPDATE_STRING_DICT0(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_NO_COMPRESSION, tmp_assign_source_59);
}
{
PyObject *tmp_assign_source_60;
tmp_assign_source_60 = mod_consts.const_int_pos_16384;
UPDATE_STRING_DICT0(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_NO_TICKET, tmp_assign_source_60);
}
{
PyObject *tmp_assign_source_61;
tmp_assign_source_61 = mod_consts.const_int_hex_1000000;
UPDATE_STRING_DICT0(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_NO_SSLv2, tmp_assign_source_61);
}
{
PyObject *tmp_assign_source_62;
tmp_assign_source_62 = mod_consts.const_int_hex_2000000;
UPDATE_STRING_DICT0(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_OP_NO_SSLv3, tmp_assign_source_62);
}
{
PyObject *tmp_assign_source_63;
tmp_assign_source_63 = mod_consts.const_int_pos_2;
UPDATE_STRING_DICT0(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_PROTOCOL_SSLv23, tmp_assign_source_63);
}
{
PyObject *tmp_assign_source_64;
tmp_assign_source_64 = mod_consts.const_int_pos_2;
UPDATE_STRING_DICT0(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_PROTOCOL_TLS, tmp_assign_source_64);
}
{
PyObject *tmp_assign_source_65;
tmp_assign_source_65 = mod_consts.const_int_pos_16;
UPDATE_STRING_DICT0(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_PROTOCOL_TLS_CLIENT, tmp_assign_source_65);
}
{
PyObject *tmp_assign_source_66;
tmp_assign_source_66 = mod_consts.const_int_pos_524288;
UPDATE_STRING_DICT0(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_VERIFY_X509_PARTIAL_CHAIN, tmp_assign_source_66);
}
{
PyObject *tmp_assign_source_67;
tmp_assign_source_67 = mod_consts.const_int_pos_32;
UPDATE_STRING_DICT0(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_VERIFY_X509_STRICT, tmp_assign_source_67);
}
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 55;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$util$ssl_->m_frame)) {
        frame_frame_urllib3$util$ssl_->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_12;
branch_end_3:;
goto try_end_9;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto frame_exception_exit_1;
// End of try:
try_end_9:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_8;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_8:;
{
PyObject *tmp_assign_source_68;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_1;
tmp_expression_value_5 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_5 == NULL));
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_Union);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;

    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_tuple_str_plain__TYPE_PEER_CERT_RET_DICT_type_bytes_none_tuple;
tmp_assign_source_68 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_assign_source_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain__TYPE_PEER_CERT_RET, tmp_assign_source_68);
}
{
PyObject *tmp_assign_source_69;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_367d1a21df6286ad9274118c3f81f657);

tmp_assign_source_69 = MAKE_FUNCTION_urllib3$util$ssl_$$$function__2_assert_fingerprint(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_assert_fingerprint, tmp_assign_source_69);
}
{
PyObject *tmp_assign_source_70;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_2e3431bdfd877ec817f317d0d7420173);

tmp_assign_source_70 = MAKE_FUNCTION_urllib3$util$ssl_$$$function__3_resolve_cert_reqs(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_resolve_cert_reqs, tmp_assign_source_70);
}
{
PyObject *tmp_assign_source_71;
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_841d18ac7b40b3c5d648b142989fa720);

tmp_assign_source_71 = MAKE_FUNCTION_urllib3$util$ssl_$$$function__4_resolve_ssl_version(tstate, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_resolve_ssl_version, tmp_assign_source_71);
}
{
PyObject *tmp_assign_source_72;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_5;
tmp_defaults_1 = mod_consts.const_tuple_none_none_none_none_none_none_none_tuple;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_5bf3c00cb4f8f9c3699c8a8c3551afda);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_72 = MAKE_FUNCTION_urllib3$util$ssl_$$$function__5_create_urllib3_context(tstate, tmp_defaults_1, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_create_urllib3_context, tmp_assign_source_72);
}
{
PyObject *tmp_assign_source_73;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_6;
tmp_called_instance_1 = IMPORT_HARD_TYPING();
assert(!(tmp_called_instance_1 == NULL));
tmp_defaults_2 = mod_consts.const_tuple_fd2b59ad0dd7044251a51692d1dcc7d4_tuple;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_5d7d0970ec44e36bbce31f5cf1b40c9e);
Py_INCREF(tmp_defaults_2);

tmp_args_element_value_2 = MAKE_FUNCTION_urllib3$util$ssl_$$$function__6_ssl_wrap_socket(tstate, tmp_defaults_2, tmp_annotations_6);

frame_frame_urllib3$util$ssl_->m_frame.f_lineno = 327;
tmp_assign_source_73 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_overload, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_ssl_wrap_socket, tmp_assign_source_73);
}
{
PyObject *tmp_assign_source_74;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_7;
tmp_called_instance_2 = IMPORT_HARD_TYPING();
assert(!(tmp_called_instance_2 == NULL));
tmp_defaults_3 = mod_consts.const_tuple_fd2b59ad0dd7044251a51692d1dcc7d4_tuple;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_20fd385a9560791475667c6be9367b66);
Py_INCREF(tmp_defaults_3);

tmp_args_element_value_3 = MAKE_FUNCTION_urllib3$util$ssl_$$$function__7_ssl_wrap_socket(tstate, tmp_defaults_3, tmp_annotations_7);

frame_frame_urllib3$util$ssl_->m_frame.f_lineno = 345;
tmp_assign_source_74 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_overload, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_ssl_wrap_socket, tmp_assign_source_74);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$ssl_, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$ssl_->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$ssl_, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_urllib3$util$ssl_);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_75;
PyObject *tmp_defaults_4;
PyObject *tmp_annotations_8;
tmp_defaults_4 = mod_consts.const_tuple_none_none_none_none_none_none_none_none_none_none_none_false_tuple;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_20fd385a9560791475667c6be9367b66);
Py_INCREF(tmp_defaults_4);

tmp_assign_source_75 = MAKE_FUNCTION_urllib3$util$ssl_$$$function__8_ssl_wrap_socket(tstate, tmp_defaults_4, tmp_annotations_8);

UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_ssl_wrap_socket, tmp_assign_source_75);
}
{
PyObject *tmp_assign_source_76;
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_5b2fbf3f7c44d3207d5dd4dec8ec7c48);

tmp_assign_source_76 = MAKE_FUNCTION_urllib3$util$ssl_$$$function__9_is_ipaddress(tstate, tmp_annotations_9);

UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain_is_ipaddress, tmp_assign_source_76);
}
{
PyObject *tmp_assign_source_77;
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_8fb4eceea18e21ca7fa2a9a37cde7f64);

tmp_assign_source_77 = MAKE_FUNCTION_urllib3$util$ssl_$$$function__10__is_key_file_encrypted(tstate, tmp_annotations_10);

UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain__is_key_file_encrypted, tmp_assign_source_77);
}
{
PyObject *tmp_assign_source_78;
PyObject *tmp_defaults_5;
PyObject *tmp_annotations_11;
tmp_defaults_5 = mod_consts.const_tuple_none_tuple;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_8b0818ee139c611994a7d99efb853cc3);
Py_INCREF(tmp_defaults_5);

tmp_assign_source_78 = MAKE_FUNCTION_urllib3$util$ssl_$$$function__11__ssl_wrap_socket_impl(tstate, tmp_defaults_5, tmp_annotations_11);

UPDATE_STRING_DICT1(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)mod_consts.const_str_plain__ssl_wrap_socket_impl, tmp_assign_source_78);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("urllib3$util$ssl_", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "urllib3.util.ssl_" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_urllib3$util$ssl_);
    return module_urllib3$util$ssl_;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$ssl_, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("urllib3$util$ssl_", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
