/* Generated code for Python module 'requests$auth'
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



/* The "module_requests$auth" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_requests$auth;
PyDictObject *moduledict_requests$auth;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_basestring;
PyObject *const_str_plain_warnings;
PyObject *const_str_plain_warn;
PyObject *const_str_digest_2fa81b7188be7ff17a765a9a3d4c77cc;
PyObject *const_str_digest_193f2681e00fe1a919853c99498c3d72;
PyObject *const_str_plain_DeprecationWarning;
PyObject *const_tuple_str_plain_category_tuple;
PyObject *const_str_plain_str;
PyObject *const_str_digest_25b1c1cb155ac8863379ffde01fbdc98;
PyObject *const_str_plain_encode;
PyObject *const_tuple_str_plain_latin1_tuple;
PyObject *const_str_digest_1cc758ff2b09f90388f1c2fc8a8fecdc;
PyObject *const_str_plain_to_native_string;
PyObject *const_str_plain_b64encode;
PyObject *const_bytes_chr_58;
PyObject *const_str_plain_strip;
PyObject *const_str_digest_919a2045e823b128b54cfd720f73e3bf;
PyObject *const_str_digest_507ca0310b2f37ea4b2584d4cca02846;
PyObject *const_str_plain_username;
PyObject *const_str_plain_password;
PyObject *const_str_plain__basic_auth_str;
PyObject *const_str_plain_headers;
PyObject *const_str_plain_Authorization;
PyObject *const_str_digest_a9249a74248e02fdfcaa84b4618a14ce;
PyObject *const_str_plain_threading;
PyObject *const_str_plain_local;
PyObject *const_str_plain__thread_local;
PyObject *const_str_plain_init;
PyObject *const_str_plain_last_nonce;
PyObject *const_str_plain_nonce_count;
PyObject *const_str_plain_chal;
PyObject *const_str_plain_pos;
PyObject *const_str_plain_num_401_calls;
PyObject *const_str_plain_realm;
PyObject *const_str_plain_nonce;
PyObject *const_tuple_str_plain_qop_tuple;
PyObject *const_tuple_str_plain_algorithm_tuple;
PyObject *const_tuple_str_plain_opaque_tuple;
PyObject *const_str_plain_MD5;
PyObject *const_str_plain_upper;
PyObject *const_str_digest_a49a175904e70dd9f5dc0f52dbebbfdb;
PyObject *const_dict_dfe92b97e889863572498f01b277b9e3;
PyObject *const_str_plain_md5_utf8;
PyObject *const_str_digest_437d9d9283e7705920d4361a76539982;
PyObject *const_str_plain_SHA;
PyObject *const_str_plain_sha_utf8;
PyObject *const_str_digest_a48752b2d8c32906209a579a59eb860e;
PyObject *const_str_digest_1e080f858ef601c43605cc71a556333d;
PyObject *const_str_plain_sha256_utf8;
PyObject *const_str_digest_065e009455d4c4ad1356e1bac835c3a1;
PyObject *const_str_digest_91012c747d1826684889b0187ce7d184;
PyObject *const_str_plain_sha512_utf8;
PyObject *const_str_digest_0ca141503f179b28e3129781569b5edb;
PyObject *const_dict_4df8e97ccdaf83df99d4545b1018ac36;
PyObject *const_str_plain_KD;
PyObject *const_str_digest_6e0275adf61cf8d2c4819e377fa99004;
PyObject *const_str_plain_urlparse;
PyObject *const_str_plain_query;
PyObject *const_str_chr_63;
PyObject *const_str_chr_58;
PyObject *const_str_plain_08x;
PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
PyObject *const_str_plain_time;
PyObject *const_str_plain_ctime;
PyObject *const_str_plain_urandom;
PyObject *const_tuple_int_pos_8_tuple;
PyObject *const_str_plain_hashlib;
PyObject *const_str_plain_sha1;
PyObject *const_tuple_false_tuple;
PyObject *const_tuple_str_plain_usedforsecurity_tuple;
PyObject *const_str_plain_hexdigest;
PyObject *const_slice_none_int_pos_16_none;
PyObject *const_str_plain_auth;
PyObject *const_tuple_str_chr_44_tuple;
PyObject *const_str_digest_623a2ce444ab4ec11ad18cfd10bc4d2d;
PyObject *const_str_digest_2ac5532e10d9583c2cc7c6c414c300b6;
PyObject *const_str_digest_e5d0752e44d467c0b559ec4a161055d6;
PyObject *const_str_digest_d7138a62ecd13ea5a5e4c33f52e3ec2a;
PyObject *const_str_digest_ffa61441fed506fa8f69820e74074f15;
PyObject *const_str_digest_4613cdb6b72b3a36e66f64fc3b58e823;
PyObject *const_str_chr_34;
PyObject *const_str_digest_b46abab1c7bdcc1966bf9145c77483c3;
PyObject *const_str_digest_2fa00f37b80386ed0ac27f3464c47dbc;
PyObject *const_str_digest_58d9cd6332ab69dc380fce6df37d2be1;
PyObject *const_str_digest_cd5eaaaed24cd1f165dd61b995c48c9e;
PyObject *const_str_digest_14534a3b74d8d6fed882c6002d4fcddb;
PyObject *const_str_digest_fc86f84c4a8b87e858a9027ce216def3;
PyObject *const_str_plain_md5;
PyObject *const_str_plain_sha256;
PyObject *const_str_plain_sha512;
PyObject *const_str_plain_hash_utf8;
PyObject *const_str_plain_is_redirect;
PyObject *const_str_digest_5bf0e52ad3af9d76b6e6716841011fd0;
PyObject *const_str_plain_status_code;
PyObject *const_int_pos_400;
PyObject *const_int_pos_500;
PyObject *const_str_plain_request;
PyObject *const_str_plain_body;
PyObject *const_str_plain_seek;
PyObject *const_tuple_str_digest_a88adb7a245cfc6a39c69917da364c05_str_empty_tuple;
PyObject *const_str_plain_digest;
PyObject *const_int_pos_2;
PyObject *const_str_plain_re;
PyObject *const_str_plain_IGNORECASE;
PyObject *const_tuple_str_digest_58295a7b2ee00e12bd235bdf35e32b18_tuple;
PyObject *const_tuple_str_plain_flags_tuple;
PyObject *const_str_plain_parse_dict_header;
PyObject *const_str_plain_sub;
PyObject *const_tuple_int_pos_1_tuple;
PyObject *const_tuple_str_plain_count_tuple;
PyObject *const_str_plain_content;
PyObject *const_str_plain_copy;
PyObject *const_str_plain_cast;
PyObject *const_str_plain_CookieJar;
PyObject *const_str_plain__cookies;
PyObject *const_str_plain_extract_cookies_to_jar;
PyObject *const_str_plain_raw;
PyObject *const_str_plain_prepare_cookies;
PyObject *const_str_plain_build_digest_header;
PyObject *const_str_plain_method;
PyObject *const_str_plain_url;
PyObject *const_str_plain_connection;
PyObject *const_str_plain_history;
PyObject *const_str_plain_append;
PyObject *const_str_digest_a94457af499547f6880f8330f568dc08;
PyObject *const_str_plain_init_per_thread_state;
PyObject *const_str_plain_tell;
PyObject *const_str_plain_register_hook;
PyObject *const_str_plain_response;
PyObject *const_str_plain_handle_401;
PyObject *const_str_plain_handle_redirect;
PyObject *const_str_digest_b1d3fff4dbaa2e3b433891b66d01f28a;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_os;
PyObject *const_str_plain_base64;
PyObject *const_tuple_str_plain_b64encode_tuple;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_Final;
PyObject *const_str_plain_overload;
PyObject *const_str_plain__internal_utils;
PyObject *const_tuple_str_plain_to_native_string_tuple;
PyObject *const_str_plain_compat;
PyObject *const_tuple_str_plain_basestring_str_plain_str_str_plain_urlparse_tuple;
PyObject *const_str_plain_cookies;
PyObject *const_tuple_str_plain_extract_cookies_to_jar_tuple;
PyObject *const_str_plain_utils;
PyObject *const_tuple_str_plain_parse_dict_header_tuple;
PyObject *const_str_digest_5d735bc80d16f0fedbdde78344a2d394;
PyObject *const_str_plain_CONTENT_TYPE_FORM_URLENCODED;
PyObject *const_str_digest_e1ae02aba66d45ac9d7f070694408d22;
PyObject *const_str_plain_CONTENT_TYPE_MULTI_PART;
PyObject *const_dict_02787d4f1dca00f3ab9b7da6192fcb1b;
PyObject *const_str_digest_67889f3b65748dbd83938a67635b28e4;
PyObject *const_str_digest_2fc3f96e0216dbc7dcd34461a1c4d2ee;
PyObject *const_str_plain_AuthBase;
PyObject *const_int_pos_78;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_573e2578e366ea0ed6c728880b7d15d1;
PyObject *const_str_plain___call__;
PyObject *const_str_digest_60aadb6b5e6f7210d6b0e13a6cd7dbcb;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_HTTPBasicAuth;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_a664f80c1075d8cfb85f49618afc684b;
PyObject *const_int_pos_85;
PyObject *const_str_digest_1163c901069db0d0116b943f228d52f6;
PyObject *const_dict_83fde044930bbbaeb389afbaba80558e;
PyObject *const_str_digest_51abe40552a340600cafb395a2df7065;
PyObject *const_dict_9dd9bd388f9d0f4f6c0775e174e3001d;
PyObject *const_dict_dbd0f1c85e6238fe0274a9204f12079b;
PyObject *const_dict_48da6b0499a992d8a0861b3c7131d274;
PyObject *const_str_plain___eq__;
PyObject *const_str_digest_7565d3f493b69797b6a3c9c487eadc9f;
PyObject *const_dict_6c1f26bc8122574abd325b774c634b1a;
PyObject *const_str_plain___ne__;
PyObject *const_str_digest_cb06648d43a209f35d822642f76d8852;
PyObject *const_str_digest_f3a7a1ca53a484562486747f6ddca3a9;
PyObject *const_tuple_str_plain_username_str_plain_password_tuple;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_HTTPProxyAuth;
PyObject *const_str_digest_3267db0b9e319da1a85ef722557dd6fe;
PyObject *const_int_pos_116;
PyObject *const_str_digest_128a37116d6d30cc1592bb98f4d24b46;
PyObject *const_str_plain_HTTPDigestAuth;
PyObject *const_str_digest_acf0af13ef75ff62ec9955ae4dcea3e9;
PyObject *const_int_pos_124;
PyObject *const_str_digest_469a2477b7c3eb4d6a71b6319f7167dc;
PyObject *const_str_digest_cbfbecd1bf29edfce9bd6e2514e536fa;
PyObject *const_str_digest_d07907e58b350811dd59b47ecbca299a;
PyObject *const_str_digest_ee22ae99a5537f5b922bb4b122196ae7;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_digest_37d3a2307e31335fa61f05d3486fd568;
PyObject *const_dict_051b5ffe00d30cdb70e4e7d90f98c0bc;
PyObject *const_str_digest_67bc2e2875f2a676ae8e8f2595c69cad;
PyObject *const_dict_c0b4aa56e27262dae2b7b89241e2e98a;
PyObject *const_str_digest_7c3d6be840d0505baea6486b3a2fb076;
PyObject *const_dict_6edc7e34c97f956d56a100ccda717c41;
PyObject *const_str_digest_aa04245735e0a296f4eee2c81c6c24b4;
PyObject *const_str_digest_7a006474c4967997a79cedaecd602a45;
PyObject *const_str_digest_c3a9a47fda757d3a3b31995c197a305a;
PyObject *const_str_digest_1086311fbf6e3245df872c941ed6e8ad;
PyObject *const_tuple_a67d05bb61c2ad13d89e6487a4eb1ffd_tuple;
PyObject *const_str_digest_f1891b89ee1ab5d77e732590c823b548;
PyObject *const_str_digest_3ae56c31f64e988caab68621b896b25f;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_s_str_plain_d_str_plain_hash_utf8_tuple;
PyObject *const_tuple_str_plain_hash_utf8_tuple;
PyObject *const_tuple_str_plain_self_str_plain_r_tuple;
PyObject *const_tuple_778a306ec20cc594d1aa1f0319397dff_tuple;
PyObject *const_tuple_str_plain_self_str_plain_other_tuple;
PyObject *const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple;
PyObject *const_tuple_str_plain_username_str_plain_password_str_plain_authstr_tuple;
PyObject *const_tuple_136046813187593286870b153208de90_tuple;
PyObject *const_tuple_6662fb62eaa957f1c7da1e87f5a17362_tuple;
PyObject *const_tuple_str_plain_self_str_plain_r_str_plain_kwargs_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_x_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[223];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("requests.auth"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 223) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 223 values, got %d\n",
                    UN_TRANSLATE("requests.auth"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_basestring", mod_consts.const_str_plain_basestring);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_basestring);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_warnings", mod_consts.const_str_plain_warnings);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_warnings);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_warn", mod_consts.const_str_plain_warn);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_warn);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2fa81b7188be7ff17a765a9a3d4c77cc", mod_consts.const_str_digest_2fa81b7188be7ff17a765a9a3d4c77cc);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_2fa81b7188be7ff17a765a9a3d4c77cc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_193f2681e00fe1a919853c99498c3d72", mod_consts.const_str_digest_193f2681e00fe1a919853c99498c3d72);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_193f2681e00fe1a919853c99498c3d72);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DeprecationWarning", mod_consts.const_str_plain_DeprecationWarning);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_DeprecationWarning);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_category_tuple", mod_consts.const_tuple_str_plain_category_tuple);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_category_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_str", mod_consts.const_str_plain_str);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_str);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_25b1c1cb155ac8863379ffde01fbdc98", mod_consts.const_str_digest_25b1c1cb155ac8863379ffde01fbdc98);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_25b1c1cb155ac8863379ffde01fbdc98);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encode", mod_consts.const_str_plain_encode);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_latin1_tuple", mod_consts.const_tuple_str_plain_latin1_tuple);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_latin1_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1cc758ff2b09f90388f1c2fc8a8fecdc", mod_consts.const_str_digest_1cc758ff2b09f90388f1c2fc8a8fecdc);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_1cc758ff2b09f90388f1c2fc8a8fecdc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_to_native_string", mod_consts.const_str_plain_to_native_string);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_native_string);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_b64encode", mod_consts.const_str_plain_b64encode);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_b64encode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_chr_58", mod_consts.const_bytes_chr_58);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_bytes_chr_58);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_strip", mod_consts.const_str_plain_strip);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_strip);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_919a2045e823b128b54cfd720f73e3bf", mod_consts.const_str_digest_919a2045e823b128b54cfd720f73e3bf);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_919a2045e823b128b54cfd720f73e3bf);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_507ca0310b2f37ea4b2584d4cca02846", mod_consts.const_str_digest_507ca0310b2f37ea4b2584d4cca02846);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_507ca0310b2f37ea4b2584d4cca02846);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_username", mod_consts.const_str_plain_username);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_username);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_password", mod_consts.const_str_plain_password);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_password);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__basic_auth_str", mod_consts.const_str_plain__basic_auth_str);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain__basic_auth_str);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_headers", mod_consts.const_str_plain_headers);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_headers);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Authorization", mod_consts.const_str_plain_Authorization);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_Authorization);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a9249a74248e02fdfcaa84b4618a14ce", mod_consts.const_str_digest_a9249a74248e02fdfcaa84b4618a14ce);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_a9249a74248e02fdfcaa84b4618a14ce);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_threading", mod_consts.const_str_plain_threading);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_threading);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_local", mod_consts.const_str_plain_local);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_local);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__thread_local", mod_consts.const_str_plain__thread_local);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain__thread_local);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_init", mod_consts.const_str_plain_init);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_init);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_last_nonce", mod_consts.const_str_plain_last_nonce);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_last_nonce);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_nonce_count", mod_consts.const_str_plain_nonce_count);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_nonce_count);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chal", mod_consts.const_str_plain_chal);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_chal);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pos", mod_consts.const_str_plain_pos);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_pos);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_num_401_calls", mod_consts.const_str_plain_num_401_calls);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_num_401_calls);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_realm", mod_consts.const_str_plain_realm);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_realm);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_nonce", mod_consts.const_str_plain_nonce);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_nonce);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_qop_tuple", mod_consts.const_tuple_str_plain_qop_tuple);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_qop_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_algorithm_tuple", mod_consts.const_tuple_str_plain_algorithm_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_algorithm_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_opaque_tuple", mod_consts.const_tuple_str_plain_opaque_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_opaque_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MD5", mod_consts.const_str_plain_MD5);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_MD5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_upper", mod_consts.const_str_plain_upper);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_upper);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a49a175904e70dd9f5dc0f52dbebbfdb", mod_consts.const_str_digest_a49a175904e70dd9f5dc0f52dbebbfdb);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_a49a175904e70dd9f5dc0f52dbebbfdb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_dfe92b97e889863572498f01b277b9e3", mod_consts.const_dict_dfe92b97e889863572498f01b277b9e3);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_dict_dfe92b97e889863572498f01b277b9e3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_md5_utf8", mod_consts.const_str_plain_md5_utf8);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_md5_utf8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_437d9d9283e7705920d4361a76539982", mod_consts.const_str_digest_437d9d9283e7705920d4361a76539982);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_437d9d9283e7705920d4361a76539982);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SHA", mod_consts.const_str_plain_SHA);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHA);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sha_utf8", mod_consts.const_str_plain_sha_utf8);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_sha_utf8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a48752b2d8c32906209a579a59eb860e", mod_consts.const_str_digest_a48752b2d8c32906209a579a59eb860e);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_a48752b2d8c32906209a579a59eb860e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1e080f858ef601c43605cc71a556333d", mod_consts.const_str_digest_1e080f858ef601c43605cc71a556333d);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_1e080f858ef601c43605cc71a556333d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sha256_utf8", mod_consts.const_str_plain_sha256_utf8);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_sha256_utf8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_065e009455d4c4ad1356e1bac835c3a1", mod_consts.const_str_digest_065e009455d4c4ad1356e1bac835c3a1);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_065e009455d4c4ad1356e1bac835c3a1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_91012c747d1826684889b0187ce7d184", mod_consts.const_str_digest_91012c747d1826684889b0187ce7d184);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_91012c747d1826684889b0187ce7d184);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sha512_utf8", mod_consts.const_str_plain_sha512_utf8);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_sha512_utf8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0ca141503f179b28e3129781569b5edb", mod_consts.const_str_digest_0ca141503f179b28e3129781569b5edb);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_0ca141503f179b28e3129781569b5edb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_4df8e97ccdaf83df99d4545b1018ac36", mod_consts.const_dict_4df8e97ccdaf83df99d4545b1018ac36);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_dict_4df8e97ccdaf83df99d4545b1018ac36);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KD", mod_consts.const_str_plain_KD);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_KD);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6e0275adf61cf8d2c4819e377fa99004", mod_consts.const_str_digest_6e0275adf61cf8d2c4819e377fa99004);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_6e0275adf61cf8d2c4819e377fa99004);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urlparse", mod_consts.const_str_plain_urlparse);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_urlparse);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_query", mod_consts.const_str_plain_query);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_query);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_63", mod_consts.const_str_chr_63);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_chr_63);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_58", mod_consts.const_str_chr_58);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_chr_58);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_08x", mod_consts.const_str_plain_08x);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_08x);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple", mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_time", mod_consts.const_str_plain_time);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_time);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ctime", mod_consts.const_str_plain_ctime);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_ctime);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urandom", mod_consts.const_str_plain_urandom);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_urandom);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_8_tuple", mod_consts.const_tuple_int_pos_8_tuple);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_8_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hashlib", mod_consts.const_str_plain_hashlib);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_hashlib);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sha1", mod_consts.const_str_plain_sha1);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_sha1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_false_tuple", mod_consts.const_tuple_false_tuple);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_usedforsecurity_tuple", mod_consts.const_tuple_str_plain_usedforsecurity_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_usedforsecurity_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hexdigest", mod_consts.const_str_plain_hexdigest);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_hexdigest);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_none_int_pos_16_none", mod_consts.const_slice_none_int_pos_16_none);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_16_none);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_auth", mod_consts.const_str_plain_auth);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_auth);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_chr_44_tuple", mod_consts.const_tuple_str_chr_44_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_44_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_623a2ce444ab4ec11ad18cfd10bc4d2d", mod_consts.const_str_digest_623a2ce444ab4ec11ad18cfd10bc4d2d);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_623a2ce444ab4ec11ad18cfd10bc4d2d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2ac5532e10d9583c2cc7c6c414c300b6", mod_consts.const_str_digest_2ac5532e10d9583c2cc7c6c414c300b6);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_2ac5532e10d9583c2cc7c6c414c300b6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e5d0752e44d467c0b559ec4a161055d6", mod_consts.const_str_digest_e5d0752e44d467c0b559ec4a161055d6);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_e5d0752e44d467c0b559ec4a161055d6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d7138a62ecd13ea5a5e4c33f52e3ec2a", mod_consts.const_str_digest_d7138a62ecd13ea5a5e4c33f52e3ec2a);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_digest_d7138a62ecd13ea5a5e4c33f52e3ec2a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ffa61441fed506fa8f69820e74074f15", mod_consts.const_str_digest_ffa61441fed506fa8f69820e74074f15);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_ffa61441fed506fa8f69820e74074f15);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4613cdb6b72b3a36e66f64fc3b58e823", mod_consts.const_str_digest_4613cdb6b72b3a36e66f64fc3b58e823);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_4613cdb6b72b3a36e66f64fc3b58e823);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_34", mod_consts.const_str_chr_34);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_chr_34);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b46abab1c7bdcc1966bf9145c77483c3", mod_consts.const_str_digest_b46abab1c7bdcc1966bf9145c77483c3);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_b46abab1c7bdcc1966bf9145c77483c3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2fa00f37b80386ed0ac27f3464c47dbc", mod_consts.const_str_digest_2fa00f37b80386ed0ac27f3464c47dbc);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_2fa00f37b80386ed0ac27f3464c47dbc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_58d9cd6332ab69dc380fce6df37d2be1", mod_consts.const_str_digest_58d9cd6332ab69dc380fce6df37d2be1);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_58d9cd6332ab69dc380fce6df37d2be1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cd5eaaaed24cd1f165dd61b995c48c9e", mod_consts.const_str_digest_cd5eaaaed24cd1f165dd61b995c48c9e);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_cd5eaaaed24cd1f165dd61b995c48c9e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_14534a3b74d8d6fed882c6002d4fcddb", mod_consts.const_str_digest_14534a3b74d8d6fed882c6002d4fcddb);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_14534a3b74d8d6fed882c6002d4fcddb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fc86f84c4a8b87e858a9027ce216def3", mod_consts.const_str_digest_fc86f84c4a8b87e858a9027ce216def3);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_fc86f84c4a8b87e858a9027ce216def3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_md5", mod_consts.const_str_plain_md5);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_md5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sha256", mod_consts.const_str_plain_sha256);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_sha256);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sha512", mod_consts.const_str_plain_sha512);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_sha512);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hash_utf8", mod_consts.const_str_plain_hash_utf8);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_hash_utf8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_redirect", mod_consts.const_str_plain_is_redirect);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_redirect);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5bf0e52ad3af9d76b6e6716841011fd0", mod_consts.const_str_digest_5bf0e52ad3af9d76b6e6716841011fd0);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_5bf0e52ad3af9d76b6e6716841011fd0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_status_code", mod_consts.const_str_plain_status_code);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_status_code);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_400", mod_consts.const_int_pos_400);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_int_pos_400);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_500", mod_consts.const_int_pos_500);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_int_pos_500);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_request", mod_consts.const_str_plain_request);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_request);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_body", mod_consts.const_str_plain_body);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_body);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_seek", mod_consts.const_str_plain_seek);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_seek);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_a88adb7a245cfc6a39c69917da364c05_str_empty_tuple", mod_consts.const_tuple_str_digest_a88adb7a245cfc6a39c69917da364c05_str_empty_tuple);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a88adb7a245cfc6a39c69917da364c05_str_empty_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_digest", mod_consts.const_str_plain_digest);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_digest);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_re", mod_consts.const_str_plain_re);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IGNORECASE", mod_consts.const_str_plain_IGNORECASE);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_IGNORECASE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_58295a7b2ee00e12bd235bdf35e32b18_tuple", mod_consts.const_tuple_str_digest_58295a7b2ee00e12bd235bdf35e32b18_tuple);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_58295a7b2ee00e12bd235bdf35e32b18_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_flags_tuple", mod_consts.const_tuple_str_plain_flags_tuple);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_flags_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_parse_dict_header", mod_consts.const_str_plain_parse_dict_header);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse_dict_header);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sub", mod_consts.const_str_plain_sub);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_sub);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_1_tuple", mod_consts.const_tuple_int_pos_1_tuple);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_count_tuple", mod_consts.const_tuple_str_plain_count_tuple);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_count_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_content", mod_consts.const_str_plain_content);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_content);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_copy", mod_consts.const_str_plain_copy);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cast", mod_consts.const_str_plain_cast);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_cast);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CookieJar", mod_consts.const_str_plain_CookieJar);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_CookieJar);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__cookies", mod_consts.const_str_plain__cookies);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain__cookies);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_extract_cookies_to_jar", mod_consts.const_str_plain_extract_cookies_to_jar);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_extract_cookies_to_jar);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_raw", mod_consts.const_str_plain_raw);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_raw);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_prepare_cookies", mod_consts.const_str_plain_prepare_cookies);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_prepare_cookies);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_build_digest_header", mod_consts.const_str_plain_build_digest_header);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_build_digest_header);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_method", mod_consts.const_str_plain_method);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_method);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_url", mod_consts.const_str_plain_url);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_url);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connection", mod_consts.const_str_plain_connection);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_connection);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_history", mod_consts.const_str_plain_history);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_history);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_append", mod_consts.const_str_plain_append);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a94457af499547f6880f8330f568dc08", mod_consts.const_str_digest_a94457af499547f6880f8330f568dc08);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_digest_a94457af499547f6880f8330f568dc08);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_init_per_thread_state", mod_consts.const_str_plain_init_per_thread_state);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_init_per_thread_state);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tell", mod_consts.const_str_plain_tell);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_tell);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_hook", mod_consts.const_str_plain_register_hook);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_register_hook);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_response", mod_consts.const_str_plain_response);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_response);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_handle_401", mod_consts.const_str_plain_handle_401);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_handle_401);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_handle_redirect", mod_consts.const_str_plain_handle_redirect);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_handle_redirect);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b1d3fff4dbaa2e3b433891b66d01f28a", mod_consts.const_str_digest_b1d3fff4dbaa2e3b433891b66d01f28a);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_b1d3fff4dbaa2e3b433891b66d01f28a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_os", mod_consts.const_str_plain_os);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_base64", mod_consts.const_str_plain_base64);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_base64);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_b64encode_tuple", mod_consts.const_tuple_str_plain_b64encode_tuple);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_b64encode_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TYPE_CHECKING", mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Any", mod_consts.const_str_plain_Any);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Final", mod_consts.const_str_plain_Final);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_Final);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_overload", mod_consts.const_str_plain_overload);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_overload);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__internal_utils", mod_consts.const_str_plain__internal_utils);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain__internal_utils);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_to_native_string_tuple", mod_consts.const_tuple_str_plain_to_native_string_tuple);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_to_native_string_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_compat", mod_consts.const_str_plain_compat);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_compat);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_basestring_str_plain_str_str_plain_urlparse_tuple", mod_consts.const_tuple_str_plain_basestring_str_plain_str_str_plain_urlparse_tuple);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_basestring_str_plain_str_str_plain_urlparse_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cookies", mod_consts.const_str_plain_cookies);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_cookies);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_extract_cookies_to_jar_tuple", mod_consts.const_tuple_str_plain_extract_cookies_to_jar_tuple);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_extract_cookies_to_jar_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_utils", mod_consts.const_str_plain_utils);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_utils);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_parse_dict_header_tuple", mod_consts.const_tuple_str_plain_parse_dict_header_tuple);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_parse_dict_header_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5d735bc80d16f0fedbdde78344a2d394", mod_consts.const_str_digest_5d735bc80d16f0fedbdde78344a2d394);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_digest_5d735bc80d16f0fedbdde78344a2d394);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CONTENT_TYPE_FORM_URLENCODED", mod_consts.const_str_plain_CONTENT_TYPE_FORM_URLENCODED);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_CONTENT_TYPE_FORM_URLENCODED);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e1ae02aba66d45ac9d7f070694408d22", mod_consts.const_str_digest_e1ae02aba66d45ac9d7f070694408d22);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_digest_e1ae02aba66d45ac9d7f070694408d22);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CONTENT_TYPE_MULTI_PART", mod_consts.const_str_plain_CONTENT_TYPE_MULTI_PART);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_CONTENT_TYPE_MULTI_PART);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_02787d4f1dca00f3ab9b7da6192fcb1b", mod_consts.const_dict_02787d4f1dca00f3ab9b7da6192fcb1b);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_dict_02787d4f1dca00f3ab9b7da6192fcb1b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_67889f3b65748dbd83938a67635b28e4", mod_consts.const_str_digest_67889f3b65748dbd83938a67635b28e4);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_digest_67889f3b65748dbd83938a67635b28e4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2fc3f96e0216dbc7dcd34461a1c4d2ee", mod_consts.const_str_digest_2fc3f96e0216dbc7dcd34461a1c4d2ee);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_digest_2fc3f96e0216dbc7dcd34461a1c4d2ee);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AuthBase", mod_consts.const_str_plain_AuthBase);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_AuthBase);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_78", mod_consts.const_int_pos_78);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_int_pos_78);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_573e2578e366ea0ed6c728880b7d15d1", mod_consts.const_dict_573e2578e366ea0ed6c728880b7d15d1);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_dict_573e2578e366ea0ed6c728880b7d15d1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___call__", mod_consts.const_str_plain___call__);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain___call__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_60aadb6b5e6f7210d6b0e13a6cd7dbcb", mod_consts.const_str_digest_60aadb6b5e6f7210d6b0e13a6cd7dbcb);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_digest_60aadb6b5e6f7210d6b0e13a6cd7dbcb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTPBasicAuth", mod_consts.const_str_plain_HTTPBasicAuth);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPBasicAuth);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a664f80c1075d8cfb85f49618afc684b", mod_consts.const_str_digest_a664f80c1075d8cfb85f49618afc684b);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_digest_a664f80c1075d8cfb85f49618afc684b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_85", mod_consts.const_int_pos_85);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_int_pos_85);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1163c901069db0d0116b943f228d52f6", mod_consts.const_str_digest_1163c901069db0d0116b943f228d52f6);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_digest_1163c901069db0d0116b943f228d52f6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_83fde044930bbbaeb389afbaba80558e", mod_consts.const_dict_83fde044930bbbaeb389afbaba80558e);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_dict_83fde044930bbbaeb389afbaba80558e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_51abe40552a340600cafb395a2df7065", mod_consts.const_str_digest_51abe40552a340600cafb395a2df7065);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_digest_51abe40552a340600cafb395a2df7065);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_9dd9bd388f9d0f4f6c0775e174e3001d", mod_consts.const_dict_9dd9bd388f9d0f4f6c0775e174e3001d);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_dict_9dd9bd388f9d0f4f6c0775e174e3001d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_dbd0f1c85e6238fe0274a9204f12079b", mod_consts.const_dict_dbd0f1c85e6238fe0274a9204f12079b);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_dict_dbd0f1c85e6238fe0274a9204f12079b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_48da6b0499a992d8a0861b3c7131d274", mod_consts.const_dict_48da6b0499a992d8a0861b3c7131d274);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_dict_48da6b0499a992d8a0861b3c7131d274);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___eq__", mod_consts.const_str_plain___eq__);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain___eq__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7565d3f493b69797b6a3c9c487eadc9f", mod_consts.const_str_digest_7565d3f493b69797b6a3c9c487eadc9f);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_digest_7565d3f493b69797b6a3c9c487eadc9f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_6c1f26bc8122574abd325b774c634b1a", mod_consts.const_dict_6c1f26bc8122574abd325b774c634b1a);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_dict_6c1f26bc8122574abd325b774c634b1a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___ne__", mod_consts.const_str_plain___ne__);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_plain___ne__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cb06648d43a209f35d822642f76d8852", mod_consts.const_str_digest_cb06648d43a209f35d822642f76d8852);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_digest_cb06648d43a209f35d822642f76d8852);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f3a7a1ca53a484562486747f6ddca3a9", mod_consts.const_str_digest_f3a7a1ca53a484562486747f6ddca3a9);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_digest_f3a7a1ca53a484562486747f6ddca3a9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_username_str_plain_password_tuple", mod_consts.const_tuple_str_plain_username_str_plain_password_tuple);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_username_str_plain_password_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTPProxyAuth", mod_consts.const_str_plain_HTTPProxyAuth);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPProxyAuth);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3267db0b9e319da1a85ef722557dd6fe", mod_consts.const_str_digest_3267db0b9e319da1a85ef722557dd6fe);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_digest_3267db0b9e319da1a85ef722557dd6fe);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_116", mod_consts.const_int_pos_116);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_int_pos_116);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_128a37116d6d30cc1592bb98f4d24b46", mod_consts.const_str_digest_128a37116d6d30cc1592bb98f4d24b46);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_digest_128a37116d6d30cc1592bb98f4d24b46);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTPDigestAuth", mod_consts.const_str_plain_HTTPDigestAuth);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPDigestAuth);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_acf0af13ef75ff62ec9955ae4dcea3e9", mod_consts.const_str_digest_acf0af13ef75ff62ec9955ae4dcea3e9);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_digest_acf0af13ef75ff62ec9955ae4dcea3e9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_124", mod_consts.const_int_pos_124);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_int_pos_124);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_469a2477b7c3eb4d6a71b6319f7167dc", mod_consts.const_str_digest_469a2477b7c3eb4d6a71b6319f7167dc);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_digest_469a2477b7c3eb4d6a71b6319f7167dc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cbfbecd1bf29edfce9bd6e2514e536fa", mod_consts.const_str_digest_cbfbecd1bf29edfce9bd6e2514e536fa);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_digest_cbfbecd1bf29edfce9bd6e2514e536fa);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a", mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ee22ae99a5537f5b922bb4b122196ae7", mod_consts.const_str_digest_ee22ae99a5537f5b922bb4b122196ae7);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_digest_ee22ae99a5537f5b922bb4b122196ae7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb", mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_37d3a2307e31335fa61f05d3486fd568", mod_consts.const_str_digest_37d3a2307e31335fa61f05d3486fd568);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_digest_37d3a2307e31335fa61f05d3486fd568);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_051b5ffe00d30cdb70e4e7d90f98c0bc", mod_consts.const_dict_051b5ffe00d30cdb70e4e7d90f98c0bc);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_dict_051b5ffe00d30cdb70e4e7d90f98c0bc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_67bc2e2875f2a676ae8e8f2595c69cad", mod_consts.const_str_digest_67bc2e2875f2a676ae8e8f2595c69cad);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_digest_67bc2e2875f2a676ae8e8f2595c69cad);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c0b4aa56e27262dae2b7b89241e2e98a", mod_consts.const_dict_c0b4aa56e27262dae2b7b89241e2e98a);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_dict_c0b4aa56e27262dae2b7b89241e2e98a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7c3d6be840d0505baea6486b3a2fb076", mod_consts.const_str_digest_7c3d6be840d0505baea6486b3a2fb076);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_digest_7c3d6be840d0505baea6486b3a2fb076);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_6edc7e34c97f956d56a100ccda717c41", mod_consts.const_dict_6edc7e34c97f956d56a100ccda717c41);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_dict_6edc7e34c97f956d56a100ccda717c41);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_aa04245735e0a296f4eee2c81c6c24b4", mod_consts.const_str_digest_aa04245735e0a296f4eee2c81c6c24b4);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_digest_aa04245735e0a296f4eee2c81c6c24b4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7a006474c4967997a79cedaecd602a45", mod_consts.const_str_digest_7a006474c4967997a79cedaecd602a45);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_digest_7a006474c4967997a79cedaecd602a45);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c3a9a47fda757d3a3b31995c197a305a", mod_consts.const_str_digest_c3a9a47fda757d3a3b31995c197a305a);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_digest_c3a9a47fda757d3a3b31995c197a305a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1086311fbf6e3245df872c941ed6e8ad", mod_consts.const_str_digest_1086311fbf6e3245df872c941ed6e8ad);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_str_digest_1086311fbf6e3245df872c941ed6e8ad);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a67d05bb61c2ad13d89e6487a4eb1ffd_tuple", mod_consts.const_tuple_a67d05bb61c2ad13d89e6487a4eb1ffd_tuple);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_tuple_a67d05bb61c2ad13d89e6487a4eb1ffd_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f1891b89ee1ab5d77e732590c823b548", mod_consts.const_str_digest_f1891b89ee1ab5d77e732590c823b548);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_str_digest_f1891b89ee1ab5d77e732590c823b548);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3ae56c31f64e988caab68621b896b25f", mod_consts.const_str_digest_3ae56c31f64e988caab68621b896b25f);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_str_digest_3ae56c31f64e988caab68621b896b25f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_s_str_plain_d_str_plain_hash_utf8_tuple", mod_consts.const_tuple_str_plain_s_str_plain_d_str_plain_hash_utf8_tuple);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_s_str_plain_d_str_plain_hash_utf8_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_hash_utf8_tuple", mod_consts.const_tuple_str_plain_hash_utf8_tuple);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_hash_utf8_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_r_tuple", mod_consts.const_tuple_str_plain_self_str_plain_r_tuple);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_r_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_778a306ec20cc594d1aa1f0319397dff_tuple", mod_consts.const_tuple_778a306ec20cc594d1aa1f0319397dff_tuple);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_tuple_778a306ec20cc594d1aa1f0319397dff_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_other_tuple", mod_consts.const_tuple_str_plain_self_str_plain_other_tuple);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple", mod_consts.const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_username_str_plain_password_str_plain_authstr_tuple", mod_consts.const_tuple_str_plain_username_str_plain_password_str_plain_authstr_tuple);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_username_str_plain_password_str_plain_authstr_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_136046813187593286870b153208de90_tuple", mod_consts.const_tuple_136046813187593286870b153208de90_tuple);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_tuple_136046813187593286870b153208de90_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_6662fb62eaa957f1c7da1e87f5a17362_tuple", mod_consts.const_tuple_6662fb62eaa957f1c7da1e87f5a17362_tuple);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_tuple_6662fb62eaa957f1c7da1e87f5a17362_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_r_str_plain_kwargs_tuple", mod_consts.const_tuple_str_plain_self_str_plain_r_str_plain_kwargs_tuple);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_r_str_plain_kwargs_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_x_tuple", mod_consts.const_tuple_str_plain_x_tuple);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_tuple);
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
void checkModuleConstants_requests$auth(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_basestring", mod_consts.const_str_plain_basestring);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_basestring) && "mod_consts.const_str_plain_basestring");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_warnings", mod_consts.const_str_plain_warnings);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_warnings) && "mod_consts.const_str_plain_warnings");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_warn", mod_consts.const_str_plain_warn);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_warn) && "mod_consts.const_str_plain_warn");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2fa81b7188be7ff17a765a9a3d4c77cc", mod_consts.const_str_digest_2fa81b7188be7ff17a765a9a3d4c77cc);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_2fa81b7188be7ff17a765a9a3d4c77cc) && "mod_consts.const_str_digest_2fa81b7188be7ff17a765a9a3d4c77cc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_193f2681e00fe1a919853c99498c3d72", mod_consts.const_str_digest_193f2681e00fe1a919853c99498c3d72);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_193f2681e00fe1a919853c99498c3d72) && "mod_consts.const_str_digest_193f2681e00fe1a919853c99498c3d72");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DeprecationWarning", mod_consts.const_str_plain_DeprecationWarning);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_DeprecationWarning) && "mod_consts.const_str_plain_DeprecationWarning");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_category_tuple", mod_consts.const_tuple_str_plain_category_tuple);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_category_tuple) && "mod_consts.const_tuple_str_plain_category_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_str", mod_consts.const_str_plain_str);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_str) && "mod_consts.const_str_plain_str");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_25b1c1cb155ac8863379ffde01fbdc98", mod_consts.const_str_digest_25b1c1cb155ac8863379ffde01fbdc98);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_25b1c1cb155ac8863379ffde01fbdc98) && "mod_consts.const_str_digest_25b1c1cb155ac8863379ffde01fbdc98");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encode", mod_consts.const_str_plain_encode);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode) && "mod_consts.const_str_plain_encode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_latin1_tuple", mod_consts.const_tuple_str_plain_latin1_tuple);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_latin1_tuple) && "mod_consts.const_tuple_str_plain_latin1_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1cc758ff2b09f90388f1c2fc8a8fecdc", mod_consts.const_str_digest_1cc758ff2b09f90388f1c2fc8a8fecdc);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_1cc758ff2b09f90388f1c2fc8a8fecdc) && "mod_consts.const_str_digest_1cc758ff2b09f90388f1c2fc8a8fecdc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_to_native_string", mod_consts.const_str_plain_to_native_string);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_native_string) && "mod_consts.const_str_plain_to_native_string");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_b64encode", mod_consts.const_str_plain_b64encode);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_b64encode) && "mod_consts.const_str_plain_b64encode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_chr_58", mod_consts.const_bytes_chr_58);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_bytes_chr_58) && "mod_consts.const_bytes_chr_58");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_strip", mod_consts.const_str_plain_strip);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_strip) && "mod_consts.const_str_plain_strip");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_919a2045e823b128b54cfd720f73e3bf", mod_consts.const_str_digest_919a2045e823b128b54cfd720f73e3bf);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_919a2045e823b128b54cfd720f73e3bf) && "mod_consts.const_str_digest_919a2045e823b128b54cfd720f73e3bf");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_507ca0310b2f37ea4b2584d4cca02846", mod_consts.const_str_digest_507ca0310b2f37ea4b2584d4cca02846);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_507ca0310b2f37ea4b2584d4cca02846) && "mod_consts.const_str_digest_507ca0310b2f37ea4b2584d4cca02846");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_username", mod_consts.const_str_plain_username);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_username) && "mod_consts.const_str_plain_username");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_password", mod_consts.const_str_plain_password);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_password) && "mod_consts.const_str_plain_password");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__basic_auth_str", mod_consts.const_str_plain__basic_auth_str);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain__basic_auth_str) && "mod_consts.const_str_plain__basic_auth_str");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_headers", mod_consts.const_str_plain_headers);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_headers) && "mod_consts.const_str_plain_headers");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Authorization", mod_consts.const_str_plain_Authorization);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_Authorization) && "mod_consts.const_str_plain_Authorization");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a9249a74248e02fdfcaa84b4618a14ce", mod_consts.const_str_digest_a9249a74248e02fdfcaa84b4618a14ce);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_a9249a74248e02fdfcaa84b4618a14ce) && "mod_consts.const_str_digest_a9249a74248e02fdfcaa84b4618a14ce");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_threading", mod_consts.const_str_plain_threading);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_threading) && "mod_consts.const_str_plain_threading");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_local", mod_consts.const_str_plain_local);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_local) && "mod_consts.const_str_plain_local");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__thread_local", mod_consts.const_str_plain__thread_local);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain__thread_local) && "mod_consts.const_str_plain__thread_local");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_init", mod_consts.const_str_plain_init);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_init) && "mod_consts.const_str_plain_init");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_last_nonce", mod_consts.const_str_plain_last_nonce);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_last_nonce) && "mod_consts.const_str_plain_last_nonce");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_nonce_count", mod_consts.const_str_plain_nonce_count);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_nonce_count) && "mod_consts.const_str_plain_nonce_count");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chal", mod_consts.const_str_plain_chal);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_chal) && "mod_consts.const_str_plain_chal");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pos", mod_consts.const_str_plain_pos);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_pos) && "mod_consts.const_str_plain_pos");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_num_401_calls", mod_consts.const_str_plain_num_401_calls);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_num_401_calls) && "mod_consts.const_str_plain_num_401_calls");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_realm", mod_consts.const_str_plain_realm);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_realm) && "mod_consts.const_str_plain_realm");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_nonce", mod_consts.const_str_plain_nonce);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_nonce) && "mod_consts.const_str_plain_nonce");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_qop_tuple", mod_consts.const_tuple_str_plain_qop_tuple);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_qop_tuple) && "mod_consts.const_tuple_str_plain_qop_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_algorithm_tuple", mod_consts.const_tuple_str_plain_algorithm_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_algorithm_tuple) && "mod_consts.const_tuple_str_plain_algorithm_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_opaque_tuple", mod_consts.const_tuple_str_plain_opaque_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_opaque_tuple) && "mod_consts.const_tuple_str_plain_opaque_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MD5", mod_consts.const_str_plain_MD5);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_MD5) && "mod_consts.const_str_plain_MD5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_upper", mod_consts.const_str_plain_upper);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_upper) && "mod_consts.const_str_plain_upper");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a49a175904e70dd9f5dc0f52dbebbfdb", mod_consts.const_str_digest_a49a175904e70dd9f5dc0f52dbebbfdb);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_a49a175904e70dd9f5dc0f52dbebbfdb) && "mod_consts.const_str_digest_a49a175904e70dd9f5dc0f52dbebbfdb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_dfe92b97e889863572498f01b277b9e3", mod_consts.const_dict_dfe92b97e889863572498f01b277b9e3);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_dict_dfe92b97e889863572498f01b277b9e3) && "mod_consts.const_dict_dfe92b97e889863572498f01b277b9e3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_md5_utf8", mod_consts.const_str_plain_md5_utf8);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_md5_utf8) && "mod_consts.const_str_plain_md5_utf8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_437d9d9283e7705920d4361a76539982", mod_consts.const_str_digest_437d9d9283e7705920d4361a76539982);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_437d9d9283e7705920d4361a76539982) && "mod_consts.const_str_digest_437d9d9283e7705920d4361a76539982");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SHA", mod_consts.const_str_plain_SHA);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHA) && "mod_consts.const_str_plain_SHA");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sha_utf8", mod_consts.const_str_plain_sha_utf8);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_sha_utf8) && "mod_consts.const_str_plain_sha_utf8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a48752b2d8c32906209a579a59eb860e", mod_consts.const_str_digest_a48752b2d8c32906209a579a59eb860e);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_a48752b2d8c32906209a579a59eb860e) && "mod_consts.const_str_digest_a48752b2d8c32906209a579a59eb860e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1e080f858ef601c43605cc71a556333d", mod_consts.const_str_digest_1e080f858ef601c43605cc71a556333d);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_1e080f858ef601c43605cc71a556333d) && "mod_consts.const_str_digest_1e080f858ef601c43605cc71a556333d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sha256_utf8", mod_consts.const_str_plain_sha256_utf8);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_sha256_utf8) && "mod_consts.const_str_plain_sha256_utf8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_065e009455d4c4ad1356e1bac835c3a1", mod_consts.const_str_digest_065e009455d4c4ad1356e1bac835c3a1);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_065e009455d4c4ad1356e1bac835c3a1) && "mod_consts.const_str_digest_065e009455d4c4ad1356e1bac835c3a1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_91012c747d1826684889b0187ce7d184", mod_consts.const_str_digest_91012c747d1826684889b0187ce7d184);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_91012c747d1826684889b0187ce7d184) && "mod_consts.const_str_digest_91012c747d1826684889b0187ce7d184");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sha512_utf8", mod_consts.const_str_plain_sha512_utf8);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_sha512_utf8) && "mod_consts.const_str_plain_sha512_utf8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0ca141503f179b28e3129781569b5edb", mod_consts.const_str_digest_0ca141503f179b28e3129781569b5edb);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_0ca141503f179b28e3129781569b5edb) && "mod_consts.const_str_digest_0ca141503f179b28e3129781569b5edb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_4df8e97ccdaf83df99d4545b1018ac36", mod_consts.const_dict_4df8e97ccdaf83df99d4545b1018ac36);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_dict_4df8e97ccdaf83df99d4545b1018ac36) && "mod_consts.const_dict_4df8e97ccdaf83df99d4545b1018ac36");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KD", mod_consts.const_str_plain_KD);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_KD) && "mod_consts.const_str_plain_KD");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6e0275adf61cf8d2c4819e377fa99004", mod_consts.const_str_digest_6e0275adf61cf8d2c4819e377fa99004);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_6e0275adf61cf8d2c4819e377fa99004) && "mod_consts.const_str_digest_6e0275adf61cf8d2c4819e377fa99004");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urlparse", mod_consts.const_str_plain_urlparse);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_urlparse) && "mod_consts.const_str_plain_urlparse");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_query", mod_consts.const_str_plain_query);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_query) && "mod_consts.const_str_plain_query");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_63", mod_consts.const_str_chr_63);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_chr_63) && "mod_consts.const_str_chr_63");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_58", mod_consts.const_str_chr_58);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_chr_58) && "mod_consts.const_str_chr_58");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_08x", mod_consts.const_str_plain_08x);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_08x) && "mod_consts.const_str_plain_08x");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple", mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple) && "mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_time", mod_consts.const_str_plain_time);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_time) && "mod_consts.const_str_plain_time");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ctime", mod_consts.const_str_plain_ctime);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_ctime) && "mod_consts.const_str_plain_ctime");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urandom", mod_consts.const_str_plain_urandom);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_urandom) && "mod_consts.const_str_plain_urandom");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_8_tuple", mod_consts.const_tuple_int_pos_8_tuple);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_8_tuple) && "mod_consts.const_tuple_int_pos_8_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hashlib", mod_consts.const_str_plain_hashlib);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_hashlib) && "mod_consts.const_str_plain_hashlib");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sha1", mod_consts.const_str_plain_sha1);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_sha1) && "mod_consts.const_str_plain_sha1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_false_tuple", mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple) && "mod_consts.const_tuple_false_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_usedforsecurity_tuple", mod_consts.const_tuple_str_plain_usedforsecurity_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_usedforsecurity_tuple) && "mod_consts.const_tuple_str_plain_usedforsecurity_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hexdigest", mod_consts.const_str_plain_hexdigest);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_hexdigest) && "mod_consts.const_str_plain_hexdigest");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_none_int_pos_16_none", mod_consts.const_slice_none_int_pos_16_none);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_16_none) && "mod_consts.const_slice_none_int_pos_16_none");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_auth", mod_consts.const_str_plain_auth);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_auth) && "mod_consts.const_str_plain_auth");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_chr_44_tuple", mod_consts.const_tuple_str_chr_44_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_44_tuple) && "mod_consts.const_tuple_str_chr_44_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_623a2ce444ab4ec11ad18cfd10bc4d2d", mod_consts.const_str_digest_623a2ce444ab4ec11ad18cfd10bc4d2d);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_623a2ce444ab4ec11ad18cfd10bc4d2d) && "mod_consts.const_str_digest_623a2ce444ab4ec11ad18cfd10bc4d2d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2ac5532e10d9583c2cc7c6c414c300b6", mod_consts.const_str_digest_2ac5532e10d9583c2cc7c6c414c300b6);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_2ac5532e10d9583c2cc7c6c414c300b6) && "mod_consts.const_str_digest_2ac5532e10d9583c2cc7c6c414c300b6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e5d0752e44d467c0b559ec4a161055d6", mod_consts.const_str_digest_e5d0752e44d467c0b559ec4a161055d6);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_e5d0752e44d467c0b559ec4a161055d6) && "mod_consts.const_str_digest_e5d0752e44d467c0b559ec4a161055d6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d7138a62ecd13ea5a5e4c33f52e3ec2a", mod_consts.const_str_digest_d7138a62ecd13ea5a5e4c33f52e3ec2a);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_digest_d7138a62ecd13ea5a5e4c33f52e3ec2a) && "mod_consts.const_str_digest_d7138a62ecd13ea5a5e4c33f52e3ec2a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ffa61441fed506fa8f69820e74074f15", mod_consts.const_str_digest_ffa61441fed506fa8f69820e74074f15);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_ffa61441fed506fa8f69820e74074f15) && "mod_consts.const_str_digest_ffa61441fed506fa8f69820e74074f15");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4613cdb6b72b3a36e66f64fc3b58e823", mod_consts.const_str_digest_4613cdb6b72b3a36e66f64fc3b58e823);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_4613cdb6b72b3a36e66f64fc3b58e823) && "mod_consts.const_str_digest_4613cdb6b72b3a36e66f64fc3b58e823");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_34", mod_consts.const_str_chr_34);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_chr_34) && "mod_consts.const_str_chr_34");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b46abab1c7bdcc1966bf9145c77483c3", mod_consts.const_str_digest_b46abab1c7bdcc1966bf9145c77483c3);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_b46abab1c7bdcc1966bf9145c77483c3) && "mod_consts.const_str_digest_b46abab1c7bdcc1966bf9145c77483c3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2fa00f37b80386ed0ac27f3464c47dbc", mod_consts.const_str_digest_2fa00f37b80386ed0ac27f3464c47dbc);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_2fa00f37b80386ed0ac27f3464c47dbc) && "mod_consts.const_str_digest_2fa00f37b80386ed0ac27f3464c47dbc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_58d9cd6332ab69dc380fce6df37d2be1", mod_consts.const_str_digest_58d9cd6332ab69dc380fce6df37d2be1);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_58d9cd6332ab69dc380fce6df37d2be1) && "mod_consts.const_str_digest_58d9cd6332ab69dc380fce6df37d2be1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cd5eaaaed24cd1f165dd61b995c48c9e", mod_consts.const_str_digest_cd5eaaaed24cd1f165dd61b995c48c9e);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_cd5eaaaed24cd1f165dd61b995c48c9e) && "mod_consts.const_str_digest_cd5eaaaed24cd1f165dd61b995c48c9e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_14534a3b74d8d6fed882c6002d4fcddb", mod_consts.const_str_digest_14534a3b74d8d6fed882c6002d4fcddb);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_14534a3b74d8d6fed882c6002d4fcddb) && "mod_consts.const_str_digest_14534a3b74d8d6fed882c6002d4fcddb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fc86f84c4a8b87e858a9027ce216def3", mod_consts.const_str_digest_fc86f84c4a8b87e858a9027ce216def3);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_fc86f84c4a8b87e858a9027ce216def3) && "mod_consts.const_str_digest_fc86f84c4a8b87e858a9027ce216def3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_md5", mod_consts.const_str_plain_md5);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_md5) && "mod_consts.const_str_plain_md5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sha256", mod_consts.const_str_plain_sha256);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_sha256) && "mod_consts.const_str_plain_sha256");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sha512", mod_consts.const_str_plain_sha512);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_sha512) && "mod_consts.const_str_plain_sha512");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hash_utf8", mod_consts.const_str_plain_hash_utf8);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_hash_utf8) && "mod_consts.const_str_plain_hash_utf8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_redirect", mod_consts.const_str_plain_is_redirect);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_redirect) && "mod_consts.const_str_plain_is_redirect");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5bf0e52ad3af9d76b6e6716841011fd0", mod_consts.const_str_digest_5bf0e52ad3af9d76b6e6716841011fd0);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_5bf0e52ad3af9d76b6e6716841011fd0) && "mod_consts.const_str_digest_5bf0e52ad3af9d76b6e6716841011fd0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_status_code", mod_consts.const_str_plain_status_code);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_status_code) && "mod_consts.const_str_plain_status_code");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_400", mod_consts.const_int_pos_400);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_int_pos_400) && "mod_consts.const_int_pos_400");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_500", mod_consts.const_int_pos_500);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_int_pos_500) && "mod_consts.const_int_pos_500");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_request", mod_consts.const_str_plain_request);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_request) && "mod_consts.const_str_plain_request");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_body", mod_consts.const_str_plain_body);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_body) && "mod_consts.const_str_plain_body");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_seek", mod_consts.const_str_plain_seek);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_seek) && "mod_consts.const_str_plain_seek");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_a88adb7a245cfc6a39c69917da364c05_str_empty_tuple", mod_consts.const_tuple_str_digest_a88adb7a245cfc6a39c69917da364c05_str_empty_tuple);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a88adb7a245cfc6a39c69917da364c05_str_empty_tuple) && "mod_consts.const_tuple_str_digest_a88adb7a245cfc6a39c69917da364c05_str_empty_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_digest", mod_consts.const_str_plain_digest);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_digest) && "mod_consts.const_str_plain_digest");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_int_pos_2) && "mod_consts.const_int_pos_2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_re", mod_consts.const_str_plain_re);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_re) && "mod_consts.const_str_plain_re");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IGNORECASE", mod_consts.const_str_plain_IGNORECASE);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_IGNORECASE) && "mod_consts.const_str_plain_IGNORECASE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_58295a7b2ee00e12bd235bdf35e32b18_tuple", mod_consts.const_tuple_str_digest_58295a7b2ee00e12bd235bdf35e32b18_tuple);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_58295a7b2ee00e12bd235bdf35e32b18_tuple) && "mod_consts.const_tuple_str_digest_58295a7b2ee00e12bd235bdf35e32b18_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_flags_tuple", mod_consts.const_tuple_str_plain_flags_tuple);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_flags_tuple) && "mod_consts.const_tuple_str_plain_flags_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_parse_dict_header", mod_consts.const_str_plain_parse_dict_header);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse_dict_header) && "mod_consts.const_str_plain_parse_dict_header");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sub", mod_consts.const_str_plain_sub);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_sub) && "mod_consts.const_str_plain_sub");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_1_tuple", mod_consts.const_tuple_int_pos_1_tuple);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple) && "mod_consts.const_tuple_int_pos_1_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_count_tuple", mod_consts.const_tuple_str_plain_count_tuple);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_count_tuple) && "mod_consts.const_tuple_str_plain_count_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_content", mod_consts.const_str_plain_content);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_content) && "mod_consts.const_str_plain_content");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_copy", mod_consts.const_str_plain_copy);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy) && "mod_consts.const_str_plain_copy");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cast", mod_consts.const_str_plain_cast);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_cast) && "mod_consts.const_str_plain_cast");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CookieJar", mod_consts.const_str_plain_CookieJar);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_CookieJar) && "mod_consts.const_str_plain_CookieJar");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__cookies", mod_consts.const_str_plain__cookies);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain__cookies) && "mod_consts.const_str_plain__cookies");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_extract_cookies_to_jar", mod_consts.const_str_plain_extract_cookies_to_jar);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_extract_cookies_to_jar) && "mod_consts.const_str_plain_extract_cookies_to_jar");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_raw", mod_consts.const_str_plain_raw);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_raw) && "mod_consts.const_str_plain_raw");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_prepare_cookies", mod_consts.const_str_plain_prepare_cookies);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_prepare_cookies) && "mod_consts.const_str_plain_prepare_cookies");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_build_digest_header", mod_consts.const_str_plain_build_digest_header);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_build_digest_header) && "mod_consts.const_str_plain_build_digest_header");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_method", mod_consts.const_str_plain_method);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_method) && "mod_consts.const_str_plain_method");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_url", mod_consts.const_str_plain_url);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_url) && "mod_consts.const_str_plain_url");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connection", mod_consts.const_str_plain_connection);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_connection) && "mod_consts.const_str_plain_connection");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_history", mod_consts.const_str_plain_history);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_history) && "mod_consts.const_str_plain_history");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_append", mod_consts.const_str_plain_append);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_append) && "mod_consts.const_str_plain_append");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a94457af499547f6880f8330f568dc08", mod_consts.const_str_digest_a94457af499547f6880f8330f568dc08);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_digest_a94457af499547f6880f8330f568dc08) && "mod_consts.const_str_digest_a94457af499547f6880f8330f568dc08");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_init_per_thread_state", mod_consts.const_str_plain_init_per_thread_state);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_init_per_thread_state) && "mod_consts.const_str_plain_init_per_thread_state");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tell", mod_consts.const_str_plain_tell);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_tell) && "mod_consts.const_str_plain_tell");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_hook", mod_consts.const_str_plain_register_hook);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_register_hook) && "mod_consts.const_str_plain_register_hook");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_response", mod_consts.const_str_plain_response);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_response) && "mod_consts.const_str_plain_response");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_handle_401", mod_consts.const_str_plain_handle_401);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_handle_401) && "mod_consts.const_str_plain_handle_401");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_handle_redirect", mod_consts.const_str_plain_handle_redirect);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_handle_redirect) && "mod_consts.const_str_plain_handle_redirect");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b1d3fff4dbaa2e3b433891b66d01f28a", mod_consts.const_str_digest_b1d3fff4dbaa2e3b433891b66d01f28a);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_b1d3fff4dbaa2e3b433891b66d01f28a) && "mod_consts.const_str_digest_b1d3fff4dbaa2e3b433891b66d01f28a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_os", mod_consts.const_str_plain_os);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_os) && "mod_consts.const_str_plain_os");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_base64", mod_consts.const_str_plain_base64);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_base64) && "mod_consts.const_str_plain_base64");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_b64encode_tuple", mod_consts.const_tuple_str_plain_b64encode_tuple);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_b64encode_tuple) && "mod_consts.const_tuple_str_plain_b64encode_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TYPE_CHECKING", mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING) && "mod_consts.const_str_plain_TYPE_CHECKING");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Any", mod_consts.const_str_plain_Any);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any) && "mod_consts.const_str_plain_Any");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Final", mod_consts.const_str_plain_Final);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_Final) && "mod_consts.const_str_plain_Final");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_overload", mod_consts.const_str_plain_overload);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_overload) && "mod_consts.const_str_plain_overload");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__internal_utils", mod_consts.const_str_plain__internal_utils);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain__internal_utils) && "mod_consts.const_str_plain__internal_utils");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_to_native_string_tuple", mod_consts.const_tuple_str_plain_to_native_string_tuple);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_to_native_string_tuple) && "mod_consts.const_tuple_str_plain_to_native_string_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_compat", mod_consts.const_str_plain_compat);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_compat) && "mod_consts.const_str_plain_compat");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_basestring_str_plain_str_str_plain_urlparse_tuple", mod_consts.const_tuple_str_plain_basestring_str_plain_str_str_plain_urlparse_tuple);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_basestring_str_plain_str_str_plain_urlparse_tuple) && "mod_consts.const_tuple_str_plain_basestring_str_plain_str_str_plain_urlparse_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cookies", mod_consts.const_str_plain_cookies);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_cookies) && "mod_consts.const_str_plain_cookies");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_extract_cookies_to_jar_tuple", mod_consts.const_tuple_str_plain_extract_cookies_to_jar_tuple);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_extract_cookies_to_jar_tuple) && "mod_consts.const_tuple_str_plain_extract_cookies_to_jar_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_utils", mod_consts.const_str_plain_utils);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_utils) && "mod_consts.const_str_plain_utils");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_parse_dict_header_tuple", mod_consts.const_tuple_str_plain_parse_dict_header_tuple);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_parse_dict_header_tuple) && "mod_consts.const_tuple_str_plain_parse_dict_header_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5d735bc80d16f0fedbdde78344a2d394", mod_consts.const_str_digest_5d735bc80d16f0fedbdde78344a2d394);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_digest_5d735bc80d16f0fedbdde78344a2d394) && "mod_consts.const_str_digest_5d735bc80d16f0fedbdde78344a2d394");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CONTENT_TYPE_FORM_URLENCODED", mod_consts.const_str_plain_CONTENT_TYPE_FORM_URLENCODED);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_CONTENT_TYPE_FORM_URLENCODED) && "mod_consts.const_str_plain_CONTENT_TYPE_FORM_URLENCODED");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e1ae02aba66d45ac9d7f070694408d22", mod_consts.const_str_digest_e1ae02aba66d45ac9d7f070694408d22);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_digest_e1ae02aba66d45ac9d7f070694408d22) && "mod_consts.const_str_digest_e1ae02aba66d45ac9d7f070694408d22");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CONTENT_TYPE_MULTI_PART", mod_consts.const_str_plain_CONTENT_TYPE_MULTI_PART);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_CONTENT_TYPE_MULTI_PART) && "mod_consts.const_str_plain_CONTENT_TYPE_MULTI_PART");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_02787d4f1dca00f3ab9b7da6192fcb1b", mod_consts.const_dict_02787d4f1dca00f3ab9b7da6192fcb1b);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_dict_02787d4f1dca00f3ab9b7da6192fcb1b) && "mod_consts.const_dict_02787d4f1dca00f3ab9b7da6192fcb1b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_67889f3b65748dbd83938a67635b28e4", mod_consts.const_str_digest_67889f3b65748dbd83938a67635b28e4);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_digest_67889f3b65748dbd83938a67635b28e4) && "mod_consts.const_str_digest_67889f3b65748dbd83938a67635b28e4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2fc3f96e0216dbc7dcd34461a1c4d2ee", mod_consts.const_str_digest_2fc3f96e0216dbc7dcd34461a1c4d2ee);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_digest_2fc3f96e0216dbc7dcd34461a1c4d2ee) && "mod_consts.const_str_digest_2fc3f96e0216dbc7dcd34461a1c4d2ee");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AuthBase", mod_consts.const_str_plain_AuthBase);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_AuthBase) && "mod_consts.const_str_plain_AuthBase");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_78", mod_consts.const_int_pos_78);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_int_pos_78) && "mod_consts.const_int_pos_78");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_573e2578e366ea0ed6c728880b7d15d1", mod_consts.const_dict_573e2578e366ea0ed6c728880b7d15d1);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_dict_573e2578e366ea0ed6c728880b7d15d1) && "mod_consts.const_dict_573e2578e366ea0ed6c728880b7d15d1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___call__", mod_consts.const_str_plain___call__);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain___call__) && "mod_consts.const_str_plain___call__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_60aadb6b5e6f7210d6b0e13a6cd7dbcb", mod_consts.const_str_digest_60aadb6b5e6f7210d6b0e13a6cd7dbcb);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_digest_60aadb6b5e6f7210d6b0e13a6cd7dbcb) && "mod_consts.const_str_digest_60aadb6b5e6f7210d6b0e13a6cd7dbcb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__) && "mod_consts.const_str_plain___prepare__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTPBasicAuth", mod_consts.const_str_plain_HTTPBasicAuth);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPBasicAuth) && "mod_consts.const_str_plain_HTTPBasicAuth");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__) && "mod_consts.const_str_plain___getitem__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295) && "mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass) && "mod_consts.const_str_angle_metaclass");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a664f80c1075d8cfb85f49618afc684b", mod_consts.const_str_digest_a664f80c1075d8cfb85f49618afc684b);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_digest_a664f80c1075d8cfb85f49618afc684b) && "mod_consts.const_str_digest_a664f80c1075d8cfb85f49618afc684b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_85", mod_consts.const_int_pos_85);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_int_pos_85) && "mod_consts.const_int_pos_85");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1163c901069db0d0116b943f228d52f6", mod_consts.const_str_digest_1163c901069db0d0116b943f228d52f6);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_digest_1163c901069db0d0116b943f228d52f6) && "mod_consts.const_str_digest_1163c901069db0d0116b943f228d52f6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_83fde044930bbbaeb389afbaba80558e", mod_consts.const_dict_83fde044930bbbaeb389afbaba80558e);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_dict_83fde044930bbbaeb389afbaba80558e) && "mod_consts.const_dict_83fde044930bbbaeb389afbaba80558e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_51abe40552a340600cafb395a2df7065", mod_consts.const_str_digest_51abe40552a340600cafb395a2df7065);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_digest_51abe40552a340600cafb395a2df7065) && "mod_consts.const_str_digest_51abe40552a340600cafb395a2df7065");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_9dd9bd388f9d0f4f6c0775e174e3001d", mod_consts.const_dict_9dd9bd388f9d0f4f6c0775e174e3001d);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_dict_9dd9bd388f9d0f4f6c0775e174e3001d) && "mod_consts.const_dict_9dd9bd388f9d0f4f6c0775e174e3001d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_dbd0f1c85e6238fe0274a9204f12079b", mod_consts.const_dict_dbd0f1c85e6238fe0274a9204f12079b);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_dict_dbd0f1c85e6238fe0274a9204f12079b) && "mod_consts.const_dict_dbd0f1c85e6238fe0274a9204f12079b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_48da6b0499a992d8a0861b3c7131d274", mod_consts.const_dict_48da6b0499a992d8a0861b3c7131d274);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_dict_48da6b0499a992d8a0861b3c7131d274) && "mod_consts.const_dict_48da6b0499a992d8a0861b3c7131d274");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___eq__", mod_consts.const_str_plain___eq__);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain___eq__) && "mod_consts.const_str_plain___eq__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7565d3f493b69797b6a3c9c487eadc9f", mod_consts.const_str_digest_7565d3f493b69797b6a3c9c487eadc9f);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_digest_7565d3f493b69797b6a3c9c487eadc9f) && "mod_consts.const_str_digest_7565d3f493b69797b6a3c9c487eadc9f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_6c1f26bc8122574abd325b774c634b1a", mod_consts.const_dict_6c1f26bc8122574abd325b774c634b1a);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_dict_6c1f26bc8122574abd325b774c634b1a) && "mod_consts.const_dict_6c1f26bc8122574abd325b774c634b1a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___ne__", mod_consts.const_str_plain___ne__);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_plain___ne__) && "mod_consts.const_str_plain___ne__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cb06648d43a209f35d822642f76d8852", mod_consts.const_str_digest_cb06648d43a209f35d822642f76d8852);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_digest_cb06648d43a209f35d822642f76d8852) && "mod_consts.const_str_digest_cb06648d43a209f35d822642f76d8852");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f3a7a1ca53a484562486747f6ddca3a9", mod_consts.const_str_digest_f3a7a1ca53a484562486747f6ddca3a9);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_digest_f3a7a1ca53a484562486747f6ddca3a9) && "mod_consts.const_str_digest_f3a7a1ca53a484562486747f6ddca3a9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_username_str_plain_password_tuple", mod_consts.const_tuple_str_plain_username_str_plain_password_tuple);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_username_str_plain_password_tuple) && "mod_consts.const_tuple_str_plain_username_str_plain_password_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__) && "mod_consts.const_str_plain___orig_bases__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTPProxyAuth", mod_consts.const_str_plain_HTTPProxyAuth);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPProxyAuth) && "mod_consts.const_str_plain_HTTPProxyAuth");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3267db0b9e319da1a85ef722557dd6fe", mod_consts.const_str_digest_3267db0b9e319da1a85ef722557dd6fe);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_digest_3267db0b9e319da1a85ef722557dd6fe) && "mod_consts.const_str_digest_3267db0b9e319da1a85ef722557dd6fe");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_116", mod_consts.const_int_pos_116);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_int_pos_116) && "mod_consts.const_int_pos_116");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_128a37116d6d30cc1592bb98f4d24b46", mod_consts.const_str_digest_128a37116d6d30cc1592bb98f4d24b46);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_digest_128a37116d6d30cc1592bb98f4d24b46) && "mod_consts.const_str_digest_128a37116d6d30cc1592bb98f4d24b46");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTPDigestAuth", mod_consts.const_str_plain_HTTPDigestAuth);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPDigestAuth) && "mod_consts.const_str_plain_HTTPDigestAuth");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_acf0af13ef75ff62ec9955ae4dcea3e9", mod_consts.const_str_digest_acf0af13ef75ff62ec9955ae4dcea3e9);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_digest_acf0af13ef75ff62ec9955ae4dcea3e9) && "mod_consts.const_str_digest_acf0af13ef75ff62ec9955ae4dcea3e9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_124", mod_consts.const_int_pos_124);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_int_pos_124) && "mod_consts.const_int_pos_124");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_469a2477b7c3eb4d6a71b6319f7167dc", mod_consts.const_str_digest_469a2477b7c3eb4d6a71b6319f7167dc);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_digest_469a2477b7c3eb4d6a71b6319f7167dc) && "mod_consts.const_str_digest_469a2477b7c3eb4d6a71b6319f7167dc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cbfbecd1bf29edfce9bd6e2514e536fa", mod_consts.const_str_digest_cbfbecd1bf29edfce9bd6e2514e536fa);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_digest_cbfbecd1bf29edfce9bd6e2514e536fa) && "mod_consts.const_str_digest_cbfbecd1bf29edfce9bd6e2514e536fa");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a", mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a) && "mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ee22ae99a5537f5b922bb4b122196ae7", mod_consts.const_str_digest_ee22ae99a5537f5b922bb4b122196ae7);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_digest_ee22ae99a5537f5b922bb4b122196ae7) && "mod_consts.const_str_digest_ee22ae99a5537f5b922bb4b122196ae7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb", mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb) && "mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_37d3a2307e31335fa61f05d3486fd568", mod_consts.const_str_digest_37d3a2307e31335fa61f05d3486fd568);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_digest_37d3a2307e31335fa61f05d3486fd568) && "mod_consts.const_str_digest_37d3a2307e31335fa61f05d3486fd568");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_051b5ffe00d30cdb70e4e7d90f98c0bc", mod_consts.const_dict_051b5ffe00d30cdb70e4e7d90f98c0bc);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_dict_051b5ffe00d30cdb70e4e7d90f98c0bc) && "mod_consts.const_dict_051b5ffe00d30cdb70e4e7d90f98c0bc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_67bc2e2875f2a676ae8e8f2595c69cad", mod_consts.const_str_digest_67bc2e2875f2a676ae8e8f2595c69cad);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_digest_67bc2e2875f2a676ae8e8f2595c69cad) && "mod_consts.const_str_digest_67bc2e2875f2a676ae8e8f2595c69cad");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c0b4aa56e27262dae2b7b89241e2e98a", mod_consts.const_dict_c0b4aa56e27262dae2b7b89241e2e98a);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_dict_c0b4aa56e27262dae2b7b89241e2e98a) && "mod_consts.const_dict_c0b4aa56e27262dae2b7b89241e2e98a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7c3d6be840d0505baea6486b3a2fb076", mod_consts.const_str_digest_7c3d6be840d0505baea6486b3a2fb076);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_digest_7c3d6be840d0505baea6486b3a2fb076) && "mod_consts.const_str_digest_7c3d6be840d0505baea6486b3a2fb076");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_6edc7e34c97f956d56a100ccda717c41", mod_consts.const_dict_6edc7e34c97f956d56a100ccda717c41);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_dict_6edc7e34c97f956d56a100ccda717c41) && "mod_consts.const_dict_6edc7e34c97f956d56a100ccda717c41");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_aa04245735e0a296f4eee2c81c6c24b4", mod_consts.const_str_digest_aa04245735e0a296f4eee2c81c6c24b4);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_digest_aa04245735e0a296f4eee2c81c6c24b4) && "mod_consts.const_str_digest_aa04245735e0a296f4eee2c81c6c24b4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7a006474c4967997a79cedaecd602a45", mod_consts.const_str_digest_7a006474c4967997a79cedaecd602a45);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_digest_7a006474c4967997a79cedaecd602a45) && "mod_consts.const_str_digest_7a006474c4967997a79cedaecd602a45");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c3a9a47fda757d3a3b31995c197a305a", mod_consts.const_str_digest_c3a9a47fda757d3a3b31995c197a305a);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_digest_c3a9a47fda757d3a3b31995c197a305a) && "mod_consts.const_str_digest_c3a9a47fda757d3a3b31995c197a305a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1086311fbf6e3245df872c941ed6e8ad", mod_consts.const_str_digest_1086311fbf6e3245df872c941ed6e8ad);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_str_digest_1086311fbf6e3245df872c941ed6e8ad) && "mod_consts.const_str_digest_1086311fbf6e3245df872c941ed6e8ad");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a67d05bb61c2ad13d89e6487a4eb1ffd_tuple", mod_consts.const_tuple_a67d05bb61c2ad13d89e6487a4eb1ffd_tuple);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_tuple_a67d05bb61c2ad13d89e6487a4eb1ffd_tuple) && "mod_consts.const_tuple_a67d05bb61c2ad13d89e6487a4eb1ffd_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f1891b89ee1ab5d77e732590c823b548", mod_consts.const_str_digest_f1891b89ee1ab5d77e732590c823b548);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_str_digest_f1891b89ee1ab5d77e732590c823b548) && "mod_consts.const_str_digest_f1891b89ee1ab5d77e732590c823b548");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3ae56c31f64e988caab68621b896b25f", mod_consts.const_str_digest_3ae56c31f64e988caab68621b896b25f);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_str_digest_3ae56c31f64e988caab68621b896b25f) && "mod_consts.const_str_digest_3ae56c31f64e988caab68621b896b25f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple) && "mod_consts.const_tuple_str_plain___class___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_s_str_plain_d_str_plain_hash_utf8_tuple", mod_consts.const_tuple_str_plain_s_str_plain_d_str_plain_hash_utf8_tuple);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_s_str_plain_d_str_plain_hash_utf8_tuple) && "mod_consts.const_tuple_str_plain_s_str_plain_d_str_plain_hash_utf8_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_hash_utf8_tuple", mod_consts.const_tuple_str_plain_hash_utf8_tuple);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_hash_utf8_tuple) && "mod_consts.const_tuple_str_plain_hash_utf8_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_r_tuple", mod_consts.const_tuple_str_plain_self_str_plain_r_tuple);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_r_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_r_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_778a306ec20cc594d1aa1f0319397dff_tuple", mod_consts.const_tuple_778a306ec20cc594d1aa1f0319397dff_tuple);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_tuple_778a306ec20cc594d1aa1f0319397dff_tuple) && "mod_consts.const_tuple_778a306ec20cc594d1aa1f0319397dff_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_other_tuple", mod_consts.const_tuple_str_plain_self_str_plain_other_tuple);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_other_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple", mod_consts.const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_username_str_plain_password_str_plain_authstr_tuple", mod_consts.const_tuple_str_plain_username_str_plain_password_str_plain_authstr_tuple);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_username_str_plain_password_str_plain_authstr_tuple) && "mod_consts.const_tuple_str_plain_username_str_plain_password_str_plain_authstr_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_136046813187593286870b153208de90_tuple", mod_consts.const_tuple_136046813187593286870b153208de90_tuple);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_tuple_136046813187593286870b153208de90_tuple) && "mod_consts.const_tuple_136046813187593286870b153208de90_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_6662fb62eaa957f1c7da1e87f5a17362_tuple", mod_consts.const_tuple_6662fb62eaa957f1c7da1e87f5a17362_tuple);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_tuple_6662fb62eaa957f1c7da1e87f5a17362_tuple) && "mod_consts.const_tuple_6662fb62eaa957f1c7da1e87f5a17362_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_r_str_plain_kwargs_tuple", mod_consts.const_tuple_str_plain_self_str_plain_r_str_plain_kwargs_tuple);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_r_str_plain_kwargs_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_r_str_plain_kwargs_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple) && "mod_consts.const_tuple_str_plain_self_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_x_tuple", mod_consts.const_tuple_str_plain_x_tuple);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_tuple) && "mod_consts.const_tuple_str_plain_x_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 20
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
static PyObject *module_var_accessor_requests$auth$AuthBase(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_AuthBase);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AuthBase);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AuthBase, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AuthBase);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AuthBase, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_AuthBase);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_AuthBase);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AuthBase);
    }

    return result;
}

static PyObject *module_var_accessor_requests$auth$DeprecationWarning(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DeprecationWarning);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DeprecationWarning, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DeprecationWarning);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DeprecationWarning, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
    }

    return result;
}

static PyObject *module_var_accessor_requests$auth$HTTPBasicAuth(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPBasicAuth);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HTTPBasicAuth);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HTTPBasicAuth, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HTTPBasicAuth);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HTTPBasicAuth, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPBasicAuth);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPBasicAuth);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPBasicAuth);
    }

    return result;
}

static PyObject *module_var_accessor_requests$auth$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$auth->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_requests$auth$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$auth->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_requests$auth$_basic_auth_str(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain__basic_auth_str);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__basic_auth_str);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__basic_auth_str, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__basic_auth_str);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__basic_auth_str, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain__basic_auth_str);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain__basic_auth_str);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__basic_auth_str);
    }

    return result;
}

static PyObject *module_var_accessor_requests$auth$b64encode(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_b64encode);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_b64encode);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_b64encode, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_b64encode);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_b64encode, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_b64encode);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_b64encode);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_b64encode);
    }

    return result;
}

static PyObject *module_var_accessor_requests$auth$basestring(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_basestring);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_basestring);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_basestring, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_basestring);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_basestring, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_basestring);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_basestring);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_basestring);
    }

    return result;
}

static PyObject *module_var_accessor_requests$auth$cast(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cast);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cast, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cast);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cast, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }

    return result;
}

static PyObject *module_var_accessor_requests$auth$extract_cookies_to_jar(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_cookies_to_jar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_extract_cookies_to_jar);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_extract_cookies_to_jar, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_extract_cookies_to_jar);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_extract_cookies_to_jar, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_cookies_to_jar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_cookies_to_jar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_cookies_to_jar);
    }

    return result;
}

static PyObject *module_var_accessor_requests$auth$hashlib(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_hashlib);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$auth->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_hashlib);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_hashlib);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hashlib);
    }

    return result;
}

static PyObject *module_var_accessor_requests$auth$overload(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_overload);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_overload, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_overload);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_overload, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
    }

    return result;
}

static PyObject *module_var_accessor_requests$auth$parse_dict_header(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_dict_header);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_parse_dict_header);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_parse_dict_header, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_parse_dict_header);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_parse_dict_header, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_dict_header);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_dict_header);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_dict_header);
    }

    return result;
}

static PyObject *module_var_accessor_requests$auth$re(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$auth->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }

    return result;
}

static PyObject *module_var_accessor_requests$auth$str(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_str);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_str);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_str, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_str);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_str, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_str);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_str);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_str);
    }

    return result;
}

static PyObject *module_var_accessor_requests$auth$threading(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_threading);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_threading, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_threading);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_threading, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
    }

    return result;
}

static PyObject *module_var_accessor_requests$auth$time(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$auth->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
    }

    return result;
}

static PyObject *module_var_accessor_requests$auth$to_native_string(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_to_native_string);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_to_native_string);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_to_native_string, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_to_native_string);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_to_native_string, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_to_native_string);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_to_native_string);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_to_native_string);
    }

    return result;
}

static PyObject *module_var_accessor_requests$auth$urlparse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_urlparse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urlparse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urlparse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urlparse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urlparse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_urlparse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_urlparse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_urlparse);
    }

    return result;
}

static PyObject *module_var_accessor_requests$auth$warnings(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$auth->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_280884cdca9e025f44d1287bf017015b;
static PyCodeObject *code_objects_960eaa56276baead1cb08ea2952910c7;
static PyCodeObject *code_objects_d4eb2a693a34026f423101f824cabc76;
static PyCodeObject *code_objects_8cc4b01bffde4535190e8d46797abd3c;
static PyCodeObject *code_objects_1faad827fa5cd6556ece6f2b5175c152;
static PyCodeObject *code_objects_ef44e91c7bc5abe8807f81e3c265bb4d;
static PyCodeObject *code_objects_47a2fcd90a7f24f1f536518bc8966f0e;
static PyCodeObject *code_objects_878a960c32f02c7b7c26be77cf8e03a5;
static PyCodeObject *code_objects_d7dcd9bae178f8585093efb882f2806e;
static PyCodeObject *code_objects_5ece74c01e521a170128800a935ebf96;
static PyCodeObject *code_objects_49ff82d98a73130c5bb45adcfd6bf8ec;
static PyCodeObject *code_objects_6e0fb904cfbb042a83ba0727cae670d9;
static PyCodeObject *code_objects_18cd7dc59f250b0b056a887bb4cdb253;
static PyCodeObject *code_objects_7a78bb3afad6ade331f25b957738f87d;
static PyCodeObject *code_objects_01fb4efd87770a6398c5caa2890587bb;
static PyCodeObject *code_objects_e028173cc27a7119a170c12ad81ac225;
static PyCodeObject *code_objects_f5fb5701275191f59292db09b8a41ac4;
static PyCodeObject *code_objects_70f16b85d9b83b8624f962a8fd8fabb4;
static PyCodeObject *code_objects_b9a723cd562bdf06edc28fdd16f9cd3e;
static PyCodeObject *code_objects_4cab954e345483707f2f29fd142942fc;
static PyCodeObject *code_objects_ae636fa2a9400b813b0ff4b04321aa1a;
static PyCodeObject *code_objects_b757f327f735456346f707d1e1e112b6;
static PyCodeObject *code_objects_41156a36150273ad6052e795390cd7a7;
static PyCodeObject *code_objects_fa9c6e159f32fdb9158177e31e797469;
static PyCodeObject *code_objects_f9bccbf11760cf97d4ddda99417b6a80;
static PyCodeObject *code_objects_cab7f5a8b9eb9a4c87e6952855aa3aa4;
static PyCodeObject *code_objects_3a4362ec601997bcd4230c917196fb57;
static PyCodeObject *code_objects_df38b361e63d04f837c5d9f1000b6de7;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_f1891b89ee1ab5d77e732590c823b548); CHECK_OBJECT(module_filename_obj);
code_objects_280884cdca9e025f44d1287bf017015b = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_3ae56c31f64e988caab68621b896b25f, mod_consts.const_str_digest_3ae56c31f64e988caab68621b896b25f, NULL, NULL, 0, 0, 0);
code_objects_960eaa56276baead1cb08ea2952910c7 = MAKE_CODE_OBJECT(module_filename_obj, 85, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_HTTPBasicAuth, mod_consts.const_str_plain_HTTPBasicAuth, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_d4eb2a693a34026f423101f824cabc76 = MAKE_CODE_OBJECT(module_filename_obj, 124, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_HTTPDigestAuth, mod_consts.const_str_plain_HTTPDigestAuth, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_8cc4b01bffde4535190e8d46797abd3c = MAKE_CODE_OBJECT(module_filename_obj, 116, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_HTTPProxyAuth, mod_consts.const_str_plain_HTTPProxyAuth, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_1faad827fa5cd6556ece6f2b5175c152 = MAKE_CODE_OBJECT(module_filename_obj, 210, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_KD, mod_consts.const_str_digest_6e0275adf61cf8d2c4819e377fa99004, mod_consts.const_tuple_str_plain_s_str_plain_d_str_plain_hash_utf8_tuple, mod_consts.const_tuple_str_plain_hash_utf8_tuple, 2, 0, 0);
code_objects_ef44e91c7bc5abe8807f81e3c265bb4d = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_60aadb6b5e6f7210d6b0e13a6cd7dbcb, mod_consts.const_tuple_str_plain_self_str_plain_r_tuple, NULL, 2, 0, 0);
code_objects_47a2fcd90a7f24f1f536518bc8966f0e = MAKE_CODE_OBJECT(module_filename_obj, 111, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_f3a7a1ca53a484562486747f6ddca3a9, mod_consts.const_tuple_str_plain_self_str_plain_r_tuple, NULL, 2, 0, 0);
code_objects_878a960c32f02c7b7c26be77cf8e03a5 = MAKE_CODE_OBJECT(module_filename_obj, 321, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_7a006474c4967997a79cedaecd602a45, mod_consts.const_tuple_778a306ec20cc594d1aa1f0319397dff_tuple, NULL, 2, 0, 0);
code_objects_d7dcd9bae178f8585093efb882f2806e = MAKE_CODE_OBJECT(module_filename_obj, 119, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_128a37116d6d30cc1592bb98f4d24b46, mod_consts.const_tuple_str_plain_self_str_plain_r_tuple, NULL, 2, 0, 0);
code_objects_5ece74c01e521a170128800a935ebf96 = MAKE_CODE_OBJECT(module_filename_obj, 100, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___eq__, mod_consts.const_str_digest_7565d3f493b69797b6a3c9c487eadc9f, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_49ff82d98a73130c5bb45adcfd6bf8ec = MAKE_CODE_OBJECT(module_filename_obj, 345, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___eq__, mod_consts.const_str_digest_c3a9a47fda757d3a3b31995c197a305a, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_6e0fb904cfbb042a83ba0727cae670d9 = MAKE_CODE_OBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_51abe40552a340600cafb395a2df7065, mod_consts.const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple, NULL, 3, 0, 0);
code_objects_18cd7dc59f250b0b056a887bb4cdb253 = MAKE_CODE_OBJECT(module_filename_obj, 94, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_51abe40552a340600cafb395a2df7065, mod_consts.const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple, NULL, 3, 0, 0);
code_objects_7a78bb3afad6ade331f25b957738f87d = MAKE_CODE_OBJECT(module_filename_obj, 96, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_51abe40552a340600cafb395a2df7065, mod_consts.const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple, NULL, 3, 0, 0);
code_objects_01fb4efd87770a6398c5caa2890587bb = MAKE_CODE_OBJECT(module_filename_obj, 137, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_ee22ae99a5537f5b922bb4b122196ae7, mod_consts.const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple, NULL, 3, 0, 0);
code_objects_e028173cc27a7119a170c12ad81ac225 = MAKE_CODE_OBJECT(module_filename_obj, 139, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_ee22ae99a5537f5b922bb4b122196ae7, mod_consts.const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple, NULL, 3, 0, 0);
code_objects_f5fb5701275191f59292db09b8a41ac4 = MAKE_CODE_OBJECT(module_filename_obj, 141, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_ee22ae99a5537f5b922bb4b122196ae7, mod_consts.const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple, NULL, 3, 0, 0);
code_objects_70f16b85d9b83b8624f962a8fd8fabb4 = MAKE_CODE_OBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___ne__, mod_consts.const_str_digest_cb06648d43a209f35d822642f76d8852, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_b9a723cd562bdf06edc28fdd16f9cd3e = MAKE_CODE_OBJECT(module_filename_obj, 353, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___ne__, mod_consts.const_str_digest_1086311fbf6e3245df872c941ed6e8ad, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_4cab954e345483707f2f29fd142942fc = MAKE_CODE_OBJECT(module_filename_obj, 34, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__basic_auth_str, mod_consts.const_str_plain__basic_auth_str, mod_consts.const_tuple_str_plain_username_str_plain_password_str_plain_authstr_tuple, NULL, 2, 0, 0);
code_objects_ae636fa2a9400b813b0ff4b04321aa1a = MAKE_CODE_OBJECT(module_filename_obj, 157, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_build_digest_header, mod_consts.const_str_digest_67bc2e2875f2a676ae8e8f2595c69cad, mod_consts.const_tuple_136046813187593286870b153208de90_tuple, NULL, 3, 0, 0);
code_objects_b757f327f735456346f707d1e1e112b6 = MAKE_CODE_OBJECT(module_filename_obj, 273, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_handle_401, mod_consts.const_str_digest_aa04245735e0a296f4eee2c81c6c24b4, mod_consts.const_tuple_6662fb62eaa957f1c7da1e87f5a17362_tuple, NULL, 2, 0, 0);
code_objects_41156a36150273ad6052e795390cd7a7 = MAKE_CODE_OBJECT(module_filename_obj, 268, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_handle_redirect, mod_consts.const_str_digest_7c3d6be840d0505baea6486b3a2fb076, mod_consts.const_tuple_str_plain_self_str_plain_r_str_plain_kwargs_tuple, NULL, 2, 0, 0);
code_objects_fa9c6e159f32fdb9158177e31e797469 = MAKE_CODE_OBJECT(module_filename_obj, 147, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_init_per_thread_state, mod_consts.const_str_digest_37d3a2307e31335fa61f05d3486fd568, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_f9bccbf11760cf97d4ddda99417b6a80 = MAKE_CODE_OBJECT(module_filename_obj, 176, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_md5_utf8, mod_consts.const_str_digest_437d9d9283e7705920d4361a76539982, mod_consts.const_tuple_str_plain_x_tuple, NULL, 1, 0, 0);
code_objects_cab7f5a8b9eb9a4c87e6952855aa3aa4 = MAKE_CODE_OBJECT(module_filename_obj, 192, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_sha256_utf8, mod_consts.const_str_digest_065e009455d4c4ad1356e1bac835c3a1, mod_consts.const_tuple_str_plain_x_tuple, NULL, 1, 0, 0);
code_objects_3a4362ec601997bcd4230c917196fb57 = MAKE_CODE_OBJECT(module_filename_obj, 200, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_sha512_utf8, mod_consts.const_str_digest_0ca141503f179b28e3129781569b5edb, mod_consts.const_tuple_str_plain_x_tuple, NULL, 1, 0, 0);
code_objects_df38b361e63d04f837c5d9f1000b6de7 = MAKE_CODE_OBJECT(module_filename_obj, 184, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_sha_utf8, mod_consts.const_str_digest_a48752b2d8c32906209a579a59eb860e, mod_consts.const_tuple_str_plain_x_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_requests$auth$$$function__10___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$auth$$$function__11___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$auth$$$function__12___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$auth$$$function__13_init_per_thread_state(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$auth$$$function__14_build_digest_header(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$auth$$$function__14_build_digest_header$$$function__1_md5_utf8(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$auth$$$function__14_build_digest_header$$$function__2_sha_utf8(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$auth$$$function__14_build_digest_header$$$function__3_sha256_utf8(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$auth$$$function__14_build_digest_header$$$function__4_sha512_utf8(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$auth$$$function__14_build_digest_header$$$function__5_KD(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_requests$auth$$$function__15_handle_redirect(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$auth$$$function__16_handle_401(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$auth$$$function__17___call__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$auth$$$function__18___eq__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$auth$$$function__19___ne__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$auth$$$function__1__basic_auth_str(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$auth$$$function__2___call__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$auth$$$function__3___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$auth$$$function__4___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$auth$$$function__5___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$auth$$$function__6___eq__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$auth$$$function__7___ne__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$auth$$$function__8___call__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$auth$$$function__9___call__(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_requests$auth$$$function__1__basic_auth_str(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_username = python_pars[0];
PyObject *par_password = python_pars[1];
PyObject *var_authstr = NULL;
struct Nuitka_FrameObject *frame_frame_requests$auth$$$function__1__basic_auth_str;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_requests$auth$$$function__1__basic_auth_str = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$auth$$$function__1__basic_auth_str)) {
    Py_XDECREF(cache_frame_frame_requests$auth$$$function__1__basic_auth_str);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$auth$$$function__1__basic_auth_str == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$auth$$$function__1__basic_auth_str = MAKE_FUNCTION_FRAME(tstate, code_objects_4cab954e345483707f2f29fd142942fc, module_requests$auth, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$auth$$$function__1__basic_auth_str->m_type_description == NULL);
frame_frame_requests$auth$$$function__1__basic_auth_str = cache_frame_frame_requests$auth$$$function__1__basic_auth_str;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$auth$$$function__1__basic_auth_str);
assert(Py_REFCNT(frame_frame_requests$auth$$$function__1__basic_auth_str) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_username);
tmp_isinstance_inst_1 = par_username;
tmp_isinstance_cls_1 = module_var_accessor_requests$auth$basestring(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_basestring);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 44;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "ooo";
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_expression_value_1 = module_var_accessor_requests$auth$warnings(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 45;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_warn);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_2fa81b7188be7ff17a765a9a3d4c77cc;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_username);
tmp_operand_value_2 = par_username;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_193f2681e00fe1a919853c99498c3d72;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_kw_call_arg_value_0_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_kw_call_arg_value_0_1 == NULL));
tmp_kw_call_dict_value_0_1 = module_var_accessor_requests$auth$DeprecationWarning(tstate);
if (unlikely(tmp_kw_call_dict_value_0_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DeprecationWarning);
}

if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 50;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__1__basic_auth_str->m_frame.f_lineno = 45;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_category_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
tmp_called_value_2 = module_var_accessor_requests$auth$str(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_str);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_username);
tmp_args_element_value_1 = par_username;
frame_frame_requests$auth$$$function__1__basic_auth_str->m_frame.f_lineno = 52;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_username;
    assert(old != NULL);
    par_username = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_3;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
CHECK_OBJECT(par_password);
tmp_isinstance_inst_2 = par_password;
tmp_isinstance_cls_2 = module_var_accessor_requests$auth$basestring(tstate);
if (unlikely(tmp_isinstance_cls_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_basestring);
}

if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "ooo";
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
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kw_call_dict_value_0_2;
tmp_expression_value_2 = module_var_accessor_requests$auth$warnings(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_warn);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = mod_consts.const_str_digest_25b1c1cb155ac8863379ffde01fbdc98;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_operand_value_4;
PyObject *tmp_type_arg_1;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_password);
tmp_type_arg_1 = par_password;
tmp_operand_value_4 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_operand_value_4 == NULL));
tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_4);
CHECK_OBJECT(tmp_operand_value_4);
Py_DECREF(tmp_operand_value_4);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_193f2681e00fe1a919853c99498c3d72;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_kw_call_arg_value_0_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_kw_call_arg_value_0_2 == NULL));
tmp_kw_call_dict_value_0_2 = module_var_accessor_requests$auth$DeprecationWarning(tstate);
if (unlikely(tmp_kw_call_dict_value_0_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DeprecationWarning);
}

if (tmp_kw_call_dict_value_0_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_kw_call_arg_value_0_2);

exception_lineno = 60;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__1__basic_auth_str->m_frame.f_lineno = 55;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_category_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_arg_value_0_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
tmp_called_value_4 = module_var_accessor_requests$auth$str(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_str);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 62;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_password);
tmp_args_element_value_2 = par_password;
frame_frame_requests$auth$$$function__1__basic_auth_str->m_frame.f_lineno = 62;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_password;
    assert(old != NULL);
    par_password = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_isinstance_inst_3;
PyObject *tmp_isinstance_cls_3;
CHECK_OBJECT(par_username);
tmp_isinstance_inst_3 = par_username;
tmp_isinstance_cls_3 = module_var_accessor_requests$auth$str(tstate);
if (unlikely(tmp_isinstance_cls_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_str);
}

if (tmp_isinstance_cls_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 65;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_username);
tmp_expression_value_3 = par_username;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_encode);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__1__basic_auth_str->m_frame.f_lineno = 66;
tmp_assign_source_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_plain_latin1_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_username;
    assert(old != NULL);
    par_username = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_isinstance_inst_4;
PyObject *tmp_isinstance_cls_4;
CHECK_OBJECT(par_password);
tmp_isinstance_inst_4 = par_password;
tmp_isinstance_cls_4 = module_var_accessor_requests$auth$str(tstate);
if (unlikely(tmp_isinstance_cls_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_str);
}

if (tmp_isinstance_cls_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 68;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_password);
tmp_expression_value_4 = par_password;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_encode);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__1__basic_auth_str->m_frame.f_lineno = 69;
tmp_assign_source_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_plain_latin1_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_password;
    assert(old != NULL);
    par_password = tmp_assign_source_4;
    Py_DECREF(old);
}

}
branch_no_4:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_5;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_4;
PyObject *tmp_bytes_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_tuple_element_3;
tmp_add_expr_left_1 = mod_consts.const_str_digest_1cc758ff2b09f90388f1c2fc8a8fecdc;
tmp_called_value_7 = module_var_accessor_requests$auth$to_native_string(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_native_string);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_9 = module_var_accessor_requests$auth$b64encode(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_b64encode);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_bytes_arg_value_1 = mod_consts.const_bytes_chr_58;
CHECK_OBJECT(par_username);
tmp_tuple_element_3 = par_username;
tmp_iterable_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_iterable_value_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_password);
tmp_tuple_element_3 = par_password;
PyTuple_SET_ITEM0(tmp_iterable_value_1, 1, tmp_tuple_element_3);
tmp_args_element_value_4 = BYTES_JOIN(tstate, tmp_bytes_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__1__basic_auth_str->m_frame.f_lineno = 72;
tmp_expression_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_strip);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__1__basic_auth_str->m_frame.f_lineno = 72;
tmp_args_element_value_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_8);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__1__basic_auth_str->m_frame.f_lineno = 71;
tmp_add_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_authstr;
    var_authstr = tmp_assign_source_5;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$auth$$$function__1__basic_auth_str, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$auth$$$function__1__basic_auth_str->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$auth$$$function__1__basic_auth_str, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$auth$$$function__1__basic_auth_str,
    type_description_1,
    par_username,
    par_password,
    var_authstr
);


// Release cached frame if used for exception.
if (frame_frame_requests$auth$$$function__1__basic_auth_str == cache_frame_frame_requests$auth$$$function__1__basic_auth_str) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$auth$$$function__1__basic_auth_str);
    cache_frame_frame_requests$auth$$$function__1__basic_auth_str = NULL;
}

assertFrameObject(frame_frame_requests$auth$$$function__1__basic_auth_str);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_authstr);
tmp_return_value = var_authstr;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_username);
CHECK_OBJECT(par_username);
Py_DECREF(par_username);
par_username = NULL;
CHECK_OBJECT(par_password);
CHECK_OBJECT(par_password);
Py_DECREF(par_password);
par_password = NULL;
CHECK_OBJECT(var_authstr);
CHECK_OBJECT(var_authstr);
Py_DECREF(var_authstr);
var_authstr = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_username);
par_username = NULL;
Py_XDECREF(par_password);
par_password = NULL;
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


static PyObject *impl_requests$auth$$$function__2___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_r = python_pars[1];
struct Nuitka_FrameObject *frame_frame_requests$auth$$$function__2___call__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$auth$$$function__2___call__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$auth$$$function__2___call__)) {
    Py_XDECREF(cache_frame_frame_requests$auth$$$function__2___call__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$auth$$$function__2___call__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$auth$$$function__2___call__ = MAKE_FUNCTION_FRAME(tstate, code_objects_ef44e91c7bc5abe8807f81e3c265bb4d, module_requests$auth, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$auth$$$function__2___call__->m_type_description == NULL);
frame_frame_requests$auth$$$function__2___call__ = cache_frame_frame_requests$auth$$$function__2___call__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$auth$$$function__2___call__);
assert(Py_REFCNT(frame_frame_requests$auth$$$function__2___call__) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_507ca0310b2f37ea4b2584d4cca02846;
frame_frame_requests$auth$$$function__2___call__->m_frame.f_lineno = 82;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 82;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$auth$$$function__2___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$auth$$$function__2___call__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$auth$$$function__2___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$auth$$$function__2___call__,
    type_description_1,
    par_self,
    par_r
);


// Release cached frame if used for exception.
if (frame_frame_requests$auth$$$function__2___call__ == cache_frame_frame_requests$auth$$$function__2___call__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$auth$$$function__2___call__);
    cache_frame_frame_requests$auth$$$function__2___call__ = NULL;
}

assertFrameObject(frame_frame_requests$auth$$$function__2___call__);

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
CHECK_OBJECT(par_r);
Py_DECREF(par_r);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_requests$auth$$$function__5___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_username = python_pars[1];
PyObject *par_password = python_pars[2];
struct Nuitka_FrameObject *frame_frame_requests$auth$$$function__5___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$auth$$$function__5___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$auth$$$function__5___init__)) {
    Py_XDECREF(cache_frame_frame_requests$auth$$$function__5___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$auth$$$function__5___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$auth$$$function__5___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_7a78bb3afad6ade331f25b957738f87d, module_requests$auth, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$auth$$$function__5___init__->m_type_description == NULL);
frame_frame_requests$auth$$$function__5___init__ = cache_frame_frame_requests$auth$$$function__5___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$auth$$$function__5___init__);
assert(Py_REFCNT(frame_frame_requests$auth$$$function__5___init__) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(par_username);
tmp_ass_attr_value_1 = par_username;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_username, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_ass_attr_target_2;
CHECK_OBJECT(par_password);
tmp_ass_attr_value_2 = par_password;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain_password, tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$auth$$$function__5___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$auth$$$function__5___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$auth$$$function__5___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$auth$$$function__5___init__,
    type_description_1,
    par_self,
    par_username,
    par_password
);


// Release cached frame if used for exception.
if (frame_frame_requests$auth$$$function__5___init__ == cache_frame_frame_requests$auth$$$function__5___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$auth$$$function__5___init__);
    cache_frame_frame_requests$auth$$$function__5___init__ = NULL;
}

assertFrameObject(frame_frame_requests$auth$$$function__5___init__);

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
CHECK_OBJECT(par_username);
Py_DECREF(par_username);
CHECK_OBJECT(par_password);
Py_DECREF(par_password);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_username);
Py_DECREF(par_username);
CHECK_OBJECT(par_password);
Py_DECREF(par_password);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function__6___eq__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_requests$auth$$$function__6___eq__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$auth$$$function__6___eq__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$auth$$$function__6___eq__)) {
    Py_XDECREF(cache_frame_frame_requests$auth$$$function__6___eq__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$auth$$$function__6___eq__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$auth$$$function__6___eq__ = MAKE_FUNCTION_FRAME(tstate, code_objects_5ece74c01e521a170128800a935ebf96, module_requests$auth, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$auth$$$function__6___eq__->m_type_description == NULL);
frame_frame_requests$auth$$$function__6___eq__ = cache_frame_frame_requests$auth$$$function__6___eq__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$auth$$$function__6___eq__);
assert(Py_REFCNT(frame_frame_requests$auth$$$function__6___eq__) == 2);

// Framed code:
{
PyObject *tmp_all_arg_1;
PyObject *tmp_list_element_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_username);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_expression_value_2 = par_other;
tmp_name_value_1 = mod_consts.const_str_plain_username;
tmp_default_value_1 = Py_None;
tmp_cmp_expr_right_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_2, tmp_name_value_1, tmp_default_value_1);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 103;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_list_element_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_all_arg_1 = MAKE_LIST_EMPTY(tstate, 2);
{
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_name_value_2;
PyObject *tmp_default_value_2;
PyList_SET_ITEM(tmp_all_arg_1, 0, tmp_list_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_password);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "oo";
    goto list_build_exception_1;
}
CHECK_OBJECT(par_other);
tmp_expression_value_4 = par_other;
tmp_name_value_2 = mod_consts.const_str_plain_password;
tmp_default_value_2 = Py_None;
tmp_cmp_expr_right_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_4, tmp_name_value_2, tmp_default_value_2);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 104;
type_description_1 = "oo";
    goto list_build_exception_1;
}
tmp_list_element_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "oo";
    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_all_arg_1, 1, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_all_arg_1);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
tmp_return_value = BUILTIN_ALL(tstate, tmp_all_arg_1);
CHECK_OBJECT(tmp_all_arg_1);
Py_DECREF(tmp_all_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$auth$$$function__6___eq__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$auth$$$function__6___eq__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$auth$$$function__6___eq__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$auth$$$function__6___eq__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_requests$auth$$$function__6___eq__ == cache_frame_frame_requests$auth$$$function__6___eq__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$auth$$$function__6___eq__);
    cache_frame_frame_requests$auth$$$function__6___eq__ = NULL;
}

assertFrameObject(frame_frame_requests$auth$$$function__6___eq__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function__7___ne__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_requests$auth$$$function__7___ne__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_requests$auth$$$function__7___ne__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$auth$$$function__7___ne__)) {
    Py_XDECREF(cache_frame_frame_requests$auth$$$function__7___ne__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$auth$$$function__7___ne__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$auth$$$function__7___ne__ = MAKE_FUNCTION_FRAME(tstate, code_objects_70f16b85d9b83b8624f962a8fd8fabb4, module_requests$auth, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$auth$$$function__7___ne__->m_type_description == NULL);
frame_frame_requests$auth$$$function__7___ne__ = cache_frame_frame_requests$auth$$$function__7___ne__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$auth$$$function__7___ne__);
assert(Py_REFCNT(frame_frame_requests$auth$$$function__7___ne__) == 2);

// Framed code:
{
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_self);
tmp_cmp_expr_left_1 = par_self;
CHECK_OBJECT(par_other);
tmp_cmp_expr_right_1 = par_other;
tmp_operand_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$auth$$$function__7___ne__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$auth$$$function__7___ne__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$auth$$$function__7___ne__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$auth$$$function__7___ne__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_requests$auth$$$function__7___ne__ == cache_frame_frame_requests$auth$$$function__7___ne__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$auth$$$function__7___ne__);
    cache_frame_frame_requests$auth$$$function__7___ne__ = NULL;
}

assertFrameObject(frame_frame_requests$auth$$$function__7___ne__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function__8___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_r = python_pars[1];
struct Nuitka_FrameObject *frame_frame_requests$auth$$$function__8___call__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_requests$auth$$$function__8___call__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$auth$$$function__8___call__)) {
    Py_XDECREF(cache_frame_frame_requests$auth$$$function__8___call__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$auth$$$function__8___call__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$auth$$$function__8___call__ = MAKE_FUNCTION_FRAME(tstate, code_objects_47a2fcd90a7f24f1f536518bc8966f0e, module_requests$auth, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$auth$$$function__8___call__->m_type_description == NULL);
frame_frame_requests$auth$$$function__8___call__ = cache_frame_frame_requests$auth$$$function__8___call__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$auth$$$function__8___call__);
assert(Py_REFCNT(frame_frame_requests$auth$$$function__8___call__) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_ass_subscript_1;
tmp_called_value_1 = module_var_accessor_requests$auth$_basic_auth_str(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__basic_auth_str);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 112;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_username);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_password);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 112;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__8___call__->m_frame.f_lineno = 112;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_r);
tmp_expression_value_3 = par_r;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_headers);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 112;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_Authorization;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$auth$$$function__8___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$auth$$$function__8___call__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$auth$$$function__8___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$auth$$$function__8___call__,
    type_description_1,
    par_self,
    par_r
);


// Release cached frame if used for exception.
if (frame_frame_requests$auth$$$function__8___call__ == cache_frame_frame_requests$auth$$$function__8___call__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$auth$$$function__8___call__);
    cache_frame_frame_requests$auth$$$function__8___call__ = NULL;
}

assertFrameObject(frame_frame_requests$auth$$$function__8___call__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(par_r);
tmp_return_value = par_r;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_r);
Py_DECREF(par_r);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_r);
Py_DECREF(par_r);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function__9___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_r = python_pars[1];
struct Nuitka_FrameObject *frame_frame_requests$auth$$$function__9___call__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_requests$auth$$$function__9___call__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$auth$$$function__9___call__)) {
    Py_XDECREF(cache_frame_frame_requests$auth$$$function__9___call__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$auth$$$function__9___call__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$auth$$$function__9___call__ = MAKE_FUNCTION_FRAME(tstate, code_objects_d7dcd9bae178f8585093efb882f2806e, module_requests$auth, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$auth$$$function__9___call__->m_type_description == NULL);
frame_frame_requests$auth$$$function__9___call__ = cache_frame_frame_requests$auth$$$function__9___call__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$auth$$$function__9___call__);
assert(Py_REFCNT(frame_frame_requests$auth$$$function__9___call__) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_ass_subscript_1;
tmp_called_value_1 = module_var_accessor_requests$auth$_basic_auth_str(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__basic_auth_str);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 120;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_username);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_password);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 120;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__9___call__->m_frame.f_lineno = 120;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_r);
tmp_expression_value_3 = par_r;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_headers);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 120;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_digest_a9249a74248e02fdfcaa84b4618a14ce;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$auth$$$function__9___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$auth$$$function__9___call__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$auth$$$function__9___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$auth$$$function__9___call__,
    type_description_1,
    par_self,
    par_r
);


// Release cached frame if used for exception.
if (frame_frame_requests$auth$$$function__9___call__ == cache_frame_frame_requests$auth$$$function__9___call__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$auth$$$function__9___call__);
    cache_frame_frame_requests$auth$$$function__9___call__ = NULL;
}

assertFrameObject(frame_frame_requests$auth$$$function__9___call__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(par_r);
tmp_return_value = par_r;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_r);
Py_DECREF(par_r);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_r);
Py_DECREF(par_r);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function__12___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_username = python_pars[1];
PyObject *par_password = python_pars[2];
struct Nuitka_FrameObject *frame_frame_requests$auth$$$function__12___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$auth$$$function__12___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$auth$$$function__12___init__)) {
    Py_XDECREF(cache_frame_frame_requests$auth$$$function__12___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$auth$$$function__12___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$auth$$$function__12___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_f5fb5701275191f59292db09b8a41ac4, module_requests$auth, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$auth$$$function__12___init__->m_type_description == NULL);
frame_frame_requests$auth$$$function__12___init__ = cache_frame_frame_requests$auth$$$function__12___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$auth$$$function__12___init__);
assert(Py_REFCNT(frame_frame_requests$auth$$$function__12___init__) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(par_username);
tmp_ass_attr_value_1 = par_username;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_username, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_ass_attr_target_2;
CHECK_OBJECT(par_password);
tmp_ass_attr_value_2 = par_password;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain_password, tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_ass_attr_target_3;
tmp_called_instance_1 = module_var_accessor_requests$auth$threading(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_threading);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__12___init__->m_frame.f_lineno = 145;
tmp_ass_attr_value_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_local);
if (tmp_ass_attr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain__thread_local, tmp_ass_attr_value_3);
CHECK_OBJECT(tmp_ass_attr_value_3);
Py_DECREF(tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$auth$$$function__12___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$auth$$$function__12___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$auth$$$function__12___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$auth$$$function__12___init__,
    type_description_1,
    par_self,
    par_username,
    par_password
);


// Release cached frame if used for exception.
if (frame_frame_requests$auth$$$function__12___init__ == cache_frame_frame_requests$auth$$$function__12___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$auth$$$function__12___init__);
    cache_frame_frame_requests$auth$$$function__12___init__ = NULL;
}

assertFrameObject(frame_frame_requests$auth$$$function__12___init__);

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
CHECK_OBJECT(par_username);
Py_DECREF(par_username);
CHECK_OBJECT(par_password);
Py_DECREF(par_password);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_username);
Py_DECREF(par_username);
CHECK_OBJECT(par_password);
Py_DECREF(par_password);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function__13_init_per_thread_state(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_requests$auth$$$function__13_init_per_thread_state;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_requests$auth$$$function__13_init_per_thread_state = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$auth$$$function__13_init_per_thread_state)) {
    Py_XDECREF(cache_frame_frame_requests$auth$$$function__13_init_per_thread_state);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$auth$$$function__13_init_per_thread_state == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$auth$$$function__13_init_per_thread_state = MAKE_FUNCTION_FRAME(tstate, code_objects_fa9c6e159f32fdb9158177e31e797469, module_requests$auth, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$auth$$$function__13_init_per_thread_state->m_type_description == NULL);
frame_frame_requests$auth$$$function__13_init_per_thread_state = cache_frame_frame_requests$auth$$$function__13_init_per_thread_state;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$auth$$$function__13_init_per_thread_state);
assert(Py_REFCNT(frame_frame_requests$auth$$$function__13_init_per_thread_state) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__thread_local);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts.const_str_plain_init);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
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
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
PyObject *tmp_expression_value_3;
tmp_ass_attr_value_1 = Py_True;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_ass_attr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__thread_local);
if (tmp_ass_attr_target_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_init, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_target_1);
Py_DECREF(tmp_ass_attr_target_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_ass_attr_target_2;
PyObject *tmp_expression_value_4;
tmp_ass_attr_value_2 = const_str_empty;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_ass_attr_target_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__thread_local);
if (tmp_ass_attr_target_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain_last_nonce, tmp_ass_attr_value_2);
CHECK_OBJECT(tmp_ass_attr_target_2);
Py_DECREF(tmp_ass_attr_target_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_ass_attr_target_3;
PyObject *tmp_expression_value_5;
tmp_ass_attr_value_3 = const_int_0;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_ass_attr_target_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__thread_local);
if (tmp_ass_attr_target_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain_nonce_count, tmp_ass_attr_value_3);
CHECK_OBJECT(tmp_ass_attr_target_3);
Py_DECREF(tmp_ass_attr_target_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_4;
PyObject *tmp_ass_attr_target_4;
PyObject *tmp_expression_value_6;
tmp_ass_attr_value_4 = MAKE_DICT_EMPTY(tstate);
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_ass_attr_target_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__thread_local);
if (tmp_ass_attr_target_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_attr_value_4);

exception_lineno = 153;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_4, mod_consts.const_str_plain_chal, tmp_ass_attr_value_4);
CHECK_OBJECT(tmp_ass_attr_value_4);
Py_DECREF(tmp_ass_attr_value_4);
CHECK_OBJECT(tmp_ass_attr_target_4);
Py_DECREF(tmp_ass_attr_target_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_5;
PyObject *tmp_ass_attr_target_5;
PyObject *tmp_expression_value_7;
tmp_ass_attr_value_5 = Py_None;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_ass_attr_target_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__thread_local);
if (tmp_ass_attr_target_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_5, mod_consts.const_str_plain_pos, tmp_ass_attr_value_5);
CHECK_OBJECT(tmp_ass_attr_target_5);
Py_DECREF(tmp_ass_attr_target_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_6;
PyObject *tmp_ass_attr_target_6;
PyObject *tmp_expression_value_8;
tmp_ass_attr_value_6 = Py_None;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_ass_attr_target_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__thread_local);
if (tmp_ass_attr_target_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_6, mod_consts.const_str_plain_num_401_calls, tmp_ass_attr_value_6);
CHECK_OBJECT(tmp_ass_attr_target_6);
Py_DECREF(tmp_ass_attr_target_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "o";
    goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$auth$$$function__13_init_per_thread_state, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$auth$$$function__13_init_per_thread_state->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$auth$$$function__13_init_per_thread_state, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$auth$$$function__13_init_per_thread_state,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_requests$auth$$$function__13_init_per_thread_state == cache_frame_frame_requests$auth$$$function__13_init_per_thread_state) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$auth$$$function__13_init_per_thread_state);
    cache_frame_frame_requests$auth$$$function__13_init_per_thread_state = NULL;
}

assertFrameObject(frame_frame_requests$auth$$$function__13_init_per_thread_state);

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


static PyObject *impl_requests$auth$$$function__14_build_digest_header(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_method = python_pars[1];
PyObject *par_url = python_pars[2];
PyObject *var_realm = NULL;
PyObject *var_nonce = NULL;
PyObject *var_qop = NULL;
PyObject *var_algorithm = NULL;
PyObject *var_opaque = NULL;
struct Nuitka_CellObject *var_hash_utf8 = Nuitka_Cell_NewEmpty();
PyObject *var__algorithm = NULL;
PyObject *var_md5_utf8 = NULL;
PyObject *var_sha_utf8 = NULL;
PyObject *var_sha256_utf8 = NULL;
PyObject *var_sha512_utf8 = NULL;
PyObject *var_KD = NULL;
PyObject *var_p_parsed = NULL;
PyObject *var_path = NULL;
PyObject *var_A1 = NULL;
PyObject *var_A2 = NULL;
PyObject *var_HA1 = NULL;
PyObject *var_HA2 = NULL;
PyObject *var_ncvalue = NULL;
PyObject *var_s = NULL;
PyObject *var_cnonce = NULL;
PyObject *var_respdig = NULL;
PyObject *var_noncebit = NULL;
PyObject *var_base = NULL;
PyObject *tmp_inplace_assign_1__value = NULL;
struct Nuitka_FrameObject *frame_frame_requests$auth$$$function__14_build_digest_header;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_requests$auth$$$function__14_build_digest_header = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$auth$$$function__14_build_digest_header)) {
    Py_XDECREF(cache_frame_frame_requests$auth$$$function__14_build_digest_header);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$auth$$$function__14_build_digest_header == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$auth$$$function__14_build_digest_header = MAKE_FUNCTION_FRAME(tstate, code_objects_ae636fa2a9400b813b0ff4b04321aa1a, module_requests$auth, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$auth$$$function__14_build_digest_header->m_type_description == NULL);
frame_frame_requests$auth$$$function__14_build_digest_header = cache_frame_frame_requests$auth$$$function__14_build_digest_header;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$auth$$$function__14_build_digest_header);
assert(Py_REFCNT(frame_frame_requests$auth$$$function__14_build_digest_header) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__thread_local);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_chal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_str_plain_realm;
tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_realm;
    var_realm = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__thread_local);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_chal);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = mod_consts.const_str_plain_nonce;
tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_nonce;
    var_nonce = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__thread_local);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_chal);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__14_build_digest_header->m_frame.f_lineno = 164;
tmp_assign_source_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_qop_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_qop;
    var_qop = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain__thread_local);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_chal);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__14_build_digest_header->m_frame.f_lineno = 165;
tmp_assign_source_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_algorithm_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_algorithm;
    var_algorithm = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(par_self);
tmp_expression_value_15 = par_self;
tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain__thread_local);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_chal);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__14_build_digest_header->m_frame.f_lineno = 166;
tmp_assign_source_5 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_opaque_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_opaque;
    var_opaque = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = Py_None;
{
    PyObject *old = Nuitka_Cell_GET(var_hash_utf8);
    Nuitka_Cell_SET(var_hash_utf8, tmp_assign_source_6);
    Py_INCREF(tmp_assign_source_6);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_algorithm);
tmp_cmp_expr_left_1 = var_algorithm;
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
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = mod_consts.const_str_plain_MD5;
{
    PyObject *old = var__algorithm;
    var__algorithm = tmp_assign_source_7;
    Py_INCREF(var__algorithm);
    Py_XDECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(var_algorithm);
tmp_expression_value_16 = var_algorithm;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_upper);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__14_build_digest_header->m_frame.f_lineno = 172;
tmp_assign_source_8 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var__algorithm;
    var__algorithm = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
branch_end_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var__algorithm);
tmp_cmp_expr_left_2 = var__algorithm;
tmp_cmp_expr_right_2 = mod_consts.const_str_plain_MD5;
tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var__algorithm);
tmp_cmp_expr_left_3 = var__algorithm;
tmp_cmp_expr_right_3 = mod_consts.const_str_digest_a49a175904e70dd9f5dc0f52dbebbfdb;
tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
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
{
PyObject *tmp_assign_source_9;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_dfe92b97e889863572498f01b277b9e3);

tmp_assign_source_9 = MAKE_FUNCTION_requests$auth$$$function__14_build_digest_header$$$function__1_md5_utf8(tstate, tmp_annotations_1);

{
    PyObject *old = var_md5_utf8;
    var_md5_utf8 = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(var_md5_utf8);
tmp_assign_source_10 = var_md5_utf8;
{
    PyObject *old = Nuitka_Cell_GET(var_hash_utf8);
    Nuitka_Cell_SET(var_hash_utf8, tmp_assign_source_10);
    Py_INCREF(tmp_assign_source_10);
    Py_XDECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var__algorithm);
tmp_cmp_expr_left_4 = var__algorithm;
tmp_cmp_expr_right_4 = mod_consts.const_str_plain_SHA;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oooooooocooooooNoooooooooooo";
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
PyObject *tmp_assign_source_11;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_dfe92b97e889863572498f01b277b9e3);

tmp_assign_source_11 = MAKE_FUNCTION_requests$auth$$$function__14_build_digest_header$$$function__2_sha_utf8(tstate, tmp_annotations_2);

{
    PyObject *old = var_sha_utf8;
    var_sha_utf8 = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(var_sha_utf8);
tmp_assign_source_12 = var_sha_utf8;
{
    PyObject *old = Nuitka_Cell_GET(var_hash_utf8);
    Nuitka_Cell_SET(var_hash_utf8, tmp_assign_source_12);
    Py_INCREF(tmp_assign_source_12);
    Py_XDECREF(old);
}

}
goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var__algorithm);
tmp_cmp_expr_left_5 = var__algorithm;
tmp_cmp_expr_right_5 = mod_consts.const_str_digest_1e080f858ef601c43605cc71a556333d;
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "oooooooocooooooNoooooooooooo";
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
PyObject *tmp_assign_source_13;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_dfe92b97e889863572498f01b277b9e3);

tmp_assign_source_13 = MAKE_FUNCTION_requests$auth$$$function__14_build_digest_header$$$function__3_sha256_utf8(tstate, tmp_annotations_3);

{
    PyObject *old = var_sha256_utf8;
    var_sha256_utf8 = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(var_sha256_utf8);
tmp_assign_source_14 = var_sha256_utf8;
{
    PyObject *old = Nuitka_Cell_GET(var_hash_utf8);
    Nuitka_Cell_SET(var_hash_utf8, tmp_assign_source_14);
    Py_INCREF(tmp_assign_source_14);
    Py_XDECREF(old);
}

}
goto branch_end_4;
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(var__algorithm);
tmp_cmp_expr_left_6 = var__algorithm;
tmp_cmp_expr_right_6 = mod_consts.const_str_digest_91012c747d1826684889b0187ce7d184;
tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_dfe92b97e889863572498f01b277b9e3);

tmp_assign_source_15 = MAKE_FUNCTION_requests$auth$$$function__14_build_digest_header$$$function__4_sha512_utf8(tstate, tmp_annotations_4);

{
    PyObject *old = var_sha512_utf8;
    var_sha512_utf8 = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
CHECK_OBJECT(var_sha512_utf8);
tmp_assign_source_16 = var_sha512_utf8;
{
    PyObject *old = Nuitka_Cell_GET(var_hash_utf8);
    Nuitka_Cell_SET(var_hash_utf8, tmp_assign_source_16);
    Py_INCREF(tmp_assign_source_16);
    Py_XDECREF(old);
}

}
branch_no_5:;
branch_end_4:;
branch_end_3:;
branch_end_2:;
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(Nuitka_Cell_GET(var_hash_utf8));
tmp_cmp_expr_left_7 = Nuitka_Cell_GET(var_hash_utf8);
tmp_cmp_expr_right_7 = Py_None;
tmp_condition_result_6 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_6:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_annotations_5;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_4df8e97ccdaf83df99d4545b1018ac36);
tmp_closure_1[0] = var_hash_utf8;
Py_INCREF(tmp_closure_1[0]);
tmp_assign_source_17 = MAKE_FUNCTION_requests$auth$$$function__14_build_digest_header$$$function__5_KD(tstate, tmp_annotations_5, tmp_closure_1);

{
    PyObject *old = var_KD;
    var_KD = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_1;
tmp_called_value_5 = module_var_accessor_requests$auth$urlparse(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urlparse);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 215;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_url);
tmp_args_element_value_1 = par_url;
frame_frame_requests$auth$$$function__14_build_digest_header->m_frame.f_lineno = 215;
tmp_assign_source_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_1);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_p_parsed;
    var_p_parsed = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_19;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(var_p_parsed);
tmp_expression_value_17 = var_p_parsed;
tmp_or_left_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, const_str_plain_path);
if (tmp_or_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_2);

exception_lineno = 217;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(tmp_or_left_value_2);
Py_DECREF(tmp_or_left_value_2);
tmp_or_right_value_2 = const_str_slash;
Py_INCREF(tmp_or_right_value_2);
tmp_assign_source_19 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_assign_source_19 = tmp_or_left_value_2;
or_end_2:;
{
    PyObject *old = var_path;
    var_path = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_expression_value_18;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_p_parsed);
tmp_expression_value_18 = var_p_parsed;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_query);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 218;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_20;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_path);
tmp_iadd_expr_left_1 = var_path;
tmp_tuple_element_1 = mod_consts.const_str_chr_63;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_19;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_p_parsed);
tmp_expression_value_19 = var_p_parsed;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_query);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "oooooooocooooooNoooooooooooo";
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
tmp_iadd_expr_right_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_iadd_expr_right_1 == NULL));
tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_20 = tmp_iadd_expr_left_1;
var_path = tmp_assign_source_20;

}
branch_no_7:;
{
PyObject *tmp_assign_source_21;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_20;
PyObject *tmp_format_spec_2;
CHECK_OBJECT(par_self);
tmp_expression_value_20 = par_self;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_username);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_expression_value_21;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_chr_58;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
CHECK_OBJECT(var_realm);
tmp_format_value_3 = var_realm;
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_chr_58;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 3, tmp_tuple_element_2);
CHECK_OBJECT(par_self);
tmp_expression_value_21 = par_self;
tmp_format_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_password);
if (tmp_format_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
CHECK_OBJECT(tmp_format_value_4);
Py_DECREF(tmp_format_value_4);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 4, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_assign_source_21 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_assign_source_21 == NULL));
{
    PyObject *old = var_A1;
    var_A1 = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_3;
PyObject *tmp_format_value_5;
PyObject *tmp_format_spec_5;
CHECK_OBJECT(par_method);
tmp_format_value_5 = par_method;
tmp_format_spec_5 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_6;
PyObject *tmp_format_spec_6;
PyTuple_SET_ITEM(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_chr_58;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
CHECK_OBJECT(var_path);
tmp_format_value_6 = var_path;
tmp_format_spec_6 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_string_concat_values_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_assign_source_22 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_assign_source_22 == NULL));
{
    PyObject *old = var_A2;
    var_A2 = tmp_assign_source_22;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(Nuitka_Cell_GET(var_hash_utf8));
tmp_called_value_6 = Nuitka_Cell_GET(var_hash_utf8);
CHECK_OBJECT(var_A1);
tmp_args_element_value_2 = var_A1;
frame_frame_requests$auth$$$function__14_build_digest_header->m_frame.f_lineno = 224;
tmp_assign_source_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_2);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_HA1;
    var_HA1 = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(Nuitka_Cell_GET(var_hash_utf8));
tmp_called_value_7 = Nuitka_Cell_GET(var_hash_utf8);
CHECK_OBJECT(var_A2);
tmp_args_element_value_3 = var_A2;
frame_frame_requests$auth$$$function__14_build_digest_header->m_frame.f_lineno = 225;
tmp_assign_source_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_3);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_HA2;
    var_HA2 = tmp_assign_source_24;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_22;
PyObject *tmp_expression_value_23;
CHECK_OBJECT(var_nonce);
tmp_cmp_expr_left_8 = var_nonce;
CHECK_OBJECT(par_self);
tmp_expression_value_23 = par_self;
tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain__thread_local);
if (tmp_expression_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_last_nonce);
CHECK_OBJECT(tmp_expression_value_22);
Py_DECREF(tmp_expression_value_22);
if (tmp_cmp_expr_right_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_right_8);
Py_DECREF(tmp_cmp_expr_right_8);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_25;
PyObject *tmp_expression_value_24;
PyObject *tmp_expression_value_25;
CHECK_OBJECT(par_self);
tmp_expression_value_25 = par_self;
tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain__thread_local);
if (tmp_expression_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_nonce_count);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_inplace_assign_1__value;
    tmp_inplace_assign_1__value = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_26;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_iadd_expr_left_2 = tmp_inplace_assign_1__value;
tmp_iadd_expr_right_2 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_26 = tmp_iadd_expr_left_2;
tmp_inplace_assign_1__value = tmp_assign_source_26;

}
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_ass_attr_value_1 = tmp_inplace_assign_1__value;
CHECK_OBJECT(par_self);
tmp_expression_value_26 = par_self;
tmp_ass_attr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain__thread_local);
if (tmp_ass_attr_target_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto try_except_handler_2;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_nonce_count, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_target_1);
Py_DECREF(tmp_ass_attr_target_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "oooooooocooooooNoooooooooooo";
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
goto branch_end_8;
branch_no_8:;
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_ass_attr_target_2;
PyObject *tmp_expression_value_27;
tmp_ass_attr_value_2 = const_int_pos_1;
CHECK_OBJECT(par_self);
tmp_expression_value_27 = par_self;
tmp_ass_attr_target_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain__thread_local);
if (tmp_ass_attr_target_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain_nonce_count, tmp_ass_attr_value_2);
CHECK_OBJECT(tmp_ass_attr_target_2);
Py_DECREF(tmp_ass_attr_target_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_end_8:;
{
PyObject *tmp_assign_source_27;
PyObject *tmp_format_value_7;
PyObject *tmp_expression_value_28;
PyObject *tmp_expression_value_29;
PyObject *tmp_format_spec_7;
CHECK_OBJECT(par_self);
tmp_expression_value_29 = par_self;
tmp_expression_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain__thread_local);
if (tmp_expression_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_format_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_nonce_count);
CHECK_OBJECT(tmp_expression_value_28);
Py_DECREF(tmp_expression_value_28);
if (tmp_format_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_format_spec_7 = mod_consts.const_str_plain_08x;
tmp_assign_source_27 = BUILTIN_FORMAT(tstate, tmp_format_value_7, tmp_format_spec_7);
CHECK_OBJECT(tmp_format_value_7);
Py_DECREF(tmp_format_value_7);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_ncvalue;
    var_ncvalue = tmp_assign_source_27;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_30;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_31;
PyObject *tmp_expression_value_32;
tmp_called_value_9 = module_var_accessor_requests$auth$str(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_str);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 232;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_32 = par_self;
tmp_expression_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain__thread_local);
if (tmp_expression_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_nonce_count);
CHECK_OBJECT(tmp_expression_value_31);
Py_DECREF(tmp_expression_value_31);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__14_build_digest_header->m_frame.f_lineno = 232;
tmp_expression_value_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_expression_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_encode);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__14_build_digest_header->m_frame.f_lineno = 232;
tmp_assign_source_28 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_8, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_s;
    var_s = tmp_assign_source_28;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_iadd_expr_left_3;
PyObject *tmp_iadd_expr_right_3;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_33;
CHECK_OBJECT(var_s);
tmp_iadd_expr_left_3 = var_s;
CHECK_OBJECT(var_nonce);
tmp_expression_value_33 = var_nonce;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_encode);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__14_build_digest_header->m_frame.f_lineno = 233;
tmp_iadd_expr_right_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_10, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_iadd_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
CHECK_OBJECT(tmp_iadd_expr_right_3);
Py_DECREF(tmp_iadd_expr_right_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_29 = tmp_iadd_expr_left_3;
var_s = tmp_assign_source_29;

}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_iadd_expr_left_4;
PyObject *tmp_iadd_expr_right_4;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_34;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_s);
tmp_iadd_expr_left_4 = var_s;
tmp_called_instance_1 = module_var_accessor_requests$auth$time(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_time);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 234;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__14_build_digest_header->m_frame.f_lineno = 234;
tmp_expression_value_34 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_ctime);
if (tmp_expression_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_encode);
CHECK_OBJECT(tmp_expression_value_34);
Py_DECREF(tmp_expression_value_34);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__14_build_digest_header->m_frame.f_lineno = 234;
tmp_iadd_expr_right_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_11, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
if (tmp_iadd_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
CHECK_OBJECT(tmp_iadd_expr_right_4);
Py_DECREF(tmp_iadd_expr_right_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_30 = tmp_iadd_expr_left_4;
var_s = tmp_assign_source_30;

}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_iadd_expr_left_5;
PyObject *tmp_iadd_expr_right_5;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(var_s);
tmp_iadd_expr_left_5 = var_s;
tmp_called_instance_2 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_2 == NULL));
frame_frame_requests$auth$$$function__14_build_digest_header->m_frame.f_lineno = 235;
tmp_iadd_expr_right_5 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_urandom,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_8_tuple, 0)
);

if (tmp_iadd_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_5, tmp_iadd_expr_right_5);
CHECK_OBJECT(tmp_iadd_expr_right_5);
Py_DECREF(tmp_iadd_expr_right_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_31 = tmp_iadd_expr_left_5;
var_s = tmp_assign_source_31;

}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_expression_value_35;
PyObject *tmp_called_instance_3;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_36;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_subscript_value_3;
tmp_expression_value_36 = module_var_accessor_requests$auth$hashlib(tstate);
if (unlikely(tmp_expression_value_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashlib);
}

if (tmp_expression_value_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 237;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain_sha1);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_s);
tmp_kw_call_arg_value_0_1 = var_s;
frame_frame_requests$auth$$$function__14_build_digest_header->m_frame.f_lineno = 237;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    tmp_called_instance_3 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(
        tstate,
        tmp_called_value_12,
        args,
        &PyTuple_GET_ITEM(mod_consts.const_tuple_false_tuple, 0),
        mod_consts.const_tuple_str_plain_usedforsecurity_tuple
    );
}

CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__14_build_digest_header->m_frame.f_lineno = 237;
tmp_expression_value_35 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_hexdigest);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_expression_value_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = mod_consts.const_slice_none_int_pos_16_none;
tmp_assign_source_32 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_35, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_35);
Py_DECREF(tmp_expression_value_35);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_cnonce;
    var_cnonce = tmp_assign_source_32;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(var__algorithm);
tmp_cmp_expr_left_9 = var__algorithm;
tmp_cmp_expr_right_9 = mod_consts.const_str_digest_a49a175904e70dd9f5dc0f52dbebbfdb;
tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_33;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_5;
PyObject *tmp_string_concat_values_4;
PyObject *tmp_tuple_element_4;
PyObject *tmp_format_value_8;
PyObject *tmp_format_spec_8;
CHECK_OBJECT(Nuitka_Cell_GET(var_hash_utf8));
tmp_called_value_13 = Nuitka_Cell_GET(var_hash_utf8);
CHECK_OBJECT(var_HA1);
tmp_format_value_8 = var_HA1;
tmp_format_spec_8 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_8, tmp_format_spec_8);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_9;
PyObject *tmp_format_spec_9;
PyObject *tmp_format_value_10;
PyObject *tmp_format_spec_10;
PyTuple_SET_ITEM(tmp_string_concat_values_4, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_str_chr_58;
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 1, tmp_tuple_element_4);
CHECK_OBJECT(var_nonce);
tmp_format_value_9 = var_nonce;
tmp_format_spec_9 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_9, tmp_format_spec_9);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_4, 2, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_str_chr_58;
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 3, tmp_tuple_element_4);
CHECK_OBJECT(var_cnonce);
tmp_format_value_10 = var_cnonce;
tmp_format_spec_10 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_10, tmp_format_spec_10);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_4, 4, tmp_tuple_element_4);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_string_concat_values_4);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_args_element_value_5 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_4);
CHECK_OBJECT(tmp_string_concat_values_4);
Py_DECREF(tmp_string_concat_values_4);
assert(!(tmp_args_element_value_5 == NULL));
frame_frame_requests$auth$$$function__14_build_digest_header->m_frame.f_lineno = 239;
tmp_assign_source_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_HA1;
    assert(old != NULL);
    var_HA1 = tmp_assign_source_33;
    Py_DECREF(old);
}

}
branch_no_9:;
{
bool tmp_condition_result_10;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_qop);
tmp_operand_value_1 = var_qop;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "oooooooocooooooNoooooooooooo";
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
PyObject *tmp_assign_source_34;
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_string_concat_values_5;
PyObject *tmp_tuple_element_5;
PyObject *tmp_format_value_11;
PyObject *tmp_format_spec_11;
CHECK_OBJECT(var_KD);
tmp_called_value_14 = var_KD;
CHECK_OBJECT(var_HA1);
tmp_args_element_value_6 = var_HA1;
CHECK_OBJECT(var_nonce);
tmp_format_value_11 = var_nonce;
tmp_format_spec_11 = const_str_empty;
tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_11, tmp_format_spec_11);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_5 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_12;
PyObject *tmp_format_spec_12;
PyTuple_SET_ITEM(tmp_string_concat_values_5, 0, tmp_tuple_element_5);
tmp_tuple_element_5 = mod_consts.const_str_chr_58;
PyTuple_SET_ITEM0(tmp_string_concat_values_5, 1, tmp_tuple_element_5);
CHECK_OBJECT(var_HA2);
tmp_format_value_12 = var_HA2;
tmp_format_spec_12 = const_str_empty;
tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_12, tmp_format_spec_12);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_string_concat_values_5, 2, tmp_tuple_element_5);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_string_concat_values_5);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_args_element_value_7 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_5);
CHECK_OBJECT(tmp_string_concat_values_5);
Py_DECREF(tmp_string_concat_values_5);
assert(!(tmp_args_element_value_7 == NULL));
frame_frame_requests$auth$$$function__14_build_digest_header->m_frame.f_lineno = 242;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_14, call_args);
}

CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_respdig;
    var_respdig = tmp_assign_source_34;
    Py_XDECREF(old);
}

}
goto branch_end_10;
branch_no_10:;
{
nuitka_bool tmp_condition_result_11;
int tmp_or_left_truth_3;
nuitka_bool tmp_or_left_value_3;
nuitka_bool tmp_or_right_value_3;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_37;
CHECK_OBJECT(var_qop);
tmp_cmp_expr_left_10 = var_qop;
tmp_cmp_expr_right_10 = mod_consts.const_str_plain_auth;
tmp_or_left_value_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
if (tmp_or_left_value_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
tmp_cmp_expr_left_11 = mod_consts.const_str_plain_auth;
CHECK_OBJECT(var_qop);
tmp_expression_value_37 = var_qop;
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, const_str_plain_split);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__14_build_digest_header->m_frame.f_lineno = 243;
tmp_cmp_expr_right_11 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_15, mod_consts.const_tuple_str_chr_44_tuple);

CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
if (tmp_cmp_expr_right_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_11, tmp_cmp_expr_left_11);
CHECK_OBJECT(tmp_cmp_expr_right_11);
Py_DECREF(tmp_cmp_expr_right_11);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_3 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_11 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_condition_result_11 = tmp_or_left_value_3;
or_end_3:;
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_assign_source_35;
PyObject *tmp_string_concat_values_6;
PyObject *tmp_tuple_element_6;
PyObject *tmp_format_value_13;
PyObject *tmp_format_spec_13;
CHECK_OBJECT(var_nonce);
tmp_format_value_13 = var_nonce;
tmp_format_spec_13 = const_str_empty;
tmp_tuple_element_6 = BUILTIN_FORMAT(tstate, tmp_format_value_13, tmp_format_spec_13);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_6 = MAKE_TUPLE_EMPTY(tstate, 7);
{
PyObject *tmp_format_value_14;
PyObject *tmp_format_spec_14;
PyObject *tmp_format_value_15;
PyObject *tmp_format_spec_15;
PyTuple_SET_ITEM(tmp_string_concat_values_6, 0, tmp_tuple_element_6);
tmp_tuple_element_6 = mod_consts.const_str_chr_58;
PyTuple_SET_ITEM0(tmp_string_concat_values_6, 1, tmp_tuple_element_6);
CHECK_OBJECT(var_ncvalue);
tmp_tuple_element_6 = var_ncvalue;
PyTuple_SET_ITEM0(tmp_string_concat_values_6, 2, tmp_tuple_element_6);
tmp_tuple_element_6 = mod_consts.const_str_chr_58;
PyTuple_SET_ITEM0(tmp_string_concat_values_6, 3, tmp_tuple_element_6);
CHECK_OBJECT(var_cnonce);
tmp_format_value_14 = var_cnonce;
tmp_format_spec_14 = const_str_empty;
tmp_tuple_element_6 = BUILTIN_FORMAT(tstate, tmp_format_value_14, tmp_format_spec_14);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_string_concat_values_6, 4, tmp_tuple_element_6);
tmp_tuple_element_6 = mod_consts.const_str_digest_623a2ce444ab4ec11ad18cfd10bc4d2d;
PyTuple_SET_ITEM0(tmp_string_concat_values_6, 5, tmp_tuple_element_6);
CHECK_OBJECT(var_HA2);
tmp_format_value_15 = var_HA2;
tmp_format_spec_15 = const_str_empty;
tmp_tuple_element_6 = BUILTIN_FORMAT(tstate, tmp_format_value_15, tmp_format_spec_15);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_string_concat_values_6, 6, tmp_tuple_element_6);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_string_concat_values_6);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_assign_source_35 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_6);
CHECK_OBJECT(tmp_string_concat_values_6);
Py_DECREF(tmp_string_concat_values_6);
assert(!(tmp_assign_source_35 == NULL));
{
    PyObject *old = var_noncebit;
    var_noncebit = tmp_assign_source_35;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
CHECK_OBJECT(var_KD);
tmp_called_value_16 = var_KD;
CHECK_OBJECT(var_HA1);
tmp_args_element_value_8 = var_HA1;
CHECK_OBJECT(var_noncebit);
tmp_args_element_value_9 = var_noncebit;
frame_frame_requests$auth$$$function__14_build_digest_header->m_frame.f_lineno = 245;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_16, call_args);
}

if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_respdig;
    var_respdig = tmp_assign_source_36;
    Py_XDECREF(old);
}

}
goto branch_end_11;
branch_no_11:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_end_11:;
branch_end_10:;
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_ass_attr_target_3;
PyObject *tmp_expression_value_38;
CHECK_OBJECT(var_nonce);
tmp_ass_attr_value_3 = var_nonce;
CHECK_OBJECT(par_self);
tmp_expression_value_38 = par_self;
tmp_ass_attr_target_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts.const_str_plain__thread_local);
if (tmp_ass_attr_target_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain_last_nonce, tmp_ass_attr_value_3);
CHECK_OBJECT(tmp_ass_attr_target_3);
Py_DECREF(tmp_ass_attr_target_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_string_concat_values_7;
PyObject *tmp_tuple_element_7;
tmp_tuple_element_7 = mod_consts.const_str_digest_2ac5532e10d9583c2cc7c6c414c300b6;
tmp_string_concat_values_7 = MAKE_TUPLE_EMPTY(tstate, 11);
{
PyObject *tmp_format_value_16;
PyObject *tmp_expression_value_39;
PyObject *tmp_format_spec_16;
PyObject *tmp_format_value_17;
PyObject *tmp_format_spec_17;
PyObject *tmp_format_value_18;
PyObject *tmp_format_spec_18;
PyObject *tmp_format_value_19;
PyObject *tmp_format_spec_19;
PyObject *tmp_format_value_20;
PyObject *tmp_format_spec_20;
PyTuple_SET_ITEM0(tmp_string_concat_values_7, 0, tmp_tuple_element_7);
CHECK_OBJECT(par_self);
tmp_expression_value_39 = par_self;
tmp_format_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_username);
if (tmp_format_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto tuple_build_exception_7;
}
tmp_format_spec_16 = const_str_empty;
tmp_tuple_element_7 = BUILTIN_FORMAT(tstate, tmp_format_value_16, tmp_format_spec_16);
CHECK_OBJECT(tmp_format_value_16);
Py_DECREF(tmp_format_value_16);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_string_concat_values_7, 1, tmp_tuple_element_7);
tmp_tuple_element_7 = mod_consts.const_str_digest_e5d0752e44d467c0b559ec4a161055d6;
PyTuple_SET_ITEM0(tmp_string_concat_values_7, 2, tmp_tuple_element_7);
CHECK_OBJECT(var_realm);
tmp_format_value_17 = var_realm;
tmp_format_spec_17 = const_str_empty;
tmp_tuple_element_7 = BUILTIN_FORMAT(tstate, tmp_format_value_17, tmp_format_spec_17);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_string_concat_values_7, 3, tmp_tuple_element_7);
tmp_tuple_element_7 = mod_consts.const_str_digest_d7138a62ecd13ea5a5e4c33f52e3ec2a;
PyTuple_SET_ITEM0(tmp_string_concat_values_7, 4, tmp_tuple_element_7);
CHECK_OBJECT(var_nonce);
tmp_format_value_18 = var_nonce;
tmp_format_spec_18 = const_str_empty;
tmp_tuple_element_7 = BUILTIN_FORMAT(tstate, tmp_format_value_18, tmp_format_spec_18);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_string_concat_values_7, 5, tmp_tuple_element_7);
tmp_tuple_element_7 = mod_consts.const_str_digest_ffa61441fed506fa8f69820e74074f15;
PyTuple_SET_ITEM0(tmp_string_concat_values_7, 6, tmp_tuple_element_7);
CHECK_OBJECT(var_path);
tmp_format_value_19 = var_path;
tmp_format_spec_19 = const_str_empty;
tmp_tuple_element_7 = BUILTIN_FORMAT(tstate, tmp_format_value_19, tmp_format_spec_19);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_string_concat_values_7, 7, tmp_tuple_element_7);
tmp_tuple_element_7 = mod_consts.const_str_digest_4613cdb6b72b3a36e66f64fc3b58e823;
PyTuple_SET_ITEM0(tmp_string_concat_values_7, 8, tmp_tuple_element_7);
CHECK_OBJECT(var_respdig);
tmp_format_value_20 = var_respdig;
tmp_format_spec_20 = const_str_empty;
tmp_tuple_element_7 = BUILTIN_FORMAT(tstate, tmp_format_value_20, tmp_format_spec_20);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_string_concat_values_7, 9, tmp_tuple_element_7);
tmp_tuple_element_7 = mod_consts.const_str_chr_34;
PyTuple_SET_ITEM0(tmp_string_concat_values_7, 10, tmp_tuple_element_7);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_string_concat_values_7);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_assign_source_37 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_7);
CHECK_OBJECT(tmp_string_concat_values_7);
Py_DECREF(tmp_string_concat_values_7);
assert(!(tmp_assign_source_37 == NULL));
{
    PyObject *old = var_base;
    var_base = tmp_assign_source_37;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_12;
int tmp_truth_name_2;
CHECK_OBJECT(var_opaque);
tmp_truth_name_2 = CHECK_IF_TRUE(var_opaque);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_12 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_assign_source_38;
PyObject *tmp_iadd_expr_left_6;
PyObject *tmp_iadd_expr_right_6;
PyObject *tmp_string_concat_values_8;
PyObject *tmp_tuple_element_8;
CHECK_OBJECT(var_base);
tmp_iadd_expr_left_6 = var_base;
tmp_tuple_element_8 = mod_consts.const_str_digest_b46abab1c7bdcc1966bf9145c77483c3;
tmp_string_concat_values_8 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_21;
PyObject *tmp_format_spec_21;
PyTuple_SET_ITEM0(tmp_string_concat_values_8, 0, tmp_tuple_element_8);
CHECK_OBJECT(var_opaque);
tmp_format_value_21 = var_opaque;
tmp_format_spec_21 = const_str_empty;
tmp_tuple_element_8 = BUILTIN_FORMAT(tstate, tmp_format_value_21, tmp_format_spec_21);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_string_concat_values_8, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = mod_consts.const_str_chr_34;
PyTuple_SET_ITEM0(tmp_string_concat_values_8, 2, tmp_tuple_element_8);
}
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_string_concat_values_8);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
tmp_iadd_expr_right_6 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_8);
CHECK_OBJECT(tmp_string_concat_values_8);
Py_DECREF(tmp_string_concat_values_8);
assert(!(tmp_iadd_expr_right_6 == NULL));
tmp_result = INPLACE_OPERATION_ADD_UNICODE_UNICODE(&tmp_iadd_expr_left_6, tmp_iadd_expr_right_6);
CHECK_OBJECT(tmp_iadd_expr_right_6);
Py_DECREF(tmp_iadd_expr_right_6);
assert(!(tmp_result == false));
tmp_assign_source_38 = tmp_iadd_expr_left_6;
var_base = tmp_assign_source_38;

}
branch_no_12:;
{
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_3;
CHECK_OBJECT(var_algorithm);
tmp_truth_name_3 = CHECK_IF_TRUE(var_algorithm);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_13 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assign_source_39;
PyObject *tmp_iadd_expr_left_7;
PyObject *tmp_iadd_expr_right_7;
PyObject *tmp_string_concat_values_9;
PyObject *tmp_tuple_element_9;
CHECK_OBJECT(var_base);
tmp_iadd_expr_left_7 = var_base;
tmp_tuple_element_9 = mod_consts.const_str_digest_2fa00f37b80386ed0ac27f3464c47dbc;
tmp_string_concat_values_9 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_22;
PyObject *tmp_format_spec_22;
PyTuple_SET_ITEM0(tmp_string_concat_values_9, 0, tmp_tuple_element_9);
CHECK_OBJECT(var_algorithm);
tmp_format_value_22 = var_algorithm;
tmp_format_spec_22 = const_str_empty;
tmp_tuple_element_9 = BUILTIN_FORMAT(tstate, tmp_format_value_22, tmp_format_spec_22);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_string_concat_values_9, 1, tmp_tuple_element_9);
tmp_tuple_element_9 = mod_consts.const_str_chr_34;
PyTuple_SET_ITEM0(tmp_string_concat_values_9, 2, tmp_tuple_element_9);
}
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_string_concat_values_9);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
tmp_iadd_expr_right_7 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_9);
CHECK_OBJECT(tmp_string_concat_values_9);
Py_DECREF(tmp_string_concat_values_9);
assert(!(tmp_iadd_expr_right_7 == NULL));
tmp_result = INPLACE_OPERATION_ADD_UNICODE_UNICODE(&tmp_iadd_expr_left_7, tmp_iadd_expr_right_7);
CHECK_OBJECT(tmp_iadd_expr_right_7);
Py_DECREF(tmp_iadd_expr_right_7);
assert(!(tmp_result == false));
tmp_assign_source_39 = tmp_iadd_expr_left_7;
var_base = tmp_assign_source_39;

}
branch_no_13:;
{
nuitka_bool tmp_condition_result_14;
int tmp_truth_name_4;
CHECK_OBJECT(var_qop);
tmp_truth_name_4 = CHECK_IF_TRUE(var_qop);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_14 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_assign_source_40;
PyObject *tmp_iadd_expr_left_8;
PyObject *tmp_iadd_expr_right_8;
PyObject *tmp_string_concat_values_10;
PyObject *tmp_tuple_element_10;
CHECK_OBJECT(var_base);
tmp_iadd_expr_left_8 = var_base;
tmp_tuple_element_10 = mod_consts.const_str_digest_58d9cd6332ab69dc380fce6df37d2be1;
tmp_string_concat_values_10 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_23;
PyObject *tmp_format_spec_23;
PyTuple_SET_ITEM0(tmp_string_concat_values_10, 0, tmp_tuple_element_10);
CHECK_OBJECT(var_ncvalue);
tmp_tuple_element_10 = var_ncvalue;
PyTuple_SET_ITEM0(tmp_string_concat_values_10, 1, tmp_tuple_element_10);
tmp_tuple_element_10 = mod_consts.const_str_digest_cd5eaaaed24cd1f165dd61b995c48c9e;
PyTuple_SET_ITEM0(tmp_string_concat_values_10, 2, tmp_tuple_element_10);
CHECK_OBJECT(var_cnonce);
tmp_format_value_23 = var_cnonce;
tmp_format_spec_23 = const_str_empty;
tmp_tuple_element_10 = BUILTIN_FORMAT(tstate, tmp_format_value_23, tmp_format_spec_23);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "oooooooocooooooNoooooooooooo";
    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM(tmp_string_concat_values_10, 3, tmp_tuple_element_10);
tmp_tuple_element_10 = mod_consts.const_str_chr_34;
PyTuple_SET_ITEM0(tmp_string_concat_values_10, 4, tmp_tuple_element_10);
}
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_string_concat_values_10);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
tmp_iadd_expr_right_8 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_10);
CHECK_OBJECT(tmp_string_concat_values_10);
Py_DECREF(tmp_string_concat_values_10);
assert(!(tmp_iadd_expr_right_8 == NULL));
tmp_result = INPLACE_OPERATION_ADD_UNICODE_UNICODE(&tmp_iadd_expr_left_8, tmp_iadd_expr_right_8);
CHECK_OBJECT(tmp_iadd_expr_right_8);
Py_DECREF(tmp_iadd_expr_right_8);
assert(!(tmp_result == false));
tmp_assign_source_40 = tmp_iadd_expr_left_8;
var_base = tmp_assign_source_40;

}
branch_no_14:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$auth$$$function__14_build_digest_header, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$auth$$$function__14_build_digest_header->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$auth$$$function__14_build_digest_header, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$auth$$$function__14_build_digest_header,
    type_description_1,
    par_self,
    par_method,
    par_url,
    var_realm,
    var_nonce,
    var_qop,
    var_algorithm,
    var_opaque,
    var_hash_utf8,
    var__algorithm,
    var_md5_utf8,
    var_sha_utf8,
    var_sha256_utf8,
    var_sha512_utf8,
    var_KD,
    NULL,
    var_p_parsed,
    var_path,
    var_A1,
    var_A2,
    var_HA1,
    var_HA2,
    var_ncvalue,
    var_s,
    var_cnonce,
    var_respdig,
    var_noncebit,
    var_base
);


// Release cached frame if used for exception.
if (frame_frame_requests$auth$$$function__14_build_digest_header == cache_frame_frame_requests$auth$$$function__14_build_digest_header) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$auth$$$function__14_build_digest_header);
    cache_frame_frame_requests$auth$$$function__14_build_digest_header = NULL;
}

assertFrameObject(frame_frame_requests$auth$$$function__14_build_digest_header);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_string_concat_values_11;
PyObject *tmp_tuple_element_11;
tmp_tuple_element_11 = mod_consts.const_str_digest_14534a3b74d8d6fed882c6002d4fcddb;
tmp_string_concat_values_11 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_string_concat_values_11, 0, tmp_tuple_element_11);
CHECK_OBJECT(var_base);
tmp_tuple_element_11 = var_base;
PyTuple_SET_ITEM0(tmp_string_concat_values_11, 1, tmp_tuple_element_11);
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_11);
CHECK_OBJECT(tmp_string_concat_values_11);
Py_DECREF(tmp_string_concat_values_11);
assert(!(tmp_return_value == NULL));
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_realm);
CHECK_OBJECT(var_realm);
Py_DECREF(var_realm);
var_realm = NULL;
CHECK_OBJECT(var_nonce);
CHECK_OBJECT(var_nonce);
Py_DECREF(var_nonce);
var_nonce = NULL;
CHECK_OBJECT(var_qop);
CHECK_OBJECT(var_qop);
Py_DECREF(var_qop);
var_qop = NULL;
CHECK_OBJECT(var_algorithm);
CHECK_OBJECT(var_algorithm);
Py_DECREF(var_algorithm);
var_algorithm = NULL;
CHECK_OBJECT(var_opaque);
CHECK_OBJECT(var_opaque);
Py_DECREF(var_opaque);
var_opaque = NULL;
CHECK_OBJECT(var_hash_utf8);
CHECK_OBJECT(var_hash_utf8);
Py_DECREF(var_hash_utf8);
var_hash_utf8 = NULL;
CHECK_OBJECT(var__algorithm);
CHECK_OBJECT(var__algorithm);
Py_DECREF(var__algorithm);
var__algorithm = NULL;
Py_XDECREF(var_md5_utf8);
var_md5_utf8 = NULL;
Py_XDECREF(var_sha_utf8);
var_sha_utf8 = NULL;
Py_XDECREF(var_sha256_utf8);
var_sha256_utf8 = NULL;
Py_XDECREF(var_sha512_utf8);
var_sha512_utf8 = NULL;
Py_XDECREF(var_KD);
var_KD = NULL;
Py_XDECREF(var_p_parsed);
var_p_parsed = NULL;
Py_XDECREF(var_path);
var_path = NULL;
Py_XDECREF(var_A1);
var_A1 = NULL;
Py_XDECREF(var_A2);
var_A2 = NULL;
Py_XDECREF(var_HA1);
var_HA1 = NULL;
Py_XDECREF(var_HA2);
var_HA2 = NULL;
Py_XDECREF(var_ncvalue);
var_ncvalue = NULL;
Py_XDECREF(var_s);
var_s = NULL;
Py_XDECREF(var_cnonce);
var_cnonce = NULL;
Py_XDECREF(var_respdig);
var_respdig = NULL;
Py_XDECREF(var_noncebit);
var_noncebit = NULL;
Py_XDECREF(var_base);
var_base = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_realm);
var_realm = NULL;
Py_XDECREF(var_nonce);
var_nonce = NULL;
Py_XDECREF(var_qop);
var_qop = NULL;
Py_XDECREF(var_algorithm);
var_algorithm = NULL;
Py_XDECREF(var_opaque);
var_opaque = NULL;
CHECK_OBJECT(var_hash_utf8);
CHECK_OBJECT(var_hash_utf8);
Py_DECREF(var_hash_utf8);
var_hash_utf8 = NULL;
Py_XDECREF(var__algorithm);
var__algorithm = NULL;
Py_XDECREF(var_md5_utf8);
var_md5_utf8 = NULL;
Py_XDECREF(var_sha_utf8);
var_sha_utf8 = NULL;
Py_XDECREF(var_sha256_utf8);
var_sha256_utf8 = NULL;
Py_XDECREF(var_sha512_utf8);
var_sha512_utf8 = NULL;
Py_XDECREF(var_KD);
var_KD = NULL;
Py_XDECREF(var_p_parsed);
var_p_parsed = NULL;
Py_XDECREF(var_path);
var_path = NULL;
Py_XDECREF(var_A1);
var_A1 = NULL;
Py_XDECREF(var_A2);
var_A2 = NULL;
Py_XDECREF(var_HA1);
var_HA1 = NULL;
Py_XDECREF(var_HA2);
var_HA2 = NULL;
Py_XDECREF(var_ncvalue);
var_ncvalue = NULL;
Py_XDECREF(var_s);
var_s = NULL;
Py_XDECREF(var_cnonce);
var_cnonce = NULL;
Py_XDECREF(var_respdig);
var_respdig = NULL;
Py_XDECREF(var_noncebit);
var_noncebit = NULL;
Py_XDECREF(var_base);
var_base = NULL;
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
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
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

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function__14_build_digest_header$$$function__1_md5_utf8(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
struct Nuitka_FrameObject *frame_frame_requests$auth$$$function__14_build_digest_header$$$function__1_md5_utf8;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__1_md5_utf8 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__1_md5_utf8)) {
    Py_XDECREF(cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__1_md5_utf8);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__1_md5_utf8 == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__1_md5_utf8 = MAKE_FUNCTION_FRAME(tstate, code_objects_f9bccbf11760cf97d4ddda99417b6a80, module_requests$auth, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__1_md5_utf8->m_type_description == NULL);
frame_frame_requests$auth$$$function__14_build_digest_header$$$function__1_md5_utf8 = cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__1_md5_utf8;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$auth$$$function__14_build_digest_header$$$function__1_md5_utf8);
assert(Py_REFCNT(frame_frame_requests$auth$$$function__14_build_digest_header$$$function__1_md5_utf8) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_x);
tmp_isinstance_inst_1 = par_x;
tmp_isinstance_cls_1 = module_var_accessor_requests$auth$str(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_str);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 177;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
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
CHECK_OBJECT(par_x);
tmp_expression_value_1 = par_x;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_encode);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__14_build_digest_header$$$function__1_md5_utf8->m_frame.f_lineno = 178;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_x;
    assert(old != NULL);
    par_x = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
tmp_expression_value_2 = module_var_accessor_requests$auth$hashlib(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashlib);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 179;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_md5);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_kw_call_arg_value_0_1 = par_x;
frame_frame_requests$auth$$$function__14_build_digest_header$$$function__1_md5_utf8->m_frame.f_lineno = 179;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(
        tstate,
        tmp_called_value_2,
        args,
        &PyTuple_GET_ITEM(mod_consts.const_tuple_false_tuple, 0),
        mod_consts.const_tuple_str_plain_usedforsecurity_tuple
    );
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__14_build_digest_header$$$function__1_md5_utf8->m_frame.f_lineno = 179;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_hexdigest);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$auth$$$function__14_build_digest_header$$$function__1_md5_utf8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$auth$$$function__14_build_digest_header$$$function__1_md5_utf8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$auth$$$function__14_build_digest_header$$$function__1_md5_utf8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$auth$$$function__14_build_digest_header$$$function__1_md5_utf8,
    type_description_1,
    par_x
);


// Release cached frame if used for exception.
if (frame_frame_requests$auth$$$function__14_build_digest_header$$$function__1_md5_utf8 == cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__1_md5_utf8) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__1_md5_utf8);
    cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__1_md5_utf8 = NULL;
}

assertFrameObject(frame_frame_requests$auth$$$function__14_build_digest_header$$$function__1_md5_utf8);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_x);
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
par_x = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_x);
par_x = NULL;
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


static PyObject *impl_requests$auth$$$function__14_build_digest_header$$$function__2_sha_utf8(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
struct Nuitka_FrameObject *frame_frame_requests$auth$$$function__14_build_digest_header$$$function__2_sha_utf8;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__2_sha_utf8 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__2_sha_utf8)) {
    Py_XDECREF(cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__2_sha_utf8);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__2_sha_utf8 == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__2_sha_utf8 = MAKE_FUNCTION_FRAME(tstate, code_objects_df38b361e63d04f837c5d9f1000b6de7, module_requests$auth, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__2_sha_utf8->m_type_description == NULL);
frame_frame_requests$auth$$$function__14_build_digest_header$$$function__2_sha_utf8 = cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__2_sha_utf8;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$auth$$$function__14_build_digest_header$$$function__2_sha_utf8);
assert(Py_REFCNT(frame_frame_requests$auth$$$function__14_build_digest_header$$$function__2_sha_utf8) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_x);
tmp_isinstance_inst_1 = par_x;
tmp_isinstance_cls_1 = module_var_accessor_requests$auth$str(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_str);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 185;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
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
CHECK_OBJECT(par_x);
tmp_expression_value_1 = par_x;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_encode);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__14_build_digest_header$$$function__2_sha_utf8->m_frame.f_lineno = 186;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_x;
    assert(old != NULL);
    par_x = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
tmp_expression_value_2 = module_var_accessor_requests$auth$hashlib(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashlib);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 187;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_sha1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_kw_call_arg_value_0_1 = par_x;
frame_frame_requests$auth$$$function__14_build_digest_header$$$function__2_sha_utf8->m_frame.f_lineno = 187;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(
        tstate,
        tmp_called_value_2,
        args,
        &PyTuple_GET_ITEM(mod_consts.const_tuple_false_tuple, 0),
        mod_consts.const_tuple_str_plain_usedforsecurity_tuple
    );
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__14_build_digest_header$$$function__2_sha_utf8->m_frame.f_lineno = 187;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_hexdigest);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$auth$$$function__14_build_digest_header$$$function__2_sha_utf8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$auth$$$function__14_build_digest_header$$$function__2_sha_utf8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$auth$$$function__14_build_digest_header$$$function__2_sha_utf8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$auth$$$function__14_build_digest_header$$$function__2_sha_utf8,
    type_description_1,
    par_x
);


// Release cached frame if used for exception.
if (frame_frame_requests$auth$$$function__14_build_digest_header$$$function__2_sha_utf8 == cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__2_sha_utf8) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__2_sha_utf8);
    cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__2_sha_utf8 = NULL;
}

assertFrameObject(frame_frame_requests$auth$$$function__14_build_digest_header$$$function__2_sha_utf8);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_x);
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
par_x = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_x);
par_x = NULL;
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


static PyObject *impl_requests$auth$$$function__14_build_digest_header$$$function__3_sha256_utf8(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
struct Nuitka_FrameObject *frame_frame_requests$auth$$$function__14_build_digest_header$$$function__3_sha256_utf8;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__3_sha256_utf8 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__3_sha256_utf8)) {
    Py_XDECREF(cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__3_sha256_utf8);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__3_sha256_utf8 == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__3_sha256_utf8 = MAKE_FUNCTION_FRAME(tstate, code_objects_cab7f5a8b9eb9a4c87e6952855aa3aa4, module_requests$auth, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__3_sha256_utf8->m_type_description == NULL);
frame_frame_requests$auth$$$function__14_build_digest_header$$$function__3_sha256_utf8 = cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__3_sha256_utf8;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$auth$$$function__14_build_digest_header$$$function__3_sha256_utf8);
assert(Py_REFCNT(frame_frame_requests$auth$$$function__14_build_digest_header$$$function__3_sha256_utf8) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_x);
tmp_isinstance_inst_1 = par_x;
tmp_isinstance_cls_1 = module_var_accessor_requests$auth$str(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_str);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 193;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
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
CHECK_OBJECT(par_x);
tmp_expression_value_1 = par_x;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_encode);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__14_build_digest_header$$$function__3_sha256_utf8->m_frame.f_lineno = 194;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_x;
    assert(old != NULL);
    par_x = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
tmp_expression_value_2 = module_var_accessor_requests$auth$hashlib(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashlib);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 195;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_sha256);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_kw_call_arg_value_0_1 = par_x;
frame_frame_requests$auth$$$function__14_build_digest_header$$$function__3_sha256_utf8->m_frame.f_lineno = 195;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(
        tstate,
        tmp_called_value_2,
        args,
        &PyTuple_GET_ITEM(mod_consts.const_tuple_false_tuple, 0),
        mod_consts.const_tuple_str_plain_usedforsecurity_tuple
    );
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__14_build_digest_header$$$function__3_sha256_utf8->m_frame.f_lineno = 195;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_hexdigest);
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$auth$$$function__14_build_digest_header$$$function__3_sha256_utf8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$auth$$$function__14_build_digest_header$$$function__3_sha256_utf8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$auth$$$function__14_build_digest_header$$$function__3_sha256_utf8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$auth$$$function__14_build_digest_header$$$function__3_sha256_utf8,
    type_description_1,
    par_x
);


// Release cached frame if used for exception.
if (frame_frame_requests$auth$$$function__14_build_digest_header$$$function__3_sha256_utf8 == cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__3_sha256_utf8) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__3_sha256_utf8);
    cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__3_sha256_utf8 = NULL;
}

assertFrameObject(frame_frame_requests$auth$$$function__14_build_digest_header$$$function__3_sha256_utf8);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_x);
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
par_x = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_x);
par_x = NULL;
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


static PyObject *impl_requests$auth$$$function__14_build_digest_header$$$function__4_sha512_utf8(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
struct Nuitka_FrameObject *frame_frame_requests$auth$$$function__14_build_digest_header$$$function__4_sha512_utf8;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__4_sha512_utf8 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__4_sha512_utf8)) {
    Py_XDECREF(cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__4_sha512_utf8);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__4_sha512_utf8 == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__4_sha512_utf8 = MAKE_FUNCTION_FRAME(tstate, code_objects_3a4362ec601997bcd4230c917196fb57, module_requests$auth, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__4_sha512_utf8->m_type_description == NULL);
frame_frame_requests$auth$$$function__14_build_digest_header$$$function__4_sha512_utf8 = cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__4_sha512_utf8;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$auth$$$function__14_build_digest_header$$$function__4_sha512_utf8);
assert(Py_REFCNT(frame_frame_requests$auth$$$function__14_build_digest_header$$$function__4_sha512_utf8) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_x);
tmp_isinstance_inst_1 = par_x;
tmp_isinstance_cls_1 = module_var_accessor_requests$auth$str(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_str);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 201;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
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
CHECK_OBJECT(par_x);
tmp_expression_value_1 = par_x;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_encode);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__14_build_digest_header$$$function__4_sha512_utf8->m_frame.f_lineno = 202;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_x;
    assert(old != NULL);
    par_x = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
tmp_expression_value_2 = module_var_accessor_requests$auth$hashlib(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashlib);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 203;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_sha512);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_kw_call_arg_value_0_1 = par_x;
frame_frame_requests$auth$$$function__14_build_digest_header$$$function__4_sha512_utf8->m_frame.f_lineno = 203;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(
        tstate,
        tmp_called_value_2,
        args,
        &PyTuple_GET_ITEM(mod_consts.const_tuple_false_tuple, 0),
        mod_consts.const_tuple_str_plain_usedforsecurity_tuple
    );
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__14_build_digest_header$$$function__4_sha512_utf8->m_frame.f_lineno = 203;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_hexdigest);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$auth$$$function__14_build_digest_header$$$function__4_sha512_utf8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$auth$$$function__14_build_digest_header$$$function__4_sha512_utf8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$auth$$$function__14_build_digest_header$$$function__4_sha512_utf8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$auth$$$function__14_build_digest_header$$$function__4_sha512_utf8,
    type_description_1,
    par_x
);


// Release cached frame if used for exception.
if (frame_frame_requests$auth$$$function__14_build_digest_header$$$function__4_sha512_utf8 == cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__4_sha512_utf8) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__4_sha512_utf8);
    cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__4_sha512_utf8 = NULL;
}

assertFrameObject(frame_frame_requests$auth$$$function__14_build_digest_header$$$function__4_sha512_utf8);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_x);
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
par_x = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_x);
par_x = NULL;
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


static PyObject *impl_requests$auth$$$function__14_build_digest_header$$$function__5_KD(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_s = python_pars[0];
PyObject *par_d = python_pars[1];
struct Nuitka_FrameObject *frame_frame_requests$auth$$$function__14_build_digest_header$$$function__5_KD;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__5_KD = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__5_KD)) {
    Py_XDECREF(cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__5_KD);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__5_KD == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__5_KD = MAKE_FUNCTION_FRAME(tstate, code_objects_1faad827fa5cd6556ece6f2b5175c152, module_requests$auth, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__5_KD->m_type_description == NULL);
frame_frame_requests$auth$$$function__14_build_digest_header$$$function__5_KD = cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__5_KD;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$auth$$$function__14_build_digest_header$$$function__5_KD);
assert(Py_REFCNT(frame_frame_requests$auth$$$function__14_build_digest_header$$$function__5_KD) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hash_utf8);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 211;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}

tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_s);
tmp_format_value_1 = par_s;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_58;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_d);
tmp_format_value_2 = par_d;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "ooc";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
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
frame_frame_requests$auth$$$function__14_build_digest_header$$$function__5_KD->m_frame.f_lineno = 211;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "ooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$auth$$$function__14_build_digest_header$$$function__5_KD, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$auth$$$function__14_build_digest_header$$$function__5_KD->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$auth$$$function__14_build_digest_header$$$function__5_KD, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$auth$$$function__14_build_digest_header$$$function__5_KD,
    type_description_1,
    par_s,
    par_d,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_requests$auth$$$function__14_build_digest_header$$$function__5_KD == cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__5_KD) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__5_KD);
    cache_frame_frame_requests$auth$$$function__14_build_digest_header$$$function__5_KD = NULL;
}

assertFrameObject(frame_frame_requests$auth$$$function__14_build_digest_header$$$function__5_KD);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_s);
Py_DECREF(par_s);
CHECK_OBJECT(par_d);
Py_DECREF(par_d);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_s);
Py_DECREF(par_s);
CHECK_OBJECT(par_d);
Py_DECREF(par_d);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function__15_handle_redirect(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_r = python_pars[1];
PyObject *par_kwargs = python_pars[2];
struct Nuitka_FrameObject *frame_frame_requests$auth$$$function__15_handle_redirect;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_requests$auth$$$function__15_handle_redirect = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$auth$$$function__15_handle_redirect)) {
    Py_XDECREF(cache_frame_frame_requests$auth$$$function__15_handle_redirect);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$auth$$$function__15_handle_redirect == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$auth$$$function__15_handle_redirect = MAKE_FUNCTION_FRAME(tstate, code_objects_41156a36150273ad6052e795390cd7a7, module_requests$auth, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$auth$$$function__15_handle_redirect->m_type_description == NULL);
frame_frame_requests$auth$$$function__15_handle_redirect = cache_frame_frame_requests$auth$$$function__15_handle_redirect;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$auth$$$function__15_handle_redirect);
assert(Py_REFCNT(frame_frame_requests$auth$$$function__15_handle_redirect) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_r);
tmp_expression_value_1 = par_r;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_is_redirect);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 270;
type_description_1 = "ooo";
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
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
PyObject *tmp_expression_value_2;
tmp_ass_attr_value_1 = const_int_pos_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_ass_attr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__thread_local);
if (tmp_ass_attr_target_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_num_401_calls, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_target_1);
Py_DECREF(tmp_ass_attr_target_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$auth$$$function__15_handle_redirect, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$auth$$$function__15_handle_redirect->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$auth$$$function__15_handle_redirect, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$auth$$$function__15_handle_redirect,
    type_description_1,
    par_self,
    par_r,
    par_kwargs
);


// Release cached frame if used for exception.
if (frame_frame_requests$auth$$$function__15_handle_redirect == cache_frame_frame_requests$auth$$$function__15_handle_redirect) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$auth$$$function__15_handle_redirect);
    cache_frame_frame_requests$auth$$$function__15_handle_redirect = NULL;
}

assertFrameObject(frame_frame_requests$auth$$$function__15_handle_redirect);

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
CHECK_OBJECT(par_r);
Py_DECREF(par_r);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_r);
Py_DECREF(par_r);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function__16_handle_401(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_r = python_pars[1];
PyObject *par_kwargs = python_pars[2];
PyObject *var_seek = NULL;
PyObject *var_s_auth = NULL;
PyObject *var_pat = NULL;
PyObject *var_prep = NULL;
PyObject *var_cookie_jar = NULL;
PyObject *var__digest_auth = NULL;
PyObject *var__r = NULL;
PyObject *tmp_assignment_expr_1__value = NULL;
PyObject *tmp_comparison_chain_1__comparison_result = NULL;
PyObject *tmp_comparison_chain_1__operand_2 = NULL;
PyObject *tmp_inplace_assign_1__value = NULL;
struct Nuitka_FrameObject *frame_frame_requests$auth$$$function__16_handle_401;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
bool tmp_result;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_requests$auth$$$function__16_handle_401 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$auth$$$function__16_handle_401)) {
    Py_XDECREF(cache_frame_frame_requests$auth$$$function__16_handle_401);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$auth$$$function__16_handle_401 == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$auth$$$function__16_handle_401 = MAKE_FUNCTION_FRAME(tstate, code_objects_b757f327f735456346f707d1e1e112b6, module_requests$auth, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$auth$$$function__16_handle_401->m_type_description == NULL);
frame_frame_requests$auth$$$function__16_handle_401 = cache_frame_frame_requests$auth$$$function__16_handle_401;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$auth$$$function__16_handle_401);
assert(Py_REFCNT(frame_frame_requests$auth$$$function__16_handle_401) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_r);
tmp_expression_value_1 = par_r;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_status_code);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_comparison_chain_1__operand_2;
    tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = mod_consts.const_int_pos_400;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_right_1 = tmp_comparison_chain_1__operand_2;
tmp_assign_source_2 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_comparison_chain_1__comparison_result;
    tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_2 = tmp_comparison_chain_1__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_1 = tmp_comparison_chain_1__comparison_result;
Py_INCREF(tmp_operand_value_1);
goto try_return_handler_2;
branch_no_2:;
{
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_left_2 = tmp_comparison_chain_1__operand_2;
tmp_cmp_expr_right_2 = mod_consts.const_int_pos_500;
tmp_operand_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
goto try_return_handler_2;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
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
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_1__comparison_result);
tmp_comparison_chain_1__comparison_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "oooooooooo";
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
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
PyObject *tmp_expression_value_2;
tmp_ass_attr_value_1 = const_int_pos_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_ass_attr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__thread_local);
if (tmp_ass_attr_target_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_num_401_calls, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_target_1);
Py_DECREF(tmp_ass_attr_target_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
}
CHECK_OBJECT(par_r);
tmp_return_value = par_r;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__thread_local);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_pos);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(par_r);
tmp_expression_value_7 = par_r;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_request);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_body);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
tmp_name_value_1 = mod_consts.const_str_plain_seek;
tmp_default_value_1 = Py_None;
tmp_assign_source_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_1, tmp_default_value_1);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_assignment_expr_1__value;
    tmp_assignment_expr_1__value = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_assign_source_4 = tmp_assignment_expr_1__value;
{
    PyObject *old = var_seek;
    var_seek = tmp_assign_source_4;
    Py_INCREF(var_seek);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_cmp_expr_left_4 = tmp_assignment_expr_1__value;
Py_INCREF(tmp_cmp_expr_left_4);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(tmp_assignment_expr_1__value);
CHECK_OBJECT(tmp_assignment_expr_1__value);
Py_DECREF(tmp_assignment_expr_1__value);
tmp_assignment_expr_1__value = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(var_seek);
tmp_called_value_1 = var_seek;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__thread_local);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_pos);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__16_handle_401->m_frame.f_lineno = 290;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_4:;
branch_no_3:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(par_r);
tmp_expression_value_11 = par_r;
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_headers);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__16_handle_401->m_frame.f_lineno = 291;
tmp_assign_source_5 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_a88adb7a245cfc6a39c69917da364c05_str_empty_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_s_auth;
    var_s_auth = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_5;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_12;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
tmp_cmp_expr_left_5 = mod_consts.const_str_plain_digest;
CHECK_OBJECT(var_s_auth);
tmp_expression_value_12 = var_s_auth;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain_lower);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__16_handle_401->m_frame.f_lineno = 293;
tmp_cmp_expr_right_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
CHECK_OBJECT(tmp_cmp_expr_right_5);
Py_DECREF(tmp_cmp_expr_right_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_14 = par_self;
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain__thread_local);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_num_401_calls);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = mod_consts.const_int_pos_2;
tmp_and_right_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_5 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(par_self);
tmp_expression_value_16 = par_self;
tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain__thread_local);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_num_401_calls);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_inplace_assign_1__value;
    tmp_inplace_assign_1__value = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
tmp_iadd_expr_right_1 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_7 = tmp_iadd_expr_left_1;
tmp_inplace_assign_1__value = tmp_assign_source_7;

}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_ass_attr_target_2;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_ass_attr_value_2 = tmp_inplace_assign_1__value;
CHECK_OBJECT(par_self);
tmp_expression_value_17 = par_self;
tmp_ass_attr_target_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain__thread_local);
if (tmp_ass_attr_target_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain_num_401_calls, tmp_ass_attr_value_2);
CHECK_OBJECT(tmp_ass_attr_target_2);
Py_DECREF(tmp_ass_attr_target_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_inplace_assign_1__value);
CHECK_OBJECT(tmp_inplace_assign_1__value);
Py_DECREF(tmp_inplace_assign_1__value);
tmp_inplace_assign_1__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
CHECK_OBJECT(tmp_inplace_assign_1__value);
CHECK_OBJECT(tmp_inplace_assign_1__value);
Py_DECREF(tmp_inplace_assign_1__value);
tmp_inplace_assign_1__value = NULL;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_18;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_19;
tmp_expression_value_18 = module_var_accessor_requests$auth$re(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 295;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, const_str_plain_compile);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_19 = module_var_accessor_requests$auth$re(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 295;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_IGNORECASE);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 295;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__16_handle_401->m_frame.f_lineno = 295;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
    tmp_assign_source_8 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_4, mod_consts.const_tuple_str_digest_58295a7b2ee00e12bd235bdf35e32b18_tuple, kw_values, mod_consts.const_tuple_str_plain_flags_tuple);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_pat;
    var_pat = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_20;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_ass_attr_target_3;
PyObject *tmp_expression_value_21;
tmp_called_value_5 = module_var_accessor_requests$auth$parse_dict_header(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_parse_dict_header);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 296;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_pat);
tmp_expression_value_20 = var_pat;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_sub);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = const_str_empty;
CHECK_OBJECT(var_s_auth);
tmp_kw_call_arg_value_1_1 = var_s_auth;
frame_frame_requests$auth$$$function__16_handle_401->m_frame.f_lineno = 296;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(
        tstate,
        tmp_called_value_6,
        args,
        &PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_1_tuple, 0),
        mod_consts.const_tuple_str_plain_count_tuple
    );
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__16_handle_401->m_frame.f_lineno = 296;
tmp_ass_attr_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_ass_attr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_21 = par_self;
tmp_ass_attr_target_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain__thread_local);
if (tmp_ass_attr_target_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_attr_value_3);

exception_lineno = 296;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain_chal, tmp_ass_attr_value_3);
CHECK_OBJECT(tmp_ass_attr_value_3);
Py_DECREF(tmp_ass_attr_value_3);
CHECK_OBJECT(tmp_ass_attr_target_3);
Py_DECREF(tmp_ass_attr_target_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_expression_value_22;
PyObject *tmp_attribute_value_1;
CHECK_OBJECT(par_r);
tmp_expression_value_22 = par_r;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_content);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_r);
tmp_called_instance_1 = par_r;
frame_frame_requests$auth$$$function__16_handle_401->m_frame.f_lineno = 301;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_close);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_23;
PyObject *tmp_expression_value_24;
CHECK_OBJECT(par_r);
tmp_expression_value_24 = par_r;
tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_request);
if (tmp_expression_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_copy);
CHECK_OBJECT(tmp_expression_value_23);
Py_DECREF(tmp_expression_value_23);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__16_handle_401->m_frame.f_lineno = 302;
tmp_assign_source_9 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_7);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_prep;
    var_prep = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_25;
tmp_called_value_8 = module_var_accessor_requests$auth$cast(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 303;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = mod_consts.const_str_plain_CookieJar;
CHECK_OBJECT(var_prep);
tmp_expression_value_25 = var_prep;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain__cookies);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__16_handle_401->m_frame.f_lineno = 303;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_cookie_jar;
    var_cookie_jar = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_9;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_26;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_27;
tmp_called_value_9 = module_var_accessor_requests$auth$extract_cookies_to_jar(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_extract_cookies_to_jar);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 304;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_cookie_jar);
tmp_args_element_value_5 = var_cookie_jar;
CHECK_OBJECT(par_r);
tmp_expression_value_26 = par_r;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_request);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_r);
tmp_expression_value_27 = par_r;
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_raw);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 304;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__16_handle_401->m_frame.f_lineno = 304;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_9, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_8;
CHECK_OBJECT(var_prep);
tmp_called_instance_2 = var_prep;
CHECK_OBJECT(var_cookie_jar);
tmp_args_element_value_8 = var_cookie_jar;
frame_frame_requests$auth$$$function__16_handle_401->m_frame.f_lineno = 305;
tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_prepare_cookies, tmp_args_element_value_8);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_28;
PyObject *tmp_args_element_value_9;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_expression_value_29;
PyObject *tmp_args_element_value_12;
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_expression_value_30;
CHECK_OBJECT(par_self);
tmp_expression_value_28 = par_self;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_build_digest_header);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_11 = module_var_accessor_requests$auth$cast(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_10);

exception_lineno = 308;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_10 = module_var_accessor_requests$auth$str(tstate);
if (unlikely(tmp_args_element_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_str);
}

if (tmp_args_element_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_10);

exception_lineno = 308;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_prep);
tmp_expression_value_29 = var_prep;
tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_method);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);

exception_lineno = 308;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__16_handle_401->m_frame.f_lineno = 308;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_args_element_value_9 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_11, call_args);
}

CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);

exception_lineno = 308;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_12 = module_var_accessor_requests$auth$cast(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_10);
Py_DECREF(tmp_args_element_value_9);

exception_lineno = 308;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_13 = module_var_accessor_requests$auth$str(tstate);
if (unlikely(tmp_args_element_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_str);
}

if (tmp_args_element_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_10);
Py_DECREF(tmp_args_element_value_9);

exception_lineno = 308;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_prep);
tmp_expression_value_30 = var_prep;
tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_url);
if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);
Py_DECREF(tmp_args_element_value_9);

exception_lineno = 308;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__16_handle_401->m_frame.f_lineno = 308;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_args_element_value_12 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_12, call_args);
}

CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);
Py_DECREF(tmp_args_element_value_9);

exception_lineno = 308;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__16_handle_401->m_frame.f_lineno = 307;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_12};
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
}

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var__digest_auth;
    var__digest_auth = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_6;
int tmp_truth_name_1;
CHECK_OBJECT(var__digest_auth);
tmp_truth_name_1 = CHECK_IF_TRUE(var__digest_auth);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "oooooooooo";
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
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_31;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var__digest_auth);
tmp_ass_subvalue_1 = var__digest_auth;
CHECK_OBJECT(var_prep);
tmp_expression_value_31 = var_prep;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_headers);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_Authorization;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_6:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_32;
PyObject *tmp_expression_value_33;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
CHECK_OBJECT(par_r);
tmp_expression_value_33 = par_r;
tmp_expression_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_connection);
if (tmp_expression_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, const_str_plain_send);
CHECK_OBJECT(tmp_expression_value_32);
Py_DECREF(tmp_expression_value_32);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_prep);
tmp_tuple_element_1 = var_prep;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg3_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_assign_source_12 = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var__r;
    var__r = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_34;
PyObject *tmp_expression_value_35;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_15;
CHECK_OBJECT(var__r);
tmp_expression_value_35 = var__r;
tmp_expression_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_history);
if (tmp_expression_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_append);
CHECK_OBJECT(tmp_expression_value_34);
Py_DECREF(tmp_expression_value_34);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_r);
tmp_args_element_value_15 = par_r;
frame_frame_requests$auth$$$function__16_handle_401->m_frame.f_lineno = 313;
tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_15);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
{
PyObject *tmp_ass_attr_value_4;
PyObject *tmp_ass_attr_target_4;
CHECK_OBJECT(var_prep);
tmp_ass_attr_value_4 = var_prep;
CHECK_OBJECT(var__r);
tmp_ass_attr_target_4 = var__r;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_4, mod_consts.const_str_plain_request, tmp_ass_attr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
}
CHECK_OBJECT(var__r);
tmp_return_value = var__r;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_5:;
{
PyObject *tmp_ass_attr_value_5;
PyObject *tmp_ass_attr_target_5;
PyObject *tmp_expression_value_36;
tmp_ass_attr_value_5 = const_int_pos_1;
CHECK_OBJECT(par_self);
tmp_expression_value_36 = par_self;
tmp_ass_attr_target_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain__thread_local);
if (tmp_ass_attr_target_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_5, mod_consts.const_str_plain_num_401_calls, tmp_ass_attr_value_5);
CHECK_OBJECT(tmp_ass_attr_target_5);
Py_DECREF(tmp_ass_attr_target_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "oooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$auth$$$function__16_handle_401, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$auth$$$function__16_handle_401->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$auth$$$function__16_handle_401, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$auth$$$function__16_handle_401,
    type_description_1,
    par_self,
    par_r,
    par_kwargs,
    var_seek,
    var_s_auth,
    var_pat,
    var_prep,
    var_cookie_jar,
    var__digest_auth,
    var__r
);


// Release cached frame if used for exception.
if (frame_frame_requests$auth$$$function__16_handle_401 == cache_frame_frame_requests$auth$$$function__16_handle_401) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$auth$$$function__16_handle_401);
    cache_frame_frame_requests$auth$$$function__16_handle_401 = NULL;
}

assertFrameObject(frame_frame_requests$auth$$$function__16_handle_401);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(par_r);
tmp_return_value = par_r;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_seek);
var_seek = NULL;
Py_XDECREF(var_s_auth);
var_s_auth = NULL;
Py_XDECREF(var_pat);
var_pat = NULL;
Py_XDECREF(var_prep);
var_prep = NULL;
Py_XDECREF(var_cookie_jar);
var_cookie_jar = NULL;
Py_XDECREF(var__digest_auth);
var__digest_auth = NULL;
Py_XDECREF(var__r);
var__r = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_seek);
var_seek = NULL;
Py_XDECREF(var_s_auth);
var_s_auth = NULL;
Py_XDECREF(var_pat);
var_pat = NULL;
Py_XDECREF(var_prep);
var_prep = NULL;
Py_XDECREF(var_cookie_jar);
var_cookie_jar = NULL;
Py_XDECREF(var__digest_auth);
var__digest_auth = NULL;
Py_XDECREF(var__r);
var__r = NULL;
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
CHECK_OBJECT(par_r);
Py_DECREF(par_r);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_r);
Py_DECREF(par_r);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function__17___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_r = python_pars[1];
PyObject *var__digest_auth = NULL;
PyObject *var_tell = NULL;
PyObject *tmp_assignment_expr_1__value = NULL;
struct Nuitka_FrameObject *frame_frame_requests$auth$$$function__17___call__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_requests$auth$$$function__17___call__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$auth$$$function__17___call__)) {
    Py_XDECREF(cache_frame_frame_requests$auth$$$function__17___call__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$auth$$$function__17___call__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$auth$$$function__17___call__ = MAKE_FUNCTION_FRAME(tstate, code_objects_878a960c32f02c7b7c26be77cf8e03a5, module_requests$auth, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$auth$$$function__17___call__->m_type_description == NULL);
frame_frame_requests$auth$$$function__17___call__ = cache_frame_frame_requests$auth$$$function__17___call__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$auth$$$function__17___call__);
assert(Py_REFCNT(frame_frame_requests$auth$$$function__17___call__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_requests$auth$$$function__17___call__->m_frame.f_lineno = 323;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_init_per_thread_state);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__thread_local);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_last_nonce);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 325;
type_description_1 = "oooo";
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
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_build_digest_header);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_requests$auth$cast(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 327;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_requests$auth$str(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_str);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 327;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_r);
tmp_expression_value_4 = par_r;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_method);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 327;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__17___call__->m_frame.f_lineno = 327;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 327;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_requests$auth$cast(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 327;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = module_var_accessor_requests$auth$str(tstate);
if (unlikely(tmp_args_element_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_str);
}

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 327;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_r);
tmp_expression_value_5 = par_r;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_url);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 327;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__17___call__->m_frame.f_lineno = 327;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 327;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__17___call__->m_frame.f_lineno = 326;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_4};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var__digest_auth;
    var__digest_auth = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(var__digest_auth);
tmp_truth_name_2 = CHECK_IF_TRUE(var__digest_auth);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var__digest_auth);
tmp_ass_subvalue_1 = var__digest_auth;
CHECK_OBJECT(par_r);
tmp_expression_value_6 = par_r;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_headers);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_Authorization;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
branch_no_2:;
branch_no_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(par_r);
tmp_expression_value_8 = par_r;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_body);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_name_value_1 = mod_consts.const_str_plain_tell;
tmp_default_value_1 = Py_None;
tmp_assign_source_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_7, tmp_name_value_1, tmp_default_value_1);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_assignment_expr_1__value;
    tmp_assignment_expr_1__value = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_assign_source_3 = tmp_assignment_expr_1__value;
{
    PyObject *old = var_tell;
    var_tell = tmp_assign_source_3;
    Py_INCREF(var_tell);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_cmp_expr_left_1 = tmp_assignment_expr_1__value;
Py_INCREF(tmp_cmp_expr_left_1);
goto try_return_handler_2;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_assignment_expr_1__value);
CHECK_OBJECT(tmp_assignment_expr_1__value);
Py_DECREF(tmp_assignment_expr_1__value);
tmp_assignment_expr_1__value = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_ass_attr_target_1;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(var_tell);
tmp_called_value_4 = var_tell;
frame_frame_requests$auth$$$function__17___call__->m_frame.f_lineno = 332;
tmp_ass_attr_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
if (tmp_ass_attr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_ass_attr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__thread_local);
if (tmp_ass_attr_target_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_attr_value_1);

exception_lineno = 332;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_pos, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_value_1);
Py_DECREF(tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_target_1);
Py_DECREF(tmp_ass_attr_target_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_ass_attr_target_2;
PyObject *tmp_expression_value_10;
tmp_ass_attr_value_2 = Py_None;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_ass_attr_target_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain__thread_local);
if (tmp_ass_attr_target_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain_pos, tmp_ass_attr_value_2);
CHECK_OBJECT(tmp_ass_attr_target_2);
Py_DECREF(tmp_ass_attr_target_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
branch_end_3:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_11;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(par_r);
tmp_expression_value_11 = par_r;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_register_hook);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = mod_consts.const_str_plain_response;
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_handle_401);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 339;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__17___call__->m_frame.f_lineno = 339;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_13;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(par_r);
tmp_expression_value_13 = par_r;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_register_hook);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = mod_consts.const_str_plain_response;
CHECK_OBJECT(par_self);
tmp_expression_value_14 = par_self;
tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_handle_redirect);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 340;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$auth$$$function__17___call__->m_frame.f_lineno = 340;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_ass_attr_target_3;
PyObject *tmp_expression_value_15;
tmp_ass_attr_value_3 = const_int_pos_1;
CHECK_OBJECT(par_self);
tmp_expression_value_15 = par_self;
tmp_ass_attr_target_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain__thread_local);
if (tmp_ass_attr_target_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain_num_401_calls, tmp_ass_attr_value_3);
CHECK_OBJECT(tmp_ass_attr_target_3);
Py_DECREF(tmp_ass_attr_target_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$auth$$$function__17___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$auth$$$function__17___call__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$auth$$$function__17___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$auth$$$function__17___call__,
    type_description_1,
    par_self,
    par_r,
    var__digest_auth,
    var_tell
);


// Release cached frame if used for exception.
if (frame_frame_requests$auth$$$function__17___call__ == cache_frame_frame_requests$auth$$$function__17___call__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$auth$$$function__17___call__);
    cache_frame_frame_requests$auth$$$function__17___call__ = NULL;
}

assertFrameObject(frame_frame_requests$auth$$$function__17___call__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(par_r);
tmp_return_value = par_r;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var__digest_auth);
var__digest_auth = NULL;
CHECK_OBJECT(var_tell);
CHECK_OBJECT(var_tell);
Py_DECREF(var_tell);
var_tell = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var__digest_auth);
var__digest_auth = NULL;
Py_XDECREF(var_tell);
var_tell = NULL;
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
CHECK_OBJECT(par_r);
Py_DECREF(par_r);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_r);
Py_DECREF(par_r);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function__18___eq__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_requests$auth$$$function__18___eq__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$auth$$$function__18___eq__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$auth$$$function__18___eq__)) {
    Py_XDECREF(cache_frame_frame_requests$auth$$$function__18___eq__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$auth$$$function__18___eq__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$auth$$$function__18___eq__ = MAKE_FUNCTION_FRAME(tstate, code_objects_49ff82d98a73130c5bb45adcfd6bf8ec, module_requests$auth, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$auth$$$function__18___eq__->m_type_description == NULL);
frame_frame_requests$auth$$$function__18___eq__ = cache_frame_frame_requests$auth$$$function__18___eq__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$auth$$$function__18___eq__);
assert(Py_REFCNT(frame_frame_requests$auth$$$function__18___eq__) == 2);

// Framed code:
{
PyObject *tmp_all_arg_1;
PyObject *tmp_list_element_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_username);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_expression_value_2 = par_other;
tmp_name_value_1 = mod_consts.const_str_plain_username;
tmp_default_value_1 = Py_None;
tmp_cmp_expr_right_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_2, tmp_name_value_1, tmp_default_value_1);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 348;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_list_element_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_all_arg_1 = MAKE_LIST_EMPTY(tstate, 2);
{
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_name_value_2;
PyObject *tmp_default_value_2;
PyList_SET_ITEM(tmp_all_arg_1, 0, tmp_list_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_password);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "oo";
    goto list_build_exception_1;
}
CHECK_OBJECT(par_other);
tmp_expression_value_4 = par_other;
tmp_name_value_2 = mod_consts.const_str_plain_password;
tmp_default_value_2 = Py_None;
tmp_cmp_expr_right_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_4, tmp_name_value_2, tmp_default_value_2);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 349;
type_description_1 = "oo";
    goto list_build_exception_1;
}
tmp_list_element_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "oo";
    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_all_arg_1, 1, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_all_arg_1);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
tmp_return_value = BUILTIN_ALL(tstate, tmp_all_arg_1);
CHECK_OBJECT(tmp_all_arg_1);
Py_DECREF(tmp_all_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$auth$$$function__18___eq__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$auth$$$function__18___eq__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$auth$$$function__18___eq__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$auth$$$function__18___eq__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_requests$auth$$$function__18___eq__ == cache_frame_frame_requests$auth$$$function__18___eq__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$auth$$$function__18___eq__);
    cache_frame_frame_requests$auth$$$function__18___eq__ = NULL;
}

assertFrameObject(frame_frame_requests$auth$$$function__18___eq__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function__19___ne__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_requests$auth$$$function__19___ne__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_requests$auth$$$function__19___ne__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$auth$$$function__19___ne__)) {
    Py_XDECREF(cache_frame_frame_requests$auth$$$function__19___ne__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$auth$$$function__19___ne__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$auth$$$function__19___ne__ = MAKE_FUNCTION_FRAME(tstate, code_objects_b9a723cd562bdf06edc28fdd16f9cd3e, module_requests$auth, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$auth$$$function__19___ne__->m_type_description == NULL);
frame_frame_requests$auth$$$function__19___ne__ = cache_frame_frame_requests$auth$$$function__19___ne__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$auth$$$function__19___ne__);
assert(Py_REFCNT(frame_frame_requests$auth$$$function__19___ne__) == 2);

// Framed code:
{
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_self);
tmp_cmp_expr_left_1 = par_self;
CHECK_OBJECT(par_other);
tmp_cmp_expr_right_1 = par_other;
tmp_operand_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$auth$$$function__19___ne__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$auth$$$function__19___ne__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$auth$$$function__19___ne__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$auth$$$function__19___ne__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_requests$auth$$$function__19___ne__ == cache_frame_frame_requests$auth$$$function__19___ne__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$auth$$$function__19___ne__);
    cache_frame_frame_requests$auth$$$function__19___ne__ = NULL;
}

assertFrameObject(frame_frame_requests$auth$$$function__19___ne__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__10___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ee22ae99a5537f5b922bb4b122196ae7,
#endif
        code_objects_01fb4efd87770a6398c5caa2890587bb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$auth,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__11___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ee22ae99a5537f5b922bb4b122196ae7,
#endif
        code_objects_e028173cc27a7119a170c12ad81ac225,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$auth,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__12___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__12___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ee22ae99a5537f5b922bb4b122196ae7,
#endif
        code_objects_f5fb5701275191f59292db09b8a41ac4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$auth,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__13_init_per_thread_state(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__13_init_per_thread_state,
        mod_consts.const_str_plain_init_per_thread_state,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_37d3a2307e31335fa61f05d3486fd568,
#endif
        code_objects_fa9c6e159f32fdb9158177e31e797469,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$auth,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__14_build_digest_header(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__14_build_digest_header,
        mod_consts.const_str_plain_build_digest_header,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_67bc2e2875f2a676ae8e8f2595c69cad,
#endif
        code_objects_ae636fa2a9400b813b0ff4b04321aa1a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$auth,
        mod_consts.const_str_digest_fc86f84c4a8b87e858a9027ce216def3,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__14_build_digest_header$$$function__1_md5_utf8(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__14_build_digest_header$$$function__1_md5_utf8,
        mod_consts.const_str_plain_md5_utf8,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_437d9d9283e7705920d4361a76539982,
#endif
        code_objects_f9bccbf11760cf97d4ddda99417b6a80,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$auth,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__14_build_digest_header$$$function__2_sha_utf8(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__14_build_digest_header$$$function__2_sha_utf8,
        mod_consts.const_str_plain_sha_utf8,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a48752b2d8c32906209a579a59eb860e,
#endif
        code_objects_df38b361e63d04f837c5d9f1000b6de7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$auth,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__14_build_digest_header$$$function__3_sha256_utf8(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__14_build_digest_header$$$function__3_sha256_utf8,
        mod_consts.const_str_plain_sha256_utf8,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_065e009455d4c4ad1356e1bac835c3a1,
#endif
        code_objects_cab7f5a8b9eb9a4c87e6952855aa3aa4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$auth,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__14_build_digest_header$$$function__4_sha512_utf8(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__14_build_digest_header$$$function__4_sha512_utf8,
        mod_consts.const_str_plain_sha512_utf8,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0ca141503f179b28e3129781569b5edb,
#endif
        code_objects_3a4362ec601997bcd4230c917196fb57,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$auth,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__14_build_digest_header$$$function__5_KD(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__14_build_digest_header$$$function__5_KD,
        mod_consts.const_str_plain_KD,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6e0275adf61cf8d2c4819e377fa99004,
#endif
        code_objects_1faad827fa5cd6556ece6f2b5175c152,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$auth,
        NULL,
        closure,
        1
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__15_handle_redirect(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__15_handle_redirect,
        mod_consts.const_str_plain_handle_redirect,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7c3d6be840d0505baea6486b3a2fb076,
#endif
        code_objects_41156a36150273ad6052e795390cd7a7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$auth,
        mod_consts.const_str_digest_5bf0e52ad3af9d76b6e6716841011fd0,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__16_handle_401(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__16_handle_401,
        mod_consts.const_str_plain_handle_401,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_aa04245735e0a296f4eee2c81c6c24b4,
#endif
        code_objects_b757f327f735456346f707d1e1e112b6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$auth,
        mod_consts.const_str_digest_a94457af499547f6880f8330f568dc08,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__17___call__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__17___call__,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7a006474c4967997a79cedaecd602a45,
#endif
        code_objects_878a960c32f02c7b7c26be77cf8e03a5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$auth,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__18___eq__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__18___eq__,
        mod_consts.const_str_plain___eq__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c3a9a47fda757d3a3b31995c197a305a,
#endif
        code_objects_49ff82d98a73130c5bb45adcfd6bf8ec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$auth,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__19___ne__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__19___ne__,
        mod_consts.const_str_plain___ne__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1086311fbf6e3245df872c941ed6e8ad,
#endif
        code_objects_b9a723cd562bdf06edc28fdd16f9cd3e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$auth,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__1__basic_auth_str(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__1__basic_auth_str,
        mod_consts.const_str_plain__basic_auth_str,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_4cab954e345483707f2f29fd142942fc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$auth,
        mod_consts.const_str_digest_919a2045e823b128b54cfd720f73e3bf,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__2___call__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__2___call__,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_60aadb6b5e6f7210d6b0e13a6cd7dbcb,
#endif
        code_objects_ef44e91c7bc5abe8807f81e3c265bb4d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$auth,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__3___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_51abe40552a340600cafb395a2df7065,
#endif
        code_objects_6e0fb904cfbb042a83ba0727cae670d9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$auth,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__4___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_51abe40552a340600cafb395a2df7065,
#endif
        code_objects_18cd7dc59f250b0b056a887bb4cdb253,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$auth,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__5___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__5___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_51abe40552a340600cafb395a2df7065,
#endif
        code_objects_7a78bb3afad6ade331f25b957738f87d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$auth,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__6___eq__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__6___eq__,
        mod_consts.const_str_plain___eq__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7565d3f493b69797b6a3c9c487eadc9f,
#endif
        code_objects_5ece74c01e521a170128800a935ebf96,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$auth,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__7___ne__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__7___ne__,
        mod_consts.const_str_plain___ne__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_cb06648d43a209f35d822642f76d8852,
#endif
        code_objects_70f16b85d9b83b8624f962a8fd8fabb4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$auth,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__8___call__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__8___call__,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f3a7a1ca53a484562486747f6ddca3a9,
#endif
        code_objects_47a2fcd90a7f24f1f536518bc8966f0e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$auth,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__9___call__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__9___call__,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_128a37116d6d30cc1592bb98f4d24b46,
#endif
        code_objects_d7dcd9bae178f8585093efb882f2806e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$auth,
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

static function_impl_code const function_table_requests$auth[] = {
impl_requests$auth$$$function__14_build_digest_header$$$function__1_md5_utf8,
impl_requests$auth$$$function__14_build_digest_header$$$function__2_sha_utf8,
impl_requests$auth$$$function__14_build_digest_header$$$function__3_sha256_utf8,
impl_requests$auth$$$function__14_build_digest_header$$$function__4_sha512_utf8,
impl_requests$auth$$$function__14_build_digest_header$$$function__5_KD,
impl_requests$auth$$$function__1__basic_auth_str,
impl_requests$auth$$$function__2___call__,
impl_requests$auth$$$function__5___init__,
impl_requests$auth$$$function__6___eq__,
impl_requests$auth$$$function__7___ne__,
impl_requests$auth$$$function__8___call__,
impl_requests$auth$$$function__9___call__,
impl_requests$auth$$$function__12___init__,
impl_requests$auth$$$function__13_init_per_thread_state,
impl_requests$auth$$$function__14_build_digest_header,
impl_requests$auth$$$function__15_handle_redirect,
impl_requests$auth$$$function__16_handle_401,
impl_requests$auth$$$function__17___call__,
impl_requests$auth$$$function__18___eq__,
impl_requests$auth$$$function__19___ne__,
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

    return Nuitka_Function_GetFunctionState(function, function_table_requests$auth);
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
        module_requests$auth,
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
        function_table_requests$auth,
        sizeof(function_table_requests$auth) / sizeof(function_impl_code)
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
static char const *module_full_name = "requests.auth";
#endif

// Internal entry point for module code.
PyObject *module_code_requests$auth(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("requests$auth");

    // Store the module for future use.
    module_requests$auth = module;

    moduledict_requests$auth = MODULE_DICT(module_requests$auth);

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
        PRINT_STRING("requests$auth: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("requests$auth: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("requests$auth: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "requests.auth" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initrequests$auth\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_requests$auth,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_requests$auth,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_requests$auth,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_requests$auth,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_requests$auth,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_requests$auth);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_requests$auth);
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

        UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__bases = NULL;
PyObject *tmp_class_container$class_creation_2__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__metaclass = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_class_container$class_creation_3__bases = NULL;
PyObject *tmp_class_container$class_creation_3__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_3__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_3__metaclass = NULL;
PyObject *tmp_class_container$class_creation_3__prepared = NULL;
PyObject *tmp_class_container$class_creation_4__bases = NULL;
PyObject *tmp_class_container$class_creation_4__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_4__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_4__metaclass = NULL;
PyObject *tmp_class_container$class_creation_4__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
struct Nuitka_FrameObject *frame_frame_requests$auth;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_requests$auth$$$class__1_AuthBase_78 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
int tmp_res;
PyObject *locals_requests$auth$$$class__2_HTTPBasicAuth_85 = NULL;
struct Nuitka_FrameObject *frame_frame_requests$auth$$$class__2_HTTPBasicAuth_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
PyObject *locals_requests$auth$$$class__3_HTTPProxyAuth_116 = NULL;
struct Nuitka_FrameObject *frame_frame_requests$auth$$$class__3_HTTPProxyAuth_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
PyObject *locals_requests$auth$$$class__4_HTTPDigestAuth_124 = NULL;
struct Nuitka_FrameObject *frame_frame_requests$auth$$$class__4_HTTPDigestAuth_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_b1d3fff4dbaa2e3b433891b66d01f28a;
UPDATE_STRING_DICT0(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_requests$auth = MAKE_MODULE_FRAME(code_objects_280884cdca9e025f44d1287bf017015b, module_requests$auth);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$auth);
assert(Py_REFCNT(frame_frame_requests$auth) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_requests$auth$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_requests$auth$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_hashlib;
tmp_globals_arg_value_1 = (PyObject *)moduledict_requests$auth;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_requests$auth->m_frame.f_lineno = 10;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_hashlib, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_8 == NULL));
UPDATE_STRING_DICT0(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_2 = (PyObject *)moduledict_requests$auth;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_requests$auth->m_frame.f_lineno = 12;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_re, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_threading;
tmp_globals_arg_value_3 = (PyObject *)moduledict_requests$auth;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_requests$auth->m_frame.f_lineno = 13;
tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_threading, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_time;
tmp_globals_arg_value_4 = (PyObject *)moduledict_requests$auth;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = Py_None;
tmp_level_value_4 = const_int_0;
frame_frame_requests$auth->m_frame.f_lineno = 14;
tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_time, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_warnings;
tmp_globals_arg_value_5 = (PyObject *)moduledict_requests$auth;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = Py_None;
tmp_level_value_5 = const_int_0;
frame_frame_requests$auth->m_frame.f_lineno = 15;
tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_base64;
tmp_globals_arg_value_6 = (PyObject *)moduledict_requests$auth;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_b64encode_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_requests$auth->m_frame.f_lineno = 16;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_requests$auth,
        mod_consts.const_str_plain_b64encode,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_b64encode);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_b64encode, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_14 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_14);
tmp_import_from_1__module = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = Py_False;
UPDATE_STRING_DICT0(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_15);
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
        (PyObject *)moduledict_requests$auth,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_16);
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
        (PyObject *)moduledict_requests$auth,
        mod_consts.const_str_plain_Final,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Final);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_Final, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_requests$auth,
        mod_consts.const_str_plain_cast,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_cast);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_cast, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_requests$auth,
        mod_consts.const_str_plain_overload,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_overload);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_overload, tmp_assign_source_19);
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
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain__internal_utils;
tmp_globals_arg_value_7 = (PyObject *)moduledict_requests$auth;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_to_native_string_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_requests$auth->m_frame.f_lineno = 19;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_requests$auth,
        mod_consts.const_str_plain_to_native_string,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_to_native_string);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_to_native_string, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain_compat;
tmp_globals_arg_value_8 = (PyObject *)moduledict_requests$auth;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_basestring_str_plain_str_str_plain_urlparse_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_requests$auth->m_frame.f_lineno = 20;
tmp_assign_source_21 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_21;
}
// Tried code:
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_requests$auth,
        mod_consts.const_str_plain_basestring,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_basestring);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_basestring, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_8 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_requests$auth,
        mod_consts.const_str_plain_str,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_str);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_str, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_9 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_requests$auth,
        mod_consts.const_str_plain_urlparse,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_urlparse);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_urlparse, tmp_assign_source_24);
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
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain_cookies;
tmp_globals_arg_value_9 = (PyObject *)moduledict_requests$auth;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_extract_cookies_to_jar_tuple;
tmp_level_value_9 = const_int_pos_1;
frame_frame_requests$auth->m_frame.f_lineno = 21;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_requests$auth,
        mod_consts.const_str_plain_extract_cookies_to_jar,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_extract_cookies_to_jar);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_cookies_to_jar, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_11;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain_utils;
tmp_globals_arg_value_10 = (PyObject *)moduledict_requests$auth;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_parse_dict_header_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_requests$auth->m_frame.f_lineno = 22;
tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_requests$auth,
        mod_consts.const_str_plain_parse_dict_header,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_parse_dict_header);
}

CHECK_OBJECT(tmp_import_name_from_11);
Py_DECREF(tmp_import_name_from_11);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_dict_header, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = mod_consts.const_str_digest_5d735bc80d16f0fedbdde78344a2d394;
UPDATE_STRING_DICT0(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_CONTENT_TYPE_FORM_URLENCODED, tmp_assign_source_27);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_plain_Final;
tmp_ass_subscribed_1 = module_var_accessor_requests$auth$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 30;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_CONTENT_TYPE_FORM_URLENCODED;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = mod_consts.const_str_digest_e1ae02aba66d45ac9d7f070694408d22;
UPDATE_STRING_DICT0(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_CONTENT_TYPE_MULTI_PART, tmp_assign_source_28);
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_plain_Final;
tmp_ass_subscribed_2 = module_var_accessor_requests$auth$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 31;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_CONTENT_TYPE_MULTI_PART;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_02787d4f1dca00f3ab9b7da6192fcb1b);

tmp_assign_source_29 = MAKE_FUNCTION_requests$auth$$$function__1__basic_auth_str(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain__basic_auth_str, tmp_assign_source_29);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_30;
}
{
PyObject *tmp_assign_source_31;
tmp_assign_source_31 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_31;
}
// Tried code:
{
PyObject *tmp_assign_source_32;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_requests$auth$$$class__1_AuthBase_78 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_67889f3b65748dbd83938a67635b28e4;
tmp_result = DICT_SET_ITEM(locals_requests$auth$$$class__1_AuthBase_78, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_2fc3f96e0216dbc7dcd34461a1c4d2ee;
tmp_result = DICT_SET_ITEM(locals_requests$auth$$$class__1_AuthBase_78, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_AuthBase;
tmp_result = DICT_SET_ITEM(locals_requests$auth$$$class__1_AuthBase_78, const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_78;
tmp_result = DICT_SET_ITEM(locals_requests$auth$$$class__1_AuthBase_78, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_573e2578e366ea0ed6c728880b7d15d1);

tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function__2___call__(tstate, tmp_annotations_2);

tmp_result = DICT_SET_ITEM(locals_requests$auth$$$class__1_AuthBase_78, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = const_tuple_empty;
tmp_result = DICT_SET_ITEM(locals_requests$auth$$$class__1_AuthBase_78, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_33;
PyObject *tmp_metaclass_value_1;
PyObject *tmp_name_value_11;
PyObject *tmp_bases_value_1;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
tmp_name_value_11 = mod_consts.const_str_plain_AuthBase;
tmp_bases_value_1 = const_tuple_empty;
tmp_dict_arg_value_1 = locals_requests$auth$$$class__1_AuthBase_78;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_11, tmp_bases_value_1, tmp_dict_arg_value_1);
tmp_assign_source_33 = CALL_FUNCTION(tstate, tmp_metaclass_value_1, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_5;
}
{
    PyObject *old = outline_0_var___class__;
    outline_0_var___class__ = tmp_assign_source_33;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_32 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_32);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_DECREF(locals_requests$auth$$$class__1_AuthBase_78);
locals_requests$auth$$$class__1_AuthBase_78 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$auth$$$class__1_AuthBase_78);
locals_requests$auth$$$class__1_AuthBase_78 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 78;
goto try_except_handler_3;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_AuthBase, tmp_assign_source_32);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
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
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
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
{
PyObject *tmp_outline_return_value_2;
{
PyObject *tmp_assign_source_34;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_requests$auth$AuthBase(tstate);
assert(!(tmp_tuple_element_1 == NULL));
tmp_assign_source_34 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_34, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_34;
}
// Tried code:
{
PyObject *tmp_assign_source_35;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_35 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_35;
}
{
PyObject *tmp_assign_source_36;
tmp_assign_source_36 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_36;
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_6;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_1 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_6;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_6;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_37 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_37;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_2 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_6;
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
PyObject *tmp_assign_source_38;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_6;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_HTTPBasicAuth;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_requests$auth->m_frame.f_lineno = 85;
tmp_assign_source_38 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_38;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_4 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_6;
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
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_12;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_12 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_12, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_6;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_6;
}
frame_frame_requests$auth->m_frame.f_lineno = 85;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 85;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_6;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_39;
tmp_assign_source_39 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_39;
}
branch_end_1:;
{
PyObject *tmp_assign_source_40;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_requests$auth$$$class__2_HTTPBasicAuth_85 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_67889f3b65748dbd83938a67635b28e4;
tmp_res = PyObject_SetItem(locals_requests$auth$$$class__2_HTTPBasicAuth_85, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_digest_a664f80c1075d8cfb85f49618afc684b;
tmp_res = PyObject_SetItem(locals_requests$auth$$$class__2_HTTPBasicAuth_85, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_plain_HTTPBasicAuth;
tmp_res = PyObject_SetItem(locals_requests$auth$$$class__2_HTTPBasicAuth_85, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_int_pos_85;
tmp_res = PyObject_SetItem(locals_requests$auth$$$class__2_HTTPBasicAuth_85, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_8;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_requests$auth$$$class__2_HTTPBasicAuth_85, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_8;
}
frame_frame_requests$auth$$$class__2_HTTPBasicAuth_2 = MAKE_CLASS_FRAME(tstate, code_objects_960eaa56276baead1cb08ea2952910c7, module_requests$auth, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_requests$auth$$$class__2_HTTPBasicAuth_2, locals_requests$auth$$$class__2_HTTPBasicAuth_85);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$auth$$$class__2_HTTPBasicAuth_2);
assert(Py_REFCNT(frame_frame_requests$auth$$$class__2_HTTPBasicAuth_2) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = mod_consts.const_str_digest_1163c901069db0d0116b943f228d52f6;
tmp_ass_subscribed_3 = PyObject_GetItem(locals_requests$auth$$$class__2_HTTPBasicAuth_85, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 88;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_username;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subscribed_3);
Py_DECREF(tmp_ass_subscribed_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_ass_subvalue_4 = mod_consts.const_str_digest_1163c901069db0d0116b943f228d52f6;
tmp_ass_subscribed_4 = PyObject_GetItem(locals_requests$auth$$$class__2_HTTPBasicAuth_85, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 89;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_4 = mod_consts.const_str_plain_password;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subscribed_4);
Py_DECREF(tmp_ass_subscribed_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_3;
tmp_called_value_2 = PyObject_GetItem(locals_requests$auth$$$class__2_HTTPBasicAuth_85, mod_consts.const_str_plain_overload);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = module_var_accessor_requests$auth$overload(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 91;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_83fde044930bbbaeb389afbaba80558e);

tmp_args_element_value_1 = MAKE_FUNCTION_requests$auth$$$function__3___init__(tstate, tmp_annotations_3);

frame_frame_requests$auth$$$class__2_HTTPBasicAuth_2->m_frame.f_lineno = 91;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_requests$auth$$$class__2_HTTPBasicAuth_85, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_4;
tmp_called_value_3 = PyObject_GetItem(locals_requests$auth$$$class__2_HTTPBasicAuth_85, mod_consts.const_str_plain_overload);

if (tmp_called_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_3 = module_var_accessor_requests$auth$overload(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 93;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_9dd9bd388f9d0f4f6c0775e174e3001d);

tmp_args_element_value_2 = MAKE_FUNCTION_requests$auth$$$function__4___init__(tstate, tmp_annotations_4);

frame_frame_requests$auth$$$class__2_HTTPBasicAuth_2->m_frame.f_lineno = 93;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_requests$auth$$$class__2_HTTPBasicAuth_85, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_dbd0f1c85e6238fe0274a9204f12079b);

tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function__5___init__(tstate, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_requests$auth$$$class__2_HTTPBasicAuth_85, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_48da6b0499a992d8a0861b3c7131d274);

tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function__6___eq__(tstate, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_requests$auth$$$class__2_HTTPBasicAuth_85, mod_consts.const_str_plain___eq__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_6c1f26bc8122574abd325b774c634b1a);

tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function__7___ne__(tstate, tmp_annotations_7);

tmp_res = PyObject_SetItem(locals_requests$auth$$$class__2_HTTPBasicAuth_85, mod_consts.const_str_plain___ne__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_573e2578e366ea0ed6c728880b7d15d1);

tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function__8___call__(tstate, tmp_annotations_8);

tmp_res = PyObject_SetItem(locals_requests$auth$$$class__2_HTTPBasicAuth_85, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_requests$auth$$$class__2_HTTPBasicAuth_2);


goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$auth$$$class__2_HTTPBasicAuth_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$auth$$$class__2_HTTPBasicAuth_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$auth$$$class__2_HTTPBasicAuth_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$auth$$$class__2_HTTPBasicAuth_2,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_requests$auth$$$class__2_HTTPBasicAuth_2);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_requests$auth$$$class__2_HTTPBasicAuth_2);


// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_8;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_username_str_plain_password_tuple;
tmp_res = PyObject_SetItem(locals_requests$auth$$$class__2_HTTPBasicAuth_85, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_8;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_1 = tmp_class_container$class_creation_2__bases_orig;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_8;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_requests$auth$$$class__2_HTTPBasicAuth_85, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_8;
}
branch_no_3:;
{
PyObject *tmp_assign_source_41;
PyObject *tmp_metaclass_value_3;
PyObject *tmp_name_value_13;
PyObject *tmp_bases_value_3;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_class_decl_dict_value_2;
PyObject *tmp_metaclass_args_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_metaclass_value_3 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_13 = mod_consts.const_str_plain_HTTPBasicAuth;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_2__bases;
tmp_dict_arg_value_2 = locals_requests$auth$$$class__2_HTTPBasicAuth_85;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_decl_dict_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_metaclass_args_2 = MAKE_TUPLE3(tstate, tmp_name_value_13, tmp_bases_value_3, tmp_dict_arg_value_2);
tmp_assign_source_41 = CALL_FUNCTION(tstate, tmp_metaclass_value_3, tmp_metaclass_args_2, tmp_class_decl_dict_value_2);
CHECK_OBJECT(tmp_metaclass_args_2);
Py_DECREF(tmp_metaclass_args_2);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_8;
}
{
    PyObject *old = outline_1_var___class__;
    outline_1_var___class__ = tmp_assign_source_41;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_40 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_40);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_DECREF(locals_requests$auth$$$class__2_HTTPBasicAuth_85);
locals_requests$auth$$$class__2_HTTPBasicAuth_85 = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$auth$$$class__2_HTTPBasicAuth_85);
locals_requests$auth$$$class__2_HTTPBasicAuth_85 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_7;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 85;
goto try_except_handler_6;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPBasicAuth, tmp_assign_source_40);
}
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
Py_DECREF(tmp_class_container$class_creation_2__bases_orig);
tmp_class_container$class_creation_2__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__bases);
tmp_class_container$class_creation_2__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__metaclass);
tmp_class_container$class_creation_2__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__prepared);
tmp_class_container$class_creation_2__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
Py_DECREF(tmp_class_container$class_creation_2__bases_orig);
tmp_class_container$class_creation_2__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
Py_DECREF(tmp_class_container$class_creation_2__bases);
tmp_class_container$class_creation_2__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
Py_DECREF(tmp_class_container$class_creation_2__metaclass);
tmp_class_container$class_creation_2__metaclass = NULL;
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
PyObject *tmp_outline_return_value_3;
// Tried code:
{
PyObject *tmp_assign_source_42;
PyObject *tmp_tuple_element_4;
tmp_tuple_element_4 = module_var_accessor_requests$auth$HTTPBasicAuth(tstate);
if (unlikely(tmp_tuple_element_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HTTPBasicAuth);
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 116;

    goto try_except_handler_9;
}
tmp_assign_source_42 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_42, 0, tmp_tuple_element_4);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_42;
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_43 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_43;
}
{
PyObject *tmp_assign_source_44;
tmp_assign_source_44 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_44;
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_metaclass_value_4;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_9;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_7 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_9;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_9;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_45 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_45;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_8 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_9;
}
tmp_condition_result_6 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_46;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_9;
}
tmp_tuple_element_5 = mod_consts.const_str_plain_HTTPProxyAuth;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_5 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_requests$auth->m_frame.f_lineno = 116;
tmp_assign_source_46 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_46;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_10 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_9;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
assert(!(tmp_res == -1));
tmp_condition_result_7 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_6;
PyObject *tmp_expression_value_11;
PyObject *tmp_name_value_14;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_14 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_6 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_14, tmp_default_value_2);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_9;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_12;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_12 == NULL));
tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_6);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_9;
}
frame_frame_requests$auth->m_frame.f_lineno = 116;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 116;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_9;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_47;
tmp_assign_source_47 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_47;
}
branch_end_4:;
{
PyObject *tmp_assign_source_48;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_requests$auth$$$class__3_HTTPProxyAuth_116 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_67889f3b65748dbd83938a67635b28e4;
tmp_res = PyObject_SetItem(locals_requests$auth$$$class__3_HTTPProxyAuth_116, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_digest_3267db0b9e319da1a85ef722557dd6fe;
tmp_res = PyObject_SetItem(locals_requests$auth$$$class__3_HTTPProxyAuth_116, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_plain_HTTPProxyAuth;
tmp_res = PyObject_SetItem(locals_requests$auth$$$class__3_HTTPProxyAuth_116, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_int_pos_116;
tmp_res = PyObject_SetItem(locals_requests$auth$$$class__3_HTTPProxyAuth_116, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_11;
}
frame_frame_requests$auth$$$class__3_HTTPProxyAuth_3 = MAKE_CLASS_FRAME(tstate, code_objects_8cc4b01bffde4535190e8d46797abd3c, module_requests$auth, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_requests$auth$$$class__3_HTTPProxyAuth_3, locals_requests$auth$$$class__3_HTTPProxyAuth_116);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$auth$$$class__3_HTTPProxyAuth_3);
assert(Py_REFCNT(frame_frame_requests$auth$$$class__3_HTTPProxyAuth_3) == 2);

// Framed code:
{
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_573e2578e366ea0ed6c728880b7d15d1);

tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function__9___call__(tstate, tmp_annotations_9);

tmp_res = PyObject_SetItem(locals_requests$auth$$$class__3_HTTPProxyAuth_116, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_requests$auth$$$class__3_HTTPProxyAuth_3);


goto frame_no_exception_2;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$auth$$$class__3_HTTPProxyAuth_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$auth$$$class__3_HTTPProxyAuth_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$auth$$$class__3_HTTPProxyAuth_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$auth$$$class__3_HTTPProxyAuth_3,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_requests$auth$$$class__3_HTTPProxyAuth_3);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_requests$auth$$$class__3_HTTPProxyAuth_3);


// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_11;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_requests$auth$$$class__3_HTTPProxyAuth_116, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_11;
}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_3__bases_orig;
tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_11;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_3__bases_orig;
tmp_res = PyObject_SetItem(locals_requests$auth$$$class__3_HTTPProxyAuth_116, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_11;
}
branch_no_6:;
{
PyObject *tmp_assign_source_49;
PyObject *tmp_metaclass_value_5;
PyObject *tmp_name_value_15;
PyObject *tmp_bases_value_5;
PyObject *tmp_dict_arg_value_3;
PyObject *tmp_class_decl_dict_value_3;
PyObject *tmp_metaclass_args_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_metaclass_value_5 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_15 = mod_consts.const_str_plain_HTTPProxyAuth;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_5 = tmp_class_container$class_creation_3__bases;
tmp_dict_arg_value_3 = locals_requests$auth$$$class__3_HTTPProxyAuth_116;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_decl_dict_value_3 = tmp_class_container$class_creation_3__class_decl_dict;
tmp_metaclass_args_3 = MAKE_TUPLE3(tstate, tmp_name_value_15, tmp_bases_value_5, tmp_dict_arg_value_3);
tmp_assign_source_49 = CALL_FUNCTION(tstate, tmp_metaclass_value_5, tmp_metaclass_args_3, tmp_class_decl_dict_value_3);
CHECK_OBJECT(tmp_metaclass_args_3);
Py_DECREF(tmp_metaclass_args_3);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_11;
}
{
    PyObject *old = outline_2_var___class__;
    outline_2_var___class__ = tmp_assign_source_49;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_48 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_48);
goto try_return_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
Py_DECREF(locals_requests$auth$$$class__3_HTTPProxyAuth_116);
locals_requests$auth$$$class__3_HTTPProxyAuth_116 = NULL;
goto try_return_handler_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$auth$$$class__3_HTTPProxyAuth_116);
locals_requests$auth$$$class__3_HTTPProxyAuth_116 = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_10;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 116;
goto try_except_handler_9;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPProxyAuth, tmp_assign_source_48);
}
goto try_end_5;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_3__bases_orig);
tmp_class_container$class_creation_3__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__bases);
tmp_class_container$class_creation_3__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__metaclass);
tmp_class_container$class_creation_3__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__prepared);
tmp_class_container$class_creation_3__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
Py_DECREF(tmp_class_container$class_creation_3__bases_orig);
tmp_class_container$class_creation_3__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
Py_DECREF(tmp_class_container$class_creation_3__bases);
tmp_class_container$class_creation_3__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
Py_DECREF(tmp_class_container$class_creation_3__metaclass);
tmp_class_container$class_creation_3__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
Py_DECREF(tmp_class_container$class_creation_3__prepared);
tmp_class_container$class_creation_3__prepared = NULL;
tmp_outline_return_value_3 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_3);
goto outline_result_5;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_5:;
CHECK_OBJECT(tmp_outline_return_value_3);
Py_DECREF(tmp_outline_return_value_3);
}
{
PyObject *tmp_outline_return_value_4;
// Tried code:
{
PyObject *tmp_assign_source_50;
PyObject *tmp_tuple_element_7;
tmp_tuple_element_7 = module_var_accessor_requests$auth$AuthBase(tstate);
if (unlikely(tmp_tuple_element_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AuthBase);
}

if (tmp_tuple_element_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 124;

    goto try_except_handler_12;
}
tmp_assign_source_50 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_50, 0, tmp_tuple_element_7);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_50;
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_51 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_51;
}
{
PyObject *tmp_assign_source_52;
tmp_assign_source_52 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_52;
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_metaclass_value_6;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;

    goto try_except_handler_12;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_13 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_3, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;

    goto try_except_handler_12;
}
tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;

    goto try_except_handler_12;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_6);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_6 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_53 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
CHECK_OBJECT(tmp_metaclass_value_6);
Py_DECREF(tmp_metaclass_value_6);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_53;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_14 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;

    goto try_except_handler_12;
}
tmp_condition_result_10 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_54;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_15 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;

    goto try_except_handler_12;
}
tmp_tuple_element_8 = mod_consts.const_str_plain_HTTPDigestAuth;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_requests$auth->m_frame.f_lineno = 124;
tmp_assign_source_54 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_54;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_16 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;

    goto try_except_handler_12;
}
tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
assert(!(tmp_res == -1));
tmp_condition_result_11 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_tuple_element_9;
PyObject *tmp_expression_value_17;
PyObject *tmp_name_value_16;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_16 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_9 = BUILTIN_GETATTR(tstate, tmp_expression_value_17, tmp_name_value_16, tmp_default_value_3);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;

    goto try_except_handler_12;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_18;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_18 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_18 == NULL));
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_9);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_12;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;

    goto try_except_handler_12;
}
frame_frame_requests$auth->m_frame.f_lineno = 124;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 124;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_12;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_55;
tmp_assign_source_55 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_55;
}
branch_end_7:;
{
PyObject *tmp_assign_source_56;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_requests$auth$$$class__4_HTTPDigestAuth_124 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_67889f3b65748dbd83938a67635b28e4;
tmp_res = PyObject_SetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_124, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_str_digest_acf0af13ef75ff62ec9955ae4dcea3e9;
tmp_res = PyObject_SetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_124, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_str_plain_HTTPDigestAuth;
tmp_res = PyObject_SetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_124, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_int_pos_124;
tmp_res = PyObject_SetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_124, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;

    goto try_except_handler_14;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_124, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;

    goto try_except_handler_14;
}
frame_frame_requests$auth$$$class__4_HTTPDigestAuth_4 = MAKE_CLASS_FRAME(tstate, code_objects_d4eb2a693a34026f423101f824cabc76, module_requests$auth, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_requests$auth$$$class__4_HTTPDigestAuth_4, locals_requests$auth$$$class__4_HTTPDigestAuth_124);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$auth$$$class__4_HTTPDigestAuth_4);
assert(Py_REFCNT(frame_frame_requests$auth$$$class__4_HTTPDigestAuth_4) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
tmp_ass_subvalue_5 = mod_consts.const_str_digest_1163c901069db0d0116b943f228d52f6;
tmp_ass_subscribed_5 = PyObject_GetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_124, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 127;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_5 = mod_consts.const_str_plain_username;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
CHECK_OBJECT(tmp_ass_subscribed_5);
Py_DECREF(tmp_ass_subscribed_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
tmp_ass_subvalue_6 = mod_consts.const_str_digest_1163c901069db0d0116b943f228d52f6;
tmp_ass_subscribed_6 = PyObject_GetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_124, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 128;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_6 = mod_consts.const_str_plain_password;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
CHECK_OBJECT(tmp_ass_subscribed_6);
Py_DECREF(tmp_ass_subscribed_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_ass_subvalue_7;
PyObject *tmp_ass_subscribed_7;
PyObject *tmp_ass_subscript_7;
tmp_ass_subvalue_7 = mod_consts.const_str_digest_469a2477b7c3eb4d6a71b6319f7167dc;
tmp_ass_subscribed_7 = PyObject_GetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_124, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 129;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_7 = mod_consts.const_str_plain__thread_local;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
CHECK_OBJECT(tmp_ass_subscribed_7);
Py_DECREF(tmp_ass_subscribed_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_ass_subvalue_8;
PyObject *tmp_ass_subscribed_8;
PyObject *tmp_ass_subscript_8;
tmp_ass_subvalue_8 = mod_consts.const_str_plain_str;
tmp_ass_subscribed_8 = PyObject_GetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_124, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 130;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_8 = mod_consts.const_str_plain_last_nonce;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
CHECK_OBJECT(tmp_ass_subscribed_8);
Py_DECREF(tmp_ass_subscribed_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_ass_subvalue_9;
PyObject *tmp_ass_subscribed_9;
PyObject *tmp_ass_subscript_9;
tmp_ass_subvalue_9 = const_str_plain_int;
tmp_ass_subscribed_9 = PyObject_GetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_124, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 131;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_9 = mod_consts.const_str_plain_nonce_count;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
CHECK_OBJECT(tmp_ass_subscribed_9);
Py_DECREF(tmp_ass_subscribed_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_ass_subvalue_10;
PyObject *tmp_ass_subscribed_10;
PyObject *tmp_ass_subscript_10;
tmp_ass_subvalue_10 = mod_consts.const_str_digest_cbfbecd1bf29edfce9bd6e2514e536fa;
tmp_ass_subscribed_10 = PyObject_GetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_124, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 132;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_10 = mod_consts.const_str_plain_chal;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
CHECK_OBJECT(tmp_ass_subscribed_10);
Py_DECREF(tmp_ass_subscribed_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_ass_subvalue_11;
PyObject *tmp_ass_subscribed_11;
PyObject *tmp_ass_subscript_11;
tmp_ass_subvalue_11 = mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a;
tmp_ass_subscribed_11 = PyObject_GetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_124, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 133;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_11 = mod_consts.const_str_plain_pos;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
CHECK_OBJECT(tmp_ass_subscribed_11);
Py_DECREF(tmp_ass_subscribed_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_ass_subvalue_12;
PyObject *tmp_ass_subscribed_12;
PyObject *tmp_ass_subscript_12;
tmp_ass_subvalue_12 = mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a;
tmp_ass_subscribed_12 = PyObject_GetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_124, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 134;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_12 = mod_consts.const_str_plain_num_401_calls;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
CHECK_OBJECT(tmp_ass_subscribed_12);
Py_DECREF(tmp_ass_subscribed_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_10;
tmp_called_value_6 = PyObject_GetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_124, mod_consts.const_str_plain_overload);

if (tmp_called_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_6 = module_var_accessor_requests$auth$overload(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 136;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_called_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_83fde044930bbbaeb389afbaba80558e);

tmp_args_element_value_3 = MAKE_FUNCTION_requests$auth$$$function__10___init__(tstate, tmp_annotations_10);

frame_frame_requests$auth$$$class__4_HTTPDigestAuth_4->m_frame.f_lineno = 136;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_124, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_11;
tmp_called_value_7 = PyObject_GetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_124, mod_consts.const_str_plain_overload);

if (tmp_called_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_7 = module_var_accessor_requests$auth$overload(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 138;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_called_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_9dd9bd388f9d0f4f6c0775e174e3001d);

tmp_args_element_value_4 = MAKE_FUNCTION_requests$auth$$$function__11___init__(tstate, tmp_annotations_11);

frame_frame_requests$auth$$$class__4_HTTPDigestAuth_4->m_frame.f_lineno = 138;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_124, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_12;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_dbd0f1c85e6238fe0274a9204f12079b);

tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function__12___init__(tstate, tmp_annotations_12);

tmp_res = PyObject_SetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_124, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_13;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function__13_init_per_thread_state(tstate, tmp_annotations_13);

tmp_res = PyObject_SetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_124, mod_consts.const_str_plain_init_per_thread_state, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_14;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_051b5ffe00d30cdb70e4e7d90f98c0bc);

tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function__14_build_digest_header(tstate, tmp_annotations_14);

tmp_res = PyObject_SetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_124, mod_consts.const_str_plain_build_digest_header, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_15;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_c0b4aa56e27262dae2b7b89241e2e98a);

tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function__15_handle_redirect(tstate, tmp_annotations_15);

tmp_res = PyObject_SetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_124, mod_consts.const_str_plain_handle_redirect, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_16;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_6edc7e34c97f956d56a100ccda717c41);

tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function__16_handle_401(tstate, tmp_annotations_16);

tmp_res = PyObject_SetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_124, mod_consts.const_str_plain_handle_401, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_17;
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_573e2578e366ea0ed6c728880b7d15d1);

tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function__17___call__(tstate, tmp_annotations_17);

tmp_res = PyObject_SetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_124, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_18;
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_48da6b0499a992d8a0861b3c7131d274);

tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function__18___eq__(tstate, tmp_annotations_18);

tmp_res = PyObject_SetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_124, mod_consts.const_str_plain___eq__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_19;
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_6c1f26bc8122574abd325b774c634b1a);

tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function__19___ne__(tstate, tmp_annotations_19);

tmp_res = PyObject_SetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_124, mod_consts.const_str_plain___ne__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_requests$auth$$$class__4_HTTPDigestAuth_4);


goto frame_no_exception_3;
frame_exception_exit_4:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$auth$$$class__4_HTTPDigestAuth_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$auth$$$class__4_HTTPDigestAuth_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$auth$$$class__4_HTTPDigestAuth_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$auth$$$class__4_HTTPDigestAuth_4,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_requests$auth$$$class__4_HTTPDigestAuth_4);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_requests$auth$$$class__4_HTTPDigestAuth_4);


// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_14;
skip_nested_handling_3:;
tmp_dictset_value = mod_consts.const_tuple_a67d05bb61c2ad13d89e6487a4eb1ffd_tuple;
tmp_res = PyObject_SetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_124, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;

    goto try_except_handler_14;
}
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_4__bases;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_4__bases_orig;
tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;

    goto try_except_handler_14;
}
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_4__bases_orig;
tmp_res = PyObject_SetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_124, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;

    goto try_except_handler_14;
}
branch_no_9:;
{
PyObject *tmp_assign_source_57;
PyObject *tmp_metaclass_value_7;
PyObject *tmp_name_value_17;
PyObject *tmp_bases_value_7;
PyObject *tmp_dict_arg_value_4;
PyObject *tmp_class_decl_dict_value_4;
PyObject *tmp_metaclass_args_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_metaclass_value_7 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_17 = mod_consts.const_str_plain_HTTPDigestAuth;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_7 = tmp_class_container$class_creation_4__bases;
tmp_dict_arg_value_4 = locals_requests$auth$$$class__4_HTTPDigestAuth_124;
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_decl_dict_value_4 = tmp_class_container$class_creation_4__class_decl_dict;
tmp_metaclass_args_4 = MAKE_TUPLE3(tstate, tmp_name_value_17, tmp_bases_value_7, tmp_dict_arg_value_4);
tmp_assign_source_57 = CALL_FUNCTION(tstate, tmp_metaclass_value_7, tmp_metaclass_args_4, tmp_class_decl_dict_value_4);
CHECK_OBJECT(tmp_metaclass_args_4);
Py_DECREF(tmp_metaclass_args_4);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;

    goto try_except_handler_14;
}
{
    PyObject *old = outline_3_var___class__;
    outline_3_var___class__ = tmp_assign_source_57;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_56 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_56);
goto try_return_handler_14;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
Py_DECREF(locals_requests$auth$$$class__4_HTTPDigestAuth_124);
locals_requests$auth$$$class__4_HTTPDigestAuth_124 = NULL;
goto try_return_handler_13;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$auth$$$class__4_HTTPDigestAuth_124);
locals_requests$auth$$$class__4_HTTPDigestAuth_124 = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto try_except_handler_13;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 124;
goto try_except_handler_12;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPDigestAuth, tmp_assign_source_56);
}
goto try_end_6;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_4__bases_orig);
tmp_class_container$class_creation_4__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__bases);
tmp_class_container$class_creation_4__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_container$class_creation_4__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__metaclass);
tmp_class_container$class_creation_4__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__prepared);
tmp_class_container$class_creation_4__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
Py_DECREF(tmp_class_container$class_creation_4__bases_orig);
tmp_class_container$class_creation_4__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
Py_DECREF(tmp_class_container$class_creation_4__bases);
tmp_class_container$class_creation_4__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_container$class_creation_4__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
Py_DECREF(tmp_class_container$class_creation_4__metaclass);
tmp_class_container$class_creation_4__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
Py_DECREF(tmp_class_container$class_creation_4__prepared);
tmp_class_container$class_creation_4__prepared = NULL;
tmp_outline_return_value_4 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_4);
goto outline_result_7;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_7:;
CHECK_OBJECT(tmp_outline_return_value_4);
Py_DECREF(tmp_outline_return_value_4);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_4;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$auth, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$auth->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$auth, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_requests$auth);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_4:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("requests$auth", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "requests.auth" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_requests$auth);
    return module_requests$auth;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("requests$auth", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
