/* Generated code for Python module 'cryptography$hazmat$bindings$openssl$_conditional'
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



/* The "module_cryptography$hazmat$bindings$openssl$_conditional" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$bindings$openssl$_conditional;
PyDictObject *moduledict_cryptography$hazmat$bindings$openssl$_conditional;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_SSL_CTX_set_cert_cb;
PyObject *const_str_plain_SSL_set_cert_cb;
PyObject *const_list_29407ac2cfa5bacd5103ba17ced806aa_list;
PyObject *const_str_plain_TLS_ST_BEFORE;
PyObject *const_str_plain_TLS_ST_OK;
PyObject *const_str_plain_SSL_CTX_set1_sigalgs_list;
PyObject *const_str_plain_SSL_CTX_use_psk_identity_hint;
PyObject *const_str_plain_SSL_CTX_set_psk_server_callback;
PyObject *const_str_plain_SSL_CTX_set_psk_client_callback;
PyObject *const_list_237d527dc3b5d1a771bb228dcdc6399c_list;
PyObject *const_str_plain_SSL_CTX_add_client_custom_ext;
PyObject *const_str_plain_SSL_CTX_add_server_custom_ext;
PyObject *const_str_plain_SSL_extension_supported;
PyObject *const_str_plain_SSL_CTX_set_ciphersuites;
PyObject *const_list_a9d761d10c8070d0e50809ea2453ff53_list;
PyObject *const_str_plain_SSL_verify_client_post_handshake;
PyObject *const_list_40064310c3feadaf4e508a2c4364ec5b_list;
PyObject *const_str_plain_SSL_get0_verified_chain;
PyObject *const_str_plain_SSL_CTX_set_tlsext_use_srtp;
PyObject *const_str_plain_SSL_set_tlsext_use_srtp;
PyObject *const_str_plain_SSL_get_selected_srtp_profile;
PyObject *const_str_plain_DTLS_get_data_mtu;
PyObject *const_list_dca9a970b5bd3e7a57fe2c6c9a069172_list;
PyObject *const_str_plain_BN_prime_checks_for_size;
PyObject *const_str_plain_SSL_R_UNEXPECTED_EOF_WHILE_READING;
PyObject *const_str_plain_SSL_OP_IGNORE_UNEXPECTED_EOF;
PyObject *const_str_plain_SSL_get_extms_support;
PyObject *const_str_plain_SSL_get0_group_name;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_dict_0fc05ed22f6723891cdf750312b81bd3;
PyObject *const_str_plain_cryptography_has_set_cert_cb;
PyObject *const_str_plain_cryptography_has_ssl_st;
PyObject *const_str_plain_cryptography_has_tls_st;
PyObject *const_str_plain_cryptography_has_ssl_sigalgs;
PyObject *const_str_plain_cryptography_has_psk;
PyObject *const_str_plain_cryptography_has_psk_tlsv13;
PyObject *const_str_plain_cryptography_has_custom_ext;
PyObject *const_str_plain_cryptography_has_tlsv13_functions;
PyObject *const_str_plain_cryptography_has_tlsv13_hs_functions;
PyObject *const_str_digest_cf08fe5adb71986559606b6420151552;
PyObject *const_str_plain_cryptography_has_engine;
PyObject *const_str_plain_cryptography_has_verified_chain;
PyObject *const_str_plain_cryptography_has_srtp;
PyObject *const_str_plain_cryptography_has_dtls_get_data_mtu;
PyObject *const_str_plain_cryptography_has_ssl_cookie;
PyObject *const_str_plain_cryptography_has_prime_checks;
PyObject *const_str_digest_2d78557bb2bba1a9973799de4407673f;
PyObject *const_str_digest_97374a8aef8d7621a59ab78fe5423220;
PyObject *const_str_plain_cryptography_has_get_extms_support;
PyObject *const_str_plain_cryptography_has_ssl_get0_group_name;
PyObject *const_str_plain_Cryptography_HAS_SET_CERT_CB;
PyObject *const_str_plain_Cryptography_HAS_SSL_ST;
PyObject *const_str_plain_Cryptography_HAS_TLS_ST;
PyObject *const_str_plain_Cryptography_HAS_SIGALGS;
PyObject *const_str_plain_Cryptography_HAS_PSK;
PyObject *const_str_plain_Cryptography_HAS_PSK_TLSv1_3;
PyObject *const_str_plain_Cryptography_HAS_CUSTOM_EXT;
PyObject *const_str_plain_Cryptography_HAS_TLSv1_3_FUNCTIONS;
PyObject *const_str_plain_Cryptography_HAS_TLSv1_3_HS_FUNCTIONS;
PyObject *const_str_digest_2b19944986e2a9a13d58798ebcbdca17;
PyObject *const_str_plain_Cryptography_HAS_ENGINE;
PyObject *const_str_plain_Cryptography_HAS_VERIFIED_CHAIN;
PyObject *const_str_plain_Cryptography_HAS_SRTP;
PyObject *const_str_plain_Cryptography_HAS_DTLS_GET_DATA_MTU;
PyObject *const_str_plain_Cryptography_HAS_SSL_COOKIE;
PyObject *const_str_plain_Cryptography_HAS_PRIME_CHECKS;
PyObject *const_str_digest_f583501c62c7ba847d9fd34ef2a9075e;
PyObject *const_str_digest_b81cbb63dc11c8e0123d0733e0f387f0;
PyObject *const_str_plain_Cryptography_HAS_GET_EXTMS_SUPPORT;
PyObject *const_str_plain_Cryptography_HAS_SSL_GET0_GROUP_NAME;
PyObject *const_str_plain_CONDITIONAL_NAMES;
PyObject *const_str_digest_47ba21151d4195fb9de5595022be41e7;
PyObject *const_str_digest_fafbfe30544ba42854ed0b86baac5f84;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[75];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("cryptography.hazmat.bindings.openssl._conditional"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 75) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 75 values, got %d\n",
                    UN_TRANSLATE("cryptography.hazmat.bindings.openssl._conditional"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_CTX_set_cert_cb", mod_consts.const_str_plain_SSL_CTX_set_cert_cb);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_CTX_set_cert_cb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_set_cert_cb", mod_consts.const_str_plain_SSL_set_cert_cb);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_set_cert_cb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_list_29407ac2cfa5bacd5103ba17ced806aa_list", mod_consts.const_list_29407ac2cfa5bacd5103ba17ced806aa_list);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_list_29407ac2cfa5bacd5103ba17ced806aa_list);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TLS_ST_BEFORE", mod_consts.const_str_plain_TLS_ST_BEFORE);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_TLS_ST_BEFORE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TLS_ST_OK", mod_consts.const_str_plain_TLS_ST_OK);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_TLS_ST_OK);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_CTX_set1_sigalgs_list", mod_consts.const_str_plain_SSL_CTX_set1_sigalgs_list);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_CTX_set1_sigalgs_list);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_CTX_use_psk_identity_hint", mod_consts.const_str_plain_SSL_CTX_use_psk_identity_hint);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_CTX_use_psk_identity_hint);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_CTX_set_psk_server_callback", mod_consts.const_str_plain_SSL_CTX_set_psk_server_callback);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_CTX_set_psk_server_callback);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_CTX_set_psk_client_callback", mod_consts.const_str_plain_SSL_CTX_set_psk_client_callback);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_CTX_set_psk_client_callback);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_list_237d527dc3b5d1a771bb228dcdc6399c_list", mod_consts.const_list_237d527dc3b5d1a771bb228dcdc6399c_list);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_list_237d527dc3b5d1a771bb228dcdc6399c_list);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_CTX_add_client_custom_ext", mod_consts.const_str_plain_SSL_CTX_add_client_custom_ext);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_CTX_add_client_custom_ext);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_CTX_add_server_custom_ext", mod_consts.const_str_plain_SSL_CTX_add_server_custom_ext);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_CTX_add_server_custom_ext);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_extension_supported", mod_consts.const_str_plain_SSL_extension_supported);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_extension_supported);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_CTX_set_ciphersuites", mod_consts.const_str_plain_SSL_CTX_set_ciphersuites);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_CTX_set_ciphersuites);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_list_a9d761d10c8070d0e50809ea2453ff53_list", mod_consts.const_list_a9d761d10c8070d0e50809ea2453ff53_list);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_list_a9d761d10c8070d0e50809ea2453ff53_list);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_verify_client_post_handshake", mod_consts.const_str_plain_SSL_verify_client_post_handshake);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_verify_client_post_handshake);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_list_40064310c3feadaf4e508a2c4364ec5b_list", mod_consts.const_list_40064310c3feadaf4e508a2c4364ec5b_list);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_list_40064310c3feadaf4e508a2c4364ec5b_list);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_get0_verified_chain", mod_consts.const_str_plain_SSL_get0_verified_chain);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_get0_verified_chain);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_CTX_set_tlsext_use_srtp", mod_consts.const_str_plain_SSL_CTX_set_tlsext_use_srtp);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_CTX_set_tlsext_use_srtp);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_set_tlsext_use_srtp", mod_consts.const_str_plain_SSL_set_tlsext_use_srtp);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_set_tlsext_use_srtp);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_get_selected_srtp_profile", mod_consts.const_str_plain_SSL_get_selected_srtp_profile);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_get_selected_srtp_profile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DTLS_get_data_mtu", mod_consts.const_str_plain_DTLS_get_data_mtu);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_DTLS_get_data_mtu);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_list_dca9a970b5bd3e7a57fe2c6c9a069172_list", mod_consts.const_list_dca9a970b5bd3e7a57fe2c6c9a069172_list);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_list_dca9a970b5bd3e7a57fe2c6c9a069172_list);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BN_prime_checks_for_size", mod_consts.const_str_plain_BN_prime_checks_for_size);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_BN_prime_checks_for_size);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_R_UNEXPECTED_EOF_WHILE_READING", mod_consts.const_str_plain_SSL_R_UNEXPECTED_EOF_WHILE_READING);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_R_UNEXPECTED_EOF_WHILE_READING);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_OP_IGNORE_UNEXPECTED_EOF", mod_consts.const_str_plain_SSL_OP_IGNORE_UNEXPECTED_EOF);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_OP_IGNORE_UNEXPECTED_EOF);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_get_extms_support", mod_consts.const_str_plain_SSL_get_extms_support);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_get_extms_support);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_get0_group_name", mod_consts.const_str_plain_SSL_get0_group_name);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_get0_group_name);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3", mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography_has_set_cert_cb", mod_consts.const_str_plain_cryptography_has_set_cert_cb);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography_has_set_cert_cb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography_has_ssl_st", mod_consts.const_str_plain_cryptography_has_ssl_st);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography_has_ssl_st);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography_has_tls_st", mod_consts.const_str_plain_cryptography_has_tls_st);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography_has_tls_st);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography_has_ssl_sigalgs", mod_consts.const_str_plain_cryptography_has_ssl_sigalgs);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography_has_ssl_sigalgs);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography_has_psk", mod_consts.const_str_plain_cryptography_has_psk);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography_has_psk);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography_has_psk_tlsv13", mod_consts.const_str_plain_cryptography_has_psk_tlsv13);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography_has_psk_tlsv13);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography_has_custom_ext", mod_consts.const_str_plain_cryptography_has_custom_ext);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography_has_custom_ext);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography_has_tlsv13_functions", mod_consts.const_str_plain_cryptography_has_tlsv13_functions);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography_has_tlsv13_functions);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography_has_tlsv13_hs_functions", mod_consts.const_str_plain_cryptography_has_tlsv13_hs_functions);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography_has_tlsv13_hs_functions);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cf08fe5adb71986559606b6420151552", mod_consts.const_str_digest_cf08fe5adb71986559606b6420151552);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_cf08fe5adb71986559606b6420151552);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography_has_engine", mod_consts.const_str_plain_cryptography_has_engine);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography_has_engine);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography_has_verified_chain", mod_consts.const_str_plain_cryptography_has_verified_chain);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography_has_verified_chain);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography_has_srtp", mod_consts.const_str_plain_cryptography_has_srtp);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography_has_srtp);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography_has_dtls_get_data_mtu", mod_consts.const_str_plain_cryptography_has_dtls_get_data_mtu);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography_has_dtls_get_data_mtu);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography_has_ssl_cookie", mod_consts.const_str_plain_cryptography_has_ssl_cookie);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography_has_ssl_cookie);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography_has_prime_checks", mod_consts.const_str_plain_cryptography_has_prime_checks);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography_has_prime_checks);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2d78557bb2bba1a9973799de4407673f", mod_consts.const_str_digest_2d78557bb2bba1a9973799de4407673f);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_2d78557bb2bba1a9973799de4407673f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_97374a8aef8d7621a59ab78fe5423220", mod_consts.const_str_digest_97374a8aef8d7621a59ab78fe5423220);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_97374a8aef8d7621a59ab78fe5423220);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography_has_get_extms_support", mod_consts.const_str_plain_cryptography_has_get_extms_support);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography_has_get_extms_support);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography_has_ssl_get0_group_name", mod_consts.const_str_plain_cryptography_has_ssl_get0_group_name);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography_has_ssl_get0_group_name);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cryptography_HAS_SET_CERT_CB", mod_consts.const_str_plain_Cryptography_HAS_SET_CERT_CB);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_Cryptography_HAS_SET_CERT_CB);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cryptography_HAS_SSL_ST", mod_consts.const_str_plain_Cryptography_HAS_SSL_ST);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_Cryptography_HAS_SSL_ST);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cryptography_HAS_TLS_ST", mod_consts.const_str_plain_Cryptography_HAS_TLS_ST);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_Cryptography_HAS_TLS_ST);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cryptography_HAS_SIGALGS", mod_consts.const_str_plain_Cryptography_HAS_SIGALGS);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_Cryptography_HAS_SIGALGS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cryptography_HAS_PSK", mod_consts.const_str_plain_Cryptography_HAS_PSK);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_Cryptography_HAS_PSK);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cryptography_HAS_PSK_TLSv1_3", mod_consts.const_str_plain_Cryptography_HAS_PSK_TLSv1_3);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_Cryptography_HAS_PSK_TLSv1_3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cryptography_HAS_CUSTOM_EXT", mod_consts.const_str_plain_Cryptography_HAS_CUSTOM_EXT);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_Cryptography_HAS_CUSTOM_EXT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cryptography_HAS_TLSv1_3_FUNCTIONS", mod_consts.const_str_plain_Cryptography_HAS_TLSv1_3_FUNCTIONS);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_Cryptography_HAS_TLSv1_3_FUNCTIONS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cryptography_HAS_TLSv1_3_HS_FUNCTIONS", mod_consts.const_str_plain_Cryptography_HAS_TLSv1_3_HS_FUNCTIONS);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_Cryptography_HAS_TLSv1_3_HS_FUNCTIONS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2b19944986e2a9a13d58798ebcbdca17", mod_consts.const_str_digest_2b19944986e2a9a13d58798ebcbdca17);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_2b19944986e2a9a13d58798ebcbdca17);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cryptography_HAS_ENGINE", mod_consts.const_str_plain_Cryptography_HAS_ENGINE);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_Cryptography_HAS_ENGINE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cryptography_HAS_VERIFIED_CHAIN", mod_consts.const_str_plain_Cryptography_HAS_VERIFIED_CHAIN);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_Cryptography_HAS_VERIFIED_CHAIN);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cryptography_HAS_SRTP", mod_consts.const_str_plain_Cryptography_HAS_SRTP);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_Cryptography_HAS_SRTP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cryptography_HAS_DTLS_GET_DATA_MTU", mod_consts.const_str_plain_Cryptography_HAS_DTLS_GET_DATA_MTU);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_Cryptography_HAS_DTLS_GET_DATA_MTU);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cryptography_HAS_SSL_COOKIE", mod_consts.const_str_plain_Cryptography_HAS_SSL_COOKIE);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_Cryptography_HAS_SSL_COOKIE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cryptography_HAS_PRIME_CHECKS", mod_consts.const_str_plain_Cryptography_HAS_PRIME_CHECKS);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_Cryptography_HAS_PRIME_CHECKS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f583501c62c7ba847d9fd34ef2a9075e", mod_consts.const_str_digest_f583501c62c7ba847d9fd34ef2a9075e);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_f583501c62c7ba847d9fd34ef2a9075e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b81cbb63dc11c8e0123d0733e0f387f0", mod_consts.const_str_digest_b81cbb63dc11c8e0123d0733e0f387f0);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_b81cbb63dc11c8e0123d0733e0f387f0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cryptography_HAS_GET_EXTMS_SUPPORT", mod_consts.const_str_plain_Cryptography_HAS_GET_EXTMS_SUPPORT);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_Cryptography_HAS_GET_EXTMS_SUPPORT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cryptography_HAS_SSL_GET0_GROUP_NAME", mod_consts.const_str_plain_Cryptography_HAS_SSL_GET0_GROUP_NAME);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_Cryptography_HAS_SSL_GET0_GROUP_NAME);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CONDITIONAL_NAMES", mod_consts.const_str_plain_CONDITIONAL_NAMES);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_CONDITIONAL_NAMES);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_47ba21151d4195fb9de5595022be41e7", mod_consts.const_str_digest_47ba21151d4195fb9de5595022be41e7);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_47ba21151d4195fb9de5595022be41e7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fafbfe30544ba42854ed0b86baac5f84", mod_consts.const_str_digest_fafbfe30544ba42854ed0b86baac5f84);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_fafbfe30544ba42854ed0b86baac5f84);
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
void checkModuleConstants_cryptography$hazmat$bindings$openssl$_conditional(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_CTX_set_cert_cb", mod_consts.const_str_plain_SSL_CTX_set_cert_cb);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_CTX_set_cert_cb) && "mod_consts.const_str_plain_SSL_CTX_set_cert_cb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_set_cert_cb", mod_consts.const_str_plain_SSL_set_cert_cb);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_set_cert_cb) && "mod_consts.const_str_plain_SSL_set_cert_cb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_list_29407ac2cfa5bacd5103ba17ced806aa_list", mod_consts.const_list_29407ac2cfa5bacd5103ba17ced806aa_list);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_list_29407ac2cfa5bacd5103ba17ced806aa_list) && "mod_consts.const_list_29407ac2cfa5bacd5103ba17ced806aa_list");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TLS_ST_BEFORE", mod_consts.const_str_plain_TLS_ST_BEFORE);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_TLS_ST_BEFORE) && "mod_consts.const_str_plain_TLS_ST_BEFORE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TLS_ST_OK", mod_consts.const_str_plain_TLS_ST_OK);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_TLS_ST_OK) && "mod_consts.const_str_plain_TLS_ST_OK");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_CTX_set1_sigalgs_list", mod_consts.const_str_plain_SSL_CTX_set1_sigalgs_list);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_CTX_set1_sigalgs_list) && "mod_consts.const_str_plain_SSL_CTX_set1_sigalgs_list");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_CTX_use_psk_identity_hint", mod_consts.const_str_plain_SSL_CTX_use_psk_identity_hint);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_CTX_use_psk_identity_hint) && "mod_consts.const_str_plain_SSL_CTX_use_psk_identity_hint");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_CTX_set_psk_server_callback", mod_consts.const_str_plain_SSL_CTX_set_psk_server_callback);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_CTX_set_psk_server_callback) && "mod_consts.const_str_plain_SSL_CTX_set_psk_server_callback");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_CTX_set_psk_client_callback", mod_consts.const_str_plain_SSL_CTX_set_psk_client_callback);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_CTX_set_psk_client_callback) && "mod_consts.const_str_plain_SSL_CTX_set_psk_client_callback");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_list_237d527dc3b5d1a771bb228dcdc6399c_list", mod_consts.const_list_237d527dc3b5d1a771bb228dcdc6399c_list);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_list_237d527dc3b5d1a771bb228dcdc6399c_list) && "mod_consts.const_list_237d527dc3b5d1a771bb228dcdc6399c_list");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_CTX_add_client_custom_ext", mod_consts.const_str_plain_SSL_CTX_add_client_custom_ext);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_CTX_add_client_custom_ext) && "mod_consts.const_str_plain_SSL_CTX_add_client_custom_ext");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_CTX_add_server_custom_ext", mod_consts.const_str_plain_SSL_CTX_add_server_custom_ext);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_CTX_add_server_custom_ext) && "mod_consts.const_str_plain_SSL_CTX_add_server_custom_ext");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_extension_supported", mod_consts.const_str_plain_SSL_extension_supported);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_extension_supported) && "mod_consts.const_str_plain_SSL_extension_supported");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_CTX_set_ciphersuites", mod_consts.const_str_plain_SSL_CTX_set_ciphersuites);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_CTX_set_ciphersuites) && "mod_consts.const_str_plain_SSL_CTX_set_ciphersuites");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_list_a9d761d10c8070d0e50809ea2453ff53_list", mod_consts.const_list_a9d761d10c8070d0e50809ea2453ff53_list);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_list_a9d761d10c8070d0e50809ea2453ff53_list) && "mod_consts.const_list_a9d761d10c8070d0e50809ea2453ff53_list");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_verify_client_post_handshake", mod_consts.const_str_plain_SSL_verify_client_post_handshake);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_verify_client_post_handshake) && "mod_consts.const_str_plain_SSL_verify_client_post_handshake");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_list_40064310c3feadaf4e508a2c4364ec5b_list", mod_consts.const_list_40064310c3feadaf4e508a2c4364ec5b_list);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_list_40064310c3feadaf4e508a2c4364ec5b_list) && "mod_consts.const_list_40064310c3feadaf4e508a2c4364ec5b_list");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_get0_verified_chain", mod_consts.const_str_plain_SSL_get0_verified_chain);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_get0_verified_chain) && "mod_consts.const_str_plain_SSL_get0_verified_chain");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_CTX_set_tlsext_use_srtp", mod_consts.const_str_plain_SSL_CTX_set_tlsext_use_srtp);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_CTX_set_tlsext_use_srtp) && "mod_consts.const_str_plain_SSL_CTX_set_tlsext_use_srtp");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_set_tlsext_use_srtp", mod_consts.const_str_plain_SSL_set_tlsext_use_srtp);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_set_tlsext_use_srtp) && "mod_consts.const_str_plain_SSL_set_tlsext_use_srtp");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_get_selected_srtp_profile", mod_consts.const_str_plain_SSL_get_selected_srtp_profile);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_get_selected_srtp_profile) && "mod_consts.const_str_plain_SSL_get_selected_srtp_profile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DTLS_get_data_mtu", mod_consts.const_str_plain_DTLS_get_data_mtu);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_DTLS_get_data_mtu) && "mod_consts.const_str_plain_DTLS_get_data_mtu");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_list_dca9a970b5bd3e7a57fe2c6c9a069172_list", mod_consts.const_list_dca9a970b5bd3e7a57fe2c6c9a069172_list);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_list_dca9a970b5bd3e7a57fe2c6c9a069172_list) && "mod_consts.const_list_dca9a970b5bd3e7a57fe2c6c9a069172_list");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BN_prime_checks_for_size", mod_consts.const_str_plain_BN_prime_checks_for_size);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_BN_prime_checks_for_size) && "mod_consts.const_str_plain_BN_prime_checks_for_size");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_R_UNEXPECTED_EOF_WHILE_READING", mod_consts.const_str_plain_SSL_R_UNEXPECTED_EOF_WHILE_READING);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_R_UNEXPECTED_EOF_WHILE_READING) && "mod_consts.const_str_plain_SSL_R_UNEXPECTED_EOF_WHILE_READING");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_OP_IGNORE_UNEXPECTED_EOF", mod_consts.const_str_plain_SSL_OP_IGNORE_UNEXPECTED_EOF);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_OP_IGNORE_UNEXPECTED_EOF) && "mod_consts.const_str_plain_SSL_OP_IGNORE_UNEXPECTED_EOF");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_get_extms_support", mod_consts.const_str_plain_SSL_get_extms_support);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_get_extms_support) && "mod_consts.const_str_plain_SSL_get_extms_support");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSL_get0_group_name", mod_consts.const_str_plain_SSL_get0_group_name);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSL_get0_group_name) && "mod_consts.const_str_plain_SSL_get0_group_name");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3", mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3) && "mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography_has_set_cert_cb", mod_consts.const_str_plain_cryptography_has_set_cert_cb);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography_has_set_cert_cb) && "mod_consts.const_str_plain_cryptography_has_set_cert_cb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography_has_ssl_st", mod_consts.const_str_plain_cryptography_has_ssl_st);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography_has_ssl_st) && "mod_consts.const_str_plain_cryptography_has_ssl_st");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography_has_tls_st", mod_consts.const_str_plain_cryptography_has_tls_st);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography_has_tls_st) && "mod_consts.const_str_plain_cryptography_has_tls_st");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography_has_ssl_sigalgs", mod_consts.const_str_plain_cryptography_has_ssl_sigalgs);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography_has_ssl_sigalgs) && "mod_consts.const_str_plain_cryptography_has_ssl_sigalgs");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography_has_psk", mod_consts.const_str_plain_cryptography_has_psk);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography_has_psk) && "mod_consts.const_str_plain_cryptography_has_psk");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography_has_psk_tlsv13", mod_consts.const_str_plain_cryptography_has_psk_tlsv13);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography_has_psk_tlsv13) && "mod_consts.const_str_plain_cryptography_has_psk_tlsv13");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography_has_custom_ext", mod_consts.const_str_plain_cryptography_has_custom_ext);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography_has_custom_ext) && "mod_consts.const_str_plain_cryptography_has_custom_ext");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography_has_tlsv13_functions", mod_consts.const_str_plain_cryptography_has_tlsv13_functions);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography_has_tlsv13_functions) && "mod_consts.const_str_plain_cryptography_has_tlsv13_functions");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography_has_tlsv13_hs_functions", mod_consts.const_str_plain_cryptography_has_tlsv13_hs_functions);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography_has_tlsv13_hs_functions) && "mod_consts.const_str_plain_cryptography_has_tlsv13_hs_functions");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cf08fe5adb71986559606b6420151552", mod_consts.const_str_digest_cf08fe5adb71986559606b6420151552);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_cf08fe5adb71986559606b6420151552) && "mod_consts.const_str_digest_cf08fe5adb71986559606b6420151552");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography_has_engine", mod_consts.const_str_plain_cryptography_has_engine);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography_has_engine) && "mod_consts.const_str_plain_cryptography_has_engine");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography_has_verified_chain", mod_consts.const_str_plain_cryptography_has_verified_chain);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography_has_verified_chain) && "mod_consts.const_str_plain_cryptography_has_verified_chain");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography_has_srtp", mod_consts.const_str_plain_cryptography_has_srtp);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography_has_srtp) && "mod_consts.const_str_plain_cryptography_has_srtp");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography_has_dtls_get_data_mtu", mod_consts.const_str_plain_cryptography_has_dtls_get_data_mtu);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography_has_dtls_get_data_mtu) && "mod_consts.const_str_plain_cryptography_has_dtls_get_data_mtu");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography_has_ssl_cookie", mod_consts.const_str_plain_cryptography_has_ssl_cookie);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography_has_ssl_cookie) && "mod_consts.const_str_plain_cryptography_has_ssl_cookie");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography_has_prime_checks", mod_consts.const_str_plain_cryptography_has_prime_checks);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography_has_prime_checks) && "mod_consts.const_str_plain_cryptography_has_prime_checks");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2d78557bb2bba1a9973799de4407673f", mod_consts.const_str_digest_2d78557bb2bba1a9973799de4407673f);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_2d78557bb2bba1a9973799de4407673f) && "mod_consts.const_str_digest_2d78557bb2bba1a9973799de4407673f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_97374a8aef8d7621a59ab78fe5423220", mod_consts.const_str_digest_97374a8aef8d7621a59ab78fe5423220);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_97374a8aef8d7621a59ab78fe5423220) && "mod_consts.const_str_digest_97374a8aef8d7621a59ab78fe5423220");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography_has_get_extms_support", mod_consts.const_str_plain_cryptography_has_get_extms_support);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography_has_get_extms_support) && "mod_consts.const_str_plain_cryptography_has_get_extms_support");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography_has_ssl_get0_group_name", mod_consts.const_str_plain_cryptography_has_ssl_get0_group_name);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography_has_ssl_get0_group_name) && "mod_consts.const_str_plain_cryptography_has_ssl_get0_group_name");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cryptography_HAS_SET_CERT_CB", mod_consts.const_str_plain_Cryptography_HAS_SET_CERT_CB);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_Cryptography_HAS_SET_CERT_CB) && "mod_consts.const_str_plain_Cryptography_HAS_SET_CERT_CB");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cryptography_HAS_SSL_ST", mod_consts.const_str_plain_Cryptography_HAS_SSL_ST);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_Cryptography_HAS_SSL_ST) && "mod_consts.const_str_plain_Cryptography_HAS_SSL_ST");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cryptography_HAS_TLS_ST", mod_consts.const_str_plain_Cryptography_HAS_TLS_ST);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_Cryptography_HAS_TLS_ST) && "mod_consts.const_str_plain_Cryptography_HAS_TLS_ST");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cryptography_HAS_SIGALGS", mod_consts.const_str_plain_Cryptography_HAS_SIGALGS);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_Cryptography_HAS_SIGALGS) && "mod_consts.const_str_plain_Cryptography_HAS_SIGALGS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cryptography_HAS_PSK", mod_consts.const_str_plain_Cryptography_HAS_PSK);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_Cryptography_HAS_PSK) && "mod_consts.const_str_plain_Cryptography_HAS_PSK");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cryptography_HAS_PSK_TLSv1_3", mod_consts.const_str_plain_Cryptography_HAS_PSK_TLSv1_3);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_Cryptography_HAS_PSK_TLSv1_3) && "mod_consts.const_str_plain_Cryptography_HAS_PSK_TLSv1_3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cryptography_HAS_CUSTOM_EXT", mod_consts.const_str_plain_Cryptography_HAS_CUSTOM_EXT);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_Cryptography_HAS_CUSTOM_EXT) && "mod_consts.const_str_plain_Cryptography_HAS_CUSTOM_EXT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cryptography_HAS_TLSv1_3_FUNCTIONS", mod_consts.const_str_plain_Cryptography_HAS_TLSv1_3_FUNCTIONS);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_Cryptography_HAS_TLSv1_3_FUNCTIONS) && "mod_consts.const_str_plain_Cryptography_HAS_TLSv1_3_FUNCTIONS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cryptography_HAS_TLSv1_3_HS_FUNCTIONS", mod_consts.const_str_plain_Cryptography_HAS_TLSv1_3_HS_FUNCTIONS);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_Cryptography_HAS_TLSv1_3_HS_FUNCTIONS) && "mod_consts.const_str_plain_Cryptography_HAS_TLSv1_3_HS_FUNCTIONS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2b19944986e2a9a13d58798ebcbdca17", mod_consts.const_str_digest_2b19944986e2a9a13d58798ebcbdca17);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_2b19944986e2a9a13d58798ebcbdca17) && "mod_consts.const_str_digest_2b19944986e2a9a13d58798ebcbdca17");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cryptography_HAS_ENGINE", mod_consts.const_str_plain_Cryptography_HAS_ENGINE);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_Cryptography_HAS_ENGINE) && "mod_consts.const_str_plain_Cryptography_HAS_ENGINE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cryptography_HAS_VERIFIED_CHAIN", mod_consts.const_str_plain_Cryptography_HAS_VERIFIED_CHAIN);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_Cryptography_HAS_VERIFIED_CHAIN) && "mod_consts.const_str_plain_Cryptography_HAS_VERIFIED_CHAIN");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cryptography_HAS_SRTP", mod_consts.const_str_plain_Cryptography_HAS_SRTP);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_Cryptography_HAS_SRTP) && "mod_consts.const_str_plain_Cryptography_HAS_SRTP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cryptography_HAS_DTLS_GET_DATA_MTU", mod_consts.const_str_plain_Cryptography_HAS_DTLS_GET_DATA_MTU);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_Cryptography_HAS_DTLS_GET_DATA_MTU) && "mod_consts.const_str_plain_Cryptography_HAS_DTLS_GET_DATA_MTU");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cryptography_HAS_SSL_COOKIE", mod_consts.const_str_plain_Cryptography_HAS_SSL_COOKIE);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_Cryptography_HAS_SSL_COOKIE) && "mod_consts.const_str_plain_Cryptography_HAS_SSL_COOKIE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cryptography_HAS_PRIME_CHECKS", mod_consts.const_str_plain_Cryptography_HAS_PRIME_CHECKS);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_Cryptography_HAS_PRIME_CHECKS) && "mod_consts.const_str_plain_Cryptography_HAS_PRIME_CHECKS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f583501c62c7ba847d9fd34ef2a9075e", mod_consts.const_str_digest_f583501c62c7ba847d9fd34ef2a9075e);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_f583501c62c7ba847d9fd34ef2a9075e) && "mod_consts.const_str_digest_f583501c62c7ba847d9fd34ef2a9075e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b81cbb63dc11c8e0123d0733e0f387f0", mod_consts.const_str_digest_b81cbb63dc11c8e0123d0733e0f387f0);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_b81cbb63dc11c8e0123d0733e0f387f0) && "mod_consts.const_str_digest_b81cbb63dc11c8e0123d0733e0f387f0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cryptography_HAS_GET_EXTMS_SUPPORT", mod_consts.const_str_plain_Cryptography_HAS_GET_EXTMS_SUPPORT);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_Cryptography_HAS_GET_EXTMS_SUPPORT) && "mod_consts.const_str_plain_Cryptography_HAS_GET_EXTMS_SUPPORT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cryptography_HAS_SSL_GET0_GROUP_NAME", mod_consts.const_str_plain_Cryptography_HAS_SSL_GET0_GROUP_NAME);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_Cryptography_HAS_SSL_GET0_GROUP_NAME) && "mod_consts.const_str_plain_Cryptography_HAS_SSL_GET0_GROUP_NAME");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CONDITIONAL_NAMES", mod_consts.const_str_plain_CONDITIONAL_NAMES);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_CONDITIONAL_NAMES) && "mod_consts.const_str_plain_CONDITIONAL_NAMES");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_47ba21151d4195fb9de5595022be41e7", mod_consts.const_str_digest_47ba21151d4195fb9de5595022be41e7);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_47ba21151d4195fb9de5595022be41e7) && "mod_consts.const_str_digest_47ba21151d4195fb9de5595022be41e7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fafbfe30544ba42854ed0b86baac5f84", mod_consts.const_str_digest_fafbfe30544ba42854ed0b86baac5f84);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_fafbfe30544ba42854ed0b86baac5f84) && "mod_consts.const_str_digest_fafbfe30544ba42854ed0b86baac5f84");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 21
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
static PyObject *module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_custom_ext(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_custom_ext);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cryptography_has_custom_ext);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cryptography_has_custom_ext, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cryptography_has_custom_ext);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cryptography_has_custom_ext, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_custom_ext);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_custom_ext);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_custom_ext);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_dtls_get_data_mtu(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_dtls_get_data_mtu);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cryptography_has_dtls_get_data_mtu);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cryptography_has_dtls_get_data_mtu, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cryptography_has_dtls_get_data_mtu);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cryptography_has_dtls_get_data_mtu, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_dtls_get_data_mtu);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_dtls_get_data_mtu);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_dtls_get_data_mtu);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_engine(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_engine);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cryptography_has_engine);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cryptography_has_engine, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cryptography_has_engine);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cryptography_has_engine, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_engine);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_engine);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_engine);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_get_extms_support(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_get_extms_support);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cryptography_has_get_extms_support);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cryptography_has_get_extms_support, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cryptography_has_get_extms_support);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cryptography_has_get_extms_support, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_get_extms_support);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_get_extms_support);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_get_extms_support);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_prime_checks(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_prime_checks);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cryptography_has_prime_checks);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cryptography_has_prime_checks, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cryptography_has_prime_checks);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cryptography_has_prime_checks, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_prime_checks);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_prime_checks);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_prime_checks);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_psk(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_psk);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cryptography_has_psk);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cryptography_has_psk, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cryptography_has_psk);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cryptography_has_psk, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_psk);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_psk);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_psk);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_psk_tlsv13(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_psk_tlsv13);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cryptography_has_psk_tlsv13);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cryptography_has_psk_tlsv13, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cryptography_has_psk_tlsv13);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cryptography_has_psk_tlsv13, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_psk_tlsv13);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_psk_tlsv13);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_psk_tlsv13);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_set_cert_cb(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_set_cert_cb);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cryptography_has_set_cert_cb);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cryptography_has_set_cert_cb, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cryptography_has_set_cert_cb);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cryptography_has_set_cert_cb, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_set_cert_cb);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_set_cert_cb);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_set_cert_cb);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_srtp(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_srtp);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cryptography_has_srtp);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cryptography_has_srtp, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cryptography_has_srtp);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cryptography_has_srtp, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_srtp);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_srtp);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_srtp);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_ssl_cookie(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_ssl_cookie);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cryptography_has_ssl_cookie);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cryptography_has_ssl_cookie, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cryptography_has_ssl_cookie);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cryptography_has_ssl_cookie, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_ssl_cookie);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_ssl_cookie);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_ssl_cookie);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_ssl_get0_group_name(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_ssl_get0_group_name);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cryptography_has_ssl_get0_group_name);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cryptography_has_ssl_get0_group_name, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cryptography_has_ssl_get0_group_name);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cryptography_has_ssl_get0_group_name, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_ssl_get0_group_name);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_ssl_get0_group_name);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_ssl_get0_group_name);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_ssl_op_ignore_unexpected_eof(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_digest_97374a8aef8d7621a59ab78fe5423220);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_97374a8aef8d7621a59ab78fe5423220);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_97374a8aef8d7621a59ab78fe5423220, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_97374a8aef8d7621a59ab78fe5423220);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_97374a8aef8d7621a59ab78fe5423220, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_digest_97374a8aef8d7621a59ab78fe5423220);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_digest_97374a8aef8d7621a59ab78fe5423220);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_97374a8aef8d7621a59ab78fe5423220);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_ssl_sigalgs(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_ssl_sigalgs);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cryptography_has_ssl_sigalgs);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cryptography_has_ssl_sigalgs, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cryptography_has_ssl_sigalgs);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cryptography_has_ssl_sigalgs, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_ssl_sigalgs);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_ssl_sigalgs);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_ssl_sigalgs);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_ssl_st(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_ssl_st);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cryptography_has_ssl_st);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cryptography_has_ssl_st, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cryptography_has_ssl_st);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cryptography_has_ssl_st, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_ssl_st);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_ssl_st);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_ssl_st);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_ssl_verify_client_post_handshake(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_digest_cf08fe5adb71986559606b6420151552);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_cf08fe5adb71986559606b6420151552);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_cf08fe5adb71986559606b6420151552, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_cf08fe5adb71986559606b6420151552);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_cf08fe5adb71986559606b6420151552, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_digest_cf08fe5adb71986559606b6420151552);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_digest_cf08fe5adb71986559606b6420151552);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_cf08fe5adb71986559606b6420151552);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_tls_st(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_tls_st);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cryptography_has_tls_st);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cryptography_has_tls_st, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cryptography_has_tls_st);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cryptography_has_tls_st, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_tls_st);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_tls_st);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_tls_st);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_tlsv13_functions(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_tlsv13_functions);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cryptography_has_tlsv13_functions);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cryptography_has_tlsv13_functions, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cryptography_has_tlsv13_functions);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cryptography_has_tlsv13_functions, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_tlsv13_functions);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_tlsv13_functions);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_tlsv13_functions);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_tlsv13_hs_functions(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_tlsv13_hs_functions);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cryptography_has_tlsv13_hs_functions);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cryptography_has_tlsv13_hs_functions, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cryptography_has_tlsv13_hs_functions);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cryptography_has_tlsv13_hs_functions, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_tlsv13_hs_functions);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_tlsv13_hs_functions);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_tlsv13_hs_functions);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_unexpected_eof_while_reading(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_digest_2d78557bb2bba1a9973799de4407673f);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_2d78557bb2bba1a9973799de4407673f);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_2d78557bb2bba1a9973799de4407673f, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_2d78557bb2bba1a9973799de4407673f);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_2d78557bb2bba1a9973799de4407673f, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_digest_2d78557bb2bba1a9973799de4407673f);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_digest_2d78557bb2bba1a9973799de4407673f);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_2d78557bb2bba1a9973799de4407673f);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_verified_chain(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_verified_chain);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$bindings$openssl$_conditional->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cryptography_has_verified_chain);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cryptography_has_verified_chain, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cryptography_has_verified_chain);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cryptography_has_verified_chain, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_verified_chain);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_verified_chain);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_verified_chain);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_9ad241285bcdcb0602abb5d0ef4a731c;
static PyCodeObject *code_objects_716db1de4e89d59aee5c6e89799f9860;
static PyCodeObject *code_objects_12e2aa1a389509114fa7ad57491bedef;
static PyCodeObject *code_objects_088ff9333ff054dd06837a1dc7455ca4;
static PyCodeObject *code_objects_abd0808cba510fc80a2b291240cf26c5;
static PyCodeObject *code_objects_7157147842fc268ca80d383ad753f7a0;
static PyCodeObject *code_objects_859f086df2040701be6d2ff4ca1fb476;
static PyCodeObject *code_objects_91649608fb4db3593ae9538f1ac896d8;
static PyCodeObject *code_objects_1e8417b238ec00e50282955d82961d64;
static PyCodeObject *code_objects_f0d9e9eacfea45e48088ae1fa11d7487;
static PyCodeObject *code_objects_e79f26afa67434f4df972ca30f6de244;
static PyCodeObject *code_objects_7cfde5cfa45deb062eb986c6bbec2899;
static PyCodeObject *code_objects_cf01527d434af284c0e55077b35a4565;
static PyCodeObject *code_objects_181d193ed329345cb2ca51c5b44cb49b;
static PyCodeObject *code_objects_f74ea973409602df15f7906b13e49474;
static PyCodeObject *code_objects_50d9514b7e91e5bd5bdf20de4f425d66;
static PyCodeObject *code_objects_449728c4fe8f65482d351d5396ff9d92;
static PyCodeObject *code_objects_50fc64347e194971cf8dede08e240946;
static PyCodeObject *code_objects_a7790209db77184f8a7bfc6dce9bc9ae;
static PyCodeObject *code_objects_7e3e7913334b4ea8ccae65caaa70c93a;
static PyCodeObject *code_objects_56e9852d1e34cb59ce0b033a428e24b2;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_47ba21151d4195fb9de5595022be41e7); CHECK_OBJECT(module_filename_obj);
code_objects_9ad241285bcdcb0602abb5d0ef4a731c = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_fafbfe30544ba42854ed0b86baac5f84, mod_consts.const_str_digest_fafbfe30544ba42854ed0b86baac5f84, NULL, NULL, 0, 0, 0);
code_objects_716db1de4e89d59aee5c6e89799f9860 = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cryptography_has_custom_ext, mod_consts.const_str_plain_cryptography_has_custom_ext, NULL, NULL, 0, 0, 0);
code_objects_12e2aa1a389509114fa7ad57491bedef = MAKE_CODE_OBJECT(module_filename_obj, 123, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cryptography_has_dtls_get_data_mtu, mod_consts.const_str_plain_cryptography_has_dtls_get_data_mtu, NULL, NULL, 0, 0, 0);
code_objects_088ff9333ff054dd06837a1dc7455ca4 = MAKE_CODE_OBJECT(module_filename_obj, 90, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cryptography_has_engine, mod_consts.const_str_plain_cryptography_has_engine, NULL, NULL, 0, 0, 0);
code_objects_abd0808cba510fc80a2b291240cf26c5 = MAKE_CODE_OBJECT(module_filename_obj, 155, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cryptography_has_get_extms_support, mod_consts.const_str_plain_cryptography_has_get_extms_support, NULL, NULL, 0, 0, 0);
code_objects_7157147842fc268ca80d383ad753f7a0 = MAKE_CODE_OBJECT(module_filename_obj, 139, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cryptography_has_prime_checks, mod_consts.const_str_plain_cryptography_has_prime_checks, NULL, NULL, 0, 0, 0);
code_objects_859f086df2040701be6d2ff4ca1fb476 = MAKE_CODE_OBJECT(module_filename_obj, 37, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cryptography_has_psk, mod_consts.const_str_plain_cryptography_has_psk, NULL, NULL, 0, 0, 0);
code_objects_91649608fb4db3593ae9538f1ac896d8 = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cryptography_has_psk_tlsv13, mod_consts.const_str_plain_cryptography_has_psk_tlsv13, NULL, NULL, 0, 0, 0);
code_objects_1e8417b238ec00e50282955d82961d64 = MAKE_CODE_OBJECT(module_filename_obj, 8, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cryptography_has_set_cert_cb, mod_consts.const_str_plain_cryptography_has_set_cert_cb, NULL, NULL, 0, 0, 0);
code_objects_f0d9e9eacfea45e48088ae1fa11d7487 = MAKE_CODE_OBJECT(module_filename_obj, 115, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cryptography_has_srtp, mod_consts.const_str_plain_cryptography_has_srtp, NULL, NULL, 0, 0, 0);
code_objects_e79f26afa67434f4df972ca30f6de244 = MAKE_CODE_OBJECT(module_filename_obj, 129, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cryptography_has_ssl_cookie, mod_consts.const_str_plain_cryptography_has_ssl_cookie, NULL, NULL, 0, 0, 0);
code_objects_7cfde5cfa45deb062eb986c6bbec2899 = MAKE_CODE_OBJECT(module_filename_obj, 159, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cryptography_has_ssl_get0_group_name, mod_consts.const_str_plain_cryptography_has_ssl_get0_group_name, NULL, NULL, 0, 0, 0);
code_objects_cf01527d434af284c0e55077b35a4565 = MAKE_CODE_OBJECT(module_filename_obj, 149, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_97374a8aef8d7621a59ab78fe5423220, mod_consts.const_str_digest_97374a8aef8d7621a59ab78fe5423220, NULL, NULL, 0, 0, 0);
code_objects_181d193ed329345cb2ca51c5b44cb49b = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cryptography_has_ssl_sigalgs, mod_consts.const_str_plain_cryptography_has_ssl_sigalgs, NULL, NULL, 0, 0, 0);
code_objects_f74ea973409602df15f7906b13e49474 = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cryptography_has_ssl_st, mod_consts.const_str_plain_cryptography_has_ssl_st, NULL, NULL, 0, 0, 0);
code_objects_50d9514b7e91e5bd5bdf20de4f425d66 = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_cf08fe5adb71986559606b6420151552, mod_consts.const_str_digest_cf08fe5adb71986559606b6420151552, NULL, NULL, 0, 0, 0);
code_objects_449728c4fe8f65482d351d5396ff9d92 = MAKE_CODE_OBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cryptography_has_tls_st, mod_consts.const_str_plain_cryptography_has_tls_st, NULL, NULL, 0, 0, 0);
code_objects_50fc64347e194971cf8dede08e240946 = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cryptography_has_tlsv13_functions, mod_consts.const_str_plain_cryptography_has_tlsv13_functions, NULL, NULL, 0, 0, 0);
code_objects_a7790209db77184f8a7bfc6dce9bc9ae = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cryptography_has_tlsv13_hs_functions, mod_consts.const_str_plain_cryptography_has_tlsv13_hs_functions, NULL, NULL, 0, 0, 0);
code_objects_7e3e7913334b4ea8ccae65caaa70c93a = MAKE_CODE_OBJECT(module_filename_obj, 145, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_2d78557bb2bba1a9973799de4407673f, mod_consts.const_str_digest_2d78557bb2bba1a9973799de4407673f, NULL, NULL, 0, 0, 0);
code_objects_56e9852d1e34cb59ce0b033a428e24b2 = MAKE_CODE_OBJECT(module_filename_obj, 109, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cryptography_has_verified_chain, mod_consts.const_str_plain_cryptography_has_verified_chain, NULL, NULL, 0, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__10_cryptography_has_ssl_verify_client_post_handshake(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__11_cryptography_has_engine(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__12_cryptography_has_verified_chain(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__13_cryptography_has_srtp(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__14_cryptography_has_dtls_get_data_mtu(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__15_cryptography_has_ssl_cookie(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__16_cryptography_has_prime_checks(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__17_cryptography_has_unexpected_eof_while_reading(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__18_cryptography_has_ssl_op_ignore_unexpected_eof(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__19_cryptography_has_get_extms_support(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__1_cryptography_has_set_cert_cb(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__20_cryptography_has_ssl_get0_group_name(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__2_cryptography_has_ssl_st(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__3_cryptography_has_tls_st(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__4_cryptography_has_ssl_sigalgs(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__5_cryptography_has_psk(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__6_cryptography_has_psk_tlsv13(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__7_cryptography_has_custom_ext(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__8_cryptography_has_tlsv13_functions(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__9_cryptography_has_tlsv13_hs_functions(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__1_cryptography_has_set_cert_cb(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.
tmp_return_value = MAKE_LIST2(tstate, mod_consts.const_str_plain_SSL_CTX_set_cert_cb,mod_consts.const_str_plain_SSL_set_cert_cb);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__2_cryptography_has_ssl_st(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.
tmp_return_value = MAKE_LIST4(tstate, mod_consts.const_list_29407ac2cfa5bacd5103ba17ced806aa_list);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__3_cryptography_has_tls_st(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.
tmp_return_value = MAKE_LIST2(tstate, mod_consts.const_str_plain_TLS_ST_BEFORE,mod_consts.const_str_plain_TLS_ST_OK);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__4_cryptography_has_ssl_sigalgs(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.
tmp_return_value = MAKE_LIST1(tstate, mod_consts.const_str_plain_SSL_CTX_set1_sigalgs_list);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__5_cryptography_has_psk(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.
tmp_return_value = MAKE_LIST3(tstate, mod_consts.const_str_plain_SSL_CTX_use_psk_identity_hint,mod_consts.const_str_plain_SSL_CTX_set_psk_server_callback,mod_consts.const_str_plain_SSL_CTX_set_psk_client_callback);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__6_cryptography_has_psk_tlsv13(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.
tmp_return_value = MAKE_LIST7(tstate, mod_consts.const_list_237d527dc3b5d1a771bb228dcdc6399c_list);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__7_cryptography_has_custom_ext(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.
tmp_return_value = MAKE_LIST3(tstate, mod_consts.const_str_plain_SSL_CTX_add_client_custom_ext,mod_consts.const_str_plain_SSL_CTX_add_server_custom_ext,mod_consts.const_str_plain_SSL_extension_supported);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__8_cryptography_has_tlsv13_functions(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.
tmp_return_value = MAKE_LIST1(tstate, mod_consts.const_str_plain_SSL_CTX_set_ciphersuites);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__9_cryptography_has_tlsv13_hs_functions(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.
tmp_return_value = MAKE_LIST8(tstate, mod_consts.const_list_a9d761d10c8070d0e50809ea2453ff53_list);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__10_cryptography_has_ssl_verify_client_post_handshake(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.
tmp_return_value = MAKE_LIST1(tstate, mod_consts.const_str_plain_SSL_verify_client_post_handshake);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__11_cryptography_has_engine(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.
tmp_return_value = LIST_COPY(tstate, mod_consts.const_list_40064310c3feadaf4e508a2c4364ec5b_list);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__12_cryptography_has_verified_chain(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.
tmp_return_value = MAKE_LIST1(tstate, mod_consts.const_str_plain_SSL_get0_verified_chain);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__13_cryptography_has_srtp(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.
tmp_return_value = MAKE_LIST3(tstate, mod_consts.const_str_plain_SSL_CTX_set_tlsext_use_srtp,mod_consts.const_str_plain_SSL_set_tlsext_use_srtp,mod_consts.const_str_plain_SSL_get_selected_srtp_profile);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__14_cryptography_has_dtls_get_data_mtu(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.
tmp_return_value = MAKE_LIST1(tstate, mod_consts.const_str_plain_DTLS_get_data_mtu);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__15_cryptography_has_ssl_cookie(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.
tmp_return_value = MAKE_LIST5(tstate, mod_consts.const_list_dca9a970b5bd3e7a57fe2c6c9a069172_list);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__16_cryptography_has_prime_checks(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.
tmp_return_value = MAKE_LIST1(tstate, mod_consts.const_str_plain_BN_prime_checks_for_size);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__17_cryptography_has_unexpected_eof_while_reading(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.
tmp_return_value = MAKE_LIST1(tstate, mod_consts.const_str_plain_SSL_R_UNEXPECTED_EOF_WHILE_READING);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__18_cryptography_has_ssl_op_ignore_unexpected_eof(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.
tmp_return_value = MAKE_LIST1(tstate, mod_consts.const_str_plain_SSL_OP_IGNORE_UNEXPECTED_EOF);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__19_cryptography_has_get_extms_support(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.
tmp_return_value = MAKE_LIST1(tstate, mod_consts.const_str_plain_SSL_get_extms_support);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__20_cryptography_has_ssl_get0_group_name(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.
tmp_return_value = MAKE_LIST1(tstate, mod_consts.const_str_plain_SSL_get0_group_name);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__10_cryptography_has_ssl_verify_client_post_handshake(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__10_cryptography_has_ssl_verify_client_post_handshake,
        mod_consts.const_str_digest_cf08fe5adb71986559606b6420151552,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_50d9514b7e91e5bd5bdf20de4f425d66,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__11_cryptography_has_engine(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__11_cryptography_has_engine,
        mod_consts.const_str_plain_cryptography_has_engine,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_088ff9333ff054dd06837a1dc7455ca4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__12_cryptography_has_verified_chain(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__12_cryptography_has_verified_chain,
        mod_consts.const_str_plain_cryptography_has_verified_chain,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_56e9852d1e34cb59ce0b033a428e24b2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__13_cryptography_has_srtp(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__13_cryptography_has_srtp,
        mod_consts.const_str_plain_cryptography_has_srtp,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f0d9e9eacfea45e48088ae1fa11d7487,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__14_cryptography_has_dtls_get_data_mtu(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__14_cryptography_has_dtls_get_data_mtu,
        mod_consts.const_str_plain_cryptography_has_dtls_get_data_mtu,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_12e2aa1a389509114fa7ad57491bedef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__15_cryptography_has_ssl_cookie(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__15_cryptography_has_ssl_cookie,
        mod_consts.const_str_plain_cryptography_has_ssl_cookie,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e79f26afa67434f4df972ca30f6de244,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__16_cryptography_has_prime_checks(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__16_cryptography_has_prime_checks,
        mod_consts.const_str_plain_cryptography_has_prime_checks,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7157147842fc268ca80d383ad753f7a0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__17_cryptography_has_unexpected_eof_while_reading(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__17_cryptography_has_unexpected_eof_while_reading,
        mod_consts.const_str_digest_2d78557bb2bba1a9973799de4407673f,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7e3e7913334b4ea8ccae65caaa70c93a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__18_cryptography_has_ssl_op_ignore_unexpected_eof(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__18_cryptography_has_ssl_op_ignore_unexpected_eof,
        mod_consts.const_str_digest_97374a8aef8d7621a59ab78fe5423220,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_cf01527d434af284c0e55077b35a4565,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__19_cryptography_has_get_extms_support(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__19_cryptography_has_get_extms_support,
        mod_consts.const_str_plain_cryptography_has_get_extms_support,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_abd0808cba510fc80a2b291240cf26c5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__1_cryptography_has_set_cert_cb(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__1_cryptography_has_set_cert_cb,
        mod_consts.const_str_plain_cryptography_has_set_cert_cb,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1e8417b238ec00e50282955d82961d64,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__20_cryptography_has_ssl_get0_group_name(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__20_cryptography_has_ssl_get0_group_name,
        mod_consts.const_str_plain_cryptography_has_ssl_get0_group_name,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7cfde5cfa45deb062eb986c6bbec2899,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__2_cryptography_has_ssl_st(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__2_cryptography_has_ssl_st,
        mod_consts.const_str_plain_cryptography_has_ssl_st,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f74ea973409602df15f7906b13e49474,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__3_cryptography_has_tls_st(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__3_cryptography_has_tls_st,
        mod_consts.const_str_plain_cryptography_has_tls_st,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_449728c4fe8f65482d351d5396ff9d92,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__4_cryptography_has_ssl_sigalgs(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__4_cryptography_has_ssl_sigalgs,
        mod_consts.const_str_plain_cryptography_has_ssl_sigalgs,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_181d193ed329345cb2ca51c5b44cb49b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__5_cryptography_has_psk(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__5_cryptography_has_psk,
        mod_consts.const_str_plain_cryptography_has_psk,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_859f086df2040701be6d2ff4ca1fb476,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__6_cryptography_has_psk_tlsv13(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__6_cryptography_has_psk_tlsv13,
        mod_consts.const_str_plain_cryptography_has_psk_tlsv13,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_91649608fb4db3593ae9538f1ac896d8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__7_cryptography_has_custom_ext(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__7_cryptography_has_custom_ext,
        mod_consts.const_str_plain_cryptography_has_custom_ext,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_716db1de4e89d59aee5c6e89799f9860,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__8_cryptography_has_tlsv13_functions(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__8_cryptography_has_tlsv13_functions,
        mod_consts.const_str_plain_cryptography_has_tlsv13_functions,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_50fc64347e194971cf8dede08e240946,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__9_cryptography_has_tlsv13_hs_functions(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__9_cryptography_has_tlsv13_hs_functions,
        mod_consts.const_str_plain_cryptography_has_tlsv13_hs_functions,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a7790209db77184f8a7bfc6dce9bc9ae,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
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

static function_impl_code const function_table_cryptography$hazmat$bindings$openssl$_conditional[] = {
impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__1_cryptography_has_set_cert_cb,
impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__2_cryptography_has_ssl_st,
impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__3_cryptography_has_tls_st,
impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__4_cryptography_has_ssl_sigalgs,
impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__5_cryptography_has_psk,
impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__6_cryptography_has_psk_tlsv13,
impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__7_cryptography_has_custom_ext,
impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__8_cryptography_has_tlsv13_functions,
impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__9_cryptography_has_tlsv13_hs_functions,
impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__10_cryptography_has_ssl_verify_client_post_handshake,
impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__11_cryptography_has_engine,
impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__12_cryptography_has_verified_chain,
impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__13_cryptography_has_srtp,
impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__14_cryptography_has_dtls_get_data_mtu,
impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__15_cryptography_has_ssl_cookie,
impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__16_cryptography_has_prime_checks,
impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__17_cryptography_has_unexpected_eof_while_reading,
impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__18_cryptography_has_ssl_op_ignore_unexpected_eof,
impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__19_cryptography_has_get_extms_support,
impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__20_cryptography_has_ssl_get0_group_name,
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

    return Nuitka_Function_GetFunctionState(function, function_table_cryptography$hazmat$bindings$openssl$_conditional);
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
        module_cryptography$hazmat$bindings$openssl$_conditional,
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
        function_table_cryptography$hazmat$bindings$openssl$_conditional,
        sizeof(function_table_cryptography$hazmat$bindings$openssl$_conditional) / sizeof(function_impl_code)
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
static char const *module_full_name = "cryptography.hazmat.bindings.openssl._conditional";
#endif

// Internal entry point for module code.
PyObject *module_code_cryptography$hazmat$bindings$openssl$_conditional(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("cryptography$hazmat$bindings$openssl$_conditional");

    // Store the module for future use.
    module_cryptography$hazmat$bindings$openssl$_conditional = module;

    moduledict_cryptography$hazmat$bindings$openssl$_conditional = MODULE_DICT(module_cryptography$hazmat$bindings$openssl$_conditional);

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
        PRINT_STRING("cryptography$hazmat$bindings$openssl$_conditional: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("cryptography$hazmat$bindings$openssl$_conditional: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("cryptography$hazmat$bindings$openssl$_conditional: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "cryptography.hazmat.bindings.openssl._conditional" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initcryptography$hazmat$bindings$openssl$_conditional\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_cryptography$hazmat$bindings$openssl$_conditional,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$bindings$openssl$_conditional,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$bindings$openssl$_conditional,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$bindings$openssl$_conditional,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$bindings$openssl$_conditional,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_cryptography$hazmat$bindings$openssl$_conditional);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_cryptography$hazmat$bindings$openssl$_conditional);
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

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$bindings$openssl$_conditional;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_cryptography$hazmat$bindings$openssl$_conditional = MAKE_MODULE_FRAME(code_objects_9ad241285bcdcb0602abb5d0ef4a731c, module_cryptography$hazmat$bindings$openssl$_conditional);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$bindings$openssl$_conditional);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$bindings$openssl$_conditional) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$__spec__(tstate);
assert(!(tmp_ass_attr_target_2 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain_has_location, tmp_ass_attr_value_2);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$bindings$openssl$_conditional, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$bindings$openssl$_conditional->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$bindings$openssl$_conditional, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_cryptography$hazmat$bindings$openssl$_conditional);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = Py_None;
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3);

tmp_assign_source_6 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__1_cryptography_has_set_cert_cb(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_set_cert_cb, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3);

tmp_assign_source_7 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__2_cryptography_has_ssl_st(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_ssl_st, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3);

tmp_assign_source_8 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__3_cryptography_has_tls_st(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_tls_st, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3);

tmp_assign_source_9 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__4_cryptography_has_ssl_sigalgs(tstate, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_ssl_sigalgs, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3);

tmp_assign_source_10 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__5_cryptography_has_psk(tstate, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_psk, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3);

tmp_assign_source_11 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__6_cryptography_has_psk_tlsv13(tstate, tmp_annotations_6);

UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_psk_tlsv13, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3);

tmp_assign_source_12 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__7_cryptography_has_custom_ext(tstate, tmp_annotations_7);

UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_custom_ext, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3);

tmp_assign_source_13 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__8_cryptography_has_tlsv13_functions(tstate, tmp_annotations_8);

UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_tlsv13_functions, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3);

tmp_assign_source_14 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__9_cryptography_has_tlsv13_hs_functions(tstate, tmp_annotations_9);

UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_tlsv13_hs_functions, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3);

tmp_assign_source_15 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__10_cryptography_has_ssl_verify_client_post_handshake(tstate, tmp_annotations_10);

UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_digest_cf08fe5adb71986559606b6420151552, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3);

tmp_assign_source_16 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__11_cryptography_has_engine(tstate, tmp_annotations_11);

UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_engine, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_annotations_12;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3);

tmp_assign_source_17 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__12_cryptography_has_verified_chain(tstate, tmp_annotations_12);

UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_verified_chain, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_annotations_13;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3);

tmp_assign_source_18 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__13_cryptography_has_srtp(tstate, tmp_annotations_13);

UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_srtp, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_annotations_14;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3);

tmp_assign_source_19 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__14_cryptography_has_dtls_get_data_mtu(tstate, tmp_annotations_14);

UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_dtls_get_data_mtu, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_annotations_15;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3);

tmp_assign_source_20 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__15_cryptography_has_ssl_cookie(tstate, tmp_annotations_15);

UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_ssl_cookie, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_annotations_16;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3);

tmp_assign_source_21 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__16_cryptography_has_prime_checks(tstate, tmp_annotations_16);

UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_prime_checks, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_annotations_17;
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3);

tmp_assign_source_22 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__17_cryptography_has_unexpected_eof_while_reading(tstate, tmp_annotations_17);

UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_digest_2d78557bb2bba1a9973799de4407673f, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_annotations_18;
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3);

tmp_assign_source_23 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__18_cryptography_has_ssl_op_ignore_unexpected_eof(tstate, tmp_annotations_18);

UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_digest_97374a8aef8d7621a59ab78fe5423220, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_annotations_19;
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3);

tmp_assign_source_24 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__19_cryptography_has_get_extms_support(tstate, tmp_annotations_19);

UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_get_extms_support, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_annotations_20;
tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3);

tmp_assign_source_25 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__20_cryptography_has_ssl_get0_group_name(tstate, tmp_annotations_20);

UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_has_ssl_get0_group_name, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_Cryptography_HAS_SET_CERT_CB;
tmp_dict_value_1 = module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_set_cert_cb(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_assign_source_26 = _PyDict_NewPresized( 20 );
tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_Cryptography_HAS_SSL_ST;
tmp_dict_value_1 = module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_ssl_st(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_Cryptography_HAS_TLS_ST;
tmp_dict_value_1 = module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_tls_st(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_Cryptography_HAS_SIGALGS;
tmp_dict_value_1 = module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_ssl_sigalgs(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_Cryptography_HAS_PSK;
tmp_dict_value_1 = module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_psk(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_Cryptography_HAS_PSK_TLSv1_3;
tmp_dict_value_1 = module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_psk_tlsv13(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_Cryptography_HAS_CUSTOM_EXT;
tmp_dict_value_1 = module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_custom_ext(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_Cryptography_HAS_TLSv1_3_FUNCTIONS;
tmp_dict_value_1 = module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_tlsv13_functions(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_Cryptography_HAS_TLSv1_3_HS_FUNCTIONS;
tmp_dict_value_1 = module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_tlsv13_hs_functions(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_digest_2b19944986e2a9a13d58798ebcbdca17;
tmp_dict_value_1 = module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_ssl_verify_client_post_handshake(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_Cryptography_HAS_ENGINE;
tmp_dict_value_1 = module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_engine(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_Cryptography_HAS_VERIFIED_CHAIN;
tmp_dict_value_1 = module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_verified_chain(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_Cryptography_HAS_SRTP;
tmp_dict_value_1 = module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_srtp(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_Cryptography_HAS_DTLS_GET_DATA_MTU;
tmp_dict_value_1 = module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_dtls_get_data_mtu(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_Cryptography_HAS_SSL_COOKIE;
tmp_dict_value_1 = module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_ssl_cookie(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_Cryptography_HAS_PRIME_CHECKS;
tmp_dict_value_1 = module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_prime_checks(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_digest_f583501c62c7ba847d9fd34ef2a9075e;
tmp_dict_value_1 = module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_unexpected_eof_while_reading(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_digest_b81cbb63dc11c8e0123d0733e0f387f0;
tmp_dict_value_1 = module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_ssl_op_ignore_unexpected_eof(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_Cryptography_HAS_GET_EXTMS_SUPPORT;
tmp_dict_value_1 = module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_get_extms_support(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_Cryptography_HAS_SSL_GET0_GROUP_NAME;
tmp_dict_value_1 = module_var_accessor_cryptography$hazmat$bindings$openssl$_conditional$cryptography_has_ssl_get0_group_name(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts.const_str_plain_CONDITIONAL_NAMES, tmp_assign_source_26);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("cryptography$hazmat$bindings$openssl$_conditional", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "cryptography.hazmat.bindings.openssl._conditional" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_cryptography$hazmat$bindings$openssl$_conditional);
    return module_cryptography$hazmat$bindings$openssl$_conditional;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("cryptography$hazmat$bindings$openssl$_conditional", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
