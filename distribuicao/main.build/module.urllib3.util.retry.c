/* Generated code for Python module 'urllib3$util$retry'
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



/* The "module_urllib3$util$retry" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$util$retry;
PyDictObject *moduledict_urllib3$util$retry;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_total;
PyObject *const_str_plain_connect;
PyObject *const_str_plain_status;
PyObject *const_str_plain_other;
PyObject *const_str_plain_redirect;
PyObject *const_str_plain_status_forcelist;
PyObject *const_str_plain_allowed_methods;
PyObject *const_str_plain_backoff_factor;
PyObject *const_str_plain_backoff_max;
PyObject *const_str_plain_retry_after_max;
PyObject *const_str_plain_raise_on_redirect;
PyObject *const_str_plain_raise_on_status;
PyObject *const_str_plain_history;
PyObject *const_str_plain_respect_retry_after_header;
PyObject *const_str_plain_remove_headers_on_redirect;
PyObject *const_str_plain_backoff_jitter;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_62d805184c0319e291ba36f70b7ad180;
PyObject *const_str_plain_DEFAULT;
PyObject *const_str_plain_Retry;
PyObject *const_tuple_str_plain_redirect_tuple;
PyObject *const_str_plain_log;
PyObject *const_str_plain_debug;
PyObject *const_str_digest_3ff146bf2cbf06e10d34294d9109668e;
PyObject *const_str_digest_2b98f5690a439fdd4e367661232170cf;
PyObject *const_str_plain_takewhile;
PyObject *const_str_angle_lambda;
PyObject *const_str_digest_96630de8eadb33fda97640a57fbbbd1c;
PyObject *const_int_pos_2;
PyObject *const_str_plain_random;
PyObject *const_str_plain_max;
PyObject *const_str_plain_min;
PyObject *const_str_digest_ac71cbae841ee68a5d2644f8330f1112;
PyObject *const_str_plain_redirect_location;
PyObject *const_str_plain_re;
PyObject *const_str_plain_match;
PyObject *const_str_digest_d43b7afa583ad163d56ae0bbfdcdb575;
PyObject *const_str_plain_email;
PyObject *const_str_plain_utils;
PyObject *const_str_plain_parsedate_tz;
PyObject *const_str_plain_InvalidHeader;
PyObject *const_str_digest_f3c0f426f8315adff05383979f4e867d;
PyObject *const_str_plain_mktime_tz;
PyObject *const_str_plain_time;
PyObject *const_str_plain_headers;
PyObject *const_tuple_str_digest_53eb1bcf3283c3fcccb95b51de02ce94_tuple;
PyObject *const_str_plain_parse_retry_after;
PyObject *const_str_digest_a7cc568753f4d14c2254e04b979d2baa;
PyObject *const_str_plain_get_retry_after;
PyObject *const_str_plain_sleep;
PyObject *const_str_plain_get_backoff_time;
PyObject *const_str_plain_sleep_for_retry;
PyObject *const_str_plain__sleep_backoff;
PyObject *const_str_digest_62cff4868e3e5eb3258a26643ddfa300;
PyObject *const_str_plain_ProxyError;
PyObject *const_str_plain_original_error;
PyObject *const_str_plain_ConnectTimeoutError;
PyObject *const_str_digest_f0233bdbe36bf116adbb4a2ecc938e1b;
PyObject *const_str_plain_ReadTimeoutError;
PyObject *const_str_plain_ProtocolError;
PyObject *const_str_digest_d9a68c2d44e8989e975d546861154deb;
PyObject *const_str_plain_upper;
PyObject *const_str_digest_a9181163a30d92e8c74eb9b35e154c99;
PyObject *const_str_plain__is_method_retryable;
PyObject *const_str_plain_RETRY_AFTER_STATUS_CODES;
PyObject *const_str_digest_5449ea788c0112104a2bc406e503b077;
PyObject *const_str_digest_a62630489d5f65e81b08ddd5a57c0f72;
PyObject *const_str_plain_reraise;
PyObject *const_str_plain_unknown;
PyObject *const_str_plain__is_connection_error;
PyObject *const_str_plain__is_read_error;
PyObject *const_str_plain_get_redirect_location;
PyObject *const_str_digest_93b5718dbdad50e34931a5c649b12b14;
PyObject *const_str_plain_ResponseError;
PyObject *const_str_plain_GENERIC_ERROR;
PyObject *const_str_plain_SPECIFIC_ERROR;
PyObject *const_tuple_str_plain_status_code_tuple;
PyObject *const_str_plain_RequestHistory;
PyObject *const_str_plain_new;
PyObject *const_tuple_7666020d115a077b4790e7ef892be878_tuple;
PyObject *const_str_plain_is_exhausted;
PyObject *const_str_plain_MaxRetryError;
PyObject *const_str_digest_adf0407d4b5f2535bca90601d487b350;
PyObject *const_str_digest_eae9627a9eb96010f22fdefa3f77aabc;
PyObject *const_str_digest_2cf19ce5f8aafc25d01c0650343ca85a;
PyObject *const_str_digest_7d645f6a902354da37833c704d2b5691;
PyObject *const_str_digest_a2e66ed84948d21be07b9aad5a0ca97d;
PyObject *const_str_digest_6cec2b4aed31f7caebf8cbb3bc935cbd;
PyObject *const_str_digest_86254e62d600980e0c926ebfea6e9619;
PyObject *const_str_chr_41;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_logging;
PyObject *const_str_plain_typing;
PyObject *const_str_plain_itertools;
PyObject *const_tuple_str_plain_takewhile_tuple;
PyObject *const_str_plain_TracebackType;
PyObject *const_str_plain_exceptions;
PyObject *const_tuple_f8dc0be50b885469e3e65e098fd73170_tuple;
PyObject *const_str_plain_util;
PyObject *const_tuple_str_plain_reraise_tuple;
PyObject *const_str_plain_getLogger;
PyObject *const_tuple_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd_tuple;
PyObject *const_str_plain_NamedTuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd;
PyObject *const_int_pos_33;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_4566cfe3b3f2bec71b1d44adce370e58;
PyObject *const_str_plain_method;
PyObject *const_str_plain_url;
PyObject *const_str_digest_800ba1e431e6b87b27aa2cc00a30f69e;
PyObject *const_str_plain_error;
PyObject *const_str_digest_d07907e58b350811dd59b47ecbca299a;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_7157bfa4de7d8d3343af8fea7d23955a;
PyObject *const_int_pos_41;
PyObject *const_frozenset_088c5ae02e3baf16379ff2c677dddcd0;
PyObject *const_str_plain_DEFAULT_ALLOWED_METHODS;
PyObject *const_frozenset_90ee7ef4af5cffdbd371b1ed811aea21;
PyObject *const_frozenset_8ca4f21d92efe9d3ae2c46d21c2c9c6e;
PyObject *const_str_plain_DEFAULT_REMOVE_HEADERS_ON_REDIRECT;
PyObject *const_int_pos_120;
PyObject *const_str_plain_DEFAULT_BACKOFF_MAX;
PyObject *const_int_pos_21600;
PyObject *const_str_plain_DEFAULT_RETRY_AFTER_MAX;
PyObject *const_str_digest_0d3eb31e90b60373f2f97c21b6f7a847;
PyObject *const_str_digest_fe09d12920a7696ef5f9672332963f8a;
PyObject *const_int_pos_10;
PyObject *const_dict_930d80efafd869fd804a953f5fef025b;
PyObject *const_str_digest_297455e155b6c9736d87529e14591c5d;
PyObject *const_dict_51e59e6b72080f46eb453119b02e6e91;
PyObject *const_str_digest_ca693a71271df261e783dd0ecf309ae0;
PyObject *const_tuple_true_none_tuple;
PyObject *const_dict_8f48e88f669270772c4e41d6ef1eff4e;
PyObject *const_str_plain_from_int;
PyObject *const_str_digest_00aff75c087fe7f80636ea13a09e3e82;
PyObject *const_dict_19141050eff162b9ef06122f75e4a0a6;
PyObject *const_str_digest_e80b9085df081452c8caeed4571c51b7;
PyObject *const_dict_2b04ec6c02fc6fc479932fe5aec0645c;
PyObject *const_str_digest_683309cb722498c00ca029ec4e15acbf;
PyObject *const_dict_47a9e3a65b34120a85309ca49510e889;
PyObject *const_str_digest_6659ea07dd436805b2630885700a6e61;
PyObject *const_dict_d21fbc98611755784fb8186818cb645a;
PyObject *const_str_digest_9bdc7bd568ca4c860ba3d9ea8f97a38f;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_digest_504591e526cc625e5b3bbfcf35d4ec2f;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_47a9fd1a46a9175f4f0097b003c2c12b;
PyObject *const_str_digest_b0594eafa05dc6a6810bb2c7c291548b;
PyObject *const_dict_cf5b7b3d5c104d52d1cd532465fa7d0e;
PyObject *const_str_digest_7e60379875538acb6d47a09b3bcd7fdf;
PyObject *const_str_digest_2d8b572caa8eac58f71c5c2fc1f268f9;
PyObject *const_dict_b1b1324bca4a40096f1a76d1a8a01373;
PyObject *const_str_digest_0ea7366bdeb0b49141acb3ad1441b7b5;
PyObject *const_tuple_false_tuple;
PyObject *const_dict_3b7db28d5171d8b376654fc5ffa79f3a;
PyObject *const_str_plain_is_retry;
PyObject *const_str_digest_43a062f907032f59d25a421045c4a843;
PyObject *const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6;
PyObject *const_str_digest_4506185023298da4a69876975fb76211;
PyObject *const_tuple_none_none_none_none_none_none_tuple;
PyObject *const_dict_357164c33a1363a25ffb265c19e3f222;
PyObject *const_str_plain_increment;
PyObject *const_str_digest_d3c5cf2f2d706173f393307c5fa372aa;
PyObject *const_dict_e8d16ece775461636da8aedac2f07d6b;
PyObject *const_str_plain___repr__;
PyObject *const_str_digest_4291b42c0261755daa9f58af16f24a8c;
PyObject *const_tuple_7f8b86aa06e82d9687856bdbf6133811_tuple;
PyObject *const_tuple_int_pos_3_tuple;
PyObject *const_str_digest_391b29a9c7c47e7b9ce511926b0328f9;
PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_h_tuple;
PyObject *const_tuple_str_plain_x_tuple;
PyObject *const_str_digest_3d8456b692ba12d694b1345117db0cc2;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_17c6d2d1ee8300f3169f5c64c0cababb_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_err_tuple;
PyObject *const_tuple_str_plain_self_str_plain_method_tuple;
PyObject *const_tuple_str_plain_self_str_plain_backoff_tuple;
PyObject *const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple;
PyObject *const_tuple_c9e3a586d4f3f3473aae70b0fd105244_tuple;
PyObject *const_tuple_str_plain_self_str_plain_response_str_plain_retry_after_tuple;
PyObject *const_tuple_697ae5bd322ff4bef13f49da7f5c94b4_tuple;
PyObject *const_tuple_str_plain_self_str_plain_retry_counts_tuple;
PyObject *const_tuple_af7a4b17458dd36fc41146a5b8a2af40_tuple;
PyObject *const_tuple_str_plain_self_str_plain_kw_str_plain_params_tuple;
PyObject *const_tuple_7ec0339ea4b600c54d62b35ef1319da6_tuple;
PyObject *const_tuple_str_plain_self_str_plain_response_str_plain_slept_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[194];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("urllib3.util.retry"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 194) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 194 values, got %d\n",
                    UN_TRANSLATE("urllib3.util.retry"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_total", mod_consts.const_str_plain_total);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_total);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connect", mod_consts.const_str_plain_connect);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_connect);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_status", mod_consts.const_str_plain_status);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_status);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_other", mod_consts.const_str_plain_other);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_other);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_redirect", mod_consts.const_str_plain_redirect);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_redirect);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_status_forcelist", mod_consts.const_str_plain_status_forcelist);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_status_forcelist);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_allowed_methods", mod_consts.const_str_plain_allowed_methods);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_allowed_methods);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_backoff_factor", mod_consts.const_str_plain_backoff_factor);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_backoff_factor);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_backoff_max", mod_consts.const_str_plain_backoff_max);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_backoff_max);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_retry_after_max", mod_consts.const_str_plain_retry_after_max);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_retry_after_max);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_raise_on_redirect", mod_consts.const_str_plain_raise_on_redirect);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_raise_on_redirect);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_raise_on_status", mod_consts.const_str_plain_raise_on_status);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_raise_on_status);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_history", mod_consts.const_str_plain_history);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_history);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_respect_retry_after_header", mod_consts.const_str_plain_respect_retry_after_header);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_respect_retry_after_header);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_remove_headers_on_redirect", mod_consts.const_str_plain_remove_headers_on_redirect);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_remove_headers_on_redirect);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_backoff_jitter", mod_consts.const_str_plain_backoff_jitter);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_backoff_jitter);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_genexpr", mod_consts.const_str_angle_genexpr);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_62d805184c0319e291ba36f70b7ad180", mod_consts.const_str_digest_62d805184c0319e291ba36f70b7ad180);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_62d805184c0319e291ba36f70b7ad180);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DEFAULT", mod_consts.const_str_plain_DEFAULT);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Retry", mod_consts.const_str_plain_Retry);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_Retry);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_redirect_tuple", mod_consts.const_tuple_str_plain_redirect_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_redirect_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_log", mod_consts.const_str_plain_log);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_log);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_debug", mod_consts.const_str_plain_debug);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_debug);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3ff146bf2cbf06e10d34294d9109668e", mod_consts.const_str_digest_3ff146bf2cbf06e10d34294d9109668e);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_3ff146bf2cbf06e10d34294d9109668e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2b98f5690a439fdd4e367661232170cf", mod_consts.const_str_digest_2b98f5690a439fdd4e367661232170cf);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_2b98f5690a439fdd4e367661232170cf);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_takewhile", mod_consts.const_str_plain_takewhile);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_takewhile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_lambda", mod_consts.const_str_angle_lambda);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_angle_lambda);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_96630de8eadb33fda97640a57fbbbd1c", mod_consts.const_str_digest_96630de8eadb33fda97640a57fbbbd1c);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_96630de8eadb33fda97640a57fbbbd1c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_random", mod_consts.const_str_plain_random);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_random);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_max", mod_consts.const_str_plain_max);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_max);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_min", mod_consts.const_str_plain_min);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_min);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ac71cbae841ee68a5d2644f8330f1112", mod_consts.const_str_digest_ac71cbae841ee68a5d2644f8330f1112);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_ac71cbae841ee68a5d2644f8330f1112);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_redirect_location", mod_consts.const_str_plain_redirect_location);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_redirect_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_re", mod_consts.const_str_plain_re);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_match", mod_consts.const_str_plain_match);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_match);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d43b7afa583ad163d56ae0bbfdcdb575", mod_consts.const_str_digest_d43b7afa583ad163d56ae0bbfdcdb575);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_d43b7afa583ad163d56ae0bbfdcdb575);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_email", mod_consts.const_str_plain_email);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_email);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_utils", mod_consts.const_str_plain_utils);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_utils);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_parsedate_tz", mod_consts.const_str_plain_parsedate_tz);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_parsedate_tz);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InvalidHeader", mod_consts.const_str_plain_InvalidHeader);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidHeader);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f3c0f426f8315adff05383979f4e867d", mod_consts.const_str_digest_f3c0f426f8315adff05383979f4e867d);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_f3c0f426f8315adff05383979f4e867d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mktime_tz", mod_consts.const_str_plain_mktime_tz);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_mktime_tz);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_time", mod_consts.const_str_plain_time);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_time);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_headers", mod_consts.const_str_plain_headers);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_headers);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_53eb1bcf3283c3fcccb95b51de02ce94_tuple", mod_consts.const_tuple_str_digest_53eb1bcf3283c3fcccb95b51de02ce94_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_53eb1bcf3283c3fcccb95b51de02ce94_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_parse_retry_after", mod_consts.const_str_plain_parse_retry_after);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse_retry_after);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a7cc568753f4d14c2254e04b979d2baa", mod_consts.const_str_digest_a7cc568753f4d14c2254e04b979d2baa);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_a7cc568753f4d14c2254e04b979d2baa);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_retry_after", mod_consts.const_str_plain_get_retry_after);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_retry_after);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sleep", mod_consts.const_str_plain_sleep);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_sleep);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_backoff_time", mod_consts.const_str_plain_get_backoff_time);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_backoff_time);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sleep_for_retry", mod_consts.const_str_plain_sleep_for_retry);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_sleep_for_retry);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__sleep_backoff", mod_consts.const_str_plain__sleep_backoff);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain__sleep_backoff);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_62cff4868e3e5eb3258a26643ddfa300", mod_consts.const_str_digest_62cff4868e3e5eb3258a26643ddfa300);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_62cff4868e3e5eb3258a26643ddfa300);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProxyError", mod_consts.const_str_plain_ProxyError);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProxyError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_original_error", mod_consts.const_str_plain_original_error);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_original_error);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ConnectTimeoutError", mod_consts.const_str_plain_ConnectTimeoutError);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectTimeoutError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f0233bdbe36bf116adbb4a2ecc938e1b", mod_consts.const_str_digest_f0233bdbe36bf116adbb4a2ecc938e1b);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_f0233bdbe36bf116adbb4a2ecc938e1b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ReadTimeoutError", mod_consts.const_str_plain_ReadTimeoutError);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReadTimeoutError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProtocolError", mod_consts.const_str_plain_ProtocolError);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProtocolError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d9a68c2d44e8989e975d546861154deb", mod_consts.const_str_digest_d9a68c2d44e8989e975d546861154deb);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_d9a68c2d44e8989e975d546861154deb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_upper", mod_consts.const_str_plain_upper);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_upper);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a9181163a30d92e8c74eb9b35e154c99", mod_consts.const_str_digest_a9181163a30d92e8c74eb9b35e154c99);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_a9181163a30d92e8c74eb9b35e154c99);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__is_method_retryable", mod_consts.const_str_plain__is_method_retryable);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain__is_method_retryable);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RETRY_AFTER_STATUS_CODES", mod_consts.const_str_plain_RETRY_AFTER_STATUS_CODES);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_RETRY_AFTER_STATUS_CODES);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5449ea788c0112104a2bc406e503b077", mod_consts.const_str_digest_5449ea788c0112104a2bc406e503b077);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_5449ea788c0112104a2bc406e503b077);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a62630489d5f65e81b08ddd5a57c0f72", mod_consts.const_str_digest_a62630489d5f65e81b08ddd5a57c0f72);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_a62630489d5f65e81b08ddd5a57c0f72);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_reraise", mod_consts.const_str_plain_reraise);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_reraise);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unknown", mod_consts.const_str_plain_unknown);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_unknown);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__is_connection_error", mod_consts.const_str_plain__is_connection_error);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain__is_connection_error);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__is_read_error", mod_consts.const_str_plain__is_read_error);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain__is_read_error);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_redirect_location", mod_consts.const_str_plain_get_redirect_location);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_redirect_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_93b5718dbdad50e34931a5c649b12b14", mod_consts.const_str_digest_93b5718dbdad50e34931a5c649b12b14);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_93b5718dbdad50e34931a5c649b12b14);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ResponseError", mod_consts.const_str_plain_ResponseError);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GENERIC_ERROR", mod_consts.const_str_plain_GENERIC_ERROR);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_GENERIC_ERROR);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SPECIFIC_ERROR", mod_consts.const_str_plain_SPECIFIC_ERROR);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_SPECIFIC_ERROR);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_status_code_tuple", mod_consts.const_tuple_str_plain_status_code_tuple);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_status_code_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RequestHistory", mod_consts.const_str_plain_RequestHistory);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_RequestHistory);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_new", mod_consts.const_str_plain_new);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_new);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_7666020d115a077b4790e7ef892be878_tuple", mod_consts.const_tuple_7666020d115a077b4790e7ef892be878_tuple);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_7666020d115a077b4790e7ef892be878_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_exhausted", mod_consts.const_str_plain_is_exhausted);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_exhausted);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MaxRetryError", mod_consts.const_str_plain_MaxRetryError);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_MaxRetryError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_adf0407d4b5f2535bca90601d487b350", mod_consts.const_str_digest_adf0407d4b5f2535bca90601d487b350);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_adf0407d4b5f2535bca90601d487b350);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_eae9627a9eb96010f22fdefa3f77aabc", mod_consts.const_str_digest_eae9627a9eb96010f22fdefa3f77aabc);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_eae9627a9eb96010f22fdefa3f77aabc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2cf19ce5f8aafc25d01c0650343ca85a", mod_consts.const_str_digest_2cf19ce5f8aafc25d01c0650343ca85a);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_2cf19ce5f8aafc25d01c0650343ca85a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7d645f6a902354da37833c704d2b5691", mod_consts.const_str_digest_7d645f6a902354da37833c704d2b5691);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_7d645f6a902354da37833c704d2b5691);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a2e66ed84948d21be07b9aad5a0ca97d", mod_consts.const_str_digest_a2e66ed84948d21be07b9aad5a0ca97d);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_a2e66ed84948d21be07b9aad5a0ca97d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6cec2b4aed31f7caebf8cbb3bc935cbd", mod_consts.const_str_digest_6cec2b4aed31f7caebf8cbb3bc935cbd);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_6cec2b4aed31f7caebf8cbb3bc935cbd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_86254e62d600980e0c926ebfea6e9619", mod_consts.const_str_digest_86254e62d600980e0c926ebfea6e9619);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_digest_86254e62d600980e0c926ebfea6e9619);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_41", mod_consts.const_str_chr_41);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_chr_41);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_logging", mod_consts.const_str_plain_logging);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_typing", mod_consts.const_str_plain_typing);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_itertools", mod_consts.const_str_plain_itertools);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_itertools);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_takewhile_tuple", mod_consts.const_tuple_str_plain_takewhile_tuple);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_takewhile_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TracebackType", mod_consts.const_str_plain_TracebackType);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_TracebackType);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exceptions", mod_consts.const_str_plain_exceptions);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_f8dc0be50b885469e3e65e098fd73170_tuple", mod_consts.const_tuple_f8dc0be50b885469e3e65e098fd73170_tuple);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_tuple_f8dc0be50b885469e3e65e098fd73170_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_util", mod_consts.const_str_plain_util);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_util);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_reraise_tuple", mod_consts.const_tuple_str_plain_reraise_tuple);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_reraise_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getLogger", mod_consts.const_str_plain_getLogger);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd_tuple", mod_consts.const_tuple_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd_tuple);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NamedTuple", mod_consts.const_str_plain_NamedTuple);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_NamedTuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd", mod_consts.const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_33", mod_consts.const_int_pos_33);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_int_pos_33);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58", mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_method", mod_consts.const_str_plain_method);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_method);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_url", mod_consts.const_str_plain_url);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_url);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_800ba1e431e6b87b27aa2cc00a30f69e", mod_consts.const_str_digest_800ba1e431e6b87b27aa2cc00a30f69e);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_800ba1e431e6b87b27aa2cc00a30f69e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_error", mod_consts.const_str_plain_error);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_error);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a", mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7157bfa4de7d8d3343af8fea7d23955a", mod_consts.const_str_digest_7157bfa4de7d8d3343af8fea7d23955a);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_digest_7157bfa4de7d8d3343af8fea7d23955a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41", mod_consts.const_int_pos_41);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_int_pos_41);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_frozenset_088c5ae02e3baf16379ff2c677dddcd0", mod_consts.const_frozenset_088c5ae02e3baf16379ff2c677dddcd0);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_frozenset_088c5ae02e3baf16379ff2c677dddcd0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DEFAULT_ALLOWED_METHODS", mod_consts.const_str_plain_DEFAULT_ALLOWED_METHODS);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_ALLOWED_METHODS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_frozenset_90ee7ef4af5cffdbd371b1ed811aea21", mod_consts.const_frozenset_90ee7ef4af5cffdbd371b1ed811aea21);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_frozenset_90ee7ef4af5cffdbd371b1ed811aea21);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_frozenset_8ca4f21d92efe9d3ae2c46d21c2c9c6e", mod_consts.const_frozenset_8ca4f21d92efe9d3ae2c46d21c2c9c6e);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_frozenset_8ca4f21d92efe9d3ae2c46d21c2c9c6e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DEFAULT_REMOVE_HEADERS_ON_REDIRECT", mod_consts.const_str_plain_DEFAULT_REMOVE_HEADERS_ON_REDIRECT);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_REMOVE_HEADERS_ON_REDIRECT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_120", mod_consts.const_int_pos_120);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_int_pos_120);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DEFAULT_BACKOFF_MAX", mod_consts.const_str_plain_DEFAULT_BACKOFF_MAX);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_BACKOFF_MAX);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_21600", mod_consts.const_int_pos_21600);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_int_pos_21600);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DEFAULT_RETRY_AFTER_MAX", mod_consts.const_str_plain_DEFAULT_RETRY_AFTER_MAX);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_RETRY_AFTER_MAX);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0d3eb31e90b60373f2f97c21b6f7a847", mod_consts.const_str_digest_0d3eb31e90b60373f2f97c21b6f7a847);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_0d3eb31e90b60373f2f97c21b6f7a847);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fe09d12920a7696ef5f9672332963f8a", mod_consts.const_str_digest_fe09d12920a7696ef5f9672332963f8a);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_digest_fe09d12920a7696ef5f9672332963f8a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_10", mod_consts.const_int_pos_10);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_int_pos_10);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_930d80efafd869fd804a953f5fef025b", mod_consts.const_dict_930d80efafd869fd804a953f5fef025b);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_dict_930d80efafd869fd804a953f5fef025b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_297455e155b6c9736d87529e14591c5d", mod_consts.const_str_digest_297455e155b6c9736d87529e14591c5d);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_297455e155b6c9736d87529e14591c5d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_51e59e6b72080f46eb453119b02e6e91", mod_consts.const_dict_51e59e6b72080f46eb453119b02e6e91);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_dict_51e59e6b72080f46eb453119b02e6e91);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ca693a71271df261e783dd0ecf309ae0", mod_consts.const_str_digest_ca693a71271df261e783dd0ecf309ae0);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_digest_ca693a71271df261e783dd0ecf309ae0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_true_none_tuple", mod_consts.const_tuple_true_none_tuple);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_true_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_8f48e88f669270772c4e41d6ef1eff4e", mod_consts.const_dict_8f48e88f669270772c4e41d6ef1eff4e);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_dict_8f48e88f669270772c4e41d6ef1eff4e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_from_int", mod_consts.const_str_plain_from_int);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_int);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_00aff75c087fe7f80636ea13a09e3e82", mod_consts.const_str_digest_00aff75c087fe7f80636ea13a09e3e82);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_digest_00aff75c087fe7f80636ea13a09e3e82);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6", mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e80b9085df081452c8caeed4571c51b7", mod_consts.const_str_digest_e80b9085df081452c8caeed4571c51b7);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_digest_e80b9085df081452c8caeed4571c51b7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_2b04ec6c02fc6fc479932fe5aec0645c", mod_consts.const_dict_2b04ec6c02fc6fc479932fe5aec0645c);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_dict_2b04ec6c02fc6fc479932fe5aec0645c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_683309cb722498c00ca029ec4e15acbf", mod_consts.const_str_digest_683309cb722498c00ca029ec4e15acbf);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_digest_683309cb722498c00ca029ec4e15acbf);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_47a9e3a65b34120a85309ca49510e889", mod_consts.const_dict_47a9e3a65b34120a85309ca49510e889);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_dict_47a9e3a65b34120a85309ca49510e889);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6659ea07dd436805b2630885700a6e61", mod_consts.const_str_digest_6659ea07dd436805b2630885700a6e61);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_digest_6659ea07dd436805b2630885700a6e61);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_d21fbc98611755784fb8186818cb645a", mod_consts.const_dict_d21fbc98611755784fb8186818cb645a);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_dict_d21fbc98611755784fb8186818cb645a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9bdc7bd568ca4c860ba3d9ea8f97a38f", mod_consts.const_str_digest_9bdc7bd568ca4c860ba3d9ea8f97a38f);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_digest_9bdc7bd568ca4c860ba3d9ea8f97a38f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb", mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_504591e526cc625e5b3bbfcf35d4ec2f", mod_consts.const_str_digest_504591e526cc625e5b3bbfcf35d4ec2f);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_digest_504591e526cc625e5b3bbfcf35d4ec2f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_47a9fd1a46a9175f4f0097b003c2c12b", mod_consts.const_dict_47a9fd1a46a9175f4f0097b003c2c12b);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_dict_47a9fd1a46a9175f4f0097b003c2c12b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b0594eafa05dc6a6810bb2c7c291548b", mod_consts.const_str_digest_b0594eafa05dc6a6810bb2c7c291548b);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_digest_b0594eafa05dc6a6810bb2c7c291548b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_cf5b7b3d5c104d52d1cd532465fa7d0e", mod_consts.const_dict_cf5b7b3d5c104d52d1cd532465fa7d0e);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_dict_cf5b7b3d5c104d52d1cd532465fa7d0e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7e60379875538acb6d47a09b3bcd7fdf", mod_consts.const_str_digest_7e60379875538acb6d47a09b3bcd7fdf);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_digest_7e60379875538acb6d47a09b3bcd7fdf);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2d8b572caa8eac58f71c5c2fc1f268f9", mod_consts.const_str_digest_2d8b572caa8eac58f71c5c2fc1f268f9);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_digest_2d8b572caa8eac58f71c5c2fc1f268f9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b1b1324bca4a40096f1a76d1a8a01373", mod_consts.const_dict_b1b1324bca4a40096f1a76d1a8a01373);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_dict_b1b1324bca4a40096f1a76d1a8a01373);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0ea7366bdeb0b49141acb3ad1441b7b5", mod_consts.const_str_digest_0ea7366bdeb0b49141acb3ad1441b7b5);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_digest_0ea7366bdeb0b49141acb3ad1441b7b5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_false_tuple", mod_consts.const_tuple_false_tuple);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_3b7db28d5171d8b376654fc5ffa79f3a", mod_consts.const_dict_3b7db28d5171d8b376654fc5ffa79f3a);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_dict_3b7db28d5171d8b376654fc5ffa79f3a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_retry", mod_consts.const_str_plain_is_retry);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_retry);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_43a062f907032f59d25a421045c4a843", mod_consts.const_str_digest_43a062f907032f59d25a421045c4a843);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_digest_43a062f907032f59d25a421045c4a843);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6", mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4506185023298da4a69876975fb76211", mod_consts.const_str_digest_4506185023298da4a69876975fb76211);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_digest_4506185023298da4a69876975fb76211);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_none_none_none_none_tuple", mod_consts.const_tuple_none_none_none_none_none_none_tuple);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_none_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_357164c33a1363a25ffb265c19e3f222", mod_consts.const_dict_357164c33a1363a25ffb265c19e3f222);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_dict_357164c33a1363a25ffb265c19e3f222);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_increment", mod_consts.const_str_plain_increment);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_plain_increment);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d3c5cf2f2d706173f393307c5fa372aa", mod_consts.const_str_digest_d3c5cf2f2d706173f393307c5fa372aa);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_digest_d3c5cf2f2d706173f393307c5fa372aa);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b", mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___repr__", mod_consts.const_str_plain___repr__);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain___repr__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4291b42c0261755daa9f58af16f24a8c", mod_consts.const_str_digest_4291b42c0261755daa9f58af16f24a8c);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_digest_4291b42c0261755daa9f58af16f24a8c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_7f8b86aa06e82d9687856bdbf6133811_tuple", mod_consts.const_tuple_7f8b86aa06e82d9687856bdbf6133811_tuple);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_tuple_7f8b86aa06e82d9687856bdbf6133811_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_3_tuple", mod_consts.const_tuple_int_pos_3_tuple);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_3_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_391b29a9c7c47e7b9ce511926b0328f9", mod_consts.const_str_digest_391b29a9c7c47e7b9ce511926b0328f9);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_digest_391b29a9c7c47e7b9ce511926b0328f9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_h_tuple", mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_h_tuple);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_h_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_x_tuple", mod_consts.const_tuple_str_plain_x_tuple);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3d8456b692ba12d694b1345117db0cc2", mod_consts.const_str_digest_3d8456b692ba12d694b1345117db0cc2);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_digest_3d8456b692ba12d694b1345117db0cc2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_17c6d2d1ee8300f3169f5c64c0cababb_tuple", mod_consts.const_tuple_17c6d2d1ee8300f3169f5c64c0cababb_tuple);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_tuple_17c6d2d1ee8300f3169f5c64c0cababb_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_err_tuple", mod_consts.const_tuple_str_plain_self_str_plain_err_tuple);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_err_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_method_tuple", mod_consts.const_tuple_str_plain_self_str_plain_method_tuple);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_method_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_backoff_tuple", mod_consts.const_tuple_str_plain_self_str_plain_backoff_tuple);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_backoff_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple", mod_consts.const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_c9e3a586d4f3f3473aae70b0fd105244_tuple", mod_consts.const_tuple_c9e3a586d4f3f3473aae70b0fd105244_tuple);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_tuple_c9e3a586d4f3f3473aae70b0fd105244_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_response_str_plain_retry_after_tuple", mod_consts.const_tuple_str_plain_self_str_plain_response_str_plain_retry_after_tuple);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_response_str_plain_retry_after_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_697ae5bd322ff4bef13f49da7f5c94b4_tuple", mod_consts.const_tuple_697ae5bd322ff4bef13f49da7f5c94b4_tuple);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_tuple_697ae5bd322ff4bef13f49da7f5c94b4_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_retry_counts_tuple", mod_consts.const_tuple_str_plain_self_str_plain_retry_counts_tuple);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_retry_counts_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_af7a4b17458dd36fc41146a5b8a2af40_tuple", mod_consts.const_tuple_af7a4b17458dd36fc41146a5b8a2af40_tuple);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_tuple_af7a4b17458dd36fc41146a5b8a2af40_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_kw_str_plain_params_tuple", mod_consts.const_tuple_str_plain_self_str_plain_kw_str_plain_params_tuple);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_kw_str_plain_params_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_7ec0339ea4b600c54d62b35ef1319da6_tuple", mod_consts.const_tuple_7ec0339ea4b600c54d62b35ef1319da6_tuple);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_tuple_7ec0339ea4b600c54d62b35ef1319da6_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_response_str_plain_slept_tuple", mod_consts.const_tuple_str_plain_self_str_plain_response_str_plain_slept_tuple);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_response_str_plain_slept_tuple);
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
void checkModuleConstants_urllib3$util$retry(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_total", mod_consts.const_str_plain_total);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_total) && "mod_consts.const_str_plain_total");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connect", mod_consts.const_str_plain_connect);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_connect) && "mod_consts.const_str_plain_connect");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_status", mod_consts.const_str_plain_status);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_status) && "mod_consts.const_str_plain_status");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_other", mod_consts.const_str_plain_other);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_other) && "mod_consts.const_str_plain_other");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_redirect", mod_consts.const_str_plain_redirect);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_redirect) && "mod_consts.const_str_plain_redirect");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_status_forcelist", mod_consts.const_str_plain_status_forcelist);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_status_forcelist) && "mod_consts.const_str_plain_status_forcelist");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_allowed_methods", mod_consts.const_str_plain_allowed_methods);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_allowed_methods) && "mod_consts.const_str_plain_allowed_methods");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_backoff_factor", mod_consts.const_str_plain_backoff_factor);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_backoff_factor) && "mod_consts.const_str_plain_backoff_factor");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_backoff_max", mod_consts.const_str_plain_backoff_max);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_backoff_max) && "mod_consts.const_str_plain_backoff_max");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_retry_after_max", mod_consts.const_str_plain_retry_after_max);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_retry_after_max) && "mod_consts.const_str_plain_retry_after_max");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_raise_on_redirect", mod_consts.const_str_plain_raise_on_redirect);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_raise_on_redirect) && "mod_consts.const_str_plain_raise_on_redirect");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_raise_on_status", mod_consts.const_str_plain_raise_on_status);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_raise_on_status) && "mod_consts.const_str_plain_raise_on_status");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_history", mod_consts.const_str_plain_history);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_history) && "mod_consts.const_str_plain_history");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_respect_retry_after_header", mod_consts.const_str_plain_respect_retry_after_header);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_respect_retry_after_header) && "mod_consts.const_str_plain_respect_retry_after_header");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_remove_headers_on_redirect", mod_consts.const_str_plain_remove_headers_on_redirect);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_remove_headers_on_redirect) && "mod_consts.const_str_plain_remove_headers_on_redirect");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_backoff_jitter", mod_consts.const_str_plain_backoff_jitter);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_backoff_jitter) && "mod_consts.const_str_plain_backoff_jitter");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_genexpr", mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr) && "mod_consts.const_str_angle_genexpr");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_62d805184c0319e291ba36f70b7ad180", mod_consts.const_str_digest_62d805184c0319e291ba36f70b7ad180);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_62d805184c0319e291ba36f70b7ad180) && "mod_consts.const_str_digest_62d805184c0319e291ba36f70b7ad180");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DEFAULT", mod_consts.const_str_plain_DEFAULT);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT) && "mod_consts.const_str_plain_DEFAULT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Retry", mod_consts.const_str_plain_Retry);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_Retry) && "mod_consts.const_str_plain_Retry");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_redirect_tuple", mod_consts.const_tuple_str_plain_redirect_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_redirect_tuple) && "mod_consts.const_tuple_str_plain_redirect_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_log", mod_consts.const_str_plain_log);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_log) && "mod_consts.const_str_plain_log");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_debug", mod_consts.const_str_plain_debug);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_debug) && "mod_consts.const_str_plain_debug");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3ff146bf2cbf06e10d34294d9109668e", mod_consts.const_str_digest_3ff146bf2cbf06e10d34294d9109668e);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_3ff146bf2cbf06e10d34294d9109668e) && "mod_consts.const_str_digest_3ff146bf2cbf06e10d34294d9109668e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2b98f5690a439fdd4e367661232170cf", mod_consts.const_str_digest_2b98f5690a439fdd4e367661232170cf);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_2b98f5690a439fdd4e367661232170cf) && "mod_consts.const_str_digest_2b98f5690a439fdd4e367661232170cf");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_takewhile", mod_consts.const_str_plain_takewhile);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_takewhile) && "mod_consts.const_str_plain_takewhile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_lambda", mod_consts.const_str_angle_lambda);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_angle_lambda) && "mod_consts.const_str_angle_lambda");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_96630de8eadb33fda97640a57fbbbd1c", mod_consts.const_str_digest_96630de8eadb33fda97640a57fbbbd1c);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_96630de8eadb33fda97640a57fbbbd1c) && "mod_consts.const_str_digest_96630de8eadb33fda97640a57fbbbd1c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_int_pos_2) && "mod_consts.const_int_pos_2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_random", mod_consts.const_str_plain_random);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_random) && "mod_consts.const_str_plain_random");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_max", mod_consts.const_str_plain_max);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_max) && "mod_consts.const_str_plain_max");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_min", mod_consts.const_str_plain_min);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_min) && "mod_consts.const_str_plain_min");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ac71cbae841ee68a5d2644f8330f1112", mod_consts.const_str_digest_ac71cbae841ee68a5d2644f8330f1112);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_ac71cbae841ee68a5d2644f8330f1112) && "mod_consts.const_str_digest_ac71cbae841ee68a5d2644f8330f1112");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_redirect_location", mod_consts.const_str_plain_redirect_location);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_redirect_location) && "mod_consts.const_str_plain_redirect_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_re", mod_consts.const_str_plain_re);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_re) && "mod_consts.const_str_plain_re");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_match", mod_consts.const_str_plain_match);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_match) && "mod_consts.const_str_plain_match");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d43b7afa583ad163d56ae0bbfdcdb575", mod_consts.const_str_digest_d43b7afa583ad163d56ae0bbfdcdb575);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_d43b7afa583ad163d56ae0bbfdcdb575) && "mod_consts.const_str_digest_d43b7afa583ad163d56ae0bbfdcdb575");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_email", mod_consts.const_str_plain_email);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_email) && "mod_consts.const_str_plain_email");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_utils", mod_consts.const_str_plain_utils);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_utils) && "mod_consts.const_str_plain_utils");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_parsedate_tz", mod_consts.const_str_plain_parsedate_tz);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_parsedate_tz) && "mod_consts.const_str_plain_parsedate_tz");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InvalidHeader", mod_consts.const_str_plain_InvalidHeader);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidHeader) && "mod_consts.const_str_plain_InvalidHeader");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f3c0f426f8315adff05383979f4e867d", mod_consts.const_str_digest_f3c0f426f8315adff05383979f4e867d);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_f3c0f426f8315adff05383979f4e867d) && "mod_consts.const_str_digest_f3c0f426f8315adff05383979f4e867d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mktime_tz", mod_consts.const_str_plain_mktime_tz);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_mktime_tz) && "mod_consts.const_str_plain_mktime_tz");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_time", mod_consts.const_str_plain_time);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_time) && "mod_consts.const_str_plain_time");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_headers", mod_consts.const_str_plain_headers);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_headers) && "mod_consts.const_str_plain_headers");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_53eb1bcf3283c3fcccb95b51de02ce94_tuple", mod_consts.const_tuple_str_digest_53eb1bcf3283c3fcccb95b51de02ce94_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_53eb1bcf3283c3fcccb95b51de02ce94_tuple) && "mod_consts.const_tuple_str_digest_53eb1bcf3283c3fcccb95b51de02ce94_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_parse_retry_after", mod_consts.const_str_plain_parse_retry_after);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse_retry_after) && "mod_consts.const_str_plain_parse_retry_after");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a7cc568753f4d14c2254e04b979d2baa", mod_consts.const_str_digest_a7cc568753f4d14c2254e04b979d2baa);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_a7cc568753f4d14c2254e04b979d2baa) && "mod_consts.const_str_digest_a7cc568753f4d14c2254e04b979d2baa");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_retry_after", mod_consts.const_str_plain_get_retry_after);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_retry_after) && "mod_consts.const_str_plain_get_retry_after");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sleep", mod_consts.const_str_plain_sleep);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_sleep) && "mod_consts.const_str_plain_sleep");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_backoff_time", mod_consts.const_str_plain_get_backoff_time);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_backoff_time) && "mod_consts.const_str_plain_get_backoff_time");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sleep_for_retry", mod_consts.const_str_plain_sleep_for_retry);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_sleep_for_retry) && "mod_consts.const_str_plain_sleep_for_retry");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__sleep_backoff", mod_consts.const_str_plain__sleep_backoff);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain__sleep_backoff) && "mod_consts.const_str_plain__sleep_backoff");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_62cff4868e3e5eb3258a26643ddfa300", mod_consts.const_str_digest_62cff4868e3e5eb3258a26643ddfa300);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_62cff4868e3e5eb3258a26643ddfa300) && "mod_consts.const_str_digest_62cff4868e3e5eb3258a26643ddfa300");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProxyError", mod_consts.const_str_plain_ProxyError);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProxyError) && "mod_consts.const_str_plain_ProxyError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_original_error", mod_consts.const_str_plain_original_error);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_original_error) && "mod_consts.const_str_plain_original_error");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ConnectTimeoutError", mod_consts.const_str_plain_ConnectTimeoutError);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectTimeoutError) && "mod_consts.const_str_plain_ConnectTimeoutError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f0233bdbe36bf116adbb4a2ecc938e1b", mod_consts.const_str_digest_f0233bdbe36bf116adbb4a2ecc938e1b);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_f0233bdbe36bf116adbb4a2ecc938e1b) && "mod_consts.const_str_digest_f0233bdbe36bf116adbb4a2ecc938e1b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ReadTimeoutError", mod_consts.const_str_plain_ReadTimeoutError);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReadTimeoutError) && "mod_consts.const_str_plain_ReadTimeoutError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProtocolError", mod_consts.const_str_plain_ProtocolError);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProtocolError) && "mod_consts.const_str_plain_ProtocolError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d9a68c2d44e8989e975d546861154deb", mod_consts.const_str_digest_d9a68c2d44e8989e975d546861154deb);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_d9a68c2d44e8989e975d546861154deb) && "mod_consts.const_str_digest_d9a68c2d44e8989e975d546861154deb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_upper", mod_consts.const_str_plain_upper);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_upper) && "mod_consts.const_str_plain_upper");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a9181163a30d92e8c74eb9b35e154c99", mod_consts.const_str_digest_a9181163a30d92e8c74eb9b35e154c99);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_a9181163a30d92e8c74eb9b35e154c99) && "mod_consts.const_str_digest_a9181163a30d92e8c74eb9b35e154c99");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__is_method_retryable", mod_consts.const_str_plain__is_method_retryable);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain__is_method_retryable) && "mod_consts.const_str_plain__is_method_retryable");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RETRY_AFTER_STATUS_CODES", mod_consts.const_str_plain_RETRY_AFTER_STATUS_CODES);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_RETRY_AFTER_STATUS_CODES) && "mod_consts.const_str_plain_RETRY_AFTER_STATUS_CODES");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5449ea788c0112104a2bc406e503b077", mod_consts.const_str_digest_5449ea788c0112104a2bc406e503b077);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_5449ea788c0112104a2bc406e503b077) && "mod_consts.const_str_digest_5449ea788c0112104a2bc406e503b077");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a62630489d5f65e81b08ddd5a57c0f72", mod_consts.const_str_digest_a62630489d5f65e81b08ddd5a57c0f72);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_a62630489d5f65e81b08ddd5a57c0f72) && "mod_consts.const_str_digest_a62630489d5f65e81b08ddd5a57c0f72");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_reraise", mod_consts.const_str_plain_reraise);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_reraise) && "mod_consts.const_str_plain_reraise");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unknown", mod_consts.const_str_plain_unknown);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_unknown) && "mod_consts.const_str_plain_unknown");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__is_connection_error", mod_consts.const_str_plain__is_connection_error);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain__is_connection_error) && "mod_consts.const_str_plain__is_connection_error");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__is_read_error", mod_consts.const_str_plain__is_read_error);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain__is_read_error) && "mod_consts.const_str_plain__is_read_error");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_redirect_location", mod_consts.const_str_plain_get_redirect_location);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_redirect_location) && "mod_consts.const_str_plain_get_redirect_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_93b5718dbdad50e34931a5c649b12b14", mod_consts.const_str_digest_93b5718dbdad50e34931a5c649b12b14);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_93b5718dbdad50e34931a5c649b12b14) && "mod_consts.const_str_digest_93b5718dbdad50e34931a5c649b12b14");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ResponseError", mod_consts.const_str_plain_ResponseError);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseError) && "mod_consts.const_str_plain_ResponseError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GENERIC_ERROR", mod_consts.const_str_plain_GENERIC_ERROR);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_GENERIC_ERROR) && "mod_consts.const_str_plain_GENERIC_ERROR");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SPECIFIC_ERROR", mod_consts.const_str_plain_SPECIFIC_ERROR);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_SPECIFIC_ERROR) && "mod_consts.const_str_plain_SPECIFIC_ERROR");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_status_code_tuple", mod_consts.const_tuple_str_plain_status_code_tuple);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_status_code_tuple) && "mod_consts.const_tuple_str_plain_status_code_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RequestHistory", mod_consts.const_str_plain_RequestHistory);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_RequestHistory) && "mod_consts.const_str_plain_RequestHistory");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_new", mod_consts.const_str_plain_new);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_new) && "mod_consts.const_str_plain_new");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_7666020d115a077b4790e7ef892be878_tuple", mod_consts.const_tuple_7666020d115a077b4790e7ef892be878_tuple);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_7666020d115a077b4790e7ef892be878_tuple) && "mod_consts.const_tuple_7666020d115a077b4790e7ef892be878_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_exhausted", mod_consts.const_str_plain_is_exhausted);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_exhausted) && "mod_consts.const_str_plain_is_exhausted");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MaxRetryError", mod_consts.const_str_plain_MaxRetryError);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_MaxRetryError) && "mod_consts.const_str_plain_MaxRetryError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_adf0407d4b5f2535bca90601d487b350", mod_consts.const_str_digest_adf0407d4b5f2535bca90601d487b350);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_adf0407d4b5f2535bca90601d487b350) && "mod_consts.const_str_digest_adf0407d4b5f2535bca90601d487b350");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_eae9627a9eb96010f22fdefa3f77aabc", mod_consts.const_str_digest_eae9627a9eb96010f22fdefa3f77aabc);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_eae9627a9eb96010f22fdefa3f77aabc) && "mod_consts.const_str_digest_eae9627a9eb96010f22fdefa3f77aabc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2cf19ce5f8aafc25d01c0650343ca85a", mod_consts.const_str_digest_2cf19ce5f8aafc25d01c0650343ca85a);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_2cf19ce5f8aafc25d01c0650343ca85a) && "mod_consts.const_str_digest_2cf19ce5f8aafc25d01c0650343ca85a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7d645f6a902354da37833c704d2b5691", mod_consts.const_str_digest_7d645f6a902354da37833c704d2b5691);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_7d645f6a902354da37833c704d2b5691) && "mod_consts.const_str_digest_7d645f6a902354da37833c704d2b5691");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a2e66ed84948d21be07b9aad5a0ca97d", mod_consts.const_str_digest_a2e66ed84948d21be07b9aad5a0ca97d);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_a2e66ed84948d21be07b9aad5a0ca97d) && "mod_consts.const_str_digest_a2e66ed84948d21be07b9aad5a0ca97d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6cec2b4aed31f7caebf8cbb3bc935cbd", mod_consts.const_str_digest_6cec2b4aed31f7caebf8cbb3bc935cbd);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_6cec2b4aed31f7caebf8cbb3bc935cbd) && "mod_consts.const_str_digest_6cec2b4aed31f7caebf8cbb3bc935cbd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_86254e62d600980e0c926ebfea6e9619", mod_consts.const_str_digest_86254e62d600980e0c926ebfea6e9619);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_digest_86254e62d600980e0c926ebfea6e9619) && "mod_consts.const_str_digest_86254e62d600980e0c926ebfea6e9619");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_41", mod_consts.const_str_chr_41);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_chr_41) && "mod_consts.const_str_chr_41");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_logging", mod_consts.const_str_plain_logging);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging) && "mod_consts.const_str_plain_logging");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_typing", mod_consts.const_str_plain_typing);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing) && "mod_consts.const_str_plain_typing");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_itertools", mod_consts.const_str_plain_itertools);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_itertools) && "mod_consts.const_str_plain_itertools");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_takewhile_tuple", mod_consts.const_tuple_str_plain_takewhile_tuple);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_takewhile_tuple) && "mod_consts.const_tuple_str_plain_takewhile_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TracebackType", mod_consts.const_str_plain_TracebackType);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_TracebackType) && "mod_consts.const_str_plain_TracebackType");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exceptions", mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions) && "mod_consts.const_str_plain_exceptions");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_f8dc0be50b885469e3e65e098fd73170_tuple", mod_consts.const_tuple_f8dc0be50b885469e3e65e098fd73170_tuple);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_tuple_f8dc0be50b885469e3e65e098fd73170_tuple) && "mod_consts.const_tuple_f8dc0be50b885469e3e65e098fd73170_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_util", mod_consts.const_str_plain_util);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_util) && "mod_consts.const_str_plain_util");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_reraise_tuple", mod_consts.const_tuple_str_plain_reraise_tuple);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_reraise_tuple) && "mod_consts.const_tuple_str_plain_reraise_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getLogger", mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger) && "mod_consts.const_str_plain_getLogger");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd_tuple", mod_consts.const_tuple_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd_tuple);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd_tuple) && "mod_consts.const_tuple_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NamedTuple", mod_consts.const_str_plain_NamedTuple);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_NamedTuple) && "mod_consts.const_str_plain_NamedTuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__) && "mod_consts.const_str_plain___prepare__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__) && "mod_consts.const_str_plain___getitem__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295) && "mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass) && "mod_consts.const_str_angle_metaclass");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd", mod_consts.const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd) && "mod_consts.const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_33", mod_consts.const_int_pos_33);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_int_pos_33) && "mod_consts.const_int_pos_33");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58", mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58) && "mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_method", mod_consts.const_str_plain_method);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_method) && "mod_consts.const_str_plain_method");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_url", mod_consts.const_str_plain_url);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_url) && "mod_consts.const_str_plain_url");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_800ba1e431e6b87b27aa2cc00a30f69e", mod_consts.const_str_digest_800ba1e431e6b87b27aa2cc00a30f69e);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_800ba1e431e6b87b27aa2cc00a30f69e) && "mod_consts.const_str_digest_800ba1e431e6b87b27aa2cc00a30f69e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_error", mod_consts.const_str_plain_error);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_error) && "mod_consts.const_str_plain_error");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a", mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a) && "mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__) && "mod_consts.const_str_plain___orig_bases__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7157bfa4de7d8d3343af8fea7d23955a", mod_consts.const_str_digest_7157bfa4de7d8d3343af8fea7d23955a);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_digest_7157bfa4de7d8d3343af8fea7d23955a) && "mod_consts.const_str_digest_7157bfa4de7d8d3343af8fea7d23955a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_41", mod_consts.const_int_pos_41);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_int_pos_41) && "mod_consts.const_int_pos_41");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_frozenset_088c5ae02e3baf16379ff2c677dddcd0", mod_consts.const_frozenset_088c5ae02e3baf16379ff2c677dddcd0);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_frozenset_088c5ae02e3baf16379ff2c677dddcd0) && "mod_consts.const_frozenset_088c5ae02e3baf16379ff2c677dddcd0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DEFAULT_ALLOWED_METHODS", mod_consts.const_str_plain_DEFAULT_ALLOWED_METHODS);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_ALLOWED_METHODS) && "mod_consts.const_str_plain_DEFAULT_ALLOWED_METHODS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_frozenset_90ee7ef4af5cffdbd371b1ed811aea21", mod_consts.const_frozenset_90ee7ef4af5cffdbd371b1ed811aea21);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_frozenset_90ee7ef4af5cffdbd371b1ed811aea21) && "mod_consts.const_frozenset_90ee7ef4af5cffdbd371b1ed811aea21");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_frozenset_8ca4f21d92efe9d3ae2c46d21c2c9c6e", mod_consts.const_frozenset_8ca4f21d92efe9d3ae2c46d21c2c9c6e);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_frozenset_8ca4f21d92efe9d3ae2c46d21c2c9c6e) && "mod_consts.const_frozenset_8ca4f21d92efe9d3ae2c46d21c2c9c6e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DEFAULT_REMOVE_HEADERS_ON_REDIRECT", mod_consts.const_str_plain_DEFAULT_REMOVE_HEADERS_ON_REDIRECT);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_REMOVE_HEADERS_ON_REDIRECT) && "mod_consts.const_str_plain_DEFAULT_REMOVE_HEADERS_ON_REDIRECT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_120", mod_consts.const_int_pos_120);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_int_pos_120) && "mod_consts.const_int_pos_120");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DEFAULT_BACKOFF_MAX", mod_consts.const_str_plain_DEFAULT_BACKOFF_MAX);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_BACKOFF_MAX) && "mod_consts.const_str_plain_DEFAULT_BACKOFF_MAX");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_21600", mod_consts.const_int_pos_21600);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_int_pos_21600) && "mod_consts.const_int_pos_21600");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DEFAULT_RETRY_AFTER_MAX", mod_consts.const_str_plain_DEFAULT_RETRY_AFTER_MAX);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_RETRY_AFTER_MAX) && "mod_consts.const_str_plain_DEFAULT_RETRY_AFTER_MAX");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0d3eb31e90b60373f2f97c21b6f7a847", mod_consts.const_str_digest_0d3eb31e90b60373f2f97c21b6f7a847);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_0d3eb31e90b60373f2f97c21b6f7a847) && "mod_consts.const_str_digest_0d3eb31e90b60373f2f97c21b6f7a847");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fe09d12920a7696ef5f9672332963f8a", mod_consts.const_str_digest_fe09d12920a7696ef5f9672332963f8a);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_digest_fe09d12920a7696ef5f9672332963f8a) && "mod_consts.const_str_digest_fe09d12920a7696ef5f9672332963f8a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_10", mod_consts.const_int_pos_10);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_int_pos_10) && "mod_consts.const_int_pos_10");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_930d80efafd869fd804a953f5fef025b", mod_consts.const_dict_930d80efafd869fd804a953f5fef025b);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_dict_930d80efafd869fd804a953f5fef025b) && "mod_consts.const_dict_930d80efafd869fd804a953f5fef025b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_297455e155b6c9736d87529e14591c5d", mod_consts.const_str_digest_297455e155b6c9736d87529e14591c5d);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_digest_297455e155b6c9736d87529e14591c5d) && "mod_consts.const_str_digest_297455e155b6c9736d87529e14591c5d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_51e59e6b72080f46eb453119b02e6e91", mod_consts.const_dict_51e59e6b72080f46eb453119b02e6e91);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_dict_51e59e6b72080f46eb453119b02e6e91) && "mod_consts.const_dict_51e59e6b72080f46eb453119b02e6e91");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ca693a71271df261e783dd0ecf309ae0", mod_consts.const_str_digest_ca693a71271df261e783dd0ecf309ae0);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_digest_ca693a71271df261e783dd0ecf309ae0) && "mod_consts.const_str_digest_ca693a71271df261e783dd0ecf309ae0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_true_none_tuple", mod_consts.const_tuple_true_none_tuple);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_true_none_tuple) && "mod_consts.const_tuple_true_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_8f48e88f669270772c4e41d6ef1eff4e", mod_consts.const_dict_8f48e88f669270772c4e41d6ef1eff4e);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_dict_8f48e88f669270772c4e41d6ef1eff4e) && "mod_consts.const_dict_8f48e88f669270772c4e41d6ef1eff4e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_from_int", mod_consts.const_str_plain_from_int);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_int) && "mod_consts.const_str_plain_from_int");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_00aff75c087fe7f80636ea13a09e3e82", mod_consts.const_str_digest_00aff75c087fe7f80636ea13a09e3e82);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_digest_00aff75c087fe7f80636ea13a09e3e82) && "mod_consts.const_str_digest_00aff75c087fe7f80636ea13a09e3e82");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6", mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6) && "mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e80b9085df081452c8caeed4571c51b7", mod_consts.const_str_digest_e80b9085df081452c8caeed4571c51b7);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_digest_e80b9085df081452c8caeed4571c51b7) && "mod_consts.const_str_digest_e80b9085df081452c8caeed4571c51b7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_2b04ec6c02fc6fc479932fe5aec0645c", mod_consts.const_dict_2b04ec6c02fc6fc479932fe5aec0645c);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_dict_2b04ec6c02fc6fc479932fe5aec0645c) && "mod_consts.const_dict_2b04ec6c02fc6fc479932fe5aec0645c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_683309cb722498c00ca029ec4e15acbf", mod_consts.const_str_digest_683309cb722498c00ca029ec4e15acbf);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_digest_683309cb722498c00ca029ec4e15acbf) && "mod_consts.const_str_digest_683309cb722498c00ca029ec4e15acbf");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_47a9e3a65b34120a85309ca49510e889", mod_consts.const_dict_47a9e3a65b34120a85309ca49510e889);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_dict_47a9e3a65b34120a85309ca49510e889) && "mod_consts.const_dict_47a9e3a65b34120a85309ca49510e889");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6659ea07dd436805b2630885700a6e61", mod_consts.const_str_digest_6659ea07dd436805b2630885700a6e61);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_digest_6659ea07dd436805b2630885700a6e61) && "mod_consts.const_str_digest_6659ea07dd436805b2630885700a6e61");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_d21fbc98611755784fb8186818cb645a", mod_consts.const_dict_d21fbc98611755784fb8186818cb645a);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_dict_d21fbc98611755784fb8186818cb645a) && "mod_consts.const_dict_d21fbc98611755784fb8186818cb645a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9bdc7bd568ca4c860ba3d9ea8f97a38f", mod_consts.const_str_digest_9bdc7bd568ca4c860ba3d9ea8f97a38f);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_digest_9bdc7bd568ca4c860ba3d9ea8f97a38f) && "mod_consts.const_str_digest_9bdc7bd568ca4c860ba3d9ea8f97a38f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb", mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb) && "mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_504591e526cc625e5b3bbfcf35d4ec2f", mod_consts.const_str_digest_504591e526cc625e5b3bbfcf35d4ec2f);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_digest_504591e526cc625e5b3bbfcf35d4ec2f) && "mod_consts.const_str_digest_504591e526cc625e5b3bbfcf35d4ec2f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple) && "mod_consts.const_tuple_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_47a9fd1a46a9175f4f0097b003c2c12b", mod_consts.const_dict_47a9fd1a46a9175f4f0097b003c2c12b);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_dict_47a9fd1a46a9175f4f0097b003c2c12b) && "mod_consts.const_dict_47a9fd1a46a9175f4f0097b003c2c12b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b0594eafa05dc6a6810bb2c7c291548b", mod_consts.const_str_digest_b0594eafa05dc6a6810bb2c7c291548b);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_digest_b0594eafa05dc6a6810bb2c7c291548b) && "mod_consts.const_str_digest_b0594eafa05dc6a6810bb2c7c291548b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_cf5b7b3d5c104d52d1cd532465fa7d0e", mod_consts.const_dict_cf5b7b3d5c104d52d1cd532465fa7d0e);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_dict_cf5b7b3d5c104d52d1cd532465fa7d0e) && "mod_consts.const_dict_cf5b7b3d5c104d52d1cd532465fa7d0e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7e60379875538acb6d47a09b3bcd7fdf", mod_consts.const_str_digest_7e60379875538acb6d47a09b3bcd7fdf);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_digest_7e60379875538acb6d47a09b3bcd7fdf) && "mod_consts.const_str_digest_7e60379875538acb6d47a09b3bcd7fdf");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2d8b572caa8eac58f71c5c2fc1f268f9", mod_consts.const_str_digest_2d8b572caa8eac58f71c5c2fc1f268f9);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_digest_2d8b572caa8eac58f71c5c2fc1f268f9) && "mod_consts.const_str_digest_2d8b572caa8eac58f71c5c2fc1f268f9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b1b1324bca4a40096f1a76d1a8a01373", mod_consts.const_dict_b1b1324bca4a40096f1a76d1a8a01373);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_dict_b1b1324bca4a40096f1a76d1a8a01373) && "mod_consts.const_dict_b1b1324bca4a40096f1a76d1a8a01373");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0ea7366bdeb0b49141acb3ad1441b7b5", mod_consts.const_str_digest_0ea7366bdeb0b49141acb3ad1441b7b5);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_digest_0ea7366bdeb0b49141acb3ad1441b7b5) && "mod_consts.const_str_digest_0ea7366bdeb0b49141acb3ad1441b7b5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_false_tuple", mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple) && "mod_consts.const_tuple_false_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_3b7db28d5171d8b376654fc5ffa79f3a", mod_consts.const_dict_3b7db28d5171d8b376654fc5ffa79f3a);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_dict_3b7db28d5171d8b376654fc5ffa79f3a) && "mod_consts.const_dict_3b7db28d5171d8b376654fc5ffa79f3a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_retry", mod_consts.const_str_plain_is_retry);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_retry) && "mod_consts.const_str_plain_is_retry");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_43a062f907032f59d25a421045c4a843", mod_consts.const_str_digest_43a062f907032f59d25a421045c4a843);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_digest_43a062f907032f59d25a421045c4a843) && "mod_consts.const_str_digest_43a062f907032f59d25a421045c4a843");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6", mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6) && "mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4506185023298da4a69876975fb76211", mod_consts.const_str_digest_4506185023298da4a69876975fb76211);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_digest_4506185023298da4a69876975fb76211) && "mod_consts.const_str_digest_4506185023298da4a69876975fb76211");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_none_none_none_none_tuple", mod_consts.const_tuple_none_none_none_none_none_none_tuple);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_none_none_tuple) && "mod_consts.const_tuple_none_none_none_none_none_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_357164c33a1363a25ffb265c19e3f222", mod_consts.const_dict_357164c33a1363a25ffb265c19e3f222);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_dict_357164c33a1363a25ffb265c19e3f222) && "mod_consts.const_dict_357164c33a1363a25ffb265c19e3f222");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_increment", mod_consts.const_str_plain_increment);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_plain_increment) && "mod_consts.const_str_plain_increment");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d3c5cf2f2d706173f393307c5fa372aa", mod_consts.const_str_digest_d3c5cf2f2d706173f393307c5fa372aa);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_digest_d3c5cf2f2d706173f393307c5fa372aa) && "mod_consts.const_str_digest_d3c5cf2f2d706173f393307c5fa372aa");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b", mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b) && "mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___repr__", mod_consts.const_str_plain___repr__);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain___repr__) && "mod_consts.const_str_plain___repr__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4291b42c0261755daa9f58af16f24a8c", mod_consts.const_str_digest_4291b42c0261755daa9f58af16f24a8c);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_digest_4291b42c0261755daa9f58af16f24a8c) && "mod_consts.const_str_digest_4291b42c0261755daa9f58af16f24a8c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_7f8b86aa06e82d9687856bdbf6133811_tuple", mod_consts.const_tuple_7f8b86aa06e82d9687856bdbf6133811_tuple);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_tuple_7f8b86aa06e82d9687856bdbf6133811_tuple) && "mod_consts.const_tuple_7f8b86aa06e82d9687856bdbf6133811_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_3_tuple", mod_consts.const_tuple_int_pos_3_tuple);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_3_tuple) && "mod_consts.const_tuple_int_pos_3_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_391b29a9c7c47e7b9ce511926b0328f9", mod_consts.const_str_digest_391b29a9c7c47e7b9ce511926b0328f9);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_digest_391b29a9c7c47e7b9ce511926b0328f9) && "mod_consts.const_str_digest_391b29a9c7c47e7b9ce511926b0328f9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_h_tuple", mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_h_tuple);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_h_tuple) && "mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_h_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_x_tuple", mod_consts.const_tuple_str_plain_x_tuple);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_tuple) && "mod_consts.const_tuple_str_plain_x_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3d8456b692ba12d694b1345117db0cc2", mod_consts.const_str_digest_3d8456b692ba12d694b1345117db0cc2);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_digest_3d8456b692ba12d694b1345117db0cc2) && "mod_consts.const_str_digest_3d8456b692ba12d694b1345117db0cc2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple) && "mod_consts.const_tuple_str_plain___class___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_17c6d2d1ee8300f3169f5c64c0cababb_tuple", mod_consts.const_tuple_17c6d2d1ee8300f3169f5c64c0cababb_tuple);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_tuple_17c6d2d1ee8300f3169f5c64c0cababb_tuple) && "mod_consts.const_tuple_17c6d2d1ee8300f3169f5c64c0cababb_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple) && "mod_consts.const_tuple_str_plain_self_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_err_tuple", mod_consts.const_tuple_str_plain_self_str_plain_err_tuple);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_err_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_err_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_method_tuple", mod_consts.const_tuple_str_plain_self_str_plain_method_tuple);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_method_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_method_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_backoff_tuple", mod_consts.const_tuple_str_plain_self_str_plain_backoff_tuple);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_backoff_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_backoff_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple", mod_consts.const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple) && "mod_consts.const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_c9e3a586d4f3f3473aae70b0fd105244_tuple", mod_consts.const_tuple_c9e3a586d4f3f3473aae70b0fd105244_tuple);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_tuple_c9e3a586d4f3f3473aae70b0fd105244_tuple) && "mod_consts.const_tuple_c9e3a586d4f3f3473aae70b0fd105244_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_response_str_plain_retry_after_tuple", mod_consts.const_tuple_str_plain_self_str_plain_response_str_plain_retry_after_tuple);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_response_str_plain_retry_after_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_response_str_plain_retry_after_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_697ae5bd322ff4bef13f49da7f5c94b4_tuple", mod_consts.const_tuple_697ae5bd322ff4bef13f49da7f5c94b4_tuple);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_tuple_697ae5bd322ff4bef13f49da7f5c94b4_tuple) && "mod_consts.const_tuple_697ae5bd322ff4bef13f49da7f5c94b4_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_retry_counts_tuple", mod_consts.const_tuple_str_plain_self_str_plain_retry_counts_tuple);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_retry_counts_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_retry_counts_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_af7a4b17458dd36fc41146a5b8a2af40_tuple", mod_consts.const_tuple_af7a4b17458dd36fc41146a5b8a2af40_tuple);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_tuple_af7a4b17458dd36fc41146a5b8a2af40_tuple) && "mod_consts.const_tuple_af7a4b17458dd36fc41146a5b8a2af40_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_kw_str_plain_params_tuple", mod_consts.const_tuple_str_plain_self_str_plain_kw_str_plain_params_tuple);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_kw_str_plain_params_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_kw_str_plain_params_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_7ec0339ea4b600c54d62b35ef1319da6_tuple", mod_consts.const_tuple_7ec0339ea4b600c54d62b35ef1319da6_tuple);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_tuple_7ec0339ea4b600c54d62b35ef1319da6_tuple) && "mod_consts.const_tuple_7ec0339ea4b600c54d62b35ef1319da6_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_response_str_plain_slept_tuple", mod_consts.const_tuple_str_plain_self_str_plain_response_str_plain_slept_tuple);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_response_str_plain_slept_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_response_str_plain_slept_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 18
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
static PyObject *module_var_accessor_urllib3$util$retry$ConnectTimeoutError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$retry->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$retry->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectTimeoutError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$retry->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConnectTimeoutError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConnectTimeoutError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConnectTimeoutError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConnectTimeoutError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectTimeoutError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectTimeoutError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectTimeoutError);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$retry$InvalidHeader(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$retry->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$retry->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidHeader);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$retry->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidHeader);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidHeader, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidHeader);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidHeader, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidHeader);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidHeader);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidHeader);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$retry$MaxRetryError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$retry->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$retry->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_MaxRetryError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$retry->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MaxRetryError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MaxRetryError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MaxRetryError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MaxRetryError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_MaxRetryError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_MaxRetryError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MaxRetryError);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$retry$ProtocolError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$retry->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$retry->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_ProtocolError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$retry->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ProtocolError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ProtocolError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ProtocolError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ProtocolError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_ProtocolError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_ProtocolError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ProtocolError);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$retry$ProxyError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$retry->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$retry->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$retry->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ProxyError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ProxyError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ProxyError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ProxyError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyError);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$retry$ReadTimeoutError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$retry->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$retry->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadTimeoutError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$retry->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ReadTimeoutError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ReadTimeoutError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ReadTimeoutError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ReadTimeoutError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadTimeoutError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadTimeoutError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadTimeoutError);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$retry$RequestHistory(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$retry->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$retry->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestHistory);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$retry->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RequestHistory);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RequestHistory, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RequestHistory);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RequestHistory, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestHistory);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestHistory);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestHistory);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$retry$ResponseError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$retry->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$retry->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$retry->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseError);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$retry$Retry(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$retry->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$retry->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_Retry);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$retry->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Retry);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Retry, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Retry);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Retry, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_Retry);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_Retry);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Retry);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$retry$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$retry->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$retry->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$retry->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$retry$email(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$retry->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$retry->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_email);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$retry->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_email);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_email, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_email);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_email, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_email);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_email);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_email);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$retry$log(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$retry->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$retry->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$retry->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_log);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_log, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_log);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_log, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$retry$logging(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$retry->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$retry->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$retry->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$retry$random(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$retry->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$retry->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_random);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$retry->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_random);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_random, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_random);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_random, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_random);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_random);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_random);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$retry$re(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$retry->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$retry->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$retry->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$retry$reraise(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$retry->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$retry->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_reraise);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$retry->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_reraise);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_reraise, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_reraise);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_reraise, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_reraise);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_reraise);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_reraise);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$retry$takewhile(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$retry->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$retry->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_takewhile);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$retry->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_takewhile);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_takewhile, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_takewhile);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_takewhile, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_takewhile);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_takewhile);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_takewhile);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$retry$time(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$retry->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$retry->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$retry->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_time);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_time, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_time);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_time, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_5127bede402326e58f3d20d98e5c665d;
static PyCodeObject *code_objects_43dd092d8afce702d739e5c30be13c48;
static PyCodeObject *code_objects_8d73e85f3b85a3baaf36dd233f654e7e;
static PyCodeObject *code_objects_aad94d307d9b4666bdd1b42ad9d46ce6;
static PyCodeObject *code_objects_88b41fe231a439b823614f99449e6aaf;
static PyCodeObject *code_objects_21e6dc17ad22e507b79a35fdfb9338b0;
static PyCodeObject *code_objects_a0b3ef05378dcf814ed276c8e23c4d45;
static PyCodeObject *code_objects_d732e1c2781c451418245db1ddbf324a;
static PyCodeObject *code_objects_0cfa2b7f274152e8e9d9f11c4522f8f9;
static PyCodeObject *code_objects_78cc786c6ebc07a0a052ab753dee65f2;
static PyCodeObject *code_objects_67f8a0502097c8c3dc47792a1841ceae;
static PyCodeObject *code_objects_24656454d9ed2e8e8107ddf5da3f7291;
static PyCodeObject *code_objects_79f8e503e7bc2b0f51866ab6b201fdc9;
static PyCodeObject *code_objects_5088cd9fefb1795869c1650236e0dbcd;
static PyCodeObject *code_objects_19a57d0ac5a4c5ae7f05c4c42eb6b38d;
static PyCodeObject *code_objects_32d420eef90b7565c3829fd5d5751b09;
static PyCodeObject *code_objects_bc0ff8002e1f6568b43cf08aca2f18be;
static PyCodeObject *code_objects_9122938b0e955c6890e90f081b3c716f;
static PyCodeObject *code_objects_2b230b6baf310d3ab2b8586c2a768a3d;
static PyCodeObject *code_objects_3b05a3e21ce2a8c4e1c2dd3de5a11d50;
static PyCodeObject *code_objects_7bd80c75c949766c59f432fda1b234b4;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_391b29a9c7c47e7b9ce511926b0328f9); CHECK_OBJECT(module_filename_obj);
code_objects_5127bede402326e58f3d20d98e5c665d = MAKE_CODE_OBJECT(module_filename_obj, 261, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_62d805184c0319e291ba36f70b7ad180, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_h_tuple, NULL, 1, 0, 0);
code_objects_43dd092d8afce702d739e5c30be13c48 = MAKE_CODE_OBJECT(module_filename_obj, 317, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_lambda, mod_consts.const_str_digest_96630de8eadb33fda97640a57fbbbd1c, mod_consts.const_tuple_str_plain_x_tuple, NULL, 1, 0, 0);
code_objects_8d73e85f3b85a3baaf36dd233f654e7e = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_3d8456b692ba12d694b1345117db0cc2, mod_consts.const_str_digest_3d8456b692ba12d694b1345117db0cc2, NULL, NULL, 0, 0, 0);
code_objects_aad94d307d9b4666bdd1b42ad9d46ce6 = MAKE_CODE_OBJECT(module_filename_obj, 33, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_RequestHistory, mod_consts.const_str_plain_RequestHistory, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_88b41fe231a439b823614f99449e6aaf = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Retry, mod_consts.const_str_plain_Retry, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_21e6dc17ad22e507b79a35fdfb9338b0 = MAKE_CODE_OBJECT(module_filename_obj, 219, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_297455e155b6c9736d87529e14591c5d, mod_consts.const_tuple_17c6d2d1ee8300f3169f5c64c0cababb_tuple, NULL, 18, 0, 0);
code_objects_a0b3ef05378dcf814ed276c8e23c4d45 = MAKE_CODE_OBJECT(module_filename_obj, 549, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_4291b42c0261755daa9f58af16f24a8c, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_d732e1c2781c451418245db1ddbf324a = MAKE_CODE_OBJECT(module_filename_obj, 389, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__is_connection_error, mod_consts.const_str_digest_7e60379875538acb6d47a09b3bcd7fdf, mod_consts.const_tuple_str_plain_self_str_plain_err_tuple, NULL, 2, 0, 0);
code_objects_0cfa2b7f274152e8e9d9f11c4522f8f9 = MAKE_CODE_OBJECT(module_filename_obj, 403, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__is_method_retryable, mod_consts.const_str_digest_0ea7366bdeb0b49141acb3ad1441b7b5, mod_consts.const_tuple_str_plain_self_str_plain_method_tuple, NULL, 2, 0, 0);
code_objects_78cc786c6ebc07a0a052ab753dee65f2 = MAKE_CODE_OBJECT(module_filename_obj, 397, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__is_read_error, mod_consts.const_str_digest_2d8b572caa8eac58f71c5c2fc1f268f9, mod_consts.const_tuple_str_plain_self_str_plain_err_tuple, NULL, 2, 0, 0);
code_objects_67f8a0502097c8c3dc47792a1841ceae = MAKE_CODE_OBJECT(module_filename_obj, 367, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__sleep_backoff, mod_consts.const_str_digest_504591e526cc625e5b3bbfcf35d4ec2f, mod_consts.const_tuple_str_plain_self_str_plain_backoff_tuple, NULL, 1, 0, 0);
code_objects_24656454d9ed2e8e8107ddf5da3f7291 = MAKE_CODE_OBJECT(module_filename_obj, 291, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_from_int, mod_consts.const_str_digest_00aff75c087fe7f80636ea13a09e3e82, mod_consts.const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple, NULL, 4, 0, 0);
code_objects_79f8e503e7bc2b0f51866ab6b201fdc9 = MAKE_CODE_OBJECT(module_filename_obj, 309, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_backoff_time, mod_consts.const_str_digest_e80b9085df081452c8caeed4571c51b7, mod_consts.const_tuple_c9e3a586d4f3f3473aae70b0fd105244_tuple, NULL, 1, 0, 0);
code_objects_5088cd9fefb1795869c1650236e0dbcd = MAKE_CODE_OBJECT(module_filename_obj, 349, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_retry_after, mod_consts.const_str_digest_6659ea07dd436805b2630885700a6e61, mod_consts.const_tuple_str_plain_self_str_plain_response_str_plain_retry_after_tuple, NULL, 2, 0, 0);
code_objects_19a57d0ac5a4c5ae7f05c4c42eb6b38d = MAKE_CODE_OBJECT(module_filename_obj, 452, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_increment, mod_consts.const_str_digest_d3c5cf2f2d706173f393307c5fa372aa, mod_consts.const_tuple_697ae5bd322ff4bef13f49da7f5c94b4_tuple, NULL, 7, 0, 0);
code_objects_32d420eef90b7565c3829fd5d5751b09 = MAKE_CODE_OBJECT(module_filename_obj, 433, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_exhausted, mod_consts.const_str_digest_4506185023298da4a69876975fb76211, mod_consts.const_tuple_str_plain_self_str_plain_retry_counts_tuple, NULL, 1, 0, 0);
code_objects_bc0ff8002e1f6568b43cf08aca2f18be = MAKE_CODE_OBJECT(module_filename_obj, 411, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_retry, mod_consts.const_str_digest_43a062f907032f59d25a421045c4a843, mod_consts.const_tuple_af7a4b17458dd36fc41146a5b8a2af40_tuple, NULL, 4, 0, 0);
code_objects_9122938b0e955c6890e90f081b3c716f = MAKE_CODE_OBJECT(module_filename_obj, 266, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_new, mod_consts.const_str_digest_ca693a71271df261e783dd0ecf309ae0, mod_consts.const_tuple_str_plain_self_str_plain_kw_str_plain_params_tuple, NULL, 1, 0, 0);
code_objects_2b230b6baf310d3ab2b8586c2a768a3d = MAKE_CODE_OBJECT(module_filename_obj, 328, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_parse_retry_after, mod_consts.const_str_digest_683309cb722498c00ca029ec4e15acbf, mod_consts.const_tuple_7ec0339ea4b600c54d62b35ef1319da6_tuple, NULL, 2, 0, 0);
code_objects_3b05a3e21ce2a8c4e1c2dd3de5a11d50 = MAKE_CODE_OBJECT(module_filename_obj, 373, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_sleep, mod_consts.const_str_digest_b0594eafa05dc6a6810bb2c7c291548b, mod_consts.const_tuple_str_plain_self_str_plain_response_str_plain_slept_tuple, NULL, 2, 0, 0);
code_objects_7bd80c75c949766c59f432fda1b234b4 = MAKE_CODE_OBJECT(module_filename_obj, 359, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_sleep_for_retry, mod_consts.const_str_digest_9bdc7bd568ca4c860ba3d9ea8f97a38f, mod_consts.const_tuple_str_plain_self_str_plain_response_str_plain_retry_after_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_urllib3$util$retry$$$function__1___init__$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function__10__is_connection_error(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function__11__is_read_error(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function__12__is_method_retryable(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function__13_is_retry(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function__14_is_exhausted(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function__15_increment(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function__16___repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function__2_new(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function__3_from_int(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function__4_get_backoff_time(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function__4_get_backoff_time$$$function__1_lambda(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function__5_parse_retry_after(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function__6_get_retry_after(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function__7_sleep_for_retry(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function__8__sleep_backoff(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function__9_sleep(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_urllib3$util$retry$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_total = python_pars[1];
PyObject *par_connect = python_pars[2];
PyObject *par_read = python_pars[3];
PyObject *par_redirect = python_pars[4];
PyObject *par_status = python_pars[5];
PyObject *par_other = python_pars[6];
PyObject *par_allowed_methods = python_pars[7];
PyObject *par_status_forcelist = python_pars[8];
PyObject *par_backoff_factor = python_pars[9];
PyObject *par_backoff_max = python_pars[10];
PyObject *par_raise_on_redirect = python_pars[11];
PyObject *par_raise_on_status = python_pars[12];
PyObject *par_history = python_pars[13];
PyObject *par_respect_retry_after_header = python_pars[14];
PyObject *par_remove_headers_on_redirect = python_pars[15];
PyObject *par_backoff_jitter = python_pars[16];
PyObject *par_retry_after_max = python_pars[17];
PyObject *tmp_genexpr_1__$0 = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$retry$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$retry$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$retry$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$retry$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$retry$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$retry$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_21e6dc17ad22e507b79a35fdfb9338b0, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$retry$$$function__1___init__->m_type_description == NULL);
frame_frame_urllib3$util$retry$$$function__1___init__ = cache_frame_frame_urllib3$util$retry$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$retry$$$function__1___init__);
assert(Py_REFCNT(frame_frame_urllib3$util$retry$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(par_total);
tmp_ass_attr_value_1 = par_total;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_total, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_ass_attr_target_2;
CHECK_OBJECT(par_connect);
tmp_ass_attr_value_2 = par_connect;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain_connect, tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_ass_attr_target_3;
CHECK_OBJECT(par_read);
tmp_ass_attr_value_3 = par_read;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, const_str_plain_read, tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_4;
PyObject *tmp_ass_attr_target_4;
CHECK_OBJECT(par_status);
tmp_ass_attr_value_4 = par_status;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_4, mod_consts.const_str_plain_status, tmp_ass_attr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_5;
PyObject *tmp_ass_attr_target_5;
CHECK_OBJECT(par_other);
tmp_ass_attr_value_5 = par_other;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_5, mod_consts.const_str_plain_other, tmp_ass_attr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_1;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_redirect);
tmp_cmp_expr_left_1 = par_redirect;
tmp_cmp_expr_right_1 = Py_False;
tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_total);
tmp_cmp_expr_left_2 = par_total;
tmp_cmp_expr_right_2 = Py_False;
tmp_or_right_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
tmp_condition_result_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_1 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = const_int_0;
{
    PyObject *old = par_redirect;
    assert(old != NULL);
    par_redirect = tmp_assign_source_1;
    Py_INCREF(par_redirect);
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = Py_False;
{
    PyObject *old = par_raise_on_redirect;
    assert(old != NULL);
    par_raise_on_redirect = tmp_assign_source_2;
    Py_INCREF(par_raise_on_redirect);
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_ass_attr_value_6;
PyObject *tmp_ass_attr_target_6;
CHECK_OBJECT(par_redirect);
tmp_ass_attr_value_6 = par_redirect;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_6, mod_consts.const_str_plain_redirect, tmp_ass_attr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_7;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_ass_attr_target_7;
CHECK_OBJECT(par_status_forcelist);
tmp_or_left_value_2 = par_status_forcelist;
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
tmp_or_right_value_2 = PySet_New(NULL);
tmp_ass_attr_value_7 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
Py_INCREF(tmp_or_left_value_2);
tmp_ass_attr_value_7 = tmp_or_left_value_2;
or_end_2:;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_7, mod_consts.const_str_plain_status_forcelist, tmp_ass_attr_value_7);
CHECK_OBJECT(tmp_ass_attr_value_7);
Py_DECREF(tmp_ass_attr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_8;
PyObject *tmp_ass_attr_target_8;
CHECK_OBJECT(par_allowed_methods);
tmp_ass_attr_value_8 = par_allowed_methods;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_8 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_8, mod_consts.const_str_plain_allowed_methods, tmp_ass_attr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_9;
PyObject *tmp_ass_attr_target_9;
CHECK_OBJECT(par_backoff_factor);
tmp_ass_attr_value_9 = par_backoff_factor;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_9 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_9, mod_consts.const_str_plain_backoff_factor, tmp_ass_attr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_10;
PyObject *tmp_ass_attr_target_10;
CHECK_OBJECT(par_backoff_max);
tmp_ass_attr_value_10 = par_backoff_max;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_10 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_10, mod_consts.const_str_plain_backoff_max, tmp_ass_attr_value_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_11;
PyObject *tmp_ass_attr_target_11;
CHECK_OBJECT(par_retry_after_max);
tmp_ass_attr_value_11 = par_retry_after_max;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_11 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_11, mod_consts.const_str_plain_retry_after_max, tmp_ass_attr_value_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_12;
PyObject *tmp_ass_attr_target_12;
CHECK_OBJECT(par_raise_on_redirect);
tmp_ass_attr_value_12 = par_raise_on_redirect;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_12 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_12, mod_consts.const_str_plain_raise_on_redirect, tmp_ass_attr_value_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_13;
PyObject *tmp_ass_attr_target_13;
CHECK_OBJECT(par_raise_on_status);
tmp_ass_attr_value_13 = par_raise_on_status;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_13 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_13, mod_consts.const_str_plain_raise_on_status, tmp_ass_attr_value_13);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_14;
int tmp_or_left_truth_3;
PyObject *tmp_or_left_value_3;
PyObject *tmp_or_right_value_3;
PyObject *tmp_ass_attr_target_14;
CHECK_OBJECT(par_history);
tmp_or_left_value_3 = par_history;
tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
tmp_or_right_value_3 = const_tuple_empty;
tmp_ass_attr_value_14 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_ass_attr_value_14 = tmp_or_left_value_3;
or_end_3:;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_14 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_14, mod_consts.const_str_plain_history, tmp_ass_attr_value_14);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_15;
PyObject *tmp_ass_attr_target_15;
CHECK_OBJECT(par_respect_retry_after_header);
tmp_ass_attr_value_15 = par_respect_retry_after_header;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_15 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_15, mod_consts.const_str_plain_respect_retry_after_header, tmp_ass_attr_value_15);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_16;
PyObject *tmp_frozenset_arg_1;
PyObject *tmp_ass_attr_target_16;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_remove_headers_on_redirect);
tmp_iter_arg_1 = par_remove_headers_on_redirect;
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_genexpr_1__$0;
    tmp_genexpr_1__$0 = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_frozenset_arg_1 = MAKE_GENERATOR_urllib3$util$retry$$$function__1___init__$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_2;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_ass_attr_value_16 = PyFrozenSet_New(tmp_frozenset_arg_1);
CHECK_OBJECT(tmp_frozenset_arg_1);
Py_DECREF(tmp_frozenset_arg_1);
if (tmp_ass_attr_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_16 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_16, mod_consts.const_str_plain_remove_headers_on_redirect, tmp_ass_attr_value_16);
CHECK_OBJECT(tmp_ass_attr_value_16);
Py_DECREF(tmp_ass_attr_value_16);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_17;
PyObject *tmp_ass_attr_target_17;
CHECK_OBJECT(par_backoff_jitter);
tmp_ass_attr_value_17 = par_backoff_jitter;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_17 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_17, mod_consts.const_str_plain_backoff_jitter, tmp_ass_attr_value_17);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "oooooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$retry$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$retry$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$retry$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$retry$$$function__1___init__,
    type_description_1,
    par_self,
    par_total,
    par_connect,
    par_read,
    par_redirect,
    par_status,
    par_other,
    par_allowed_methods,
    par_status_forcelist,
    par_backoff_factor,
    par_backoff_max,
    par_raise_on_redirect,
    par_raise_on_status,
    par_history,
    par_respect_retry_after_header,
    par_remove_headers_on_redirect,
    par_backoff_jitter,
    par_retry_after_max
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$retry$$$function__1___init__ == cache_frame_frame_urllib3$util$retry$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$retry$$$function__1___init__);
    cache_frame_frame_urllib3$util$retry$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_urllib3$util$retry$$$function__1___init__);

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
CHECK_OBJECT(par_redirect);
CHECK_OBJECT(par_redirect);
Py_DECREF(par_redirect);
par_redirect = NULL;
CHECK_OBJECT(par_raise_on_redirect);
CHECK_OBJECT(par_raise_on_redirect);
Py_DECREF(par_raise_on_redirect);
par_raise_on_redirect = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_redirect);
par_redirect = NULL;
Py_XDECREF(par_raise_on_redirect);
par_raise_on_redirect = NULL;
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
CHECK_OBJECT(par_total);
Py_DECREF(par_total);
CHECK_OBJECT(par_connect);
Py_DECREF(par_connect);
CHECK_OBJECT(par_read);
Py_DECREF(par_read);
CHECK_OBJECT(par_status);
Py_DECREF(par_status);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
CHECK_OBJECT(par_allowed_methods);
Py_DECREF(par_allowed_methods);
CHECK_OBJECT(par_status_forcelist);
Py_DECREF(par_status_forcelist);
CHECK_OBJECT(par_backoff_factor);
Py_DECREF(par_backoff_factor);
CHECK_OBJECT(par_backoff_max);
Py_DECREF(par_backoff_max);
CHECK_OBJECT(par_raise_on_status);
Py_DECREF(par_raise_on_status);
CHECK_OBJECT(par_history);
Py_DECREF(par_history);
CHECK_OBJECT(par_respect_retry_after_header);
Py_DECREF(par_respect_retry_after_header);
CHECK_OBJECT(par_remove_headers_on_redirect);
Py_DECREF(par_remove_headers_on_redirect);
CHECK_OBJECT(par_backoff_jitter);
Py_DECREF(par_backoff_jitter);
CHECK_OBJECT(par_retry_after_max);
Py_DECREF(par_retry_after_max);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_total);
Py_DECREF(par_total);
CHECK_OBJECT(par_connect);
Py_DECREF(par_connect);
CHECK_OBJECT(par_read);
Py_DECREF(par_read);
CHECK_OBJECT(par_status);
Py_DECREF(par_status);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
CHECK_OBJECT(par_allowed_methods);
Py_DECREF(par_allowed_methods);
CHECK_OBJECT(par_status_forcelist);
Py_DECREF(par_status_forcelist);
CHECK_OBJECT(par_backoff_factor);
Py_DECREF(par_backoff_factor);
CHECK_OBJECT(par_backoff_max);
Py_DECREF(par_backoff_max);
CHECK_OBJECT(par_raise_on_status);
Py_DECREF(par_raise_on_status);
CHECK_OBJECT(par_history);
Py_DECREF(par_history);
CHECK_OBJECT(par_respect_retry_after_header);
Py_DECREF(par_respect_retry_after_header);
CHECK_OBJECT(par_remove_headers_on_redirect);
Py_DECREF(par_remove_headers_on_redirect);
CHECK_OBJECT(par_backoff_jitter);
Py_DECREF(par_backoff_jitter);
CHECK_OBJECT(par_retry_after_max);
Py_DECREF(par_retry_after_max);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct urllib3$util$retry$$$function__1___init__$$$genexpr__1_genexpr_locals {
PyObject *var_h;
PyObject *tmp_iter_value_0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *urllib3$util$retry$$$function__1___init__$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct urllib3$util$retry$$$function__1___init__$$$genexpr__1_genexpr_locals *generator_heap = (struct urllib3$util$retry$$$function__1___init__$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_h = NULL;
generator_heap->tmp_iter_value_0 = NULL;
generator_heap->type_description_1 = NULL;
generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
generator_heap->exception_lineno = 0;

    // Actual generator function body.
// Tried code:
if (isFrameUnusable(cache_m_frame)) {
    Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
    if (cache_m_frame == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_5127bede402326e58f3d20d98e5c665d, module_urllib3$util$retry, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
generator->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(generator->m_frame);
assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

assert(generator->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, generator->m_frame);
assert(Py_REFCNT(generator->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_GENERATOR_EXCEPTION(tstate, generator);

// Framed code:
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_1;
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_1 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "No";
generator_heap->exception_lineno = 261;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_iter_value_0;
    generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(generator_heap->tmp_iter_value_0);
tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
{
    PyObject *old = generator_heap->var_h;
    generator_heap->var_h = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_h);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_h);
tmp_expression_value_2 = generator_heap->var_h;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_lower);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 262;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 262;
tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 262;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 262;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 261;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;

// Release exception attached to the frame
DROP_GENERATOR_EXCEPTION(generator);



goto frame_no_exception_1;
frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &generator_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state, exception_tb);
    } else if ((generator_heap->exception_lineno != 0) && (exception_tb->tb_frame != &generator->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    generator->m_frame,
    generator_heap->type_description_1,
    NULL,
    generator_heap->var_h
);


    // Release cached frame if used for exception.
    if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(generator->m_frame);
}

// Release exception attached to the frame
DROP_GENERATOR_EXCEPTION(generator);


// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_h);
generator_heap->var_h = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_h);
generator_heap->var_h = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_urllib3$util$retry$$$function__1___init__$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        urllib3$util$retry$$$function__1___init__$$$genexpr__1_genexpr_context,
        module_urllib3$util$retry,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_62d805184c0319e291ba36f70b7ad180,
#endif
        code_objects_5127bede402326e58f3d20d98e5c665d,
        closure,
        1,
#if 1
        sizeof(struct urllib3$util$retry$$$function__1___init__$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_urllib3$util$retry$$$function__2_new(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_kw = python_pars[1];
PyObject *var_params = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$retry$$$function__2_new;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$retry$$$function__2_new = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$retry$$$function__2_new)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$retry$$$function__2_new);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$retry$$$function__2_new == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$retry$$$function__2_new = MAKE_FUNCTION_FRAME(tstate, code_objects_9122938b0e955c6890e90f081b3c716f, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$retry$$$function__2_new->m_type_description == NULL);
frame_frame_urllib3$util$retry$$$function__2_new = cache_frame_frame_urllib3$util$retry$$$function__2_new;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$retry$$$function__2_new);
assert(Py_REFCNT(frame_frame_urllib3$util$retry$$$function__2_new) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_total;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_total);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = _PyDict_NewPresized( 17 );
{
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_connect;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_connect);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = const_str_plain_read;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_read);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_redirect;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_redirect);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_status;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_status);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_other;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_other);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_allowed_methods;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_allowed_methods);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_status_forcelist;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_status_forcelist);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_backoff_factor;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_backoff_factor);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_backoff_max;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_backoff_max);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_retry_after_max;
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_retry_after_max);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_raise_on_redirect;
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_raise_on_redirect);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_raise_on_status;
CHECK_OBJECT(par_self);
tmp_expression_value_13 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_raise_on_status);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_history;
CHECK_OBJECT(par_self);
tmp_expression_value_14 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_history);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_remove_headers_on_redirect;
CHECK_OBJECT(par_self);
tmp_expression_value_15 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_remove_headers_on_redirect);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_respect_retry_after_header;
CHECK_OBJECT(par_self);
tmp_expression_value_16 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_respect_retry_after_header);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_backoff_jitter;
CHECK_OBJECT(par_self);
tmp_expression_value_17 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_backoff_jitter);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
{
    PyObject *old = var_params;
    var_params = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_iterable_value_1;
CHECK_OBJECT(var_params);
tmp_dict_arg_value_1 = var_params;
CHECK_OBJECT(par_kw);
tmp_iterable_value_1 = par_kw;
assert(PyDict_Check(tmp_dict_arg_value_1));
    tmp_res = PyDict_Merge(tmp_dict_arg_value_1, tmp_iterable_value_1, 1);

if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_direct_call_arg2_1;
CHECK_OBJECT(par_self);
tmp_type_arg_1 = par_self;
tmp_direct_call_arg1_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_direct_call_arg1_1 == NULL));
CHECK_OBJECT(var_params);
tmp_direct_call_arg2_1 = var_params;
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$retry$$$function__2_new, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$retry$$$function__2_new->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$retry$$$function__2_new, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$retry$$$function__2_new,
    type_description_1,
    par_self,
    par_kw,
    var_params
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$retry$$$function__2_new == cache_frame_frame_urllib3$util$retry$$$function__2_new) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$retry$$$function__2_new);
    cache_frame_frame_urllib3$util$retry$$$function__2_new = NULL;
}

assertFrameObject(frame_frame_urllib3$util$retry$$$function__2_new);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_params);
CHECK_OBJECT(var_params);
Py_DECREF(var_params);
var_params = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_params);
var_params = NULL;
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
CHECK_OBJECT(par_kw);
Py_DECREF(par_kw);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_kw);
Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$retry$$$function__3_from_int(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_retries = python_pars[1];
PyObject *par_redirect = python_pars[2];
PyObject *par_default = python_pars[3];
PyObject *var_new_retries = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$retry$$$function__3_from_int;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$retry$$$function__3_from_int = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$retry$$$function__3_from_int)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$retry$$$function__3_from_int);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$retry$$$function__3_from_int == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$retry$$$function__3_from_int = MAKE_FUNCTION_FRAME(tstate, code_objects_24656454d9ed2e8e8107ddf5da3f7291, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$retry$$$function__3_from_int->m_type_description == NULL);
frame_frame_urllib3$util$retry$$$function__3_from_int = cache_frame_frame_urllib3$util$retry$$$function__3_from_int;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$retry$$$function__3_from_int);
assert(Py_REFCNT(frame_frame_urllib3$util$retry$$$function__3_from_int) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_retries);
tmp_cmp_expr_left_1 = par_retries;
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
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_default);
tmp_cmp_expr_left_2 = par_default;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_default);
tmp_assign_source_1 = par_default;
Py_INCREF(tmp_assign_source_1);
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(par_cls);
tmp_expression_value_1 = par_cls;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_DEFAULT);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
{
    PyObject *old = par_retries;
    assert(old != NULL);
    par_retries = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_retries);
tmp_isinstance_inst_1 = par_retries;
tmp_isinstance_cls_1 = module_var_accessor_urllib3$util$retry$Retry(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Retry);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 301;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
CHECK_OBJECT(par_retries);
tmp_return_value = par_retries;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
PyObject *tmp_assign_source_2;
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_value_value_1;
CHECK_OBJECT(par_redirect);
tmp_value_value_1 = par_redirect;
tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
tmp_and_right_value_1 = Py_None;
tmp_assign_source_2 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_assign_source_2 = tmp_and_left_value_1;
and_end_1:;
{
    PyObject *old = par_redirect;
    assert(old != NULL);
    par_redirect = tmp_assign_source_2;
    Py_INCREF(par_redirect);
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
CHECK_OBJECT(par_cls);
tmp_called_value_1 = par_cls;
CHECK_OBJECT(par_retries);
tmp_kw_call_arg_value_0_1 = par_retries;
CHECK_OBJECT(par_redirect);
tmp_kw_call_dict_value_0_1 = par_redirect;
frame_frame_urllib3$util$retry$$$function__3_from_int->m_frame.f_lineno = 305;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_redirect_tuple);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_new_retries;
    var_new_retries = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_instance_1 = module_var_accessor_urllib3$util$retry$log(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_log);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 306;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_3ff146bf2cbf06e10d34294d9109668e;
CHECK_OBJECT(par_retries);
tmp_args_element_value_2 = par_retries;
CHECK_OBJECT(var_new_retries);
tmp_args_element_value_3 = var_new_retries;
frame_frame_urllib3$util$retry$$$function__3_from_int->m_frame.f_lineno = 306;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_debug,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$retry$$$function__3_from_int, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$retry$$$function__3_from_int->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$retry$$$function__3_from_int, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$retry$$$function__3_from_int,
    type_description_1,
    par_cls,
    par_retries,
    par_redirect,
    par_default,
    var_new_retries
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$retry$$$function__3_from_int == cache_frame_frame_urllib3$util$retry$$$function__3_from_int) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$retry$$$function__3_from_int);
    cache_frame_frame_urllib3$util$retry$$$function__3_from_int = NULL;
}

assertFrameObject(frame_frame_urllib3$util$retry$$$function__3_from_int);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_new_retries);
tmp_return_value = var_new_retries;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_retries);
CHECK_OBJECT(par_retries);
Py_DECREF(par_retries);
par_retries = NULL;
Py_XDECREF(par_redirect);
par_redirect = NULL;
Py_XDECREF(var_new_retries);
var_new_retries = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_retries);
par_retries = NULL;
Py_XDECREF(par_redirect);
par_redirect = NULL;
Py_XDECREF(var_new_retries);
var_new_retries = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_default);
Py_DECREF(par_default);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_default);
Py_DECREF(par_default);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$retry$$$function__4_get_backoff_time(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_consecutive_errors_len = NULL;
PyObject *var_backoff_value = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$retry$$$function__4_get_backoff_time;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$retry$$$function__4_get_backoff_time = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$retry$$$function__4_get_backoff_time)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$retry$$$function__4_get_backoff_time);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$retry$$$function__4_get_backoff_time == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$retry$$$function__4_get_backoff_time = MAKE_FUNCTION_FRAME(tstate, code_objects_79f8e503e7bc2b0f51866ab6b201fdc9, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$retry$$$function__4_get_backoff_time->m_type_description == NULL);
frame_frame_urllib3$util$retry$$$function__4_get_backoff_time = cache_frame_frame_urllib3$util$retry$$$function__4_get_backoff_time;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$retry$$$function__4_get_backoff_time);
assert(Py_REFCNT(frame_frame_urllib3$util$retry$$$function__4_get_backoff_time) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_list_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_urllib3$util$retry$takewhile(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_takewhile);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 317;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = MAKE_FUNCTION_urllib3$util$retry$$$function__4_get_backoff_time$$$function__1_lambda(tstate);

tmp_called_value_2 = (PyObject *)&PyReversed_Type;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_history);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 317;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$retry$$$function__4_get_backoff_time->m_frame.f_lineno = 317;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 317;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$retry$$$function__4_get_backoff_time->m_frame.f_lineno = 317;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_list_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_len_arg_1 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_consecutive_errors_len;
    var_consecutive_errors_len = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
CHECK_OBJECT(var_consecutive_errors_len);
tmp_cmp_expr_left_1 = var_consecutive_errors_len;
tmp_cmp_expr_right_1 = 1;
tmp_condition_result_1 = RICH_COMPARE_LE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = const_int_0;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_pow_expr_left_1;
PyObject *tmp_pow_expr_right_1;
PyObject *tmp_sub_expr_left_1;
nuitka_digit tmp_sub_expr_right_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_backoff_factor);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_pow_expr_left_1 = mod_consts.const_int_pos_2;
CHECK_OBJECT(var_consecutive_errors_len);
tmp_sub_expr_left_1 = var_consecutive_errors_len;
tmp_sub_expr_right_1 = 1;
tmp_pow_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
assert(!(tmp_pow_expr_right_1 == NULL));
tmp_mult_expr_right_1 = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
CHECK_OBJECT(tmp_pow_expr_right_1);
Py_DECREF(tmp_pow_expr_right_1);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 323;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_backoff_value;
    var_backoff_value = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_backoff_jitter);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = const_float_0_0;
tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_FLOAT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_backoff_value);
tmp_iadd_expr_left_1 = var_backoff_value;
tmp_called_instance_1 = module_var_accessor_urllib3$util$retry$random(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_random);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 325;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$retry$$$function__4_get_backoff_time->m_frame.f_lineno = 325;
tmp_mult_expr_left_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_random);
if (tmp_mult_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_mult_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_backoff_jitter);
if (tmp_mult_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_2);

exception_lineno = 325;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_iadd_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_left_2);
Py_DECREF(tmp_mult_expr_left_2);
CHECK_OBJECT(tmp_mult_expr_right_2);
Py_DECREF(tmp_mult_expr_right_2);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = tmp_iadd_expr_left_1;
var_backoff_value = tmp_assign_source_3;

}
branch_no_2:;
{
PyObject *tmp_float_arg_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_7;
tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_3 != NULL);
tmp_args_element_value_4 = const_int_0;
tmp_called_value_4 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_4 != NULL);
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_backoff_max);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_backoff_value);
tmp_args_element_value_7 = var_backoff_value;
frame_frame_urllib3$util$retry$$$function__4_get_backoff_time->m_frame.f_lineno = 326;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_args_element_value_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$retry$$$function__4_get_backoff_time->m_frame.f_lineno = 326;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_float_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_float_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_return_value = TO_FLOAT(tmp_float_arg_1);
CHECK_OBJECT(tmp_float_arg_1);
Py_DECREF(tmp_float_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$retry$$$function__4_get_backoff_time, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$retry$$$function__4_get_backoff_time->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$retry$$$function__4_get_backoff_time, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$retry$$$function__4_get_backoff_time,
    type_description_1,
    par_self,
    var_consecutive_errors_len,
    var_backoff_value
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$retry$$$function__4_get_backoff_time == cache_frame_frame_urllib3$util$retry$$$function__4_get_backoff_time) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$retry$$$function__4_get_backoff_time);
    cache_frame_frame_urllib3$util$retry$$$function__4_get_backoff_time = NULL;
}

assertFrameObject(frame_frame_urllib3$util$retry$$$function__4_get_backoff_time);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_consecutive_errors_len);
CHECK_OBJECT(var_consecutive_errors_len);
Py_DECREF(var_consecutive_errors_len);
var_consecutive_errors_len = NULL;
Py_XDECREF(var_backoff_value);
var_backoff_value = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_consecutive_errors_len);
var_consecutive_errors_len = NULL;
Py_XDECREF(var_backoff_value);
var_backoff_value = NULL;
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


static PyObject *impl_urllib3$util$retry$$$function__4_get_backoff_time$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
struct Nuitka_FrameObject *frame_frame_urllib3$util$retry$$$function__4_get_backoff_time$$$function__1_lambda;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$retry$$$function__4_get_backoff_time$$$function__1_lambda = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$retry$$$function__4_get_backoff_time$$$function__1_lambda)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$retry$$$function__4_get_backoff_time$$$function__1_lambda);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$retry$$$function__4_get_backoff_time$$$function__1_lambda == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$retry$$$function__4_get_backoff_time$$$function__1_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_43dd092d8afce702d739e5c30be13c48, module_urllib3$util$retry, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$retry$$$function__4_get_backoff_time$$$function__1_lambda->m_type_description == NULL);
frame_frame_urllib3$util$retry$$$function__4_get_backoff_time$$$function__1_lambda = cache_frame_frame_urllib3$util$retry$$$function__4_get_backoff_time$$$function__1_lambda;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$retry$$$function__4_get_backoff_time$$$function__1_lambda);
assert(Py_REFCNT(frame_frame_urllib3$util$retry$$$function__4_get_backoff_time$$$function__1_lambda) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_x);
tmp_expression_value_1 = par_x;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_redirect_location);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_return_value = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$retry$$$function__4_get_backoff_time$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$retry$$$function__4_get_backoff_time$$$function__1_lambda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$retry$$$function__4_get_backoff_time$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$retry$$$function__4_get_backoff_time$$$function__1_lambda,
    type_description_1,
    par_x
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$retry$$$function__4_get_backoff_time$$$function__1_lambda == cache_frame_frame_urllib3$util$retry$$$function__4_get_backoff_time$$$function__1_lambda) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$retry$$$function__4_get_backoff_time$$$function__1_lambda);
    cache_frame_frame_urllib3$util$retry$$$function__4_get_backoff_time$$$function__1_lambda = NULL;
}

assertFrameObject(frame_frame_urllib3$util$retry$$$function__4_get_backoff_time$$$function__1_lambda);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$retry$$$function__5_parse_retry_after(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_retry_after = python_pars[1];
PyObject *var_seconds = NULL;
PyObject *var_retry_date_tuple = NULL;
PyObject *var_retry_date = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$retry$$$function__5_parse_retry_after;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$retry$$$function__5_parse_retry_after = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$retry$$$function__5_parse_retry_after)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$retry$$$function__5_parse_retry_after);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$retry$$$function__5_parse_retry_after == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$retry$$$function__5_parse_retry_after = MAKE_FUNCTION_FRAME(tstate, code_objects_2b230b6baf310d3ab2b8586c2a768a3d, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$retry$$$function__5_parse_retry_after->m_type_description == NULL);
frame_frame_urllib3$util$retry$$$function__5_parse_retry_after = cache_frame_frame_urllib3$util$retry$$$function__5_parse_retry_after;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$retry$$$function__5_parse_retry_after);
assert(Py_REFCNT(frame_frame_urllib3$util$retry$$$function__5_parse_retry_after) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
int tmp_truth_name_1;
tmp_called_instance_1 = module_var_accessor_urllib3$util$retry$re(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 331;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_d43b7afa583ad163d56ae0bbfdcdb575;
CHECK_OBJECT(par_retry_after);
tmp_args_element_value_2 = par_retry_after;
frame_frame_urllib3$util$retry$$$function__5_parse_retry_after->m_frame.f_lineno = 331;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_match,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 331;
type_description_1 = "ooooo";
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
PyObject *tmp_assign_source_1;
PyObject *tmp_int_arg_1;
CHECK_OBJECT(par_retry_after);
tmp_int_arg_1 = par_retry_after;
tmp_assign_source_1 = PyNumber_Int(tmp_int_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_seconds;
    var_seconds = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_3;
tmp_expression_value_1 = module_var_accessor_urllib3$util$retry$email(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_email);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 334;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_utils);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_retry_after);
tmp_args_element_value_3 = par_retry_after;
frame_frame_urllib3$util$retry$$$function__5_parse_retry_after->m_frame.f_lineno = 334;
tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_parsedate_tz, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_retry_date_tuple;
    var_retry_date_tuple = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_retry_date_tuple);
tmp_cmp_expr_left_1 = var_retry_date_tuple;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
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
PyObject *tmp_args_element_value_4;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_called_value_1 = module_var_accessor_urllib3$util$retry$InvalidHeader(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidHeader);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 336;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_f3c0f426f8315adff05383979f4e867d;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_retry_after);
tmp_format_value_1 = par_retry_after;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "ooooo";
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
tmp_args_element_value_4 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_4 == NULL));
frame_frame_urllib3$util$retry$$$function__5_parse_retry_after->m_frame.f_lineno = 336;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 336;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_5;
tmp_expression_value_2 = module_var_accessor_urllib3$util$retry$email(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_email);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 338;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_utils);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_retry_date_tuple);
tmp_args_element_value_5 = var_retry_date_tuple;
frame_frame_urllib3$util$retry$$$function__5_parse_retry_after->m_frame.f_lineno = 338;
tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_mktime_tz, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_retry_date;
    var_retry_date = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_called_instance_4;
CHECK_OBJECT(var_retry_date);
tmp_sub_expr_left_1 = var_retry_date;
tmp_called_instance_4 = module_var_accessor_urllib3$util$retry$time(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_time);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 339;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$retry$$$function__5_parse_retry_after->m_frame.f_lineno = 339;
tmp_sub_expr_right_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_time);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_seconds;
    var_seconds = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
branch_end_1:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_2 != NULL);
CHECK_OBJECT(var_seconds);
tmp_args_element_value_6 = var_seconds;
tmp_args_element_value_7 = const_int_0;
frame_frame_urllib3$util$retry$$$function__5_parse_retry_after->m_frame.f_lineno = 341;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_seconds;
    assert(old != NULL);
    var_seconds = tmp_assign_source_5;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_seconds);
tmp_cmp_expr_left_2 = var_seconds;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_retry_after_max);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_retry_after_max);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_seconds;
    assert(old != NULL);
    var_seconds = tmp_assign_source_6;
    Py_DECREF(old);
}

}
branch_no_3:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$retry$$$function__5_parse_retry_after, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$retry$$$function__5_parse_retry_after->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$retry$$$function__5_parse_retry_after, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$retry$$$function__5_parse_retry_after,
    type_description_1,
    par_self,
    par_retry_after,
    var_seconds,
    var_retry_date_tuple,
    var_retry_date
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$retry$$$function__5_parse_retry_after == cache_frame_frame_urllib3$util$retry$$$function__5_parse_retry_after) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$retry$$$function__5_parse_retry_after);
    cache_frame_frame_urllib3$util$retry$$$function__5_parse_retry_after = NULL;
}

assertFrameObject(frame_frame_urllib3$util$retry$$$function__5_parse_retry_after);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_seconds);
tmp_return_value = var_seconds;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_seconds);
CHECK_OBJECT(var_seconds);
Py_DECREF(var_seconds);
var_seconds = NULL;
Py_XDECREF(var_retry_date_tuple);
var_retry_date_tuple = NULL;
Py_XDECREF(var_retry_date);
var_retry_date = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_seconds);
var_seconds = NULL;
Py_XDECREF(var_retry_date_tuple);
var_retry_date_tuple = NULL;
Py_XDECREF(var_retry_date);
var_retry_date = NULL;
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
CHECK_OBJECT(par_retry_after);
Py_DECREF(par_retry_after);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_retry_after);
Py_DECREF(par_retry_after);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$retry$$$function__6_get_retry_after(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_response = python_pars[1];
PyObject *var_retry_after = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$retry$$$function__6_get_retry_after;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$retry$$$function__6_get_retry_after = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$retry$$$function__6_get_retry_after)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$retry$$$function__6_get_retry_after);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$retry$$$function__6_get_retry_after == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$retry$$$function__6_get_retry_after = MAKE_FUNCTION_FRAME(tstate, code_objects_5088cd9fefb1795869c1650236e0dbcd, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$retry$$$function__6_get_retry_after->m_type_description == NULL);
frame_frame_urllib3$util$retry$$$function__6_get_retry_after = cache_frame_frame_urllib3$util$retry$$$function__6_get_retry_after;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$retry$$$function__6_get_retry_after);
assert(Py_REFCNT(frame_frame_urllib3$util$retry$$$function__6_get_retry_after) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_response);
tmp_expression_value_2 = par_response;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_headers);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$retry$$$function__6_get_retry_after->m_frame.f_lineno = 352;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_53eb1bcf3283c3fcccb95b51de02ce94_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_retry_after;
    var_retry_after = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_retry_after);
tmp_cmp_expr_left_1 = var_retry_after;
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
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(var_retry_after);
tmp_args_element_value_1 = var_retry_after;
frame_frame_urllib3$util$retry$$$function__6_get_retry_after->m_frame.f_lineno = 357;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_parse_retry_after, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$retry$$$function__6_get_retry_after, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$retry$$$function__6_get_retry_after->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$retry$$$function__6_get_retry_after, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$retry$$$function__6_get_retry_after,
    type_description_1,
    par_self,
    par_response,
    var_retry_after
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$retry$$$function__6_get_retry_after == cache_frame_frame_urllib3$util$retry$$$function__6_get_retry_after) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$retry$$$function__6_get_retry_after);
    cache_frame_frame_urllib3$util$retry$$$function__6_get_retry_after = NULL;
}

assertFrameObject(frame_frame_urllib3$util$retry$$$function__6_get_retry_after);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_retry_after);
CHECK_OBJECT(var_retry_after);
Py_DECREF(var_retry_after);
var_retry_after = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_retry_after);
var_retry_after = NULL;
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
CHECK_OBJECT(par_response);
Py_DECREF(par_response);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_response);
Py_DECREF(par_response);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$retry$$$function__7_sleep_for_retry(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_response = python_pars[1];
PyObject *var_retry_after = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$retry$$$function__7_sleep_for_retry;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$retry$$$function__7_sleep_for_retry = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$retry$$$function__7_sleep_for_retry)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$retry$$$function__7_sleep_for_retry);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$retry$$$function__7_sleep_for_retry == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$retry$$$function__7_sleep_for_retry = MAKE_FUNCTION_FRAME(tstate, code_objects_7bd80c75c949766c59f432fda1b234b4, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$retry$$$function__7_sleep_for_retry->m_type_description == NULL);
frame_frame_urllib3$util$retry$$$function__7_sleep_for_retry = cache_frame_frame_urllib3$util$retry$$$function__7_sleep_for_retry;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$retry$$$function__7_sleep_for_retry);
assert(Py_REFCNT(frame_frame_urllib3$util$retry$$$function__7_sleep_for_retry) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_response);
tmp_args_element_value_1 = par_response;
frame_frame_urllib3$util$retry$$$function__7_sleep_for_retry->m_frame.f_lineno = 360;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_retry_after, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_retry_after;
    var_retry_after = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_retry_after);
tmp_truth_name_1 = CHECK_IF_TRUE(var_retry_after);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_1 = "ooo";
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
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_2 = module_var_accessor_urllib3$util$retry$time(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_time);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 362;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_retry_after);
tmp_args_element_value_2 = var_retry_after;
frame_frame_urllib3$util$retry$$$function__7_sleep_for_retry->m_frame.f_lineno = 362;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_sleep, tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$retry$$$function__7_sleep_for_retry, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$retry$$$function__7_sleep_for_retry->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$retry$$$function__7_sleep_for_retry, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$retry$$$function__7_sleep_for_retry,
    type_description_1,
    par_self,
    par_response,
    var_retry_after
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$retry$$$function__7_sleep_for_retry == cache_frame_frame_urllib3$util$retry$$$function__7_sleep_for_retry) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$retry$$$function__7_sleep_for_retry);
    cache_frame_frame_urllib3$util$retry$$$function__7_sleep_for_retry = NULL;
}

assertFrameObject(frame_frame_urllib3$util$retry$$$function__7_sleep_for_retry);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_retry_after);
CHECK_OBJECT(var_retry_after);
Py_DECREF(var_retry_after);
var_retry_after = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_retry_after);
var_retry_after = NULL;
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
CHECK_OBJECT(par_response);
Py_DECREF(par_response);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_response);
Py_DECREF(par_response);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$retry$$$function__8__sleep_backoff(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_backoff = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$retry$$$function__8__sleep_backoff;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$retry$$$function__8__sleep_backoff = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$retry$$$function__8__sleep_backoff)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$retry$$$function__8__sleep_backoff);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$retry$$$function__8__sleep_backoff == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$retry$$$function__8__sleep_backoff = MAKE_FUNCTION_FRAME(tstate, code_objects_67f8a0502097c8c3dc47792a1841ceae, module_urllib3$util$retry, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$retry$$$function__8__sleep_backoff->m_type_description == NULL);
frame_frame_urllib3$util$retry$$$function__8__sleep_backoff = cache_frame_frame_urllib3$util$retry$$$function__8__sleep_backoff;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$retry$$$function__8__sleep_backoff);
assert(Py_REFCNT(frame_frame_urllib3$util$retry$$$function__8__sleep_backoff) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_urllib3$util$retry$$$function__8__sleep_backoff->m_frame.f_lineno = 368;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_backoff_time);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_backoff;
    var_backoff = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_backoff);
tmp_cmp_expr_left_1 = var_backoff;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_2 = module_var_accessor_urllib3$util$retry$time(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_time);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 371;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_backoff);
tmp_args_element_value_1 = var_backoff;
frame_frame_urllib3$util$retry$$$function__8__sleep_backoff->m_frame.f_lineno = 371;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_sleep, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$retry$$$function__8__sleep_backoff, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$retry$$$function__8__sleep_backoff->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$retry$$$function__8__sleep_backoff, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$retry$$$function__8__sleep_backoff,
    type_description_1,
    par_self,
    var_backoff
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$retry$$$function__8__sleep_backoff == cache_frame_frame_urllib3$util$retry$$$function__8__sleep_backoff) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$retry$$$function__8__sleep_backoff);
    cache_frame_frame_urllib3$util$retry$$$function__8__sleep_backoff = NULL;
}

assertFrameObject(frame_frame_urllib3$util$retry$$$function__8__sleep_backoff);

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
CHECK_OBJECT(var_backoff);
CHECK_OBJECT(var_backoff);
Py_DECREF(var_backoff);
var_backoff = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_backoff);
var_backoff = NULL;
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


static PyObject *impl_urllib3$util$retry$$$function__9_sleep(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_response = python_pars[1];
PyObject *var_slept = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$retry$$$function__9_sleep;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$retry$$$function__9_sleep = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$retry$$$function__9_sleep)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$retry$$$function__9_sleep);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$retry$$$function__9_sleep == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$retry$$$function__9_sleep = MAKE_FUNCTION_FRAME(tstate, code_objects_3b05a3e21ce2a8c4e1c2dd3de5a11d50, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$retry$$$function__9_sleep->m_type_description == NULL);
frame_frame_urllib3$util$retry$$$function__9_sleep = cache_frame_frame_urllib3$util$retry$$$function__9_sleep;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$retry$$$function__9_sleep);
assert(Py_REFCNT(frame_frame_urllib3$util$retry$$$function__9_sleep) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
int tmp_truth_name_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_respect_retry_after_header);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 382;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_response);
tmp_truth_name_2 = CHECK_IF_TRUE(par_response);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_response);
tmp_args_element_value_1 = par_response;
frame_frame_urllib3$util$retry$$$function__9_sleep->m_frame.f_lineno = 383;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_sleep_for_retry, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_slept;
    var_slept = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_3;
CHECK_OBJECT(var_slept);
tmp_truth_name_3 = CHECK_IF_TRUE(var_slept);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 384;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
branch_no_1:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_urllib3$util$retry$$$function__9_sleep->m_frame.f_lineno = 387;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain__sleep_backoff);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$retry$$$function__9_sleep, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$retry$$$function__9_sleep->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$retry$$$function__9_sleep, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$retry$$$function__9_sleep,
    type_description_1,
    par_self,
    par_response,
    var_slept
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$retry$$$function__9_sleep == cache_frame_frame_urllib3$util$retry$$$function__9_sleep) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$retry$$$function__9_sleep);
    cache_frame_frame_urllib3$util$retry$$$function__9_sleep = NULL;
}

assertFrameObject(frame_frame_urllib3$util$retry$$$function__9_sleep);

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
Py_XDECREF(var_slept);
var_slept = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_slept);
var_slept = NULL;
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
CHECK_OBJECT(par_response);
Py_DECREF(par_response);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_response);
Py_DECREF(par_response);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$retry$$$function__10__is_connection_error(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_err = python_pars[1];
struct Nuitka_FrameObject *frame_frame_urllib3$util$retry$$$function__10__is_connection_error;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$retry$$$function__10__is_connection_error = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$retry$$$function__10__is_connection_error)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$retry$$$function__10__is_connection_error);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$retry$$$function__10__is_connection_error == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$retry$$$function__10__is_connection_error = MAKE_FUNCTION_FRAME(tstate, code_objects_d732e1c2781c451418245db1ddbf324a, module_urllib3$util$retry, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$retry$$$function__10__is_connection_error->m_type_description == NULL);
frame_frame_urllib3$util$retry$$$function__10__is_connection_error = cache_frame_frame_urllib3$util$retry$$$function__10__is_connection_error;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$retry$$$function__10__is_connection_error);
assert(Py_REFCNT(frame_frame_urllib3$util$retry$$$function__10__is_connection_error) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_err);
tmp_isinstance_inst_1 = par_err;
tmp_isinstance_cls_1 = module_var_accessor_urllib3$util$retry$ProxyError(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProxyError);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 393;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 393;
type_description_1 = "oo";
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
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_err);
tmp_expression_value_1 = par_err;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_original_error);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 394;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_err;
    assert(old != NULL);
    par_err = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
CHECK_OBJECT(par_err);
tmp_isinstance_inst_2 = par_err;
tmp_isinstance_cls_2 = module_var_accessor_urllib3$util$retry$ConnectTimeoutError(tstate);
if (unlikely(tmp_isinstance_cls_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ConnectTimeoutError);
}

if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 395;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 395;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$retry$$$function__10__is_connection_error, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$retry$$$function__10__is_connection_error->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$retry$$$function__10__is_connection_error, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$retry$$$function__10__is_connection_error,
    type_description_1,
    par_self,
    par_err
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$retry$$$function__10__is_connection_error == cache_frame_frame_urllib3$util$retry$$$function__10__is_connection_error) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$retry$$$function__10__is_connection_error);
    cache_frame_frame_urllib3$util$retry$$$function__10__is_connection_error = NULL;
}

assertFrameObject(frame_frame_urllib3$util$retry$$$function__10__is_connection_error);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_err);
CHECK_OBJECT(par_err);
Py_DECREF(par_err);
par_err = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_err);
par_err = NULL;
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


static PyObject *impl_urllib3$util$retry$$$function__11__is_read_error(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_err = python_pars[1];
struct Nuitka_FrameObject *frame_frame_urllib3$util$retry$$$function__11__is_read_error;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$retry$$$function__11__is_read_error = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$retry$$$function__11__is_read_error)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$retry$$$function__11__is_read_error);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$retry$$$function__11__is_read_error == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$retry$$$function__11__is_read_error = MAKE_FUNCTION_FRAME(tstate, code_objects_78cc786c6ebc07a0a052ab753dee65f2, module_urllib3$util$retry, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$retry$$$function__11__is_read_error->m_type_description == NULL);
frame_frame_urllib3$util$retry$$$function__11__is_read_error = cache_frame_frame_urllib3$util$retry$$$function__11__is_read_error;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$retry$$$function__11__is_read_error);
assert(Py_REFCNT(frame_frame_urllib3$util$retry$$$function__11__is_read_error) == 2);

// Framed code:
{
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_err);
tmp_isinstance_inst_1 = par_err;
tmp_tuple_element_1 = module_var_accessor_urllib3$util$retry$ReadTimeoutError(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ReadTimeoutError);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 401;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_urllib3$util$retry$ProtocolError(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ProtocolError);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 401;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 1, tmp_tuple_element_1);
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


exception_lineno = 401;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$retry$$$function__11__is_read_error, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$retry$$$function__11__is_read_error->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$retry$$$function__11__is_read_error, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$retry$$$function__11__is_read_error,
    type_description_1,
    par_self,
    par_err
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$retry$$$function__11__is_read_error == cache_frame_frame_urllib3$util$retry$$$function__11__is_read_error) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$retry$$$function__11__is_read_error);
    cache_frame_frame_urllib3$util$retry$$$function__11__is_read_error = NULL;
}

assertFrameObject(frame_frame_urllib3$util$retry$$$function__11__is_read_error);

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
CHECK_OBJECT(par_err);
Py_DECREF(par_err);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_err);
Py_DECREF(par_err);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$retry$$$function__12__is_method_retryable(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_method = python_pars[1];
struct Nuitka_FrameObject *frame_frame_urllib3$util$retry$$$function__12__is_method_retryable;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$retry$$$function__12__is_method_retryable = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$retry$$$function__12__is_method_retryable)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$retry$$$function__12__is_method_retryable);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$retry$$$function__12__is_method_retryable == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$retry$$$function__12__is_method_retryable = MAKE_FUNCTION_FRAME(tstate, code_objects_0cfa2b7f274152e8e9d9f11c4522f8f9, module_urllib3$util$retry, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$retry$$$function__12__is_method_retryable->m_type_description == NULL);
frame_frame_urllib3$util$retry$$$function__12__is_method_retryable = cache_frame_frame_urllib3$util$retry$$$function__12__is_method_retryable;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$retry$$$function__12__is_method_retryable);
assert(Py_REFCNT(frame_frame_urllib3$util$retry$$$function__12__is_method_retryable) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_allowed_methods);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 407;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_method);
tmp_expression_value_2 = par_method;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_upper);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$retry$$$function__12__is_method_retryable->m_frame.f_lineno = 407;
tmp_cmp_expr_left_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_allowed_methods);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 407;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;
type_description_1 = "oo";
    goto frame_exception_exit_1;
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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$retry$$$function__12__is_method_retryable, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$retry$$$function__12__is_method_retryable->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$retry$$$function__12__is_method_retryable, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$retry$$$function__12__is_method_retryable,
    type_description_1,
    par_self,
    par_method
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$retry$$$function__12__is_method_retryable == cache_frame_frame_urllib3$util$retry$$$function__12__is_method_retryable) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$retry$$$function__12__is_method_retryable);
    cache_frame_frame_urllib3$util$retry$$$function__12__is_method_retryable = NULL;
}

assertFrameObject(frame_frame_urllib3$util$retry$$$function__12__is_method_retryable);

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
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$retry$$$function__13_is_retry(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_method = python_pars[1];
PyObject *par_status_code = python_pars[2];
PyObject *par_has_retry_after = python_pars[3];
struct Nuitka_FrameObject *frame_frame_urllib3$util$retry$$$function__13_is_retry;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$retry$$$function__13_is_retry = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$retry$$$function__13_is_retry)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$retry$$$function__13_is_retry);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$retry$$$function__13_is_retry == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$retry$$$function__13_is_retry = MAKE_FUNCTION_FRAME(tstate, code_objects_bc0ff8002e1f6568b43cf08aca2f18be, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$retry$$$function__13_is_retry->m_type_description == NULL);
frame_frame_urllib3$util$retry$$$function__13_is_retry = cache_frame_frame_urllib3$util$retry$$$function__13_is_retry;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$retry$$$function__13_is_retry);
assert(Py_REFCNT(frame_frame_urllib3$util$retry$$$function__13_is_retry) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_method);
tmp_args_element_value_1 = par_method;
frame_frame_urllib3$util$retry$$$function__13_is_retry->m_frame.f_lineno = 420;
tmp_operand_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__is_method_retryable, tmp_args_element_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "oooo";
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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_status_forcelist);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 423;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_status_code);
tmp_cmp_expr_left_1 = par_status_code;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_status_forcelist);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
PyObject *tmp_value_value_1;
int tmp_and_left_truth_2;
PyObject *tmp_and_left_value_2;
PyObject *tmp_and_right_value_2;
PyObject *tmp_expression_value_3;
int tmp_and_left_truth_3;
PyObject *tmp_and_left_value_3;
PyObject *tmp_and_right_value_3;
PyObject *tmp_expression_value_4;
int tmp_and_left_truth_4;
PyObject *tmp_and_left_value_4;
PyObject *tmp_and_right_value_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_and_left_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_total);
if (tmp_and_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 427;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_2);

exception_lineno = 427;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(tmp_and_left_value_2);
Py_DECREF(tmp_and_left_value_2);
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_and_left_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_respect_retry_after_header);
if (tmp_and_left_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 428;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_3 = CHECK_IF_TRUE(tmp_and_left_value_3);
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_3);

exception_lineno = 428;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(tmp_and_left_value_3);
Py_DECREF(tmp_and_left_value_3);
CHECK_OBJECT(par_has_retry_after);
tmp_and_left_value_4 = par_has_retry_after;
tmp_and_left_truth_4 = CHECK_IF_TRUE(tmp_and_left_value_4);
if (tmp_and_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
CHECK_OBJECT(par_status_code);
tmp_cmp_expr_left_2 = par_status_code;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_RETRY_AFTER_STATUS_CODES);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 430;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 430;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_4 = (tmp_res == 1) ? Py_True : Py_False;
tmp_and_right_value_3 = tmp_and_right_value_4;
goto and_end_4;
and_left_4:;
tmp_and_right_value_3 = tmp_and_left_value_4;
and_end_4:;
Py_INCREF(tmp_and_right_value_3);
tmp_and_right_value_2 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_and_right_value_2 = tmp_and_left_value_3;
and_end_3:;
tmp_value_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_value_value_1 = tmp_and_left_value_2;
and_end_2:;
tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 430;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$retry$$$function__13_is_retry, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$retry$$$function__13_is_retry->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$retry$$$function__13_is_retry, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$retry$$$function__13_is_retry,
    type_description_1,
    par_self,
    par_method,
    par_status_code,
    par_has_retry_after
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$retry$$$function__13_is_retry == cache_frame_frame_urllib3$util$retry$$$function__13_is_retry) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$retry$$$function__13_is_retry);
    cache_frame_frame_urllib3$util$retry$$$function__13_is_retry = NULL;
}

assertFrameObject(frame_frame_urllib3$util$retry$$$function__13_is_retry);

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
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_status_code);
Py_DECREF(par_status_code);
CHECK_OBJECT(par_has_retry_after);
Py_DECREF(par_has_retry_after);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_status_code);
Py_DECREF(par_status_code);
CHECK_OBJECT(par_has_retry_after);
Py_DECREF(par_has_retry_after);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$retry$$$function__14_is_exhausted(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_retry_counts = NULL;
PyObject *outline_0_var_x = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$retry$$$function__14_is_exhausted;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$retry$$$function__14_is_exhausted = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$retry$$$function__14_is_exhausted)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$retry$$$function__14_is_exhausted);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$retry$$$function__14_is_exhausted == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$retry$$$function__14_is_exhausted = MAKE_FUNCTION_FRAME(tstate, code_objects_32d420eef90b7565c3829fd5d5751b09, module_urllib3$util$retry, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$retry$$$function__14_is_exhausted->m_type_description == NULL);
frame_frame_urllib3$util$retry$$$function__14_is_exhausted = cache_frame_frame_urllib3$util$retry$$$function__14_is_exhausted;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$retry$$$function__14_is_exhausted);
assert(Py_REFCNT(frame_frame_urllib3$util$retry$$$function__14_is_exhausted) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_total);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_iter_arg_1 = MAKE_TUPLE_EMPTY(tstate, 6);
{
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyTuple_SET_ITEM(tmp_iter_arg_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_connect);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_iter_arg_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_read);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_iter_arg_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_redirect);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_iter_arg_1, 3, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_status);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 442;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_iter_arg_1, 4, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_other);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_iter_arg_1, 5, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_iter_arg_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_2 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
assert(!(tmp_assign_source_2 == NULL));
{
    PyObject *old = tmp_listcomp_1__$0;
    tmp_listcomp_1__$0 = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = tmp_listcomp_1__contraction;
    tmp_listcomp_1__contraction = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_4 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oo";
exception_lineno = 435;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_x;
    outline_0_var_x = tmp_assign_source_5;
    Py_INCREF(outline_0_var_x);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(outline_0_var_x);
tmp_truth_name_1 = CHECK_IF_TRUE(outline_0_var_x);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "oo";
    goto try_except_handler_3;
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
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_x);
tmp_append_value_1 = outline_0_var_x;
tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;
type_description_1 = "oo";
    goto try_except_handler_3;
}
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;
type_description_1 = "oo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_1 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_1);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(tmp_listcomp_1__$0);
CHECK_OBJECT(tmp_listcomp_1__$0);
Py_DECREF(tmp_listcomp_1__$0);
tmp_listcomp_1__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_1__contraction);
CHECK_OBJECT(tmp_listcomp_1__contraction);
Py_DECREF(tmp_listcomp_1__contraction);
tmp_listcomp_1__contraction = NULL;
Py_XDECREF(tmp_listcomp_1__iter_value_0);
tmp_listcomp_1__iter_value_0 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_1__$0);
CHECK_OBJECT(tmp_listcomp_1__$0);
Py_DECREF(tmp_listcomp_1__$0);
tmp_listcomp_1__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_1__contraction);
CHECK_OBJECT(tmp_listcomp_1__contraction);
Py_DECREF(tmp_listcomp_1__contraction);
tmp_listcomp_1__contraction = NULL;
Py_XDECREF(tmp_listcomp_1__iter_value_0);
tmp_listcomp_1__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
Py_XDECREF(outline_0_var_x);
outline_0_var_x = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_x);
outline_0_var_x = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 435;
goto frame_exception_exit_1;
outline_result_1:;
{
    PyObject *old = var_retry_counts;
    var_retry_counts = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_retry_counts);
tmp_operand_value_1 = var_retry_counts;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 447;
type_description_1 = "oo";
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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_1 != NULL);
CHECK_OBJECT(var_retry_counts);
tmp_args_element_value_1 = var_retry_counts;
frame_frame_urllib3$util$retry$$$function__14_is_exhausted->m_frame.f_lineno = 450;
tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 450;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = const_int_0;
tmp_return_value = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 450;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$retry$$$function__14_is_exhausted, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$retry$$$function__14_is_exhausted->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$retry$$$function__14_is_exhausted, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$retry$$$function__14_is_exhausted,
    type_description_1,
    par_self,
    var_retry_counts
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$retry$$$function__14_is_exhausted == cache_frame_frame_urllib3$util$retry$$$function__14_is_exhausted) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$retry$$$function__14_is_exhausted);
    cache_frame_frame_urllib3$util$retry$$$function__14_is_exhausted = NULL;
}

assertFrameObject(frame_frame_urllib3$util$retry$$$function__14_is_exhausted);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_retry_counts);
CHECK_OBJECT(var_retry_counts);
Py_DECREF(var_retry_counts);
var_retry_counts = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_retry_counts);
var_retry_counts = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

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


static PyObject *impl_urllib3$util$retry$$$function__15_increment(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_method = python_pars[1];
PyObject *par_url = python_pars[2];
PyObject *par_response = python_pars[3];
PyObject *par_error = python_pars[4];
PyObject *par__pool = python_pars[5];
PyObject *par__stacktrace = python_pars[6];
PyObject *var_total = NULL;
PyObject *var_connect = NULL;
PyObject *var_read = NULL;
PyObject *var_redirect = NULL;
PyObject *var_status_count = NULL;
PyObject *var_other = NULL;
PyObject *var_cause = NULL;
PyObject *var_status = NULL;
PyObject *var_redirect_location = NULL;
PyObject *var_response_redirect_location = NULL;
PyObject *var_history = NULL;
PyObject *var_new_retry = NULL;
PyObject *var_reason = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$retry$$$function__15_increment;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$retry$$$function__15_increment = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$retry$$$function__15_increment)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$retry$$$function__15_increment);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$retry$$$function__15_increment == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$retry$$$function__15_increment = MAKE_FUNCTION_FRAME(tstate, code_objects_19a57d0ac5a4c5ae7f05c4c42eb6b38d, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$retry$$$function__15_increment->m_type_description == NULL);
frame_frame_urllib3$util$retry$$$function__15_increment = cache_frame_frame_urllib3$util$retry$$$function__15_increment;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$retry$$$function__15_increment);
assert(Py_REFCNT(frame_frame_urllib3$util$retry$$$function__15_increment) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_total);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 471;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_False;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_error);
tmp_truth_name_1 = CHECK_IF_TRUE(par_error);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 471;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_1 = module_var_accessor_urllib3$util$retry$reraise(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_reraise);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 473;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_error);
tmp_type_arg_1 = par_error;
tmp_args_element_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_args_element_value_1 == NULL));
CHECK_OBJECT(par_error);
tmp_args_element_value_2 = par_error;
CHECK_OBJECT(par__stacktrace);
tmp_args_element_value_3 = par__stacktrace;
frame_frame_urllib3$util$retry$$$function__15_increment->m_frame.f_lineno = 473;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_raise_type_input_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 473;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 473;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 473;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_total);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 475;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_total;
    var_total = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_total);
tmp_cmp_expr_left_2 = var_total;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_isub_expr_left_1;
PyObject *tmp_isub_expr_right_1;
CHECK_OBJECT(var_total);
tmp_isub_expr_left_1 = var_total;
tmp_isub_expr_right_1 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_SUB_OBJECT_LONG(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = tmp_isub_expr_left_1;
var_total = tmp_assign_source_2;

}
branch_no_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_connect);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_connect;
    var_connect = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_read);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 480;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_read;
    var_read = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_redirect);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 481;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_redirect;
    var_redirect = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_status);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 482;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_status_count;
    var_status_count = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_other);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 483;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_other;
    var_other = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = mod_consts.const_str_plain_unknown;
{
    PyObject *old = var_cause;
    var_cause = tmp_assign_source_8;
    Py_INCREF(var_cause);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = Py_None;
{
    PyObject *old = var_status;
    var_status = tmp_assign_source_9;
    Py_INCREF(var_status);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = Py_None;
{
    PyObject *old = var_redirect_location;
    var_redirect_location = tmp_assign_source_10;
    Py_INCREF(var_redirect_location);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
int tmp_truth_name_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_4;
int tmp_truth_name_3;
CHECK_OBJECT(par_error);
tmp_truth_name_2 = CHECK_IF_TRUE(par_error);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_error);
tmp_args_element_value_4 = par_error;
frame_frame_urllib3$util$retry$$$function__15_increment->m_frame.f_lineno = 488;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__is_connection_error, tmp_args_element_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 488;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_condition_result_3 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_3 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_connect);
tmp_cmp_expr_left_3 = var_connect;
tmp_cmp_expr_right_3 = Py_False;
tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_5;
PyObject *tmp_type_arg_2;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_value_2 = module_var_accessor_urllib3$util$retry$reraise(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_reraise);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 491;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_error);
tmp_type_arg_2 = par_error;
tmp_args_element_value_5 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_args_element_value_5 == NULL));
CHECK_OBJECT(par_error);
tmp_args_element_value_6 = par_error;
CHECK_OBJECT(par__stacktrace);
tmp_args_element_value_7 = par__stacktrace;
frame_frame_urllib3$util$retry$$$function__15_increment->m_frame.f_lineno = 491;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_raise_type_input_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 491;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 491;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 491;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooo";
goto frame_exception_exit_1;
}
goto branch_end_4;
branch_no_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_connect);
tmp_cmp_expr_left_4 = var_connect;
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_isub_expr_left_2;
PyObject *tmp_isub_expr_right_2;
CHECK_OBJECT(var_connect);
tmp_isub_expr_left_2 = var_connect;
tmp_isub_expr_right_2 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_SUB_OBJECT_LONG(&tmp_isub_expr_left_2, tmp_isub_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 493;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_11 = tmp_isub_expr_left_2;
var_connect = tmp_assign_source_11;

}
branch_no_5:;
branch_end_4:;
goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_6;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
int tmp_truth_name_4;
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_8;
int tmp_truth_name_5;
CHECK_OBJECT(par_error);
tmp_truth_name_4 = CHECK_IF_TRUE(par_error);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 495;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_3 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 495;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(par_error);
tmp_args_element_value_8 = par_error;
frame_frame_urllib3$util$retry$$$function__15_increment->m_frame.f_lineno = 495;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain__is_read_error, tmp_args_element_value_8);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 495;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 495;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_3 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
tmp_condition_result_6 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_condition_result_6 = tmp_and_left_value_3;
and_end_3:;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
bool tmp_condition_result_7;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
int tmp_or_left_truth_2;
bool tmp_or_left_value_2;
bool tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_9;
CHECK_OBJECT(var_read);
tmp_cmp_expr_left_5 = var_read;
tmp_cmp_expr_right_5 = Py_False;
tmp_or_left_value_1 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_method);
tmp_cmp_expr_left_6 = par_method;
tmp_cmp_expr_right_6 = Py_None;
tmp_or_left_value_2 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
tmp_or_left_truth_2 = tmp_or_left_value_2 != false ? 1 : 0;
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(par_self);
tmp_called_instance_3 = par_self;
CHECK_OBJECT(par_method);
tmp_args_element_value_9 = par_method;
frame_frame_urllib3$util$retry$$$function__15_increment->m_frame.f_lineno = 497;
tmp_operand_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain__is_method_retryable, tmp_args_element_value_9);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 497;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 497;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_2 = (tmp_res == 0) ? true : false;
tmp_or_right_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_or_right_value_1 = tmp_or_left_value_2;
or_end_2:;
tmp_condition_result_7 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_7 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_10;
PyObject *tmp_type_arg_3;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
tmp_called_value_3 = module_var_accessor_urllib3$util$retry$reraise(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_reraise);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 498;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_error);
tmp_type_arg_3 = par_error;
tmp_args_element_value_10 = BUILTIN_TYPE1(tmp_type_arg_3);
assert(!(tmp_args_element_value_10 == NULL));
CHECK_OBJECT(par_error);
tmp_args_element_value_11 = par_error;
CHECK_OBJECT(par__stacktrace);
tmp_args_element_value_12 = par__stacktrace;
frame_frame_urllib3$util$retry$$$function__15_increment->m_frame.f_lineno = 498;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_raise_type_input_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 498;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooo";
goto frame_exception_exit_1;
}
goto branch_end_7;
branch_no_7:;
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(var_read);
tmp_cmp_expr_left_7 = var_read;
tmp_cmp_expr_right_7 = Py_None;
tmp_condition_result_8 = (tmp_cmp_expr_left_7 != tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_isub_expr_left_3;
PyObject *tmp_isub_expr_right_3;
CHECK_OBJECT(var_read);
tmp_isub_expr_left_3 = var_read;
tmp_isub_expr_right_3 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_SUB_OBJECT_LONG(&tmp_isub_expr_left_3, tmp_isub_expr_right_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 500;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_12 = tmp_isub_expr_left_3;
var_read = tmp_assign_source_12;

}
branch_no_8:;
branch_end_7:;
goto branch_end_6;
branch_no_6:;
{
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_6;
CHECK_OBJECT(par_error);
tmp_truth_name_6 = CHECK_IF_TRUE(par_error);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 502;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(var_other);
tmp_cmp_expr_left_8 = var_other;
tmp_cmp_expr_right_8 = Py_None;
tmp_condition_result_10 = (tmp_cmp_expr_left_8 != tmp_cmp_expr_right_8) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_isub_expr_left_4;
PyObject *tmp_isub_expr_right_4;
CHECK_OBJECT(var_other);
tmp_isub_expr_left_4 = var_other;
tmp_isub_expr_right_4 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_SUB_OBJECT_LONG(&tmp_isub_expr_left_4, tmp_isub_expr_right_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 505;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_13 = tmp_isub_expr_left_4;
var_other = tmp_assign_source_13;

}
branch_no_10:;
goto branch_end_9;
branch_no_9:;
{
nuitka_bool tmp_condition_result_11;
int tmp_and_left_truth_4;
nuitka_bool tmp_and_left_value_4;
nuitka_bool tmp_and_right_value_4;
int tmp_truth_name_7;
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_3;
int tmp_truth_name_8;
CHECK_OBJECT(par_response);
tmp_truth_name_7 = CHECK_IF_TRUE(par_response);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 507;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_4 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 507;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
CHECK_OBJECT(par_response);
tmp_called_instance_4 = par_response;
frame_frame_urllib3$util$retry$$$function__15_increment->m_frame.f_lineno = 507;
tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_get_redirect_location);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 507;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_8 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_3);

exception_lineno = 507;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_4 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
tmp_condition_result_11 = tmp_and_right_value_4;
goto and_end_4;
and_left_4:;
tmp_condition_result_11 = tmp_and_left_value_4;
and_end_4:;
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(var_redirect);
tmp_cmp_expr_left_9 = var_redirect;
tmp_cmp_expr_right_9 = Py_None;
tmp_condition_result_12 = (tmp_cmp_expr_left_9 != tmp_cmp_expr_right_9) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_isub_expr_left_5;
PyObject *tmp_isub_expr_right_5;
CHECK_OBJECT(var_redirect);
tmp_isub_expr_left_5 = var_redirect;
tmp_isub_expr_right_5 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_SUB_OBJECT_LONG(&tmp_isub_expr_left_5, tmp_isub_expr_right_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 510;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_14 = tmp_isub_expr_left_5;
var_redirect = tmp_assign_source_14;

}
branch_no_12:;
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = mod_consts.const_str_digest_93b5718dbdad50e34931a5c649b12b14;
{
    PyObject *old = var_cause;
    assert(old != NULL);
    var_cause = tmp_assign_source_15;
    Py_INCREF(var_cause);
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_instance_5;
CHECK_OBJECT(par_response);
tmp_called_instance_5 = par_response;
frame_frame_urllib3$util$retry$$$function__15_increment->m_frame.f_lineno = 512;
tmp_assign_source_16 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts.const_str_plain_get_redirect_location);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 512;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_response_redirect_location;
    var_response_redirect_location = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_9;
CHECK_OBJECT(var_response_redirect_location);
tmp_truth_name_9 = CHECK_IF_TRUE(var_response_redirect_location);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_13 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assign_source_17;
CHECK_OBJECT(var_response_redirect_location);
tmp_assign_source_17 = var_response_redirect_location;
{
    PyObject *old = var_redirect_location;
    assert(old != NULL);
    var_redirect_location = tmp_assign_source_17;
    Py_INCREF(var_redirect_location);
    Py_DECREF(old);
}

}
branch_no_13:;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(par_response);
tmp_expression_value_8 = par_response;
tmp_assign_source_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_status);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 515;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_status;
    assert(old != NULL);
    var_status = tmp_assign_source_18;
    Py_DECREF(old);
}

}
goto branch_end_11;
branch_no_11:;
{
PyObject *tmp_assign_source_19;
PyObject *tmp_expression_value_9;
tmp_expression_value_9 = module_var_accessor_urllib3$util$retry$ResponseError(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseError);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 520;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_GENERIC_ERROR);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 520;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_cause;
    assert(old != NULL);
    var_cause = tmp_assign_source_19;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_14;
int tmp_and_left_truth_5;
nuitka_bool tmp_and_left_value_5;
nuitka_bool tmp_and_right_value_5;
int tmp_truth_name_10;
PyObject *tmp_expression_value_10;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_11;
CHECK_OBJECT(par_response);
tmp_truth_name_10 = CHECK_IF_TRUE(par_response);
if (tmp_truth_name_10 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 521;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_5 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_5 = tmp_and_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 521;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_5 == 1) {
    goto and_right_5;
} else {
    goto and_left_5;
}
and_right_5:;
CHECK_OBJECT(par_response);
tmp_expression_value_10 = par_response;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_status);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 521;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_11 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_11 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 521;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_5 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_condition_result_14 = tmp_and_right_value_5;
goto and_end_5;
and_left_5:;
tmp_condition_result_14 = tmp_and_left_value_5;
and_end_5:;
if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
bool tmp_condition_result_15;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
CHECK_OBJECT(var_status_count);
tmp_cmp_expr_left_10 = var_status_count;
tmp_cmp_expr_right_10 = Py_None;
tmp_condition_result_15 = (tmp_cmp_expr_left_10 != tmp_cmp_expr_right_10) ? true : false;
if (tmp_condition_result_15 != false) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
{
PyObject *tmp_assign_source_20;
PyObject *tmp_isub_expr_left_6;
PyObject *tmp_isub_expr_right_6;
CHECK_OBJECT(var_status_count);
tmp_isub_expr_left_6 = var_status_count;
tmp_isub_expr_right_6 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_SUB_OBJECT_LONG(&tmp_isub_expr_left_6, tmp_isub_expr_right_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 523;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_20 = tmp_isub_expr_left_6;
var_status_count = tmp_assign_source_20;

}
branch_no_15:;
{
PyObject *tmp_assign_source_21;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_13;
tmp_expression_value_12 = module_var_accessor_urllib3$util$retry$ResponseError(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseError);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 524;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_SPECIFIC_ERROR);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 524;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, const_str_plain_format);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 524;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_response);
tmp_expression_value_13 = par_response;
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_status);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 524;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$retry$$$function__15_increment->m_frame.f_lineno = 524;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_assign_source_21 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, kw_values, mod_consts.const_tuple_str_plain_status_code_tuple);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 524;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_cause;
    assert(old != NULL);
    var_cause = tmp_assign_source_21;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(par_response);
tmp_expression_value_14 = par_response;
tmp_assign_source_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_status);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 525;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_status;
    assert(old != NULL);
    var_status = tmp_assign_source_22;
    Py_DECREF(old);
}

}
branch_no_14:;
branch_end_11:;
branch_end_9:;
branch_end_6:;
branch_end_3:;
{
PyObject *tmp_assign_source_23;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_15;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
PyObject *tmp_args_element_value_17;
CHECK_OBJECT(par_self);
tmp_expression_value_15 = par_self;
tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_history);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 527;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = module_var_accessor_urllib3$util$retry$RequestHistory(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RequestHistory);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 528;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_method);
tmp_args_element_value_13 = par_method;
CHECK_OBJECT(par_url);
tmp_args_element_value_14 = par_url;
CHECK_OBJECT(par_error);
tmp_args_element_value_15 = par_error;
CHECK_OBJECT(var_status);
tmp_args_element_value_16 = var_status;
CHECK_OBJECT(var_redirect_location);
tmp_args_element_value_17 = var_redirect_location;
frame_frame_urllib3$util$retry$$$function__15_increment->m_frame.f_lineno = 528;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_5, call_args);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 528;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_add_expr_right_1, 0, tmp_tuple_element_1);
tmp_assign_source_23 = BINARY_OPERATION_ADD_OBJECT_OBJECT_TUPLE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 527;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_history;
    var_history = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_16;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
PyObject *tmp_kw_call_value_5_1;
PyObject *tmp_kw_call_value_6_1;
CHECK_OBJECT(par_self);
tmp_expression_value_16 = par_self;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_new);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 531;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_total);
tmp_kw_call_value_0_2 = var_total;
CHECK_OBJECT(var_connect);
tmp_kw_call_value_1_1 = var_connect;
CHECK_OBJECT(var_read);
tmp_kw_call_value_2_1 = var_read;
CHECK_OBJECT(var_redirect);
tmp_kw_call_value_3_1 = var_redirect;
CHECK_OBJECT(var_status_count);
tmp_kw_call_value_4_1 = var_status_count;
CHECK_OBJECT(var_other);
tmp_kw_call_value_5_1 = var_other;
CHECK_OBJECT(var_history);
tmp_kw_call_value_6_1 = var_history;
frame_frame_urllib3$util$retry$$$function__15_increment->m_frame.f_lineno = 531;
{
    PyObject *kw_values[7] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1};

    tmp_assign_source_24 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_6, kw_values, mod_consts.const_tuple_7666020d115a077b4790e7ef892be878_tuple);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 531;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_new_retry;
    var_new_retry = tmp_assign_source_24;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_16;
PyObject *tmp_called_instance_6;
PyObject *tmp_call_result_4;
int tmp_truth_name_12;
CHECK_OBJECT(var_new_retry);
tmp_called_instance_6 = var_new_retry;
frame_frame_urllib3$util$retry$$$function__15_increment->m_frame.f_lineno = 541;
tmp_call_result_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts.const_str_plain_is_exhausted);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 541;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_12 = CHECK_IF_TRUE(tmp_call_result_4);
if (tmp_truth_name_12 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_4);

exception_lineno = 541;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_16 = tmp_truth_name_12 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_assign_source_25;
int tmp_or_left_truth_3;
PyObject *tmp_or_left_value_3;
PyObject *tmp_or_right_value_3;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_18;
CHECK_OBJECT(par_error);
tmp_or_left_value_3 = par_error;
tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
tmp_called_value_7 = module_var_accessor_urllib3$util$retry$ResponseError(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseError);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 542;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_cause);
tmp_args_element_value_18 = var_cause;
frame_frame_urllib3$util$retry$$$function__15_increment->m_frame.f_lineno = 542;
tmp_or_right_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_18);
if (tmp_or_right_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_25 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
Py_INCREF(tmp_or_left_value_3);
tmp_assign_source_25 = tmp_or_left_value_3;
or_end_3:;
{
    PyObject *old = var_reason;
    var_reason = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_raise_type_4;
PyObject *tmp_raise_type_input_4;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_19;
PyObject *tmp_args_element_value_20;
PyObject *tmp_args_element_value_21;
PyObject *tmp_raise_cause_1;
tmp_called_value_8 = module_var_accessor_urllib3$util$retry$MaxRetryError(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MaxRetryError);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 543;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par__pool);
tmp_args_element_value_19 = par__pool;
CHECK_OBJECT(par_url);
tmp_args_element_value_20 = par_url;
CHECK_OBJECT(var_reason);
tmp_args_element_value_21 = var_reason;
frame_frame_urllib3$util$retry$$$function__15_increment->m_frame.f_lineno = 543;
{
    PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21};
    tmp_raise_type_input_4 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_8, call_args);
}

if (tmp_raise_type_input_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 543;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_4 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_4);
CHECK_OBJECT(tmp_raise_type_input_4);
Py_DECREF(tmp_raise_type_input_4);
if (tmp_raise_type_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 543;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_reason);
tmp_raise_cause_1 = var_reason;
exception_state.exception_value = tmp_raise_type_4;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 543;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_16:;
{
PyObject *tmp_called_instance_7;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_22;
PyObject *tmp_args_element_value_23;
PyObject *tmp_args_element_value_24;
tmp_called_instance_7 = module_var_accessor_urllib3$util$retry$log(tstate);
if (unlikely(tmp_called_instance_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_log);
}

if (tmp_called_instance_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 545;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_22 = mod_consts.const_str_digest_adf0407d4b5f2535bca90601d487b350;
CHECK_OBJECT(par_url);
tmp_args_element_value_23 = par_url;
CHECK_OBJECT(var_new_retry);
tmp_args_element_value_24 = var_new_retry;
frame_frame_urllib3$util$retry$$$function__15_increment->m_frame.f_lineno = 545;
{
    PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24};
    tmp_call_result_5 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_7,
        mod_consts.const_str_plain_debug,
        call_args
    );
}

if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 545;
type_description_1 = "oooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$retry$$$function__15_increment, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$retry$$$function__15_increment->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$retry$$$function__15_increment, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$retry$$$function__15_increment,
    type_description_1,
    par_self,
    par_method,
    par_url,
    par_response,
    par_error,
    par__pool,
    par__stacktrace,
    var_total,
    var_connect,
    var_read,
    var_redirect,
    var_status_count,
    var_other,
    var_cause,
    var_status,
    var_redirect_location,
    var_response_redirect_location,
    var_history,
    var_new_retry,
    var_reason
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$retry$$$function__15_increment == cache_frame_frame_urllib3$util$retry$$$function__15_increment) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$retry$$$function__15_increment);
    cache_frame_frame_urllib3$util$retry$$$function__15_increment = NULL;
}

assertFrameObject(frame_frame_urllib3$util$retry$$$function__15_increment);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_new_retry);
tmp_return_value = var_new_retry;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_total);
CHECK_OBJECT(var_total);
Py_DECREF(var_total);
var_total = NULL;
CHECK_OBJECT(var_connect);
CHECK_OBJECT(var_connect);
Py_DECREF(var_connect);
var_connect = NULL;
CHECK_OBJECT(var_read);
CHECK_OBJECT(var_read);
Py_DECREF(var_read);
var_read = NULL;
CHECK_OBJECT(var_redirect);
CHECK_OBJECT(var_redirect);
Py_DECREF(var_redirect);
var_redirect = NULL;
CHECK_OBJECT(var_status_count);
CHECK_OBJECT(var_status_count);
Py_DECREF(var_status_count);
var_status_count = NULL;
CHECK_OBJECT(var_other);
CHECK_OBJECT(var_other);
Py_DECREF(var_other);
var_other = NULL;
CHECK_OBJECT(var_cause);
CHECK_OBJECT(var_cause);
Py_DECREF(var_cause);
var_cause = NULL;
CHECK_OBJECT(var_status);
CHECK_OBJECT(var_status);
Py_DECREF(var_status);
var_status = NULL;
CHECK_OBJECT(var_redirect_location);
CHECK_OBJECT(var_redirect_location);
Py_DECREF(var_redirect_location);
var_redirect_location = NULL;
Py_XDECREF(var_response_redirect_location);
var_response_redirect_location = NULL;
CHECK_OBJECT(var_history);
CHECK_OBJECT(var_history);
Py_DECREF(var_history);
var_history = NULL;
CHECK_OBJECT(var_new_retry);
CHECK_OBJECT(var_new_retry);
Py_DECREF(var_new_retry);
var_new_retry = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_total);
var_total = NULL;
Py_XDECREF(var_connect);
var_connect = NULL;
Py_XDECREF(var_read);
var_read = NULL;
Py_XDECREF(var_redirect);
var_redirect = NULL;
Py_XDECREF(var_status_count);
var_status_count = NULL;
Py_XDECREF(var_other);
var_other = NULL;
Py_XDECREF(var_cause);
var_cause = NULL;
Py_XDECREF(var_status);
var_status = NULL;
Py_XDECREF(var_redirect_location);
var_redirect_location = NULL;
Py_XDECREF(var_response_redirect_location);
var_response_redirect_location = NULL;
Py_XDECREF(var_history);
var_history = NULL;
Py_XDECREF(var_new_retry);
var_new_retry = NULL;
Py_XDECREF(var_reason);
var_reason = NULL;
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
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_response);
Py_DECREF(par_response);
CHECK_OBJECT(par_error);
Py_DECREF(par_error);
CHECK_OBJECT(par__pool);
Py_DECREF(par__pool);
CHECK_OBJECT(par__stacktrace);
Py_DECREF(par__stacktrace);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_response);
Py_DECREF(par_response);
CHECK_OBJECT(par_error);
Py_DECREF(par_error);
CHECK_OBJECT(par__pool);
Py_DECREF(par__pool);
CHECK_OBJECT(par__stacktrace);
Py_DECREF(par__stacktrace);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$retry$$$function__16___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_urllib3$util$retry$$$function__16___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$retry$$$function__16___repr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$retry$$$function__16___repr__)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$retry$$$function__16___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$retry$$$function__16___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$retry$$$function__16___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_a0b3ef05378dcf814ed276c8e23c4d45, module_urllib3$util$retry, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$retry$$$function__16___repr__->m_type_description == NULL);
frame_frame_urllib3$util$retry$$$function__16___repr__ = cache_frame_frame_urllib3$util$retry$$$function__16___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$retry$$$function__16___repr__);
assert(Py_REFCNT(frame_frame_urllib3$util$retry$$$function__16___repr__) == 2);

// Framed code:
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_format_spec_1;
CHECK_OBJECT(par_self);
tmp_type_arg_1 = par_self;
tmp_expression_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_expression_value_1 == NULL));
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 551;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 551;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 12);
{
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_format_spec_4;
PyObject *tmp_format_value_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_format_spec_5;
PyObject *tmp_format_value_6;
PyObject *tmp_expression_value_6;
PyObject *tmp_format_spec_6;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_2cf19ce5f8aafc25d01c0650343ca85a;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_total);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 551;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 551;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_7d645f6a902354da37833c704d2b5691;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_connect);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 551;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 551;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_a2e66ed84948d21be07b9aad5a0ca97d;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_format_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_read);
if (tmp_format_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
CHECK_OBJECT(tmp_format_value_4);
Py_DECREF(tmp_format_value_4);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_6cec2b4aed31f7caebf8cbb3bc935cbd;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 7, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_format_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_redirect);
if (tmp_format_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_5 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
CHECK_OBJECT(tmp_format_value_5);
Py_DECREF(tmp_format_value_5);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 8, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_86254e62d600980e0c926ebfea6e9619;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 9, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_format_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_status);
if (tmp_format_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_6 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
CHECK_OBJECT(tmp_format_value_6);
Py_DECREF(tmp_format_value_6);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 10, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_41;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 11, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_return_value == NULL));
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$retry$$$function__16___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$retry$$$function__16___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$retry$$$function__16___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$retry$$$function__16___repr__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$retry$$$function__16___repr__ == cache_frame_frame_urllib3$util$retry$$$function__16___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$retry$$$function__16___repr__);
    cache_frame_frame_urllib3$util$retry$$$function__16___repr__ = NULL;
}

assertFrameObject(frame_frame_urllib3$util$retry$$$function__16___repr__);

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



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function__10__is_connection_error(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function__10__is_connection_error,
        mod_consts.const_str_plain__is_connection_error,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7e60379875538acb6d47a09b3bcd7fdf,
#endif
        code_objects_d732e1c2781c451418245db1ddbf324a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$retry,
        mod_consts.const_str_digest_f0233bdbe36bf116adbb4a2ecc938e1b,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function__11__is_read_error(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function__11__is_read_error,
        mod_consts.const_str_plain__is_read_error,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2d8b572caa8eac58f71c5c2fc1f268f9,
#endif
        code_objects_78cc786c6ebc07a0a052ab753dee65f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$retry,
        mod_consts.const_str_digest_d9a68c2d44e8989e975d546861154deb,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function__12__is_method_retryable(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function__12__is_method_retryable,
        mod_consts.const_str_plain__is_method_retryable,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0ea7366bdeb0b49141acb3ad1441b7b5,
#endif
        code_objects_0cfa2b7f274152e8e9d9f11c4522f8f9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$retry,
        mod_consts.const_str_digest_a9181163a30d92e8c74eb9b35e154c99,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function__13_is_retry(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function__13_is_retry,
        mod_consts.const_str_plain_is_retry,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_43a062f907032f59d25a421045c4a843,
#endif
        code_objects_bc0ff8002e1f6568b43cf08aca2f18be,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$retry,
        mod_consts.const_str_digest_5449ea788c0112104a2bc406e503b077,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function__14_is_exhausted(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function__14_is_exhausted,
        mod_consts.const_str_plain_is_exhausted,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4506185023298da4a69876975fb76211,
#endif
        code_objects_32d420eef90b7565c3829fd5d5751b09,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$retry,
        mod_consts.const_str_digest_a62630489d5f65e81b08ddd5a57c0f72,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function__15_increment(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function__15_increment,
        mod_consts.const_str_plain_increment,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d3c5cf2f2d706173f393307c5fa372aa,
#endif
        code_objects_19a57d0ac5a4c5ae7f05c4c42eb6b38d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$retry,
        mod_consts.const_str_digest_eae9627a9eb96010f22fdefa3f77aabc,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function__16___repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function__16___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4291b42c0261755daa9f58af16f24a8c,
#endif
        code_objects_a0b3ef05378dcf814ed276c8e23c4d45,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$retry,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_297455e155b6c9736d87529e14591c5d,
#endif
        code_objects_21e6dc17ad22e507b79a35fdfb9338b0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$retry,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function__2_new(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function__2_new,
        mod_consts.const_str_plain_new,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ca693a71271df261e783dd0ecf309ae0,
#endif
        code_objects_9122938b0e955c6890e90f081b3c716f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$retry,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function__3_from_int(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function__3_from_int,
        mod_consts.const_str_plain_from_int,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_00aff75c087fe7f80636ea13a09e3e82,
#endif
        code_objects_24656454d9ed2e8e8107ddf5da3f7291,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$retry,
        mod_consts.const_str_digest_2b98f5690a439fdd4e367661232170cf,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function__4_get_backoff_time(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function__4_get_backoff_time,
        mod_consts.const_str_plain_get_backoff_time,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e80b9085df081452c8caeed4571c51b7,
#endif
        code_objects_79f8e503e7bc2b0f51866ab6b201fdc9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$retry,
        mod_consts.const_str_digest_ac71cbae841ee68a5d2644f8330f1112,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function__4_get_backoff_time$$$function__1_lambda(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function__4_get_backoff_time$$$function__1_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_96630de8eadb33fda97640a57fbbbd1c,
#endif
        code_objects_43dd092d8afce702d739e5c30be13c48,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_urllib3$util$retry,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function__5_parse_retry_after(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function__5_parse_retry_after,
        mod_consts.const_str_plain_parse_retry_after,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_683309cb722498c00ca029ec4e15acbf,
#endif
        code_objects_2b230b6baf310d3ab2b8586c2a768a3d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$retry,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function__6_get_retry_after(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function__6_get_retry_after,
        mod_consts.const_str_plain_get_retry_after,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6659ea07dd436805b2630885700a6e61,
#endif
        code_objects_5088cd9fefb1795869c1650236e0dbcd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$retry,
        mod_consts.const_str_digest_a7cc568753f4d14c2254e04b979d2baa,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function__7_sleep_for_retry(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function__7_sleep_for_retry,
        mod_consts.const_str_plain_sleep_for_retry,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9bdc7bd568ca4c860ba3d9ea8f97a38f,
#endif
        code_objects_7bd80c75c949766c59f432fda1b234b4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$retry,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function__8__sleep_backoff(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function__8__sleep_backoff,
        mod_consts.const_str_plain__sleep_backoff,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_504591e526cc625e5b3bbfcf35d4ec2f,
#endif
        code_objects_67f8a0502097c8c3dc47792a1841ceae,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$retry,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function__9_sleep(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function__9_sleep,
        mod_consts.const_str_plain_sleep,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b0594eafa05dc6a6810bb2c7c291548b,
#endif
        code_objects_3b05a3e21ce2a8c4e1c2dd3de5a11d50,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$retry,
        mod_consts.const_str_digest_62cff4868e3e5eb3258a26643ddfa300,
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

static function_impl_code const function_table_urllib3$util$retry[] = {
impl_urllib3$util$retry$$$function__4_get_backoff_time$$$function__1_lambda,
impl_urllib3$util$retry$$$function__1___init__,
impl_urllib3$util$retry$$$function__2_new,
impl_urllib3$util$retry$$$function__3_from_int,
impl_urllib3$util$retry$$$function__4_get_backoff_time,
impl_urllib3$util$retry$$$function__5_parse_retry_after,
impl_urllib3$util$retry$$$function__6_get_retry_after,
impl_urllib3$util$retry$$$function__7_sleep_for_retry,
impl_urllib3$util$retry$$$function__8__sleep_backoff,
impl_urllib3$util$retry$$$function__9_sleep,
impl_urllib3$util$retry$$$function__10__is_connection_error,
impl_urllib3$util$retry$$$function__11__is_read_error,
impl_urllib3$util$retry$$$function__12__is_method_retryable,
impl_urllib3$util$retry$$$function__13_is_retry,
impl_urllib3$util$retry$$$function__14_is_exhausted,
impl_urllib3$util$retry$$$function__15_increment,
impl_urllib3$util$retry$$$function__16___repr__,
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

    return Nuitka_Function_GetFunctionState(function, function_table_urllib3$util$retry);
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
        module_urllib3$util$retry,
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
        function_table_urllib3$util$retry,
        sizeof(function_table_urllib3$util$retry) / sizeof(function_impl_code)
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
static char const *module_full_name = "urllib3.util.retry";
#endif

// Internal entry point for module code.
PyObject *module_code_urllib3$util$retry(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("urllib3$util$retry");

    // Store the module for future use.
    module_urllib3$util$retry = module;

    moduledict_urllib3$util$retry = MODULE_DICT(module_urllib3$util$retry);

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
        PRINT_STRING("urllib3$util$retry: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("urllib3$util$retry: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("urllib3$util$retry: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "urllib3.util.retry" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initurllib3$util$retry\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_urllib3$util$retry,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_urllib3$util$retry,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_urllib3$util$retry,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$retry,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$retry,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_urllib3$util$retry);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_urllib3$util$retry);
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

        UPDATE_STRING_DICT1(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$retry;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_urllib3$util$retry$$$class__1_RequestHistory_33 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_urllib3$util$retry$$$class__1_RequestHistory_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *locals_urllib3$util$retry$$$class__2_Retry_41 = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$retry$$$class__2_Retry_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_urllib3$util$retry = MAKE_MODULE_FRAME(code_objects_8d73e85f3b85a3baaf36dd233f654e7e, module_urllib3$util$retry);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$retry);
assert(Py_REFCNT(frame_frame_urllib3$util$retry) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_urllib3$util$retry$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_urllib3$util$retry$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_email;
tmp_globals_arg_value_1 = (PyObject *)moduledict_urllib3$util$retry;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_urllib3$util$retry->m_frame.f_lineno = 3;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_email, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_2 = (PyObject *)moduledict_urllib3$util$retry;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_urllib3$util$retry->m_frame.f_lineno = 4;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_random;
tmp_globals_arg_value_3 = (PyObject *)moduledict_urllib3$util$retry;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_urllib3$util$retry->m_frame.f_lineno = 5;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_random, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_4 = (PyObject *)moduledict_urllib3$util$retry;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = Py_None;
tmp_level_value_4 = const_int_0;
frame_frame_urllib3$util$retry->m_frame.f_lineno = 6;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_re, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_time;
tmp_globals_arg_value_5 = (PyObject *)moduledict_urllib3$util$retry;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = Py_None;
tmp_level_value_5 = const_int_0;
frame_frame_urllib3$util$retry->m_frame.f_lineno = 7;
tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_time, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_11 == NULL));
UPDATE_STRING_DICT0(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_itertools;
tmp_globals_arg_value_6 = (PyObject *)moduledict_urllib3$util$retry;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_takewhile_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_urllib3$util$retry->m_frame.f_lineno = 9;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_urllib3$util$retry,
        mod_consts.const_str_plain_takewhile,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_takewhile);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_takewhile, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_2;
tmp_import_name_from_2 = IMPORT_HARD_TYPES();
assert(!(tmp_import_name_from_2 == NULL));
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_urllib3$util$retry,
        mod_consts.const_str_plain_TracebackType,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_TracebackType);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_TracebackType, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_exceptions;
tmp_globals_arg_value_7 = (PyObject *)moduledict_urllib3$util$retry;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_f8dc0be50b885469e3e65e098fd73170_tuple;
tmp_level_value_7 = mod_consts.const_int_pos_2;
frame_frame_urllib3$util$retry->m_frame.f_lineno = 12;
tmp_assign_source_14 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_14;
}
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_urllib3$util$retry,
        mod_consts.const_str_plain_ConnectTimeoutError,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_ConnectTimeoutError);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectTimeoutError, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_urllib3$util$retry,
        mod_consts.const_str_plain_InvalidHeader,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_InvalidHeader);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidHeader, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_urllib3$util$retry,
        mod_consts.const_str_plain_MaxRetryError,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_MaxRetryError);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_MaxRetryError, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_urllib3$util$retry,
        mod_consts.const_str_plain_ProtocolError,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_ProtocolError);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_ProtocolError, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_7 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_urllib3$util$retry,
        mod_consts.const_str_plain_ProxyError,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_ProxyError);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyError, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_8 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_urllib3$util$retry,
        mod_consts.const_str_plain_ReadTimeoutError,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_ReadTimeoutError);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadTimeoutError, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_9 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_urllib3$util$retry,
        mod_consts.const_str_plain_ResponseError,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_ResponseError);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseError, tmp_assign_source_21);
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
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain_util;
tmp_globals_arg_value_8 = (PyObject *)moduledict_urllib3$util$retry;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_reraise_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_urllib3$util$retry->m_frame.f_lineno = 21;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_urllib3$util$retry,
        mod_consts.const_str_plain_reraise,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_reraise);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_reraise, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_urllib3$util$retry$logging(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;

    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$retry->m_frame.f_lineno = 29;
tmp_assign_source_23 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd_tuple, 0)
);

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_log, tmp_assign_source_23);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_1 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_NamedTuple);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_2;
}
tmp_assign_source_24 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_24, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_24;
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_25 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_25;
}
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_26;
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_2;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_2 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_2;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_27 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_27;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_2;
}
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_28;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_2;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_RequestHistory;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_urllib3$util$retry->m_frame.f_lineno = 33;
tmp_assign_source_28 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_28;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_5 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_2;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_9, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_2;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_7;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_7 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_2;
}
frame_frame_urllib3$util$retry->m_frame.f_lineno = 33;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 33;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_29;
}
branch_end_1:;
{
PyObject *tmp_assign_source_30;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_urllib3$util$retry$$$class__1_RequestHistory_33 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd;
tmp_res = PyObject_SetItem(locals_urllib3$util$retry$$$class__1_RequestHistory_33, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain_RequestHistory;
tmp_res = PyObject_SetItem(locals_urllib3$util$retry$$$class__1_RequestHistory_33, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_33;
tmp_res = PyObject_SetItem(locals_urllib3$util$retry$$$class__1_RequestHistory_33, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_4;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_urllib3$util$retry$$$class__1_RequestHistory_33, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_4;
}
frame_frame_urllib3$util$retry$$$class__1_RequestHistory_2 = MAKE_CLASS_FRAME(tstate, code_objects_aad94d307d9b4666bdd1b42ad9d46ce6, module_urllib3$util$retry, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_urllib3$util$retry$$$class__1_RequestHistory_2, locals_urllib3$util$retry$$$class__1_RequestHistory_33);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$retry$$$class__1_RequestHistory_2);
assert(Py_REFCNT(frame_frame_urllib3$util$retry$$$class__1_RequestHistory_2) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58;
tmp_ass_subscribed_1 = PyObject_GetItem(locals_urllib3$util$retry$$$class__1_RequestHistory_33, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 34;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_method;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58;
tmp_ass_subscribed_2 = PyObject_GetItem(locals_urllib3$util$retry$$$class__1_RequestHistory_33, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 35;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_url;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = mod_consts.const_str_digest_800ba1e431e6b87b27aa2cc00a30f69e;
tmp_ass_subscribed_3 = PyObject_GetItem(locals_urllib3$util$retry$$$class__1_RequestHistory_33, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 36;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_error;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subscribed_3);
Py_DECREF(tmp_ass_subscribed_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_ass_subvalue_4 = mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a;
tmp_ass_subscribed_4 = PyObject_GetItem(locals_urllib3$util$retry$$$class__1_RequestHistory_33, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 37;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_4 = mod_consts.const_str_plain_status;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subscribed_4);
Py_DECREF(tmp_ass_subscribed_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
tmp_ass_subvalue_5 = mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58;
tmp_ass_subscribed_5 = PyObject_GetItem(locals_urllib3$util$retry$$$class__1_RequestHistory_33, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 38;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_5 = mod_consts.const_str_plain_redirect_location;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
CHECK_OBJECT(tmp_ass_subscribed_5);
Py_DECREF(tmp_ass_subscribed_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_urllib3$util$retry$$$class__1_RequestHistory_2);


goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$retry$$$class__1_RequestHistory_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$retry$$$class__1_RequestHistory_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$retry$$$class__1_RequestHistory_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$retry$$$class__1_RequestHistory_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_urllib3$util$retry$$$class__1_RequestHistory_2);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_urllib3$util$retry$$$class__1_RequestHistory_2);


// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_4;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_urllib3$util$retry$$$class__1_RequestHistory_33, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_4;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_1 = tmp_class_container$class_creation_1__bases_orig;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_4;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_urllib3$util$retry$$$class__1_RequestHistory_33, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_4;
}
branch_no_3:;
{
PyObject *tmp_assign_source_31;
PyObject *tmp_metaclass_value_2;
PyObject *tmp_name_value_10;
PyObject *tmp_bases_value_2;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_metaclass_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_10 = mod_consts.const_str_plain_RequestHistory;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_1__bases;
tmp_dict_arg_value_1 = locals_urllib3$util$retry$$$class__1_RequestHistory_33;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_10, tmp_bases_value_2, tmp_dict_arg_value_1);
tmp_assign_source_31 = CALL_FUNCTION(tstate, tmp_metaclass_value_2, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_4;
}
{
    PyObject *old = outline_0_var___class__;
    outline_0_var___class__ = tmp_assign_source_31;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_30 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_30);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_urllib3$util$retry$$$class__1_RequestHistory_33);
locals_urllib3$util$retry$$$class__1_RequestHistory_33 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_urllib3$util$retry$$$class__1_RequestHistory_33);
locals_urllib3$util$retry$$$class__1_RequestHistory_33 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 33;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestHistory, tmp_assign_source_30);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_1__bases_orig);
tmp_class_container$class_creation_1__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__bases);
tmp_class_container$class_creation_1__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__metaclass);
tmp_class_container$class_creation_1__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__prepared);
tmp_class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
Py_DECREF(tmp_class_container$class_creation_1__bases_orig);
tmp_class_container$class_creation_1__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
Py_DECREF(tmp_class_container$class_creation_1__bases);
tmp_class_container$class_creation_1__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
Py_DECREF(tmp_class_container$class_creation_1__metaclass);
tmp_class_container$class_creation_1__metaclass = NULL;
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
{
PyObject *tmp_outline_return_value_2;
{
PyObject *tmp_assign_source_32;
tmp_assign_source_32 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_32;
}
{
PyObject *tmp_assign_source_33;
tmp_assign_source_33 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_33;
}
// Tried code:
{
PyObject *tmp_assign_source_34;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_urllib3$util$retry$$$class__2_Retry_41 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
tmp_dictset_value = mod_consts.const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd;
tmp_result = DICT_SET_ITEM(locals_urllib3$util$retry$$$class__2_Retry_41, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_7157bfa4de7d8d3343af8fea7d23955a;
tmp_result = DICT_SET_ITEM(locals_urllib3$util$retry$$$class__2_Retry_41, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_Retry;
tmp_result = DICT_SET_ITEM(locals_urllib3$util$retry$$$class__2_Retry_41, const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_41;
tmp_result = DICT_SET_ITEM(locals_urllib3$util$retry$$$class__2_Retry_41, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_result = DICT_SET_ITEM(locals_urllib3$util$retry$$$class__2_Retry_41, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_frozenset_088c5ae02e3baf16379ff2c677dddcd0;
tmp_result = DICT_SET_ITEM(locals_urllib3$util$retry$$$class__2_Retry_41, mod_consts.const_str_plain_DEFAULT_ALLOWED_METHODS, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_frozenset_90ee7ef4af5cffdbd371b1ed811aea21;
tmp_result = DICT_SET_ITEM(locals_urllib3$util$retry$$$class__2_Retry_41, mod_consts.const_str_plain_RETRY_AFTER_STATUS_CODES, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_frozenset_8ca4f21d92efe9d3ae2c46d21c2c9c6e;
tmp_result = DICT_SET_ITEM(locals_urllib3$util$retry$$$class__2_Retry_41, mod_consts.const_str_plain_DEFAULT_REMOVE_HEADERS_ON_REDIRECT, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_120;
tmp_result = DICT_SET_ITEM(locals_urllib3$util$retry$$$class__2_Retry_41, mod_consts.const_str_plain_DEFAULT_BACKOFF_MAX, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_21600;
tmp_result = DICT_SET_ITEM(locals_urllib3$util$retry$$$class__2_Retry_41, mod_consts.const_str_plain_DEFAULT_RETRY_AFTER_MAX, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_urllib3$util$retry$$$class__2_Retry_3 = MAKE_CLASS_FRAME(tstate, code_objects_88b41fe231a439b823614f99449e6aaf, module_urllib3$util$retry, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_urllib3$util$retry$$$class__2_Retry_3, locals_urllib3$util$retry$$$class__2_Retry_41);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$retry$$$class__2_Retry_3);
assert(Py_REFCNT(frame_frame_urllib3$util$retry$$$class__2_Retry_3) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
tmp_ass_subvalue_6 = mod_consts.const_str_digest_0d3eb31e90b60373f2f97c21b6f7a847;
tmp_ass_subscribed_6 = DICT_GET_ITEM0(tstate, locals_urllib3$util$retry$$$class__2_Retry_41, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 214;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_6 = mod_consts.const_str_plain_DEFAULT_RETRY_AFTER_MAX;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_ass_subvalue_7;
PyObject *tmp_ass_subscribed_7;
PyObject *tmp_ass_subscript_7;
tmp_ass_subvalue_7 = mod_consts.const_str_digest_fe09d12920a7696ef5f9672332963f8a;
tmp_ass_subscribed_7 = DICT_GET_ITEM0(tstate, locals_urllib3$util$retry$$$class__2_Retry_41, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 217;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_7 = mod_consts.const_str_plain_DEFAULT;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_urllib3$util$retry$$$class__2_Retry_3);


goto frame_no_exception_2;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$retry$$$class__2_Retry_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$retry$$$class__2_Retry_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$retry$$$class__2_Retry_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$retry$$$class__2_Retry_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_urllib3$util$retry$$$class__2_Retry_3);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_urllib3$util$retry$$$class__2_Retry_3);


// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_7;
skip_nested_handling_2:;
{
PyObject *tmp_defaults_1;
PyObject *tmp_tuple_element_4;
PyObject *tmp_annotations_1;
tmp_tuple_element_4 = mod_consts.const_int_pos_10;
tmp_defaults_1 = MAKE_TUPLE_EMPTY(tstate, 17);
PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_1, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_1, 2, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_1, 3, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_1, 4, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_1, 5, tmp_tuple_element_4);
tmp_tuple_element_4 = DICT_GET_ITEM0(tstate, locals_urllib3$util$retry$$$class__2_Retry_41, mod_consts.const_str_plain_DEFAULT_ALLOWED_METHODS);

if (unlikely(tmp_tuple_element_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_ALLOWED_METHODS);

exception_lineno = 227;

    goto try_except_handler_7;
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;

    goto try_except_handler_7;
}
PyTuple_SET_ITEM0(tmp_defaults_1, 6, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_1, 7, tmp_tuple_element_4);
tmp_tuple_element_4 = const_int_0;
PyTuple_SET_ITEM0(tmp_defaults_1, 8, tmp_tuple_element_4);
tmp_tuple_element_4 = DICT_GET_ITEM0(tstate, locals_urllib3$util$retry$$$class__2_Retry_41, mod_consts.const_str_plain_DEFAULT_BACKOFF_MAX);

if (unlikely(tmp_tuple_element_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_BACKOFF_MAX);

exception_lineno = 230;

    goto try_except_handler_7;
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_7;
}
PyTuple_SET_ITEM0(tmp_defaults_1, 9, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_True;
PyTuple_SET_ITEM0(tmp_defaults_1, 10, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_True;
PyTuple_SET_ITEM0(tmp_defaults_1, 11, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_1, 12, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_True;
PyTuple_SET_ITEM0(tmp_defaults_1, 13, tmp_tuple_element_4);
tmp_tuple_element_4 = DICT_GET_ITEM0(tstate, locals_urllib3$util$retry$$$class__2_Retry_41, mod_consts.const_str_plain_DEFAULT_REMOVE_HEADERS_ON_REDIRECT);

if (unlikely(tmp_tuple_element_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_REMOVE_HEADERS_ON_REDIRECT);

exception_lineno = 237;

    goto try_except_handler_7;
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;

    goto try_except_handler_7;
}
PyTuple_SET_ITEM0(tmp_defaults_1, 14, tmp_tuple_element_4);
tmp_tuple_element_4 = const_float_0_0;
PyTuple_SET_ITEM0(tmp_defaults_1, 15, tmp_tuple_element_4);
tmp_tuple_element_4 = DICT_GET_ITEM0(tstate, locals_urllib3$util$retry$$$class__2_Retry_41, mod_consts.const_str_plain_DEFAULT_RETRY_AFTER_MAX);

if (unlikely(tmp_tuple_element_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_RETRY_AFTER_MAX);

exception_lineno = 239;

    goto try_except_handler_7;
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_7;
}
PyTuple_SET_ITEM0(tmp_defaults_1, 16, tmp_tuple_element_4);
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_930d80efafd869fd804a953f5fef025b);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function__1___init__(tstate, tmp_defaults_1, tmp_annotations_1);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$retry$$$class__2_Retry_41, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_51e59e6b72080f46eb453119b02e6e91);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function__2_new(tstate, tmp_annotations_2);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$retry$$$class__2_Retry_41, mod_consts.const_str_plain_new, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_classmethod_arg_1;
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_3;
tmp_defaults_2 = mod_consts.const_tuple_true_none_tuple;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_8f48e88f669270772c4e41d6ef1eff4e);
Py_INCREF(tmp_defaults_2);

tmp_classmethod_arg_1 = MAKE_FUNCTION_urllib3$util$retry$$$function__3_from_int(tstate, tmp_defaults_2, tmp_annotations_3);

tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_1);
CHECK_OBJECT(tmp_classmethod_arg_1);
Py_DECREF(tmp_classmethod_arg_1);
assert(!(tmp_dictset_value == NULL));
tmp_result = DICT_SET_ITEM(locals_urllib3$util$retry$$$class__2_Retry_41, mod_consts.const_str_plain_from_int, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function__4_get_backoff_time(tstate, tmp_annotations_4);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$retry$$$class__2_Retry_41, mod_consts.const_str_plain_get_backoff_time, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_2b04ec6c02fc6fc479932fe5aec0645c);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function__5_parse_retry_after(tstate, tmp_annotations_5);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$retry$$$class__2_Retry_41, mod_consts.const_str_plain_parse_retry_after, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_47a9e3a65b34120a85309ca49510e889);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function__6_get_retry_after(tstate, tmp_annotations_6);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$retry$$$class__2_Retry_41, mod_consts.const_str_plain_get_retry_after, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_d21fbc98611755784fb8186818cb645a);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function__7_sleep_for_retry(tstate, tmp_annotations_7);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$retry$$$class__2_Retry_41, mod_consts.const_str_plain_sleep_for_retry, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function__8__sleep_backoff(tstate, tmp_annotations_8);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$retry$$$class__2_Retry_41, mod_consts.const_str_plain__sleep_backoff, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_9;
tmp_defaults_3 = mod_consts.const_tuple_none_tuple;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_47a9fd1a46a9175f4f0097b003c2c12b);
Py_INCREF(tmp_defaults_3);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function__9_sleep(tstate, tmp_defaults_3, tmp_annotations_9);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$retry$$$class__2_Retry_41, mod_consts.const_str_plain_sleep, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_cf5b7b3d5c104d52d1cd532465fa7d0e);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function__10__is_connection_error(tstate, tmp_annotations_10);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$retry$$$class__2_Retry_41, mod_consts.const_str_plain__is_connection_error, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_cf5b7b3d5c104d52d1cd532465fa7d0e);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function__11__is_read_error(tstate, tmp_annotations_11);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$retry$$$class__2_Retry_41, mod_consts.const_str_plain__is_read_error, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_12;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_b1b1324bca4a40096f1a76d1a8a01373);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function__12__is_method_retryable(tstate, tmp_annotations_12);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$retry$$$class__2_Retry_41, mod_consts.const_str_plain__is_method_retryable, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_4;
PyObject *tmp_annotations_13;
tmp_defaults_4 = mod_consts.const_tuple_false_tuple;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_3b7db28d5171d8b376654fc5ffa79f3a);
Py_INCREF(tmp_defaults_4);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function__13_is_retry(tstate, tmp_defaults_4, tmp_annotations_13);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$retry$$$class__2_Retry_41, mod_consts.const_str_plain_is_retry, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_14;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function__14_is_exhausted(tstate, tmp_annotations_14);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$retry$$$class__2_Retry_41, mod_consts.const_str_plain_is_exhausted, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_5;
PyObject *tmp_annotations_15;
tmp_defaults_5 = mod_consts.const_tuple_none_none_none_none_none_none_tuple;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_357164c33a1363a25ffb265c19e3f222);
Py_INCREF(tmp_defaults_5);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function__15_increment(tstate, tmp_defaults_5, tmp_annotations_15);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$retry$$$class__2_Retry_41, mod_consts.const_str_plain_increment, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_16;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function__16___repr__(tstate, tmp_annotations_16);

tmp_result = DICT_SET_ITEM(locals_urllib3$util$retry$$$class__2_Retry_41, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_7f8b86aa06e82d9687856bdbf6133811_tuple;
tmp_result = DICT_SET_ITEM(locals_urllib3$util$retry$$$class__2_Retry_41, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_35;
PyObject *tmp_metaclass_value_3;
PyObject *tmp_name_value_11;
PyObject *tmp_bases_value_3;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_class_decl_dict_value_2;
PyObject *tmp_metaclass_args_2;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
tmp_name_value_11 = mod_consts.const_str_plain_Retry;
tmp_bases_value_3 = const_tuple_empty;
tmp_dict_arg_value_2 = locals_urllib3$util$retry$$$class__2_Retry_41;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_decl_dict_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_metaclass_args_2 = MAKE_TUPLE3(tstate, tmp_name_value_11, tmp_bases_value_3, tmp_dict_arg_value_2);
tmp_assign_source_35 = CALL_FUNCTION(tstate, tmp_metaclass_value_3, tmp_metaclass_args_2, tmp_class_decl_dict_value_2);
CHECK_OBJECT(tmp_metaclass_args_2);
Py_DECREF(tmp_metaclass_args_2);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_7;
}
{
    PyObject *old = outline_1_var___class__;
    outline_1_var___class__ = tmp_assign_source_35;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_34 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_34);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_urllib3$util$retry$$$class__2_Retry_41);
locals_urllib3$util$retry$$$class__2_Retry_41 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_urllib3$util$retry$$$class__2_Retry_41);
locals_urllib3$util$retry$$$class__2_Retry_41 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 41;
goto try_except_handler_5;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_urllib3$util$retry, (Nuitka_StringObject *)mod_consts.const_str_plain_Retry, tmp_assign_source_34);
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
Py_DECREF(tmp_class_container$class_creation_2__prepared);
tmp_class_container$class_creation_2__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
Py_DECREF(tmp_class_container$class_creation_2__prepared);
tmp_class_container$class_creation_2__prepared = NULL;
tmp_outline_return_value_2 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_2);
goto outline_result_3;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_3:;
CHECK_OBJECT(tmp_outline_return_value_2);
Py_DECREF(tmp_outline_return_value_2);
}
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_called_value_2;
PyObject *tmp_ass_attr_target_3;
tmp_called_value_2 = module_var_accessor_urllib3$util$retry$Retry(tstate);
assert(!(tmp_called_value_2 == NULL));
frame_frame_urllib3$util$retry->m_frame.f_lineno = 557;
tmp_ass_attr_value_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_int_pos_3_tuple);

if (tmp_ass_attr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 557;

    goto frame_exception_exit_1;
}
tmp_ass_attr_target_3 = module_var_accessor_urllib3$util$retry$Retry(tstate);
if (unlikely(tmp_ass_attr_target_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Retry);
}

if (tmp_ass_attr_target_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_ass_attr_value_3);

exception_lineno = 557;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain_DEFAULT, tmp_ass_attr_value_3);
CHECK_OBJECT(tmp_ass_attr_value_3);
Py_DECREF(tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 557;

    goto frame_exception_exit_1;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$retry, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$retry->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$retry, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_urllib3$util$retry);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_3:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("urllib3$util$retry", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "urllib3.util.retry" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_urllib3$util$retry);
    return module_urllib3$util$retry;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("urllib3$util$retry", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
