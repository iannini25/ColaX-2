/* Generated code for Python module 'requests'
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



/* The "module_requests" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_requests;
PyDictObject *moduledict_requests;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_tuple_str_dot_tuple;
PyObject *const_slice_none_int_pos_3_none;
PyObject *const_str_plain_dev;
PyObject *const_str_plain_append;
PyObject *const_tuple_str_plain_0_tuple;
PyObject *const_int_pos_21;
PyObject *const_tuple_int_pos_3_int_0_int_pos_2_tuple;
PyObject *const_tuple_int_pos_8_int_0_int_0_tuple;
PyObject *const_tuple_int_pos_2_int_0_int_0_tuple;
PyObject *const_tuple_int_pos_4_int_0_int_0_tuple;
PyObject *const_str_plain_warnings;
PyObject *const_str_plain_warn;
PyObject *const_str_digest_ad7604b1d411a1adfbf40e20d244cba5;
PyObject *const_str_plain_RequestsDependencyWarning;
PyObject *const_int_pos_3;
PyObject *const_int_pos_4;
PyObject *const_str_digest_bdb7d06ff413392d0907c8f700ab7023;
PyObject *const_str_digest_984fce895a90b16c34bd01b332981d6f;
PyObject *const_str_digest_549506447f5d32a64d0d4e4b1d0bc357;
PyObject *const_str_plain_environ;
PyObject *const_tuple_a416a9db6e94a06322e945a3c46ae7fb_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_submodule_search_locations;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_urllib3;
PyObject *const_str_plain_exceptions;
PyObject *const_tuple_str_plain_RequestsDependencyWarning_tuple;
PyObject *const_str_plain_charset_normalizer;
PyObject *const_tuple_str_plain___version___tuple;
PyObject *const_str_plain___version__;
PyObject *const_str_plain_charset_normalizer_version;
PyObject *const_str_plain_chardet;
PyObject *const_str_plain_chardet_version;
PyObject *const_dict_d9d31783b5fc3f2884bc1dff52d9f2e0;
PyObject *const_str_plain_check_compatibility;
PyObject *const_dict_d243f6ead3f25bc70ec57ec83312cea2;
PyObject *const_str_plain__check_cryptography;
PyObject *const_tuple_type_AssertionError_type_ValueError_tuple;
PyObject *const_str_digest_f59a1fd8c34066a97517616d5a4a30a1;
PyObject *const_str_digest_590bb48b0cf5729b9c8375f12cac6fe4;
PyObject *const_str_digest_183fe2c6c4636ec15f5d0b742b1a6977;
PyObject *const_str_digest_75a89df3fdaa66cc36bcf68a6abbada4;
PyObject *const_str_plain_ssl;
PyObject *const_str_plain_HAS_SNI;
PyObject *const_str_digest_e03852224018ed217937e454110a99e9;
PyObject *const_tuple_str_plain_pyopenssl_tuple;
PyObject *const_str_plain_pyopenssl;
PyObject *const_str_plain_inject_into_urllib3;
PyObject *const_str_plain_cryptography;
PyObject *const_str_plain_cryptography_version;
PyObject *const_str_digest_c8562bbff9d721153deb2fdd066393d0;
PyObject *const_tuple_str_plain_DependencyWarning_tuple;
PyObject *const_str_plain_DependencyWarning;
PyObject *const_str_plain_simplefilter;
PyObject *const_str_plain_ignore;
PyObject *const_str_plain_logging;
PyObject *const_tuple_str_plain_NullHandler_tuple;
PyObject *const_str_plain_NullHandler;
PyObject *const_tuple_str_plain_packages_str_plain_utils_tuple;
PyObject *const_str_plain_packages;
PyObject *const_str_plain_utils;
PyObject *const_tuple_dce6d8c4b19e6db888108f9460babd77_tuple;
PyObject *const_str_plain___author__;
PyObject *const_str_plain___author_email__;
PyObject *const_str_plain___build__;
PyObject *const_str_plain___cake__;
PyObject *const_str_plain___copyright__;
PyObject *const_str_plain___description__;
PyObject *const_str_plain___license__;
PyObject *const_str_plain___title__;
PyObject *const_str_plain___url__;
PyObject *const_str_plain_api;
PyObject *const_tuple_0d575ffb24b4bdc6f5339eb63c328111_tuple;
PyObject *const_str_plain_delete;
PyObject *const_str_plain_head;
PyObject *const_str_plain_options;
PyObject *const_str_plain_patch;
PyObject *const_str_plain_post;
PyObject *const_str_plain_put;
PyObject *const_str_plain_request;
PyObject *const_tuple_8dfa0d60324b6aad72b3fc51362981fd_tuple;
PyObject *const_str_plain_ConnectionError;
PyObject *const_str_plain_ConnectTimeout;
PyObject *const_str_plain_FileModeWarning;
PyObject *const_str_plain_HTTPError;
PyObject *const_str_plain_JSONDecodeError;
PyObject *const_str_plain_ReadTimeout;
PyObject *const_str_plain_RequestException;
PyObject *const_str_plain_Timeout;
PyObject *const_str_plain_TooManyRedirects;
PyObject *const_str_plain_URLRequired;
PyObject *const_str_plain_models;
PyObject *const_tuple_590af5e76c8b6446171c425be27e9d9d_tuple;
PyObject *const_str_plain_PreparedRequest;
PyObject *const_str_plain_Request;
PyObject *const_str_plain_Response;
PyObject *const_str_plain_sessions;
PyObject *const_tuple_str_plain_Session_str_plain_session_tuple;
PyObject *const_str_plain_Session;
PyObject *const_str_plain_session;
PyObject *const_str_plain_status_codes;
PyObject *const_tuple_str_plain_codes_tuple;
PyObject *const_str_plain_codes;
PyObject *const_tuple_ec4d51d78383943c91147afa70a2b0a7_tuple;
PyObject *const_str_plain_getLogger;
PyObject *const_tuple_str_plain_requests_tuple;
PyObject *const_str_plain_addHandler;
PyObject *const_str_plain_default;
PyObject *const_tuple_true_tuple;
PyObject *const_tuple_str_plain_append_tuple;
PyObject *const_str_digest_680a2bcc46f35afe4fc8cda5cf729e43;
PyObject *const_str_digest_d0e74712839492f5fe2c99311f5308c8;
PyObject *const_tuple_004c43e5a1918a5eb3ef7282e3958835_tuple;
PyObject *const_tuple_27a94475ef6f16d49c32ea152b31caeb_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[115];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("requests"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 115) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 115 values, got %d\n",
                    UN_TRANSLATE("requests"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_dot_tuple", mod_consts.const_tuple_str_dot_tuple);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_none_int_pos_3_none", mod_consts.const_slice_none_int_pos_3_none);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_3_none);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dev", mod_consts.const_str_plain_dev);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_dev);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_append", mod_consts.const_str_plain_append);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_0_tuple", mod_consts.const_tuple_str_plain_0_tuple);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_21", mod_consts.const_int_pos_21);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_int_pos_21);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_3_int_0_int_pos_2_tuple", mod_consts.const_tuple_int_pos_3_int_0_int_pos_2_tuple);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_3_int_0_int_pos_2_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_8_int_0_int_0_tuple", mod_consts.const_tuple_int_pos_8_int_0_int_0_tuple);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_8_int_0_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_2_int_0_int_0_tuple", mod_consts.const_tuple_int_pos_2_int_0_int_0_tuple);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2_int_0_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_4_int_0_int_0_tuple", mod_consts.const_tuple_int_pos_4_int_0_int_0_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_4_int_0_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_warnings", mod_consts.const_str_plain_warnings);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_warnings);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_warn", mod_consts.const_str_plain_warn);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_warn);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ad7604b1d411a1adfbf40e20d244cba5", mod_consts.const_str_digest_ad7604b1d411a1adfbf40e20d244cba5);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_ad7604b1d411a1adfbf40e20d244cba5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RequestsDependencyWarning", mod_consts.const_str_plain_RequestsDependencyWarning);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_RequestsDependencyWarning);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_3", mod_consts.const_int_pos_3);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4", mod_consts.const_int_pos_4);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_int_pos_4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bdb7d06ff413392d0907c8f700ab7023", mod_consts.const_str_digest_bdb7d06ff413392d0907c8f700ab7023);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_bdb7d06ff413392d0907c8f700ab7023);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_984fce895a90b16c34bd01b332981d6f", mod_consts.const_str_digest_984fce895a90b16c34bd01b332981d6f);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_984fce895a90b16c34bd01b332981d6f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_549506447f5d32a64d0d4e4b1d0bc357", mod_consts.const_str_digest_549506447f5d32a64d0d4e4b1d0bc357);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_549506447f5d32a64d0d4e4b1d0bc357);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_environ", mod_consts.const_str_plain_environ);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a416a9db6e94a06322e945a3c46ae7fb_tuple", mod_consts.const_tuple_a416a9db6e94a06322e945a3c46ae7fb_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_tuple_a416a9db6e94a06322e945a3c46ae7fb_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_submodule_search_locations", mod_consts.const_str_plain_submodule_search_locations);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urllib3", mod_consts.const_str_plain_urllib3);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_urllib3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exceptions", mod_consts.const_str_plain_exceptions);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_RequestsDependencyWarning_tuple", mod_consts.const_tuple_str_plain_RequestsDependencyWarning_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RequestsDependencyWarning_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_charset_normalizer", mod_consts.const_str_plain_charset_normalizer);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_charset_normalizer);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___version___tuple", mod_consts.const_tuple_str_plain___version___tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___version___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___version__", mod_consts.const_str_plain___version__);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain___version__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_charset_normalizer_version", mod_consts.const_str_plain_charset_normalizer_version);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_charset_normalizer_version);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chardet", mod_consts.const_str_plain_chardet);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_chardet);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chardet_version", mod_consts.const_str_plain_chardet_version);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_chardet_version);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_d9d31783b5fc3f2884bc1dff52d9f2e0", mod_consts.const_dict_d9d31783b5fc3f2884bc1dff52d9f2e0);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_dict_d9d31783b5fc3f2884bc1dff52d9f2e0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_check_compatibility", mod_consts.const_str_plain_check_compatibility);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_check_compatibility);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_d243f6ead3f25bc70ec57ec83312cea2", mod_consts.const_dict_d243f6ead3f25bc70ec57ec83312cea2);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_dict_d243f6ead3f25bc70ec57ec83312cea2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__check_cryptography", mod_consts.const_str_plain__check_cryptography);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain__check_cryptography);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_AssertionError_type_ValueError_tuple", mod_consts.const_tuple_type_AssertionError_type_ValueError_tuple);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_type_AssertionError_type_ValueError_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f59a1fd8c34066a97517616d5a4a30a1", mod_consts.const_str_digest_f59a1fd8c34066a97517616d5a4a30a1);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_f59a1fd8c34066a97517616d5a4a30a1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_590bb48b0cf5729b9c8375f12cac6fe4", mod_consts.const_str_digest_590bb48b0cf5729b9c8375f12cac6fe4);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_590bb48b0cf5729b9c8375f12cac6fe4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_183fe2c6c4636ec15f5d0b742b1a6977", mod_consts.const_str_digest_183fe2c6c4636ec15f5d0b742b1a6977);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_183fe2c6c4636ec15f5d0b742b1a6977);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75a89df3fdaa66cc36bcf68a6abbada4", mod_consts.const_str_digest_75a89df3fdaa66cc36bcf68a6abbada4);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_75a89df3fdaa66cc36bcf68a6abbada4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ssl", mod_consts.const_str_plain_ssl);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_ssl);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HAS_SNI", mod_consts.const_str_plain_HAS_SNI);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_HAS_SNI);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e03852224018ed217937e454110a99e9", mod_consts.const_str_digest_e03852224018ed217937e454110a99e9);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_e03852224018ed217937e454110a99e9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_pyopenssl_tuple", mod_consts.const_tuple_str_plain_pyopenssl_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pyopenssl_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pyopenssl", mod_consts.const_str_plain_pyopenssl);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_pyopenssl);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_inject_into_urllib3", mod_consts.const_str_plain_inject_into_urllib3);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_inject_into_urllib3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography", mod_consts.const_str_plain_cryptography);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography_version", mod_consts.const_str_plain_cryptography_version);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography_version);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c8562bbff9d721153deb2fdd066393d0", mod_consts.const_str_digest_c8562bbff9d721153deb2fdd066393d0);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_c8562bbff9d721153deb2fdd066393d0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_DependencyWarning_tuple", mod_consts.const_tuple_str_plain_DependencyWarning_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DependencyWarning_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DependencyWarning", mod_consts.const_str_plain_DependencyWarning);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_DependencyWarning);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_simplefilter", mod_consts.const_str_plain_simplefilter);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_simplefilter);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ignore", mod_consts.const_str_plain_ignore);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_ignore);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_logging", mod_consts.const_str_plain_logging);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_NullHandler_tuple", mod_consts.const_tuple_str_plain_NullHandler_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_NullHandler_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NullHandler", mod_consts.const_str_plain_NullHandler);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_NullHandler);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_packages_str_plain_utils_tuple", mod_consts.const_tuple_str_plain_packages_str_plain_utils_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_packages_str_plain_utils_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_packages", mod_consts.const_str_plain_packages);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_packages);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_utils", mod_consts.const_str_plain_utils);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_utils);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_dce6d8c4b19e6db888108f9460babd77_tuple", mod_consts.const_tuple_dce6d8c4b19e6db888108f9460babd77_tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_dce6d8c4b19e6db888108f9460babd77_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___author__", mod_consts.const_str_plain___author__);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain___author__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___author_email__", mod_consts.const_str_plain___author_email__);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain___author_email__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___build__", mod_consts.const_str_plain___build__);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain___build__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___cake__", mod_consts.const_str_plain___cake__);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain___cake__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___copyright__", mod_consts.const_str_plain___copyright__);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain___copyright__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___description__", mod_consts.const_str_plain___description__);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain___description__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___license__", mod_consts.const_str_plain___license__);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain___license__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___title__", mod_consts.const_str_plain___title__);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain___title__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___url__", mod_consts.const_str_plain___url__);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain___url__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_api", mod_consts.const_str_plain_api);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_api);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_0d575ffb24b4bdc6f5339eb63c328111_tuple", mod_consts.const_tuple_0d575ffb24b4bdc6f5339eb63c328111_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_0d575ffb24b4bdc6f5339eb63c328111_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_delete", mod_consts.const_str_plain_delete);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_delete);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_head", mod_consts.const_str_plain_head);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_head);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_options", mod_consts.const_str_plain_options);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_options);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_patch", mod_consts.const_str_plain_patch);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_patch);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_post", mod_consts.const_str_plain_post);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_post);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_put", mod_consts.const_str_plain_put);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_put);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_request", mod_consts.const_str_plain_request);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_request);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_8dfa0d60324b6aad72b3fc51362981fd_tuple", mod_consts.const_tuple_8dfa0d60324b6aad72b3fc51362981fd_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_8dfa0d60324b6aad72b3fc51362981fd_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ConnectionError", mod_consts.const_str_plain_ConnectionError);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ConnectTimeout", mod_consts.const_str_plain_ConnectTimeout);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectTimeout);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FileModeWarning", mod_consts.const_str_plain_FileModeWarning);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileModeWarning);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTPError", mod_consts.const_str_plain_HTTPError);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JSONDecodeError", mod_consts.const_str_plain_JSONDecodeError);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_JSONDecodeError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ReadTimeout", mod_consts.const_str_plain_ReadTimeout);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReadTimeout);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RequestException", mod_consts.const_str_plain_RequestException);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_RequestException);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Timeout", mod_consts.const_str_plain_Timeout);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_Timeout);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TooManyRedirects", mod_consts.const_str_plain_TooManyRedirects);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_TooManyRedirects);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_URLRequired", mod_consts.const_str_plain_URLRequired);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_URLRequired);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_models", mod_consts.const_str_plain_models);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_models);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_590af5e76c8b6446171c425be27e9d9d_tuple", mod_consts.const_tuple_590af5e76c8b6446171c425be27e9d9d_tuple);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_tuple_590af5e76c8b6446171c425be27e9d9d_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PreparedRequest", mod_consts.const_str_plain_PreparedRequest);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_PreparedRequest);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Request", mod_consts.const_str_plain_Request);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_Request);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Response", mod_consts.const_str_plain_Response);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_Response);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sessions", mod_consts.const_str_plain_sessions);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_sessions);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Session_str_plain_session_tuple", mod_consts.const_tuple_str_plain_Session_str_plain_session_tuple);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Session_str_plain_session_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Session", mod_consts.const_str_plain_Session);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_Session);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_session", mod_consts.const_str_plain_session);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_session);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_status_codes", mod_consts.const_str_plain_status_codes);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_status_codes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_codes_tuple", mod_consts.const_tuple_str_plain_codes_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_codes_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_codes", mod_consts.const_str_plain_codes);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_codes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_ec4d51d78383943c91147afa70a2b0a7_tuple", mod_consts.const_tuple_ec4d51d78383943c91147afa70a2b0a7_tuple);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_tuple_ec4d51d78383943c91147afa70a2b0a7_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getLogger", mod_consts.const_str_plain_getLogger);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_requests_tuple", mod_consts.const_tuple_str_plain_requests_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_requests_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_addHandler", mod_consts.const_str_plain_addHandler);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_addHandler);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_default", mod_consts.const_str_plain_default);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_default);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_true_tuple", mod_consts.const_tuple_true_tuple);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_append_tuple", mod_consts.const_tuple_str_plain_append_tuple);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_append_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_680a2bcc46f35afe4fc8cda5cf729e43", mod_consts.const_str_digest_680a2bcc46f35afe4fc8cda5cf729e43);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_digest_680a2bcc46f35afe4fc8cda5cf729e43);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d0e74712839492f5fe2c99311f5308c8", mod_consts.const_str_digest_d0e74712839492f5fe2c99311f5308c8);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_d0e74712839492f5fe2c99311f5308c8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_004c43e5a1918a5eb3ef7282e3958835_tuple", mod_consts.const_tuple_004c43e5a1918a5eb3ef7282e3958835_tuple);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_tuple_004c43e5a1918a5eb3ef7282e3958835_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_27a94475ef6f16d49c32ea152b31caeb_tuple", mod_consts.const_tuple_27a94475ef6f16d49c32ea152b31caeb_tuple);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_tuple_27a94475ef6f16d49c32ea152b31caeb_tuple);
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
void checkModuleConstants_requests(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_dot_tuple", mod_consts.const_tuple_str_dot_tuple);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_tuple) && "mod_consts.const_tuple_str_dot_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_none_int_pos_3_none", mod_consts.const_slice_none_int_pos_3_none);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_3_none) && "mod_consts.const_slice_none_int_pos_3_none");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dev", mod_consts.const_str_plain_dev);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_dev) && "mod_consts.const_str_plain_dev");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_append", mod_consts.const_str_plain_append);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_append) && "mod_consts.const_str_plain_append");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_0_tuple", mod_consts.const_tuple_str_plain_0_tuple);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_0_tuple) && "mod_consts.const_tuple_str_plain_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_21", mod_consts.const_int_pos_21);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_int_pos_21) && "mod_consts.const_int_pos_21");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_3_int_0_int_pos_2_tuple", mod_consts.const_tuple_int_pos_3_int_0_int_pos_2_tuple);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_3_int_0_int_pos_2_tuple) && "mod_consts.const_tuple_int_pos_3_int_0_int_pos_2_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_8_int_0_int_0_tuple", mod_consts.const_tuple_int_pos_8_int_0_int_0_tuple);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_8_int_0_int_0_tuple) && "mod_consts.const_tuple_int_pos_8_int_0_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_2_int_0_int_0_tuple", mod_consts.const_tuple_int_pos_2_int_0_int_0_tuple);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2_int_0_int_0_tuple) && "mod_consts.const_tuple_int_pos_2_int_0_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_4_int_0_int_0_tuple", mod_consts.const_tuple_int_pos_4_int_0_int_0_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_4_int_0_int_0_tuple) && "mod_consts.const_tuple_int_pos_4_int_0_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_warnings", mod_consts.const_str_plain_warnings);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_warnings) && "mod_consts.const_str_plain_warnings");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_warn", mod_consts.const_str_plain_warn);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_warn) && "mod_consts.const_str_plain_warn");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ad7604b1d411a1adfbf40e20d244cba5", mod_consts.const_str_digest_ad7604b1d411a1adfbf40e20d244cba5);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_ad7604b1d411a1adfbf40e20d244cba5) && "mod_consts.const_str_digest_ad7604b1d411a1adfbf40e20d244cba5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RequestsDependencyWarning", mod_consts.const_str_plain_RequestsDependencyWarning);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_RequestsDependencyWarning) && "mod_consts.const_str_plain_RequestsDependencyWarning");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_3", mod_consts.const_int_pos_3);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_int_pos_3) && "mod_consts.const_int_pos_3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4", mod_consts.const_int_pos_4);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_int_pos_4) && "mod_consts.const_int_pos_4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bdb7d06ff413392d0907c8f700ab7023", mod_consts.const_str_digest_bdb7d06ff413392d0907c8f700ab7023);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_bdb7d06ff413392d0907c8f700ab7023) && "mod_consts.const_str_digest_bdb7d06ff413392d0907c8f700ab7023");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_984fce895a90b16c34bd01b332981d6f", mod_consts.const_str_digest_984fce895a90b16c34bd01b332981d6f);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_984fce895a90b16c34bd01b332981d6f) && "mod_consts.const_str_digest_984fce895a90b16c34bd01b332981d6f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_549506447f5d32a64d0d4e4b1d0bc357", mod_consts.const_str_digest_549506447f5d32a64d0d4e4b1d0bc357);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_549506447f5d32a64d0d4e4b1d0bc357) && "mod_consts.const_str_digest_549506447f5d32a64d0d4e4b1d0bc357");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_environ", mod_consts.const_str_plain_environ);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ) && "mod_consts.const_str_plain_environ");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a416a9db6e94a06322e945a3c46ae7fb_tuple", mod_consts.const_tuple_a416a9db6e94a06322e945a3c46ae7fb_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_tuple_a416a9db6e94a06322e945a3c46ae7fb_tuple) && "mod_consts.const_tuple_a416a9db6e94a06322e945a3c46ae7fb_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_submodule_search_locations", mod_consts.const_str_plain_submodule_search_locations);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations) && "mod_consts.const_str_plain_submodule_search_locations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urllib3", mod_consts.const_str_plain_urllib3);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_urllib3) && "mod_consts.const_str_plain_urllib3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exceptions", mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions) && "mod_consts.const_str_plain_exceptions");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_RequestsDependencyWarning_tuple", mod_consts.const_tuple_str_plain_RequestsDependencyWarning_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RequestsDependencyWarning_tuple) && "mod_consts.const_tuple_str_plain_RequestsDependencyWarning_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_charset_normalizer", mod_consts.const_str_plain_charset_normalizer);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_charset_normalizer) && "mod_consts.const_str_plain_charset_normalizer");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___version___tuple", mod_consts.const_tuple_str_plain___version___tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___version___tuple) && "mod_consts.const_tuple_str_plain___version___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___version__", mod_consts.const_str_plain___version__);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain___version__) && "mod_consts.const_str_plain___version__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_charset_normalizer_version", mod_consts.const_str_plain_charset_normalizer_version);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_charset_normalizer_version) && "mod_consts.const_str_plain_charset_normalizer_version");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chardet", mod_consts.const_str_plain_chardet);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_chardet) && "mod_consts.const_str_plain_chardet");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chardet_version", mod_consts.const_str_plain_chardet_version);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_chardet_version) && "mod_consts.const_str_plain_chardet_version");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_d9d31783b5fc3f2884bc1dff52d9f2e0", mod_consts.const_dict_d9d31783b5fc3f2884bc1dff52d9f2e0);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_dict_d9d31783b5fc3f2884bc1dff52d9f2e0) && "mod_consts.const_dict_d9d31783b5fc3f2884bc1dff52d9f2e0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_check_compatibility", mod_consts.const_str_plain_check_compatibility);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_check_compatibility) && "mod_consts.const_str_plain_check_compatibility");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_d243f6ead3f25bc70ec57ec83312cea2", mod_consts.const_dict_d243f6ead3f25bc70ec57ec83312cea2);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_dict_d243f6ead3f25bc70ec57ec83312cea2) && "mod_consts.const_dict_d243f6ead3f25bc70ec57ec83312cea2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__check_cryptography", mod_consts.const_str_plain__check_cryptography);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain__check_cryptography) && "mod_consts.const_str_plain__check_cryptography");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_AssertionError_type_ValueError_tuple", mod_consts.const_tuple_type_AssertionError_type_ValueError_tuple);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_type_AssertionError_type_ValueError_tuple) && "mod_consts.const_tuple_type_AssertionError_type_ValueError_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f59a1fd8c34066a97517616d5a4a30a1", mod_consts.const_str_digest_f59a1fd8c34066a97517616d5a4a30a1);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_f59a1fd8c34066a97517616d5a4a30a1) && "mod_consts.const_str_digest_f59a1fd8c34066a97517616d5a4a30a1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_590bb48b0cf5729b9c8375f12cac6fe4", mod_consts.const_str_digest_590bb48b0cf5729b9c8375f12cac6fe4);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_590bb48b0cf5729b9c8375f12cac6fe4) && "mod_consts.const_str_digest_590bb48b0cf5729b9c8375f12cac6fe4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_183fe2c6c4636ec15f5d0b742b1a6977", mod_consts.const_str_digest_183fe2c6c4636ec15f5d0b742b1a6977);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_183fe2c6c4636ec15f5d0b742b1a6977) && "mod_consts.const_str_digest_183fe2c6c4636ec15f5d0b742b1a6977");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75a89df3fdaa66cc36bcf68a6abbada4", mod_consts.const_str_digest_75a89df3fdaa66cc36bcf68a6abbada4);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_75a89df3fdaa66cc36bcf68a6abbada4) && "mod_consts.const_str_digest_75a89df3fdaa66cc36bcf68a6abbada4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ssl", mod_consts.const_str_plain_ssl);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_ssl) && "mod_consts.const_str_plain_ssl");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HAS_SNI", mod_consts.const_str_plain_HAS_SNI);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_HAS_SNI) && "mod_consts.const_str_plain_HAS_SNI");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e03852224018ed217937e454110a99e9", mod_consts.const_str_digest_e03852224018ed217937e454110a99e9);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_e03852224018ed217937e454110a99e9) && "mod_consts.const_str_digest_e03852224018ed217937e454110a99e9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_pyopenssl_tuple", mod_consts.const_tuple_str_plain_pyopenssl_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pyopenssl_tuple) && "mod_consts.const_tuple_str_plain_pyopenssl_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pyopenssl", mod_consts.const_str_plain_pyopenssl);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_pyopenssl) && "mod_consts.const_str_plain_pyopenssl");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_inject_into_urllib3", mod_consts.const_str_plain_inject_into_urllib3);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_inject_into_urllib3) && "mod_consts.const_str_plain_inject_into_urllib3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography", mod_consts.const_str_plain_cryptography);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography) && "mod_consts.const_str_plain_cryptography");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography_version", mod_consts.const_str_plain_cryptography_version);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography_version) && "mod_consts.const_str_plain_cryptography_version");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c8562bbff9d721153deb2fdd066393d0", mod_consts.const_str_digest_c8562bbff9d721153deb2fdd066393d0);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_c8562bbff9d721153deb2fdd066393d0) && "mod_consts.const_str_digest_c8562bbff9d721153deb2fdd066393d0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_DependencyWarning_tuple", mod_consts.const_tuple_str_plain_DependencyWarning_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DependencyWarning_tuple) && "mod_consts.const_tuple_str_plain_DependencyWarning_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DependencyWarning", mod_consts.const_str_plain_DependencyWarning);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_DependencyWarning) && "mod_consts.const_str_plain_DependencyWarning");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_simplefilter", mod_consts.const_str_plain_simplefilter);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_simplefilter) && "mod_consts.const_str_plain_simplefilter");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ignore", mod_consts.const_str_plain_ignore);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_ignore) && "mod_consts.const_str_plain_ignore");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_logging", mod_consts.const_str_plain_logging);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging) && "mod_consts.const_str_plain_logging");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_NullHandler_tuple", mod_consts.const_tuple_str_plain_NullHandler_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_NullHandler_tuple) && "mod_consts.const_tuple_str_plain_NullHandler_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NullHandler", mod_consts.const_str_plain_NullHandler);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_NullHandler) && "mod_consts.const_str_plain_NullHandler");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_packages_str_plain_utils_tuple", mod_consts.const_tuple_str_plain_packages_str_plain_utils_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_packages_str_plain_utils_tuple) && "mod_consts.const_tuple_str_plain_packages_str_plain_utils_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_packages", mod_consts.const_str_plain_packages);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_packages) && "mod_consts.const_str_plain_packages");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_utils", mod_consts.const_str_plain_utils);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_utils) && "mod_consts.const_str_plain_utils");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_dce6d8c4b19e6db888108f9460babd77_tuple", mod_consts.const_tuple_dce6d8c4b19e6db888108f9460babd77_tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_dce6d8c4b19e6db888108f9460babd77_tuple) && "mod_consts.const_tuple_dce6d8c4b19e6db888108f9460babd77_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___author__", mod_consts.const_str_plain___author__);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain___author__) && "mod_consts.const_str_plain___author__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___author_email__", mod_consts.const_str_plain___author_email__);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain___author_email__) && "mod_consts.const_str_plain___author_email__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___build__", mod_consts.const_str_plain___build__);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain___build__) && "mod_consts.const_str_plain___build__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___cake__", mod_consts.const_str_plain___cake__);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain___cake__) && "mod_consts.const_str_plain___cake__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___copyright__", mod_consts.const_str_plain___copyright__);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain___copyright__) && "mod_consts.const_str_plain___copyright__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___description__", mod_consts.const_str_plain___description__);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain___description__) && "mod_consts.const_str_plain___description__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___license__", mod_consts.const_str_plain___license__);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain___license__) && "mod_consts.const_str_plain___license__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___title__", mod_consts.const_str_plain___title__);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain___title__) && "mod_consts.const_str_plain___title__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___url__", mod_consts.const_str_plain___url__);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain___url__) && "mod_consts.const_str_plain___url__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_api", mod_consts.const_str_plain_api);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_api) && "mod_consts.const_str_plain_api");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_0d575ffb24b4bdc6f5339eb63c328111_tuple", mod_consts.const_tuple_0d575ffb24b4bdc6f5339eb63c328111_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_0d575ffb24b4bdc6f5339eb63c328111_tuple) && "mod_consts.const_tuple_0d575ffb24b4bdc6f5339eb63c328111_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_delete", mod_consts.const_str_plain_delete);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_delete) && "mod_consts.const_str_plain_delete");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_head", mod_consts.const_str_plain_head);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_head) && "mod_consts.const_str_plain_head");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_options", mod_consts.const_str_plain_options);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_options) && "mod_consts.const_str_plain_options");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_patch", mod_consts.const_str_plain_patch);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_patch) && "mod_consts.const_str_plain_patch");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_post", mod_consts.const_str_plain_post);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_post) && "mod_consts.const_str_plain_post");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_put", mod_consts.const_str_plain_put);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_put) && "mod_consts.const_str_plain_put");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_request", mod_consts.const_str_plain_request);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_request) && "mod_consts.const_str_plain_request");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_8dfa0d60324b6aad72b3fc51362981fd_tuple", mod_consts.const_tuple_8dfa0d60324b6aad72b3fc51362981fd_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_8dfa0d60324b6aad72b3fc51362981fd_tuple) && "mod_consts.const_tuple_8dfa0d60324b6aad72b3fc51362981fd_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ConnectionError", mod_consts.const_str_plain_ConnectionError);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionError) && "mod_consts.const_str_plain_ConnectionError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ConnectTimeout", mod_consts.const_str_plain_ConnectTimeout);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectTimeout) && "mod_consts.const_str_plain_ConnectTimeout");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FileModeWarning", mod_consts.const_str_plain_FileModeWarning);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileModeWarning) && "mod_consts.const_str_plain_FileModeWarning");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTPError", mod_consts.const_str_plain_HTTPError);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPError) && "mod_consts.const_str_plain_HTTPError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JSONDecodeError", mod_consts.const_str_plain_JSONDecodeError);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_JSONDecodeError) && "mod_consts.const_str_plain_JSONDecodeError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ReadTimeout", mod_consts.const_str_plain_ReadTimeout);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReadTimeout) && "mod_consts.const_str_plain_ReadTimeout");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RequestException", mod_consts.const_str_plain_RequestException);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_RequestException) && "mod_consts.const_str_plain_RequestException");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Timeout", mod_consts.const_str_plain_Timeout);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_Timeout) && "mod_consts.const_str_plain_Timeout");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TooManyRedirects", mod_consts.const_str_plain_TooManyRedirects);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_TooManyRedirects) && "mod_consts.const_str_plain_TooManyRedirects");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_URLRequired", mod_consts.const_str_plain_URLRequired);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_URLRequired) && "mod_consts.const_str_plain_URLRequired");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_models", mod_consts.const_str_plain_models);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_models) && "mod_consts.const_str_plain_models");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_590af5e76c8b6446171c425be27e9d9d_tuple", mod_consts.const_tuple_590af5e76c8b6446171c425be27e9d9d_tuple);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_tuple_590af5e76c8b6446171c425be27e9d9d_tuple) && "mod_consts.const_tuple_590af5e76c8b6446171c425be27e9d9d_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PreparedRequest", mod_consts.const_str_plain_PreparedRequest);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_PreparedRequest) && "mod_consts.const_str_plain_PreparedRequest");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Request", mod_consts.const_str_plain_Request);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_Request) && "mod_consts.const_str_plain_Request");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Response", mod_consts.const_str_plain_Response);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_Response) && "mod_consts.const_str_plain_Response");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sessions", mod_consts.const_str_plain_sessions);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_sessions) && "mod_consts.const_str_plain_sessions");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Session_str_plain_session_tuple", mod_consts.const_tuple_str_plain_Session_str_plain_session_tuple);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Session_str_plain_session_tuple) && "mod_consts.const_tuple_str_plain_Session_str_plain_session_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Session", mod_consts.const_str_plain_Session);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_Session) && "mod_consts.const_str_plain_Session");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_session", mod_consts.const_str_plain_session);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_session) && "mod_consts.const_str_plain_session");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_status_codes", mod_consts.const_str_plain_status_codes);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_status_codes) && "mod_consts.const_str_plain_status_codes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_codes_tuple", mod_consts.const_tuple_str_plain_codes_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_codes_tuple) && "mod_consts.const_tuple_str_plain_codes_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_codes", mod_consts.const_str_plain_codes);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_codes) && "mod_consts.const_str_plain_codes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_ec4d51d78383943c91147afa70a2b0a7_tuple", mod_consts.const_tuple_ec4d51d78383943c91147afa70a2b0a7_tuple);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_tuple_ec4d51d78383943c91147afa70a2b0a7_tuple) && "mod_consts.const_tuple_ec4d51d78383943c91147afa70a2b0a7_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getLogger", mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger) && "mod_consts.const_str_plain_getLogger");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_requests_tuple", mod_consts.const_tuple_str_plain_requests_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_requests_tuple) && "mod_consts.const_tuple_str_plain_requests_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_addHandler", mod_consts.const_str_plain_addHandler);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_addHandler) && "mod_consts.const_str_plain_addHandler");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_default", mod_consts.const_str_plain_default);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_default) && "mod_consts.const_str_plain_default");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_true_tuple", mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple) && "mod_consts.const_tuple_true_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_append_tuple", mod_consts.const_tuple_str_plain_append_tuple);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_append_tuple) && "mod_consts.const_tuple_str_plain_append_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_680a2bcc46f35afe4fc8cda5cf729e43", mod_consts.const_str_digest_680a2bcc46f35afe4fc8cda5cf729e43);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_digest_680a2bcc46f35afe4fc8cda5cf729e43) && "mod_consts.const_str_digest_680a2bcc46f35afe4fc8cda5cf729e43");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d0e74712839492f5fe2c99311f5308c8", mod_consts.const_str_digest_d0e74712839492f5fe2c99311f5308c8);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_d0e74712839492f5fe2c99311f5308c8) && "mod_consts.const_str_digest_d0e74712839492f5fe2c99311f5308c8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_004c43e5a1918a5eb3ef7282e3958835_tuple", mod_consts.const_tuple_004c43e5a1918a5eb3ef7282e3958835_tuple);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_tuple_004c43e5a1918a5eb3ef7282e3958835_tuple) && "mod_consts.const_tuple_004c43e5a1918a5eb3ef7282e3958835_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_27a94475ef6f16d49c32ea152b31caeb_tuple", mod_consts.const_tuple_27a94475ef6f16d49c32ea152b31caeb_tuple);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_tuple_27a94475ef6f16d49c32ea152b31caeb_tuple) && "mod_consts.const_tuple_27a94475ef6f16d49c32ea152b31caeb_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 16
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
static PyObject *module_var_accessor_requests$DependencyWarning(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_DependencyWarning);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DependencyWarning);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DependencyWarning, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DependencyWarning);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DependencyWarning, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_DependencyWarning);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_DependencyWarning);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DependencyWarning);
    }

    return result;
}

static PyObject *module_var_accessor_requests$FileModeWarning(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_FileModeWarning);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FileModeWarning);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FileModeWarning, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FileModeWarning);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FileModeWarning, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_FileModeWarning);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_FileModeWarning);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FileModeWarning);
    }

    return result;
}

static PyObject *module_var_accessor_requests$NullHandler(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_NullHandler);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NullHandler);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NullHandler, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NullHandler);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NullHandler, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_NullHandler);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_NullHandler);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_NullHandler);
    }

    return result;
}

static PyObject *module_var_accessor_requests$RequestsDependencyWarning(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestsDependencyWarning);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RequestsDependencyWarning);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RequestsDependencyWarning, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RequestsDependencyWarning);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RequestsDependencyWarning, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestsDependencyWarning);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestsDependencyWarning);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestsDependencyWarning);
    }

    return result;
}

static PyObject *module_var_accessor_requests$__path__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)const_str_plain___path__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)const_str_plain___path__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)const_str_plain___path__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___path__);
    }

    return result;
}

static PyObject *module_var_accessor_requests$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_requests$_check_cryptography(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain__check_cryptography);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__check_cryptography);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__check_cryptography, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__check_cryptography);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__check_cryptography, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain__check_cryptography);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain__check_cryptography);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__check_cryptography);
    }

    return result;
}

static PyObject *module_var_accessor_requests$chardet_version(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_chardet_version);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_chardet_version);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_chardet_version, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_chardet_version);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_chardet_version, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_chardet_version);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_chardet_version);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_chardet_version);
    }

    return result;
}

static PyObject *module_var_accessor_requests$charset_normalizer_version(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_charset_normalizer_version);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_charset_normalizer_version);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_charset_normalizer_version, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_charset_normalizer_version);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_charset_normalizer_version, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_charset_normalizer_version);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_charset_normalizer_version);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_charset_normalizer_version);
    }

    return result;
}

static PyObject *module_var_accessor_requests$check_compatibility(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_check_compatibility);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_check_compatibility);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_check_compatibility, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_check_compatibility);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_check_compatibility, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_check_compatibility);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_check_compatibility);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_check_compatibility);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cryptography_version(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_version);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cryptography_version);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cryptography_version, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cryptography_version);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cryptography_version, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_version);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_version);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_version);
    }

    return result;
}

static PyObject *module_var_accessor_requests$logging(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}

static PyObject *module_var_accessor_requests$pyopenssl(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_pyopenssl);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_pyopenssl);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_pyopenssl, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_pyopenssl);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_pyopenssl, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_pyopenssl);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_pyopenssl);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_pyopenssl);
    }

    return result;
}

static PyObject *module_var_accessor_requests$ssl(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_ssl);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_ssl);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_ssl);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ssl);
    }

    return result;
}

static PyObject *module_var_accessor_requests$urllib3(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib3);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urllib3);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urllib3, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urllib3);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urllib3, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib3);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib3);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib3);
    }

    return result;
}

static PyObject *module_var_accessor_requests$warnings(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_4876c7bf84a6cfb0cff68f0b0a56b2ad;
static PyCodeObject *code_objects_f79a5790aa0cd2de8762239fc860c522;
static PyCodeObject *code_objects_710cdb0ed440959341330b108006bbb3;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_680a2bcc46f35afe4fc8cda5cf729e43); CHECK_OBJECT(module_filename_obj);
code_objects_4876c7bf84a6cfb0cff68f0b0a56b2ad = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_d0e74712839492f5fe2c99311f5308c8, mod_consts.const_str_digest_d0e74712839492f5fe2c99311f5308c8, NULL, NULL, 0, 0, 0);
code_objects_f79a5790aa0cd2de8762239fc860c522 = MAKE_CODE_OBJECT(module_filename_obj, 99, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__check_cryptography, mod_consts.const_str_plain__check_cryptography, mod_consts.const_tuple_004c43e5a1918a5eb3ef7282e3958835_tuple, NULL, 1, 0, 0);
code_objects_710cdb0ed440959341330b108006bbb3 = MAKE_CODE_OBJECT(module_filename_obj, 60, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_check_compatibility, mod_consts.const_str_plain_check_compatibility, mod_consts.const_tuple_27a94475ef6f16d49c32ea152b31caeb_tuple, NULL, 3, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_requests$$$function__1_check_compatibility(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$$$function__2__check_cryptography(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_requests$$$function__1_check_compatibility(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_urllib3_version = python_pars[0];
PyObject *par_chardet_version = python_pars[1];
PyObject *par_charset_normalizer_version = python_pars[2];
PyObject *var_urllib3_version_list = NULL;
PyObject *var_major = NULL;
PyObject *var_minor = NULL;
PyObject *var_patch = NULL;
PyObject *tmp_comparison_chain_1__comparison_result = NULL;
PyObject *tmp_comparison_chain_1__operand_2 = NULL;
PyObject *tmp_comparison_chain_2__comparison_result = NULL;
PyObject *tmp_comparison_chain_2__operand_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__element_3 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
PyObject *tmp_tuple_unpack_3__element_1 = NULL;
PyObject *tmp_tuple_unpack_3__element_2 = NULL;
PyObject *tmp_tuple_unpack_3__element_3 = NULL;
PyObject *tmp_tuple_unpack_3__source_iter = NULL;
PyObject *tmp_tuple_unpack_4__element_1 = NULL;
PyObject *tmp_tuple_unpack_4__element_2 = NULL;
PyObject *tmp_tuple_unpack_4__element_3 = NULL;
PyObject *tmp_tuple_unpack_4__source_iter = NULL;
PyObject *tmp_tuple_unpack_5__element_1 = NULL;
PyObject *tmp_tuple_unpack_5__element_2 = NULL;
PyObject *tmp_tuple_unpack_5__element_3 = NULL;
PyObject *tmp_tuple_unpack_5__source_iter = NULL;
PyObject *tmp_tuple_unpack_6__element_1 = NULL;
PyObject *tmp_tuple_unpack_6__element_2 = NULL;
PyObject *tmp_tuple_unpack_6__element_3 = NULL;
PyObject *tmp_tuple_unpack_6__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_requests$$$function__1_check_compatibility;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
static struct Nuitka_FrameObject *cache_frame_frame_requests$$$function__1_check_compatibility = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$$$function__1_check_compatibility)) {
    Py_XDECREF(cache_frame_frame_requests$$$function__1_check_compatibility);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$$$function__1_check_compatibility == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$$$function__1_check_compatibility = MAKE_FUNCTION_FRAME(tstate, code_objects_710cdb0ed440959341330b108006bbb3, module_requests, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$$$function__1_check_compatibility->m_type_description == NULL);
frame_frame_requests$$$function__1_check_compatibility = cache_frame_frame_requests$$$function__1_check_compatibility;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$$$function__1_check_compatibility);
assert(Py_REFCNT(frame_frame_requests$$$function__1_check_compatibility) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_urllib3_version);
tmp_expression_value_2 = par_urllib3_version;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_split);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$$$function__1_check_compatibility->m_frame.f_lineno = 65;
tmp_expression_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_dot_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_slice_none_int_pos_3_none;
tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_urllib3_version_list;
    var_urllib3_version_list = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_urllib3_version_list);
tmp_cmp_expr_left_1 = var_urllib3_version_list;
tmp_cmp_expr_right_1 = MAKE_LIST1(tstate, mod_consts.const_str_plain_dev);
tmp_operand_value_1 = RICH_COMPARE_NE_OBJECT_OBJECT_LIST(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooooooo";
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
frame_frame_requests$$$function__1_check_compatibility->m_frame.f_lineno = 66;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 66;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
nuitka_digit tmp_cmp_expr_right_2;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var_urllib3_version_list);
tmp_len_arg_1 = var_urllib3_version_list;
tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = 2;
tmp_condition_result_2 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var_urllib3_version_list);
tmp_expression_value_3 = var_urllib3_version_list;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_append);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$$$function__1_check_compatibility->m_frame.f_lineno = 70;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_0_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_2:;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_urllib3_version_list);
tmp_iter_arg_1 = var_urllib3_version_list;
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_3;
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;
type_description_1 = "ooooooo";
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
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;
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
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_major;
    var_major = tmp_assign_source_6;
    Py_INCREF(var_major);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_minor;
    var_minor = tmp_assign_source_7;
    Py_INCREF(var_minor);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;
{
    PyObject *old = var_patch;
    var_patch = tmp_assign_source_8;
    Py_INCREF(var_patch);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iter_arg_2;
PyObject *tmp_tuple_element_1;
PyObject *tmp_int_arg_1;
CHECK_OBJECT(var_major);
tmp_int_arg_1 = var_major;
tmp_tuple_element_1 = PyNumber_Int(tmp_int_arg_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
tmp_iter_arg_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_int_arg_2;
PyObject *tmp_int_arg_3;
PyTuple_SET_ITEM(tmp_iter_arg_2, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_minor);
tmp_int_arg_2 = var_minor;
tmp_tuple_element_1 = PyNumber_Int(tmp_int_arg_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_iter_arg_2, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_patch);
tmp_int_arg_3 = var_patch;
tmp_tuple_element_1 = PyNumber_Int(tmp_int_arg_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_iter_arg_2, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_iter_arg_2);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_9 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
assert(!(tmp_assign_source_9 == NULL));
{
    PyObject *old = tmp_tuple_unpack_2__source_iter;
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_10 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 0, 3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 74;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_1;
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_11 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 1, 3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 74;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_2;
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_12 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 2, 3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 74;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_3;
    tmp_tuple_unpack_2__element_3 = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 74;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_3);
tmp_tuple_unpack_2__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_13 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = var_major;
    assert(old != NULL);
    var_major = tmp_assign_source_13;
    Py_INCREF(var_major);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_14 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var_minor;
    assert(old != NULL);
    var_minor = tmp_assign_source_14;
    Py_INCREF(var_minor);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
tmp_assign_source_15 = tmp_tuple_unpack_2__element_3;
{
    PyObject *old = var_patch;
    assert(old != NULL);
    var_patch = tmp_assign_source_15;
    Py_INCREF(var_patch);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_3);
tmp_tuple_unpack_2__element_3 = NULL;

{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_major);
tmp_cmp_expr_left_3 = var_major;
tmp_cmp_expr_right_3 = const_int_pos_1;
tmp_operand_value_2 = RICH_COMPARE_GE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_2;
frame_frame_requests$$$function__1_check_compatibility->m_frame.f_lineno = 76;
tmp_raise_type_2 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 76;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_major);
tmp_cmp_expr_left_4 = var_major;
tmp_cmp_expr_right_4 = const_int_pos_1;
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_3;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_minor);
tmp_cmp_expr_left_5 = var_minor;
tmp_cmp_expr_right_5 = mod_consts.const_int_pos_21;
tmp_operand_value_3 = RICH_COMPARE_GE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
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
PyObject *tmp_raise_type_3;
frame_frame_requests$$$function__1_check_compatibility->m_frame.f_lineno = 78;
tmp_raise_type_3 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 78;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
goto frame_exception_exit_1;
}
branch_no_5:;
branch_no_4:;
{
nuitka_bool tmp_condition_result_6;
int tmp_truth_name_1;
CHECK_OBJECT(par_chardet_version);
tmp_truth_name_1 = CHECK_IF_TRUE(par_chardet_version);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooooooo";
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
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_iter_arg_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_chardet_version);
tmp_expression_value_5 = par_chardet_version;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_split);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooooooo";
    goto try_except_handler_6;
}
frame_frame_requests$$$function__1_check_compatibility->m_frame.f_lineno = 82;
tmp_expression_value_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_dot_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooooooo";
    goto try_except_handler_6;
}
tmp_subscript_value_2 = mod_consts.const_slice_none_int_pos_3_none;
tmp_iter_arg_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooooooo";
    goto try_except_handler_6;
}
tmp_assign_source_16 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_3__source_iter;
    tmp_tuple_unpack_3__source_iter = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_unpack_7;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_17 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 0, 3);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 82;
type_description_1 = "ooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_1;
    tmp_tuple_unpack_3__element_1 = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_unpack_8;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_8 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_18 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_8, 1, 3);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 82;
type_description_1 = "ooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_2;
    tmp_tuple_unpack_3__element_2 = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_unpack_9;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_9 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_19 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_9, 2, 3);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 82;
type_description_1 = "ooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_3;
    tmp_tuple_unpack_3__element_3 = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_3;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_3, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 82;
type_description_1 = "ooooooo";
    goto try_except_handler_7;
}
}
goto try_end_5;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
try_end_5:;
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_3__element_3);
tmp_tuple_unpack_3__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
{
PyObject *tmp_assign_source_20;
CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
tmp_assign_source_20 = tmp_tuple_unpack_3__element_1;
{
    PyObject *old = var_major;
    assert(old != NULL);
    var_major = tmp_assign_source_20;
    Py_INCREF(var_major);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;

{
PyObject *tmp_assign_source_21;
CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
tmp_assign_source_21 = tmp_tuple_unpack_3__element_2;
{
    PyObject *old = var_minor;
    assert(old != NULL);
    var_minor = tmp_assign_source_21;
    Py_INCREF(var_minor);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;

{
PyObject *tmp_assign_source_22;
CHECK_OBJECT(tmp_tuple_unpack_3__element_3);
tmp_assign_source_22 = tmp_tuple_unpack_3__element_3;
{
    PyObject *old = var_patch;
    assert(old != NULL);
    var_patch = tmp_assign_source_22;
    Py_INCREF(var_patch);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_3);
tmp_tuple_unpack_3__element_3 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_23;
PyObject *tmp_iter_arg_4;
PyObject *tmp_tuple_element_2;
PyObject *tmp_int_arg_4;
CHECK_OBJECT(var_major);
tmp_int_arg_4 = var_major;
tmp_tuple_element_2 = PyNumber_Int(tmp_int_arg_4);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}
tmp_iter_arg_4 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_int_arg_5;
PyObject *tmp_int_arg_6;
PyTuple_SET_ITEM(tmp_iter_arg_4, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_minor);
tmp_int_arg_5 = var_minor;
tmp_tuple_element_2 = PyNumber_Int(tmp_int_arg_5);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_iter_arg_4, 1, tmp_tuple_element_2);
CHECK_OBJECT(var_patch);
tmp_int_arg_6 = var_patch;
tmp_tuple_element_2 = PyNumber_Int(tmp_int_arg_6);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_iter_arg_4, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_iter_arg_4);
goto try_except_handler_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_assign_source_23 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_4);
CHECK_OBJECT(tmp_iter_arg_4);
Py_DECREF(tmp_iter_arg_4);
assert(!(tmp_assign_source_23 == NULL));
{
    PyObject *old = tmp_tuple_unpack_4__source_iter;
    tmp_tuple_unpack_4__source_iter = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_unpack_10;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_10 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_24 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_10, 0, 3);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;
type_description_1 = "ooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_tuple_unpack_4__element_1;
    tmp_tuple_unpack_4__element_1 = tmp_assign_source_24;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_unpack_11;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_11 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_25 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_11, 1, 3);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;
type_description_1 = "ooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_tuple_unpack_4__element_2;
    tmp_tuple_unpack_4__element_2 = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_unpack_12;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_12 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_26 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_12, 2, 3);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;
type_description_1 = "ooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_tuple_unpack_4__element_3;
    tmp_tuple_unpack_4__element_3 = tmp_assign_source_26;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_4;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_4, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;
type_description_1 = "ooooooo";
    goto try_except_handler_9;
}
}
goto try_end_7;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
Py_DECREF(tmp_tuple_unpack_4__source_iter);
tmp_tuple_unpack_4__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_8;
// End of try:
try_end_7:;
goto try_end_8;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_4__element_1);
tmp_tuple_unpack_4__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_4__element_2);
tmp_tuple_unpack_4__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_4__element_3);
tmp_tuple_unpack_4__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
Py_DECREF(tmp_tuple_unpack_4__source_iter);
tmp_tuple_unpack_4__source_iter = NULL;
{
PyObject *tmp_assign_source_27;
CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
tmp_assign_source_27 = tmp_tuple_unpack_4__element_1;
{
    PyObject *old = var_major;
    assert(old != NULL);
    var_major = tmp_assign_source_27;
    Py_INCREF(var_major);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_4__element_1);
tmp_tuple_unpack_4__element_1 = NULL;

{
PyObject *tmp_assign_source_28;
CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
tmp_assign_source_28 = tmp_tuple_unpack_4__element_2;
{
    PyObject *old = var_minor;
    assert(old != NULL);
    var_minor = tmp_assign_source_28;
    Py_INCREF(var_minor);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_4__element_2);
tmp_tuple_unpack_4__element_2 = NULL;

{
PyObject *tmp_assign_source_29;
CHECK_OBJECT(tmp_tuple_unpack_4__element_3);
tmp_assign_source_29 = tmp_tuple_unpack_4__element_3;
{
    PyObject *old = var_patch;
    assert(old != NULL);
    var_patch = tmp_assign_source_29;
    Py_INCREF(var_patch);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_4__element_3);
tmp_tuple_unpack_4__element_3 = NULL;

{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_4;
{
PyObject *tmp_assign_source_30;
PyObject *tmp_tuple_element_3;
CHECK_OBJECT(var_major);
tmp_tuple_element_3 = var_major;
tmp_assign_source_30 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_assign_source_30, 0, tmp_tuple_element_3);
CHECK_OBJECT(var_minor);
tmp_tuple_element_3 = var_minor;
PyTuple_SET_ITEM0(tmp_assign_source_30, 1, tmp_tuple_element_3);
CHECK_OBJECT(var_patch);
tmp_tuple_element_3 = var_patch;
PyTuple_SET_ITEM0(tmp_assign_source_30, 2, tmp_tuple_element_3);
{
    PyObject *old = tmp_comparison_chain_1__operand_2;
    tmp_comparison_chain_1__operand_2 = tmp_assign_source_30;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_31;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
tmp_cmp_expr_left_6 = mod_consts.const_tuple_int_pos_3_int_0_int_pos_2_tuple;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_right_6 = tmp_comparison_chain_1__operand_2;
tmp_assign_source_31 = RICH_COMPARE_LE_OBJECT_TUPLE_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = tmp_comparison_chain_1__comparison_result;
    tmp_comparison_chain_1__comparison_result = tmp_assign_source_31;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_8;
PyObject *tmp_operand_value_5;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_5 = tmp_comparison_chain_1__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooooo";
    goto try_except_handler_10;
}
tmp_condition_result_8 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_4 = tmp_comparison_chain_1__comparison_result;
Py_INCREF(tmp_operand_value_4);
goto try_return_handler_10;
branch_no_8:;
{
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_left_7 = tmp_comparison_chain_1__operand_2;
tmp_cmp_expr_right_7 = mod_consts.const_tuple_int_pos_8_int_0_int_0_tuple;
tmp_operand_value_4 = RICH_COMPARE_LT_OBJECT_TUPLE_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_operand_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooooo";
    goto try_except_handler_10;
}
goto try_return_handler_10;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
Py_DECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
Py_DECREF(tmp_comparison_chain_1__comparison_result);
tmp_comparison_chain_1__comparison_result = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
Py_DECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_1__comparison_result);
tmp_comparison_chain_1__comparison_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
CHECK_OBJECT(tmp_operand_value_4);
Py_DECREF(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_raise_type_4;
frame_frame_requests$$$function__1_check_compatibility->m_frame.f_lineno = 85;
tmp_raise_type_4 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 85;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
goto frame_exception_exit_1;
}
branch_no_7:;
goto branch_end_6;
branch_no_6:;
{
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_2;
CHECK_OBJECT(par_charset_normalizer_version);
tmp_truth_name_2 = CHECK_IF_TRUE(par_charset_normalizer_version);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
// Tried code:
{
PyObject *tmp_assign_source_32;
PyObject *tmp_iter_arg_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(par_charset_normalizer_version);
tmp_expression_value_7 = par_charset_normalizer_version;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_split);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooooooo";
    goto try_except_handler_11;
}
frame_frame_requests$$$function__1_check_compatibility->m_frame.f_lineno = 87;
tmp_expression_value_6 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_dot_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooooooo";
    goto try_except_handler_11;
}
tmp_subscript_value_3 = mod_consts.const_slice_none_int_pos_3_none;
tmp_iter_arg_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_iter_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooooooo";
    goto try_except_handler_11;
}
tmp_assign_source_32 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
CHECK_OBJECT(tmp_iter_arg_5);
Py_DECREF(tmp_iter_arg_5);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooooooo";
    goto try_except_handler_11;
}
{
    PyObject *old = tmp_tuple_unpack_5__source_iter;
    tmp_tuple_unpack_5__source_iter = tmp_assign_source_32;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_33;
PyObject *tmp_unpack_13;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
tmp_unpack_13 = tmp_tuple_unpack_5__source_iter;
tmp_assign_source_33 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_13, 0, 3);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;
type_description_1 = "ooooooo";
    goto try_except_handler_12;
}
{
    PyObject *old = tmp_tuple_unpack_5__element_1;
    tmp_tuple_unpack_5__element_1 = tmp_assign_source_33;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_unpack_14;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
tmp_unpack_14 = tmp_tuple_unpack_5__source_iter;
tmp_assign_source_34 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_14, 1, 3);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;
type_description_1 = "ooooooo";
    goto try_except_handler_12;
}
{
    PyObject *old = tmp_tuple_unpack_5__element_2;
    tmp_tuple_unpack_5__element_2 = tmp_assign_source_34;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_unpack_15;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
tmp_unpack_15 = tmp_tuple_unpack_5__source_iter;
tmp_assign_source_35 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_15, 2, 3);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;
type_description_1 = "ooooooo";
    goto try_except_handler_12;
}
{
    PyObject *old = tmp_tuple_unpack_5__element_3;
    tmp_tuple_unpack_5__element_3 = tmp_assign_source_35;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_5;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
tmp_iterator_name_5 = tmp_tuple_unpack_5__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_5, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;
type_description_1 = "ooooooo";
    goto try_except_handler_12;
}
}
goto try_end_9;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
Py_DECREF(tmp_tuple_unpack_5__source_iter);
tmp_tuple_unpack_5__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_11;
// End of try:
try_end_9:;
goto try_end_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_5__element_1);
tmp_tuple_unpack_5__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_5__element_2);
tmp_tuple_unpack_5__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_5__element_3);
tmp_tuple_unpack_5__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
Py_DECREF(tmp_tuple_unpack_5__source_iter);
tmp_tuple_unpack_5__source_iter = NULL;
{
PyObject *tmp_assign_source_36;
CHECK_OBJECT(tmp_tuple_unpack_5__element_1);
tmp_assign_source_36 = tmp_tuple_unpack_5__element_1;
{
    PyObject *old = var_major;
    assert(old != NULL);
    var_major = tmp_assign_source_36;
    Py_INCREF(var_major);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_5__element_1);
tmp_tuple_unpack_5__element_1 = NULL;

{
PyObject *tmp_assign_source_37;
CHECK_OBJECT(tmp_tuple_unpack_5__element_2);
tmp_assign_source_37 = tmp_tuple_unpack_5__element_2;
{
    PyObject *old = var_minor;
    assert(old != NULL);
    var_minor = tmp_assign_source_37;
    Py_INCREF(var_minor);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_5__element_2);
tmp_tuple_unpack_5__element_2 = NULL;

{
PyObject *tmp_assign_source_38;
CHECK_OBJECT(tmp_tuple_unpack_5__element_3);
tmp_assign_source_38 = tmp_tuple_unpack_5__element_3;
{
    PyObject *old = var_patch;
    assert(old != NULL);
    var_patch = tmp_assign_source_38;
    Py_INCREF(var_patch);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_5__element_3);
tmp_tuple_unpack_5__element_3 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_39;
PyObject *tmp_iter_arg_6;
PyObject *tmp_tuple_element_4;
PyObject *tmp_int_arg_7;
CHECK_OBJECT(var_major);
tmp_int_arg_7 = var_major;
tmp_tuple_element_4 = PyNumber_Int(tmp_int_arg_7);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooooooo";
    goto try_except_handler_13;
}
tmp_iter_arg_6 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_int_arg_8;
PyObject *tmp_int_arg_9;
PyTuple_SET_ITEM(tmp_iter_arg_6, 0, tmp_tuple_element_4);
CHECK_OBJECT(var_minor);
tmp_int_arg_8 = var_minor;
tmp_tuple_element_4 = PyNumber_Int(tmp_int_arg_8);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_iter_arg_6, 1, tmp_tuple_element_4);
CHECK_OBJECT(var_patch);
tmp_int_arg_9 = var_patch;
tmp_tuple_element_4 = PyNumber_Int(tmp_int_arg_9);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_iter_arg_6, 2, tmp_tuple_element_4);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_iter_arg_6);
goto try_except_handler_13;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_assign_source_39 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_6);
CHECK_OBJECT(tmp_iter_arg_6);
Py_DECREF(tmp_iter_arg_6);
assert(!(tmp_assign_source_39 == NULL));
{
    PyObject *old = tmp_tuple_unpack_6__source_iter;
    tmp_tuple_unpack_6__source_iter = tmp_assign_source_39;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_40;
PyObject *tmp_unpack_16;
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
tmp_unpack_16 = tmp_tuple_unpack_6__source_iter;
tmp_assign_source_40 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_16, 0, 3);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 88;
type_description_1 = "ooooooo";
    goto try_except_handler_14;
}
{
    PyObject *old = tmp_tuple_unpack_6__element_1;
    tmp_tuple_unpack_6__element_1 = tmp_assign_source_40;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_unpack_17;
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
tmp_unpack_17 = tmp_tuple_unpack_6__source_iter;
tmp_assign_source_41 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_17, 1, 3);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 88;
type_description_1 = "ooooooo";
    goto try_except_handler_14;
}
{
    PyObject *old = tmp_tuple_unpack_6__element_2;
    tmp_tuple_unpack_6__element_2 = tmp_assign_source_41;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_unpack_18;
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
tmp_unpack_18 = tmp_tuple_unpack_6__source_iter;
tmp_assign_source_42 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_18, 2, 3);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 88;
type_description_1 = "ooooooo";
    goto try_except_handler_14;
}
{
    PyObject *old = tmp_tuple_unpack_6__element_3;
    tmp_tuple_unpack_6__element_3 = tmp_assign_source_42;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_6;
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
tmp_iterator_name_6 = tmp_tuple_unpack_6__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_6, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 88;
type_description_1 = "ooooooo";
    goto try_except_handler_14;
}
}
goto try_end_11;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
Py_DECREF(tmp_tuple_unpack_6__source_iter);
tmp_tuple_unpack_6__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto try_except_handler_13;
// End of try:
try_end_11:;
goto try_end_12;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_6__element_1);
tmp_tuple_unpack_6__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_6__element_2);
tmp_tuple_unpack_6__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_6__element_3);
tmp_tuple_unpack_6__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto frame_exception_exit_1;
// End of try:
try_end_12:;
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
Py_DECREF(tmp_tuple_unpack_6__source_iter);
tmp_tuple_unpack_6__source_iter = NULL;
{
PyObject *tmp_assign_source_43;
CHECK_OBJECT(tmp_tuple_unpack_6__element_1);
tmp_assign_source_43 = tmp_tuple_unpack_6__element_1;
{
    PyObject *old = var_major;
    assert(old != NULL);
    var_major = tmp_assign_source_43;
    Py_INCREF(var_major);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_6__element_1);
tmp_tuple_unpack_6__element_1 = NULL;

{
PyObject *tmp_assign_source_44;
CHECK_OBJECT(tmp_tuple_unpack_6__element_2);
tmp_assign_source_44 = tmp_tuple_unpack_6__element_2;
{
    PyObject *old = var_minor;
    assert(old != NULL);
    var_minor = tmp_assign_source_44;
    Py_INCREF(var_minor);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_6__element_2);
tmp_tuple_unpack_6__element_2 = NULL;

{
PyObject *tmp_assign_source_45;
CHECK_OBJECT(tmp_tuple_unpack_6__element_3);
tmp_assign_source_45 = tmp_tuple_unpack_6__element_3;
{
    PyObject *old = var_patch;
    assert(old != NULL);
    var_patch = tmp_assign_source_45;
    Py_INCREF(var_patch);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_6__element_3);
tmp_tuple_unpack_6__element_3 = NULL;

{
bool tmp_condition_result_10;
PyObject *tmp_operand_value_6;
{
PyObject *tmp_assign_source_46;
PyObject *tmp_tuple_element_5;
CHECK_OBJECT(var_major);
tmp_tuple_element_5 = var_major;
tmp_assign_source_46 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_assign_source_46, 0, tmp_tuple_element_5);
CHECK_OBJECT(var_minor);
tmp_tuple_element_5 = var_minor;
PyTuple_SET_ITEM0(tmp_assign_source_46, 1, tmp_tuple_element_5);
CHECK_OBJECT(var_patch);
tmp_tuple_element_5 = var_patch;
PyTuple_SET_ITEM0(tmp_assign_source_46, 2, tmp_tuple_element_5);
{
    PyObject *old = tmp_comparison_chain_2__operand_2;
    tmp_comparison_chain_2__operand_2 = tmp_assign_source_46;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_47;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
tmp_cmp_expr_left_8 = mod_consts.const_tuple_int_pos_2_int_0_int_0_tuple;
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
tmp_cmp_expr_right_8 = tmp_comparison_chain_2__operand_2;
tmp_assign_source_47 = RICH_COMPARE_LE_OBJECT_TUPLE_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooooooo";
    goto try_except_handler_15;
}
{
    PyObject *old = tmp_comparison_chain_2__comparison_result;
    tmp_comparison_chain_2__comparison_result = tmp_assign_source_47;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_7;
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
tmp_operand_value_7 = tmp_comparison_chain_2__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooooooo";
    goto try_except_handler_15;
}
tmp_condition_result_11 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
tmp_operand_value_6 = tmp_comparison_chain_2__comparison_result;
Py_INCREF(tmp_operand_value_6);
goto try_return_handler_15;
branch_no_11:;
{
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
tmp_cmp_expr_left_9 = tmp_comparison_chain_2__operand_2;
tmp_cmp_expr_right_9 = mod_consts.const_tuple_int_pos_4_int_0_int_0_tuple;
tmp_operand_value_6 = RICH_COMPARE_LT_OBJECT_TUPLE_TUPLE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (tmp_operand_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooooooo";
    goto try_except_handler_15;
}
goto try_return_handler_15;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
Py_DECREF(tmp_comparison_chain_2__operand_2);
tmp_comparison_chain_2__operand_2 = NULL;
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
Py_DECREF(tmp_comparison_chain_2__comparison_result);
tmp_comparison_chain_2__comparison_result = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
Py_DECREF(tmp_comparison_chain_2__operand_2);
tmp_comparison_chain_2__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_2__comparison_result);
tmp_comparison_chain_2__comparison_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
CHECK_OBJECT(tmp_operand_value_6);
Py_DECREF(tmp_operand_value_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_10 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_raise_type_5;
frame_frame_requests$$$function__1_check_compatibility->m_frame.f_lineno = 90;
tmp_raise_type_5 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 90;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
goto frame_exception_exit_1;
}
branch_no_10:;
goto branch_end_9;
branch_no_9:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_8 = module_var_accessor_requests$warnings(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 92;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_warn);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_ad7604b1d411a1adfbf40e20d244cba5;
tmp_args_element_value_2 = module_var_accessor_requests$RequestsDependencyWarning(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RequestsDependencyWarning);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 95;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$$$function__1_check_compatibility->m_frame.f_lineno = 92;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_end_9:;
branch_end_6:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$$$function__1_check_compatibility, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$$$function__1_check_compatibility->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$$$function__1_check_compatibility, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$$$function__1_check_compatibility,
    type_description_1,
    par_urllib3_version,
    par_chardet_version,
    par_charset_normalizer_version,
    var_urllib3_version_list,
    var_major,
    var_minor,
    var_patch
);


// Release cached frame if used for exception.
if (frame_frame_requests$$$function__1_check_compatibility == cache_frame_frame_requests$$$function__1_check_compatibility) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$$$function__1_check_compatibility);
    cache_frame_frame_requests$$$function__1_check_compatibility = NULL;
}

assertFrameObject(frame_frame_requests$$$function__1_check_compatibility);

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
CHECK_OBJECT(var_urllib3_version_list);
CHECK_OBJECT(var_urllib3_version_list);
Py_DECREF(var_urllib3_version_list);
var_urllib3_version_list = NULL;
CHECK_OBJECT(var_major);
CHECK_OBJECT(var_major);
Py_DECREF(var_major);
var_major = NULL;
CHECK_OBJECT(var_minor);
CHECK_OBJECT(var_minor);
Py_DECREF(var_minor);
var_minor = NULL;
CHECK_OBJECT(var_patch);
CHECK_OBJECT(var_patch);
Py_DECREF(var_patch);
var_patch = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_urllib3_version_list);
var_urllib3_version_list = NULL;
Py_XDECREF(var_major);
var_major = NULL;
Py_XDECREF(var_minor);
var_minor = NULL;
Py_XDECREF(var_patch);
var_patch = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_urllib3_version);
Py_DECREF(par_urllib3_version);
CHECK_OBJECT(par_chardet_version);
Py_DECREF(par_chardet_version);
CHECK_OBJECT(par_charset_normalizer_version);
Py_DECREF(par_charset_normalizer_version);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_urllib3_version);
Py_DECREF(par_urllib3_version);
CHECK_OBJECT(par_chardet_version);
Py_DECREF(par_chardet_version);
CHECK_OBJECT(par_charset_normalizer_version);
Py_DECREF(par_charset_normalizer_version);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$$$function__2__check_cryptography(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cryptography_version = python_pars[0];
PyObject *var_cryptography_version_list = NULL;
PyObject *var_warning = NULL;
struct Nuitka_FrameObject *frame_frame_requests$$$function__2__check_cryptography;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_requests$$$function__2__check_cryptography = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$$$function__2__check_cryptography)) {
    Py_XDECREF(cache_frame_frame_requests$$$function__2__check_cryptography);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$$$function__2__check_cryptography == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$$$function__2__check_cryptography = MAKE_FUNCTION_FRAME(tstate, code_objects_f79a5790aa0cd2de8762239fc860c522, module_requests, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$$$function__2__check_cryptography->m_type_description == NULL);
frame_frame_requests$$$function__2__check_cryptography = cache_frame_frame_requests$$$function__2__check_cryptography;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$$$function__2__check_cryptography);
assert(Py_REFCNT(frame_frame_requests$$$function__2__check_cryptography) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_list_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = (PyObject *)&PyMap_Type;
tmp_args_element_value_1 = (PyObject *)&PyLong_Type;
CHECK_OBJECT(par_cryptography_version);
tmp_expression_value_1 = par_cryptography_version;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_split);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
frame_frame_requests$$$function__2__check_cryptography->m_frame.f_lineno = 102;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_dot_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
frame_frame_requests$$$function__2__check_cryptography->m_frame.f_lineno = 102;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_list_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_cryptography_version_list;
    var_cryptography_version_list = tmp_assign_source_1;
    Py_XDECREF(old);
}

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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$$$function__2__check_cryptography, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$$$function__2__check_cryptography, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_ValueError;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_3;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 101;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_requests$$$function__2__check_cryptography->m_frame)) {
        frame_frame_requests$$$function__2__check_cryptography->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_3;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto frame_return_exit_1;
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
// End of try:
try_end_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
nuitka_bool tmp_tmp_condition_result_2_nbool_1;
CHECK_OBJECT(var_cryptography_version_list);
tmp_cmp_expr_left_2 = var_cryptography_version_list;
tmp_cmp_expr_right_2 = MAKE_LIST3(tstate, const_int_pos_1,mod_consts.const_int_pos_3,mod_consts.const_int_pos_4);
tmp_tmp_condition_result_2_nbool_1 = RICH_COMPARE_LT_NBOOL_LIST_LIST(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_tmp_condition_result_2_nbool_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_tmp_condition_result_2_nbool_1 == NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_bdb7d06ff413392d0907c8f700ab7023;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_cryptography_version_list);
tmp_format_value_1 = var_cryptography_version_list;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_984fce895a90b16c34bd01b332981d6f;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_2 == NULL));
{
    PyObject *old = var_warning;
    var_warning = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_2 = module_var_accessor_requests$warnings(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 108;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_warn);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_warning);
tmp_args_element_value_3 = var_warning;
tmp_args_element_value_4 = module_var_accessor_requests$RequestsDependencyWarning(tstate);
if (unlikely(tmp_args_element_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RequestsDependencyWarning);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 108;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$$$function__2__check_cryptography->m_frame.f_lineno = 108;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$$$function__2__check_cryptography, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$$$function__2__check_cryptography->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$$$function__2__check_cryptography, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$$$function__2__check_cryptography,
    type_description_1,
    par_cryptography_version,
    var_cryptography_version_list,
    var_warning
);


// Release cached frame if used for exception.
if (frame_frame_requests$$$function__2__check_cryptography == cache_frame_frame_requests$$$function__2__check_cryptography) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$$$function__2__check_cryptography);
    cache_frame_frame_requests$$$function__2__check_cryptography = NULL;
}

assertFrameObject(frame_frame_requests$$$function__2__check_cryptography);

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
Py_XDECREF(var_cryptography_version_list);
var_cryptography_version_list = NULL;
Py_XDECREF(var_warning);
var_warning = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_cryptography_version_list);
var_cryptography_version_list = NULL;
Py_XDECREF(var_warning);
var_warning = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cryptography_version);
Py_DECREF(par_cryptography_version);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cryptography_version);
Py_DECREF(par_cryptography_version);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_requests$$$function__1_check_compatibility(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$$$function__1_check_compatibility,
        mod_consts.const_str_plain_check_compatibility,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_710cdb0ed440959341330b108006bbb3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$$$function__2__check_cryptography(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$$$function__2__check_cryptography,
        mod_consts.const_str_plain__check_cryptography,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f79a5790aa0cd2de8762239fc860c522,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests,
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

static function_impl_code const function_table_requests[] = {
impl_requests$$$function__1_check_compatibility,
impl_requests$$$function__2__check_cryptography,
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

    return Nuitka_Function_GetFunctionState(function, function_table_requests);
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
        module_requests,
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
        function_table_requests,
        sizeof(function_table_requests) / sizeof(function_impl_code)
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
static char const *module_full_name = "requests";
#endif

// Internal entry point for module code.
PyObject *module_code_requests(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("requests");

    // Store the module for future use.
    module_requests = module;

    moduledict_requests = MODULE_DICT(module_requests);

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
        PRINT_STRING("requests: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("requests: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("requests: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "requests" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initrequests\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_requests,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_requests,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_requests,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_requests,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_requests,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_requests);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_requests, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_requests, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_requests, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_requests);
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

        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
PyObject *tmp_import_from_5__module = NULL;
PyObject *tmp_import_from_6__module = NULL;
struct Nuitka_FrameObject *frame_frame_requests;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionStackItem exception_preserved_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionStackItem exception_preserved_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_549506447f5d32a64d0d4e4b1d0bc357;
UPDATE_STRING_DICT0(moduledict_requests, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_requests, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_requests = MAKE_MODULE_FRAME(code_objects_4876c7bf84a6cfb0cff68f0b0a56b2ad, module_requests);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests);
assert(Py_REFCNT(frame_frame_requests) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
frame_frame_requests->m_frame.f_lineno = 1;
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
frame_frame_requests->m_frame.f_lineno = 1;
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
frame_frame_requests->m_frame.f_lineno = 1;
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
frame_frame_requests->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_a416a9db6e94a06322e945a3c46ae7fb_tuple);

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
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
}
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_requests$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_requests$__spec__(tstate);
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
tmp_ass_attr_value_3 = module_var_accessor_requests$__path__(tstate);
if (unlikely(tmp_ass_attr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___path__);
}

if (tmp_ass_attr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_ass_attr_target_3 = module_var_accessor_requests$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_requests, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_requests, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_warnings;
tmp_globals_arg_value_1 = (PyObject *)moduledict_requests;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_requests->m_frame.f_lineno = 43;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_urllib3;
tmp_globals_arg_value_2 = (PyObject *)moduledict_requests;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_requests->m_frame.f_lineno = 45;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib3, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_exceptions;
tmp_globals_arg_value_3 = (PyObject *)moduledict_requests;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_RequestsDependencyWarning_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_requests->m_frame.f_lineno = 47;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain_RequestsDependencyWarning,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_RequestsDependencyWarning);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestsDependencyWarning, tmp_assign_source_9);
}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_charset_normalizer;
tmp_globals_arg_value_4 = (PyObject *)moduledict_requests;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain___version___tuple;
tmp_level_value_4 = const_int_0;
frame_frame_requests->m_frame.f_lineno = 50;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain___version__,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain___version__);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_charset_normalizer_version, tmp_assign_source_10);
}
goto try_end_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_ImportError;
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
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = Py_None;
UPDATE_STRING_DICT0(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_charset_normalizer_version, tmp_assign_source_11);
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 49;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_requests->m_frame)) {
        frame_frame_requests->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_2;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
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
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_chardet;
tmp_globals_arg_value_5 = (PyObject *)moduledict_requests;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain___version___tuple;
tmp_level_value_5 = const_int_0;
frame_frame_requests->m_frame.f_lineno = 55;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_3;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain___version__,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain___version__);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_chardet_version, tmp_assign_source_12);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_ImportError;
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
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = Py_None;
UPDATE_STRING_DICT0(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_chardet_version, tmp_assign_source_13);
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 54;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_requests->m_frame)) {
        frame_frame_requests->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_4;
branch_end_2:;
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_d9d31783b5fc3f2884bc1dff52d9f2e0);

tmp_assign_source_14 = MAKE_FUNCTION_requests$$$function__1_check_compatibility(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_check_compatibility, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_d243f6ead3f25bc70ec57ec83312cea2);

tmp_assign_source_15 = MAKE_FUNCTION_requests$$$function__2__check_cryptography(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain__check_cryptography, tmp_assign_source_15);
}
// Tried code:
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_3 = module_var_accessor_requests$check_compatibility(tstate);
assert(!(tmp_called_value_3 == NULL));
tmp_expression_value_3 = module_var_accessor_requests$urllib3(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urllib3);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 114;

    goto try_except_handler_5;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___version__);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_5;
}
tmp_args_element_value_3 = module_var_accessor_requests$chardet_version(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_chardet_version);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_2);

exception_lineno = 115;

    goto try_except_handler_5;
}
tmp_args_element_value_4 = module_var_accessor_requests$charset_normalizer_version(tstate);
if (unlikely(tmp_args_element_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_charset_normalizer_version);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_2);

exception_lineno = 116;

    goto try_except_handler_5;
}
frame_frame_requests->m_frame.f_lineno = 113;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 3.
exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = mod_consts.const_tuple_type_AssertionError_type_ValueError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_6;
}
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_5;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_args_element_value_6;
tmp_expression_value_4 = module_var_accessor_requests$warnings(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 119;

    goto try_except_handler_6;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_warn);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;

    goto try_except_handler_6;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_f59a1fd8c34066a97517616d5a4a30a1;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 7);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_expression_value_5 = module_var_accessor_requests$urllib3(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urllib3);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 120;

    goto tuple_build_exception_1;
}
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain___version__);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_590bb48b0cf5729b9c8375f12cac6fe4;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
tmp_format_value_2 = module_var_accessor_requests$chardet_version(tstate);
if (unlikely(tmp_format_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_chardet_version);
}

if (tmp_format_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 121;

    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_183fe2c6c4636ec15f5d0b742b1a6977;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
tmp_format_value_3 = module_var_accessor_requests$charset_normalizer_version(tstate);
if (unlikely(tmp_format_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_charset_normalizer_version);
}

if (tmp_format_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 121;

    goto tuple_build_exception_1;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_75a89df3fdaa66cc36bcf68a6abbada4;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_5 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_5 == NULL));
tmp_args_element_value_6 = module_var_accessor_requests$RequestsDependencyWarning(tstate);
if (unlikely(tmp_args_element_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RequestsDependencyWarning);
}

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_5);

exception_lineno = 123;

    goto try_except_handler_6;
}
frame_frame_requests->m_frame.f_lineno = 119;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;

    goto try_except_handler_6;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 112;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_requests->m_frame)) {
        frame_frame_requests->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_6;
branch_end_3:;
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

goto try_end_5;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_5:;
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_ssl;
tmp_globals_arg_value_6 = (PyObject *)moduledict_requests;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = Py_None;
tmp_level_value_6 = const_int_0;
frame_frame_requests->m_frame.f_lineno = 131;
tmp_assign_source_16 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_ssl, tmp_assign_source_16);
}
goto try_end_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 4.
exception_preserved_4 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests, exception_keeper_lineno_7);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7, exception_tb);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests, exception_keeper_lineno_7);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_7);
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = PyExc_ImportError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
assert(!(tmp_res == -1));
tmp_condition_result_4 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = Py_None;
UPDATE_STRING_DICT0(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_ssl, tmp_assign_source_17);
}
goto branch_end_4;
branch_no_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 130;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_requests->m_frame)) {
        frame_frame_requests->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_9;
branch_end_4:;
goto try_end_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 4.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_4);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_7;
// End of try:
try_end_8:;
// Restore previous exception id 4.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_4);

goto try_end_7;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_7:;
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_1;
tmp_expression_value_6 = module_var_accessor_requests$ssl(tstate);
assert(!(tmp_expression_value_6 == NULL));
tmp_name_value_7 = mod_consts.const_str_plain_HAS_SNI;
tmp_default_value_1 = Py_False;
tmp_operand_value_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_7, tmp_default_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto try_except_handler_7;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto try_except_handler_7;
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
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_8 = mod_consts.const_str_digest_e03852224018ed217937e454110a99e9;
tmp_globals_arg_value_7 = (PyObject *)moduledict_requests;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_pyopenssl_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_requests->m_frame.f_lineno = 136;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;

    goto try_except_handler_7;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain_pyopenssl,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_pyopenssl);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_pyopenssl, tmp_assign_source_18);
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_3;
tmp_called_instance_1 = module_var_accessor_requests$pyopenssl(tstate);
assert(!(tmp_called_instance_1 == NULL));
frame_frame_requests->m_frame.f_lineno = 138;
tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_inject_into_urllib3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_9 = mod_consts.const_str_plain_cryptography;
tmp_globals_arg_value_8 = (PyObject *)moduledict_requests;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain___version___tuple;
tmp_level_value_8 = const_int_0;
frame_frame_requests->m_frame.f_lineno = 141;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;

    goto try_except_handler_7;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain___version__,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain___version__);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_cryptography_version, tmp_assign_source_19);
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_7;
tmp_called_value_5 = module_var_accessor_requests$_check_cryptography(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__check_cryptography);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;

    goto try_except_handler_7;
}
tmp_args_element_value_7 = module_var_accessor_requests$cryptography_version(tstate);
assert(!(tmp_args_element_value_7 == NULL));
frame_frame_requests->m_frame.f_lineno = 145;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_7);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;

    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_5:;
goto try_end_9;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 5.
exception_preserved_5 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_9);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests, exception_keeper_lineno_9);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_9, exception_tb);
    } else if (exception_keeper_lineno_9 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests, exception_keeper_lineno_9);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_9, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_9);
// Tried code:
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = EXC_TYPE(tstate);
tmp_cmp_expr_right_5 = PyExc_ImportError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
assert(!(tmp_res == -1));
tmp_condition_result_6 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 129;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_requests->m_frame)) {
        frame_frame_requests->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_10;
branch_no_6:;
goto try_end_10;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 5.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_5);

// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
// Restore previous exception id 5.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_5);

goto try_end_9;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_9:;
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_10 = mod_consts.const_str_digest_c8562bbff9d721153deb2fdd066393d0;
tmp_globals_arg_value_9 = (PyObject *)moduledict_requests;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_DependencyWarning_tuple;
tmp_level_value_9 = const_int_0;
frame_frame_requests->m_frame.f_lineno = 150;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain_DependencyWarning,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_DependencyWarning);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_DependencyWarning, tmp_assign_source_20);
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_expression_value_7 = module_var_accessor_requests$warnings(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 152;

    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_simplefilter);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;

    goto frame_exception_exit_1;
}
tmp_args_element_value_8 = mod_consts.const_str_plain_ignore;
tmp_args_element_value_9 = module_var_accessor_requests$DependencyWarning(tstate);
if (unlikely(tmp_args_element_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DependencyWarning);
}

if (tmp_args_element_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 152;

    goto frame_exception_exit_1;
}
frame_frame_requests->m_frame.f_lineno = 152;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_11 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_10 = (PyObject *)moduledict_requests;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = Py_None;
tmp_level_value_10 = const_int_0;
frame_frame_requests->m_frame.f_lineno = 155;
tmp_assign_source_21 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_12 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_11 = (PyObject *)moduledict_requests;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_NullHandler_tuple;
tmp_level_value_11 = const_int_0;
frame_frame_requests->m_frame.f_lineno = 156;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain_NullHandler,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_NullHandler);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_NullHandler, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_13 = const_str_empty;
tmp_globals_arg_value_12 = (PyObject *)moduledict_requests;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_packages_str_plain_utils_tuple;
tmp_level_value_12 = const_int_pos_1;
frame_frame_requests->m_frame.f_lineno = 158;
tmp_assign_source_23 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_23;
}
// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_8 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain_packages,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_packages);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_11;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_packages, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_9 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain_utils,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_utils);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto try_except_handler_11;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_utils, tmp_assign_source_25);
}
goto try_end_11;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_1__module);
CHECK_OBJECT(tmp_import_from_1__module);
Py_DECREF(tmp_import_from_1__module);
tmp_import_from_1__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
try_end_11:;
CHECK_OBJECT(tmp_import_from_1__module);
CHECK_OBJECT(tmp_import_from_1__module);
Py_DECREF(tmp_import_from_1__module);
tmp_import_from_1__module = NULL;
{
PyObject *tmp_assign_source_26;
PyObject *tmp_name_value_14;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_14 = mod_consts.const_str_plain___version__;
tmp_globals_arg_value_13 = (PyObject *)moduledict_requests;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_dce6d8c4b19e6db888108f9460babd77_tuple;
tmp_level_value_13 = const_int_pos_1;
frame_frame_requests->m_frame.f_lineno = 159;
tmp_assign_source_26 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_26;
}
// Tried code:
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_10 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain___author__,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain___author__);
}

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;

    goto try_except_handler_12;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain___author__, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_11 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain___author_email__,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain___author_email__);
}

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;

    goto try_except_handler_12;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain___author_email__, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_12 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain___build__,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain___build__);
}

if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;

    goto try_except_handler_12;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain___build__, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_13 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain___cake__,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain___cake__);
}

if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;

    goto try_except_handler_12;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain___cake__, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_14 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain___copyright__,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain___copyright__);
}

if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;

    goto try_except_handler_12;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain___copyright__, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_15 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain___description__,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain___description__);
}

if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;

    goto try_except_handler_12;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain___description__, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_16 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain___license__,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain___license__);
}

if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;

    goto try_except_handler_12;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain___license__, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_17 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain___title__,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain___title__);
}

if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;

    goto try_except_handler_12;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain___title__, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_18;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_18 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain___url__,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain___url__);
}

if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;

    goto try_except_handler_12;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain___url__, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_import_name_from_19;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_19 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain___version__,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain___version__);
}

if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;

    goto try_except_handler_12;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain___version__, tmp_assign_source_36);
}
goto try_end_12;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_2__module);
CHECK_OBJECT(tmp_import_from_2__module);
Py_DECREF(tmp_import_from_2__module);
tmp_import_from_2__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto frame_exception_exit_1;
// End of try:
try_end_12:;
CHECK_OBJECT(tmp_import_from_2__module);
CHECK_OBJECT(tmp_import_from_2__module);
Py_DECREF(tmp_import_from_2__module);
tmp_import_from_2__module = NULL;
{
PyObject *tmp_assign_source_37;
PyObject *tmp_name_value_15;
PyObject *tmp_globals_arg_value_14;
PyObject *tmp_locals_arg_value_14;
PyObject *tmp_fromlist_value_14;
PyObject *tmp_level_value_14;
tmp_name_value_15 = mod_consts.const_str_plain_api;
tmp_globals_arg_value_14 = (PyObject *)moduledict_requests;
tmp_locals_arg_value_14 = Py_None;
tmp_fromlist_value_14 = mod_consts.const_tuple_0d575ffb24b4bdc6f5339eb63c328111_tuple;
tmp_level_value_14 = const_int_pos_1;
frame_frame_requests->m_frame.f_lineno = 171;
tmp_assign_source_37 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_37;
}
// Tried code:
{
PyObject *tmp_assign_source_38;
PyObject *tmp_import_name_from_20;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_20 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain_delete,
        const_int_0
    );
} else {
    tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_delete);
}

if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;

    goto try_except_handler_13;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_delete, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_import_name_from_21;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_21 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_requests,
        const_str_plain_get,
        const_int_0
    );
} else {
    tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, const_str_plain_get);
}

if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;

    goto try_except_handler_13;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain_get, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_import_name_from_22;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_22 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain_head,
        const_int_0
    );
} else {
    tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_head);
}

if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;

    goto try_except_handler_13;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_head, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_import_name_from_23;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_23 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain_options,
        const_int_0
    );
} else {
    tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain_options);
}

if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;

    goto try_except_handler_13;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_options, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_import_name_from_24;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_24 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_24)) {
    tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_24,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain_patch,
        const_int_0
    );
} else {
    tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_plain_patch);
}

if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;

    goto try_except_handler_13;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_patch, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_import_name_from_25;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_25 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_25)) {
    tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_25,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain_post,
        const_int_0
    );
} else {
    tmp_assign_source_43 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_plain_post);
}

if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;

    goto try_except_handler_13;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_post, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_import_name_from_26;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_26 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_26)) {
    tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_26,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain_put,
        const_int_0
    );
} else {
    tmp_assign_source_44 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts.const_str_plain_put);
}

if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;

    goto try_except_handler_13;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_put, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_import_name_from_27;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_27 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_27)) {
    tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_27,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain_request,
        const_int_0
    );
} else {
    tmp_assign_source_45 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts.const_str_plain_request);
}

if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;

    goto try_except_handler_13;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_request, tmp_assign_source_45);
}
goto try_end_13;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto frame_exception_exit_1;
// End of try:
try_end_13:;
CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
{
PyObject *tmp_assign_source_46;
PyObject *tmp_name_value_16;
PyObject *tmp_globals_arg_value_15;
PyObject *tmp_locals_arg_value_15;
PyObject *tmp_fromlist_value_15;
PyObject *tmp_level_value_15;
tmp_name_value_16 = mod_consts.const_str_plain_exceptions;
tmp_globals_arg_value_15 = (PyObject *)moduledict_requests;
tmp_locals_arg_value_15 = Py_None;
tmp_fromlist_value_15 = mod_consts.const_tuple_8dfa0d60324b6aad72b3fc51362981fd_tuple;
tmp_level_value_15 = const_int_pos_1;
frame_frame_requests->m_frame.f_lineno = 172;
tmp_assign_source_46 = IMPORT_MODULE5(tstate, tmp_name_value_16, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_46;
}
// Tried code:
{
PyObject *tmp_assign_source_47;
PyObject *tmp_import_name_from_28;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_28 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_28)) {
    tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_28,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain_ConnectionError,
        const_int_0
    );
} else {
    tmp_assign_source_47 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts.const_str_plain_ConnectionError);
}

if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_14;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionError, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_import_name_from_29;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_29 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_29)) {
    tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_29,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain_ConnectTimeout,
        const_int_0
    );
} else {
    tmp_assign_source_48 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts.const_str_plain_ConnectTimeout);
}

if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_14;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectTimeout, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_import_name_from_30;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_30 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_30)) {
    tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_30,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain_FileModeWarning,
        const_int_0
    );
} else {
    tmp_assign_source_49 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_30, mod_consts.const_str_plain_FileModeWarning);
}

if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_14;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_FileModeWarning, tmp_assign_source_49);
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_import_name_from_31;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_31 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_31)) {
    tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_31,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain_HTTPError,
        const_int_0
    );
} else {
    tmp_assign_source_50 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_31, mod_consts.const_str_plain_HTTPError);
}

if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_14;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPError, tmp_assign_source_50);
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_import_name_from_32;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_32 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_32)) {
    tmp_assign_source_51 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_32,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain_JSONDecodeError,
        const_int_0
    );
} else {
    tmp_assign_source_51 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_32, mod_consts.const_str_plain_JSONDecodeError);
}

if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_14;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_JSONDecodeError, tmp_assign_source_51);
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_import_name_from_33;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_33 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_33)) {
    tmp_assign_source_52 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_33,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain_ReadTimeout,
        const_int_0
    );
} else {
    tmp_assign_source_52 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_33, mod_consts.const_str_plain_ReadTimeout);
}

if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_14;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadTimeout, tmp_assign_source_52);
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_import_name_from_34;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_34 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_34)) {
    tmp_assign_source_53 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_34,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain_RequestException,
        const_int_0
    );
} else {
    tmp_assign_source_53 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_34, mod_consts.const_str_plain_RequestException);
}

if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_14;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestException, tmp_assign_source_53);
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_import_name_from_35;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_35 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_35)) {
    tmp_assign_source_54 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_35,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain_Timeout,
        const_int_0
    );
} else {
    tmp_assign_source_54 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_35, mod_consts.const_str_plain_Timeout);
}

if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_14;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_Timeout, tmp_assign_source_54);
}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_import_name_from_36;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_36 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_36)) {
    tmp_assign_source_55 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_36,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain_TooManyRedirects,
        const_int_0
    );
} else {
    tmp_assign_source_55 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_36, mod_consts.const_str_plain_TooManyRedirects);
}

if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_14;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_TooManyRedirects, tmp_assign_source_55);
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_import_name_from_37;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_37 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_37)) {
    tmp_assign_source_56 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_37,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain_URLRequired,
        const_int_0
    );
} else {
    tmp_assign_source_56 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_37, mod_consts.const_str_plain_URLRequired);
}

if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_14;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_URLRequired, tmp_assign_source_56);
}
goto try_end_14;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_4__module);
CHECK_OBJECT(tmp_import_from_4__module);
Py_DECREF(tmp_import_from_4__module);
tmp_import_from_4__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto frame_exception_exit_1;
// End of try:
try_end_14:;
CHECK_OBJECT(tmp_import_from_4__module);
CHECK_OBJECT(tmp_import_from_4__module);
Py_DECREF(tmp_import_from_4__module);
tmp_import_from_4__module = NULL;
{
PyObject *tmp_assign_source_57;
PyObject *tmp_name_value_17;
PyObject *tmp_globals_arg_value_16;
PyObject *tmp_locals_arg_value_16;
PyObject *tmp_fromlist_value_16;
PyObject *tmp_level_value_16;
tmp_name_value_17 = mod_consts.const_str_plain_models;
tmp_globals_arg_value_16 = (PyObject *)moduledict_requests;
tmp_locals_arg_value_16 = Py_None;
tmp_fromlist_value_16 = mod_consts.const_tuple_590af5e76c8b6446171c425be27e9d9d_tuple;
tmp_level_value_16 = const_int_pos_1;
frame_frame_requests->m_frame.f_lineno = 184;
tmp_assign_source_57 = IMPORT_MODULE5(tstate, tmp_name_value_17, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_5__module == NULL);
tmp_import_from_5__module = tmp_assign_source_57;
}
// Tried code:
{
PyObject *tmp_assign_source_58;
PyObject *tmp_import_name_from_38;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_38 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_38)) {
    tmp_assign_source_58 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_38,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain_PreparedRequest,
        const_int_0
    );
} else {
    tmp_assign_source_58 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_38, mod_consts.const_str_plain_PreparedRequest);
}

if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_15;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_PreparedRequest, tmp_assign_source_58);
}
{
PyObject *tmp_assign_source_59;
PyObject *tmp_import_name_from_39;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_39 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_39)) {
    tmp_assign_source_59 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_39,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain_Request,
        const_int_0
    );
} else {
    tmp_assign_source_59 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_39, mod_consts.const_str_plain_Request);
}

if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_15;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_Request, tmp_assign_source_59);
}
{
PyObject *tmp_assign_source_60;
PyObject *tmp_import_name_from_40;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_40 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_40)) {
    tmp_assign_source_60 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_40,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain_Response,
        const_int_0
    );
} else {
    tmp_assign_source_60 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_40, mod_consts.const_str_plain_Response);
}

if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_15;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_Response, tmp_assign_source_60);
}
goto try_end_15;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_5__module);
CHECK_OBJECT(tmp_import_from_5__module);
Py_DECREF(tmp_import_from_5__module);
tmp_import_from_5__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto frame_exception_exit_1;
// End of try:
try_end_15:;
CHECK_OBJECT(tmp_import_from_5__module);
CHECK_OBJECT(tmp_import_from_5__module);
Py_DECREF(tmp_import_from_5__module);
tmp_import_from_5__module = NULL;
{
PyObject *tmp_assign_source_61;
PyObject *tmp_name_value_18;
PyObject *tmp_globals_arg_value_17;
PyObject *tmp_locals_arg_value_17;
PyObject *tmp_fromlist_value_17;
PyObject *tmp_level_value_17;
tmp_name_value_18 = mod_consts.const_str_plain_sessions;
tmp_globals_arg_value_17 = (PyObject *)moduledict_requests;
tmp_locals_arg_value_17 = Py_None;
tmp_fromlist_value_17 = mod_consts.const_tuple_str_plain_Session_str_plain_session_tuple;
tmp_level_value_17 = const_int_pos_1;
frame_frame_requests->m_frame.f_lineno = 185;
tmp_assign_source_61 = IMPORT_MODULE5(tstate, tmp_name_value_18, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_6__module == NULL);
tmp_import_from_6__module = tmp_assign_source_61;
}
// Tried code:
{
PyObject *tmp_assign_source_62;
PyObject *tmp_import_name_from_41;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_41 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_41)) {
    tmp_assign_source_62 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_41,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain_Session,
        const_int_0
    );
} else {
    tmp_assign_source_62 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_41, mod_consts.const_str_plain_Session);
}

if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto try_except_handler_16;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_Session, tmp_assign_source_62);
}
{
PyObject *tmp_assign_source_63;
PyObject *tmp_import_name_from_42;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_42 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_42)) {
    tmp_assign_source_63 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_42,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain_session,
        const_int_0
    );
} else {
    tmp_assign_source_63 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_42, mod_consts.const_str_plain_session);
}

if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto try_except_handler_16;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_session, tmp_assign_source_63);
}
goto try_end_16;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_6__module);
CHECK_OBJECT(tmp_import_from_6__module);
Py_DECREF(tmp_import_from_6__module);
tmp_import_from_6__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto frame_exception_exit_1;
// End of try:
try_end_16:;
CHECK_OBJECT(tmp_import_from_6__module);
CHECK_OBJECT(tmp_import_from_6__module);
Py_DECREF(tmp_import_from_6__module);
tmp_import_from_6__module = NULL;
{
PyObject *tmp_assign_source_64;
PyObject *tmp_import_name_from_43;
PyObject *tmp_name_value_19;
PyObject *tmp_globals_arg_value_18;
PyObject *tmp_locals_arg_value_18;
PyObject *tmp_fromlist_value_18;
PyObject *tmp_level_value_18;
tmp_name_value_19 = mod_consts.const_str_plain_status_codes;
tmp_globals_arg_value_18 = (PyObject *)moduledict_requests;
tmp_locals_arg_value_18 = Py_None;
tmp_fromlist_value_18 = mod_consts.const_tuple_str_plain_codes_tuple;
tmp_level_value_18 = const_int_pos_1;
frame_frame_requests->m_frame.f_lineno = 186;
tmp_import_name_from_43 = IMPORT_MODULE5(tstate, tmp_name_value_19, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
if (tmp_import_name_from_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_43)) {
    tmp_assign_source_64 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_43,
        (PyObject *)moduledict_requests,
        mod_consts.const_str_plain_codes,
        const_int_0
    );
} else {
    tmp_assign_source_64 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_43, mod_consts.const_str_plain_codes);
}

CHECK_OBJECT(tmp_import_name_from_43);
Py_DECREF(tmp_import_name_from_43);
if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)mod_consts.const_str_plain_codes, tmp_assign_source_64);
}
{
PyObject *tmp_assign_source_65;
tmp_assign_source_65 = mod_consts.const_tuple_ec4d51d78383943c91147afa70a2b0a7_tuple;
UPDATE_STRING_DICT0(moduledict_requests, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_65);
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_10;
PyObject *tmp_called_value_8;
tmp_called_instance_2 = module_var_accessor_requests$logging(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 216;

    goto frame_exception_exit_1;
}
frame_frame_requests->m_frame.f_lineno = 216;
tmp_expression_value_8 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_requests_tuple, 0)
);

if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;

    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_addHandler);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;

    goto frame_exception_exit_1;
}
tmp_called_value_8 = module_var_accessor_requests$NullHandler(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NullHandler);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_7);

exception_lineno = 216;

    goto frame_exception_exit_1;
}
frame_frame_requests->m_frame.f_lineno = 216;
tmp_args_element_value_10 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_8);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 216;

    goto frame_exception_exit_1;
}
frame_frame_requests->m_frame.f_lineno = 216;
tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_9;
PyObject *tmp_call_result_7;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
tmp_expression_value_9 = module_var_accessor_requests$warnings(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 219;

    goto frame_exception_exit_1;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_simplefilter);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_plain_default;
tmp_kw_call_arg_value_1_1 = module_var_accessor_requests$FileModeWarning(tstate);
if (unlikely(tmp_kw_call_arg_value_1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FileModeWarning);
}

if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_9);

exception_lineno = 219;

    goto frame_exception_exit_1;
}
frame_frame_requests->m_frame.f_lineno = 219;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(
        tstate,
        tmp_called_value_9,
        args,
        &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0),
        mod_consts.const_tuple_str_plain_append_tuple
    );
}

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_requests);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("requests", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "requests" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_requests);
    return module_requests;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("requests", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
